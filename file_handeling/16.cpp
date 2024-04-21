#include<iostream>
#include<fstream>
using namespace std;
class employee{
    int id;
    char name[20];
    char address[20];
    public:
    void getdata(){
        cout<<"enter the id: ";cin>>id;
        cout<<"enter the name: ";cin>>name;
        cout<<"enter the address: ";cin>>address;
    }
    void display(){
        cout<<"ID: "<<id<<endl;
        cout<<"NAME: "<<name<<endl;
        cout<<"ADDRESS: "<<address<<endl;
    }
    void getrecord(){
        employee e;
        fstream file;
        file.open("employee 1.txt",ios::app|ios::out);
        cout<<"enter the information of employee"<<endl;
        e.getdata();
        file.write((char*)&e,sizeof(e));
        file.close();
    }
    void showrecord(){
        employee e;
        fstream file;
        file.open("employee 1.txt",ios::in|ios::app);
        int roll=0;
        int flag=0;
        cout<<"enter the id:";
        cin>>roll;
        do{
            if(e.id==roll){
                e.display();
                flag=1;
                break;
            }
        }while(file.read((char*)&e,sizeof(e)));
        if(flag==0){
        cout<<"unable to find data:"<<endl;
        }
        file.close();
    }

};
int main()
{
    employee e,d;
    int n,x;
    while(1){
        cout<<"1.input data"<<endl;
        cout<<"2.search data"<<endl;
        cout<<"3.exit"<<endl;
        cin>>n;
        switch(n){
            case 1:
            cout<<"enter how many data you want to enter:"<<endl;
            cin>>x;
            for(int i=0;i<x;i++){
                e.getrecord();
            }
            break;
            case 2:
            d.showrecord();
            break;
            case 3:
            exit(0);
            break;
            default:
            cout<<"THE ENTERED NUMBER SHOULD BE IN RANGE 1 TO 3"<<endl;
            break;
        }
    }
return 0;
}