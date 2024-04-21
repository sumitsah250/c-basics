#include<iostream>
#include<fstream>
using namespace std;
class database{
    int id;
    char name[20];
    public:
    void getdata(){
        cout<<"enter id:";cin>>id;
        cout<<"enter name:";cin>>name;
    }
    void showdata(){
        cout<<"id"<<id;
        cout<<"name:"<<name;
    }
    void getrecord(){
        database d1;
        fstream file;
        file.open("test 10.txt",ios::app);
        d1.getdata();
        file.write((char*)&d1,sizeof(d1));
        file.close();
    }
    void showrecord(){
        database d1;
        fstream file;
        file.open("text 10.txt",ios::in);
        cout<<"enter the id:"<<endl;
        int n1=0,f=0;
        cin>>n1;
        do{
            if(d1.id==n1){
                d1.showdata();
                f=1;
                break;
            }
        }while(file.read((char*)&d1,sizeof(d1)));
        if(f==0){
            cout<<"unable to find the data"<<endl;
        }
        file.close();
    }

};

int main()
{
int n;
    database n1,n2;
    while(1){
        cout<<"1.input record"<<endl;
        cout<<"2.search record"<<endl;
        cout<<"3.exit"<<endl;
        cin>>n;
        switch(n){
            case 1:
            cout<<"number of record you want to enter:"<<endl;
            cin>>n;
            for(int i=0;i<n;i++){
                n1.getrecord();
            }
            break;
            case 2:
            n2.showrecord();
            break;
            case 3:
            exit(0);
            break;
            default:
            cout<<"enter the number between 1 to 3"<<endl;
            break;
        }
    }

return 0;
}