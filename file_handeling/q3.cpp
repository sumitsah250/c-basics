#include<iostream>
#include<fstream>
using namespace std;
class X{
    int id;
    char name[20];
    char address[20];
    public:
    void getdata();
    void showdata();
    void getrecord();
    void showrecord();
};
void X::getdata(){
    cout<<"enter the id:";cin>>id;
    cout<<"enter the name:";cin>>name;
    cout<<"enter the address";cin>>address;
}
void X::showdata(){
    cout<<"id: "<<id<<endl;
    cout<<"name: "<<name<<endl;
    cout<<"address:"<<address<<endl;
}
void X::getrecord(){
    X e1;
    fstream file;
    file.open("3test.txt",ios::app);
    e1.getdata();
    file.write((char*)&e1,sizeof(e1));
    file.close();
}
void X::showrecord(){
    X e1;
    fstream file;
    file.open("3test.txt",ios::in);
    file.read((char*)&e1,sizeof(e1));
    while(!file.eof()){
        e1.showdata();
        file.read((char*)&e1,sizeof(e1));
    }
    file.close();
}
int main(){
    X e1;
    int n;
    cout<<"enter the number of record you want to enter:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
          e1.getrecord();
    }
    e1.showrecord();
    return 0;
}