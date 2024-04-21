#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class sumit{
    int id;
    char name[20];
    public:
    void getdata();
    void showdata();
    void getrecord();
    void showrecord();
    };
    void sumit::getdata(){
        cout<<"enter id:";cin>>id;
        cout<<"enter name:";cin>>name;
    }
    void sumit::showdata(){
        cout<<"id : "<<id<<endl;
        cout<<"name : "<<name<<endl;
    }
    void sumit:: getrecord(){
        sumit s1;
        fstream file;
        file.open("4test.txt",ios::app);
        s1.getdata();
        file.write((char*)&s1,sizeof(s1));
        file.close();
    }
    void sumit::showrecord(){
        sumit s1;
        fstream file;
        file.open("4test.txt",ios::in);
        char n[20];
        cout<<"enter the name whose id you want to konw:"<<endl;
        cin>>n;
        do{
            if(strcmp(n,s1.name)==0){
                s1.showdata();
                break;
            }
        }while(file.read((char*)&s1,sizeof(s1)));
        file.close();
    }
    int main(){
        sumit s1;
        cout<<"entre how many data you want to enter:"<<endl;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            s1.getrecord();
        }
        s1.showrecord();
    }