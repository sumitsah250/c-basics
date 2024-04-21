#include<iostream>
#include<fstream>
using namespace std;
class student{
    int crn;
    char name[20];
    int age;
    public:
    void getdata(){
        cout<<"enter the crn no: ";cin>>crn;
        cout<<"enter the name: ";cin>>name;
        cout<<"enter the age: ";cin>>age;
    }
    void showdata(){
        cout<<"CRN: "<<crn<<endl;
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
            }
    void getrecord(){
        student s;
        fstream file;
        file.open("student 1.txt",ios::app|ios::out);
        cout<<"enter the information of students:"<<endl;
        s.getdata();
        file.write((char*)&s,sizeof(s));
        file.close();
    }
    void showrecord(){
        student s;
        int roll=0;
        int flag =0;
        fstream file;
        file.open("student 1.txt",ios::in);
        cout<<"enter the crn"<<endl;
        cin>>roll;
        do{
            if(s.crn==roll){
                s.showdata();
                flag=1;
                break;
            }
        }while(file.read((char*)&s,sizeof(s)));
        if(flag==0){
            cout<<"the data can't be found"<<endl;
        } 
        file.close();
    }
};
int main()
{
    int n;
    student n1,n2;
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