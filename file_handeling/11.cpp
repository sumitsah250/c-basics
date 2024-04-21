#include<iostream>
#include<fstream>
using namespace std;
class employee{
    int id;
    char name[20];
    long int contact;
    public:
    void getdata();
    void display();
    void getrecord();
    void showrecord();

};
void employee::getdata(){
    cout<<"enter the id ";cin>>id;
    cout<<"enter the name ";cin>>name;
    cout<<"enter the contact ";cin>>contact;
}
void employee::display(){
    cout<<"ID: "<<id<<endl;
    cout<<"name: "<<name<<endl;
    cout<<"contact: "<<contact<<endl;
}
void employee::getrecord(){
    employee e;
    fstream s;
    s.open("test 4.txt",ios::app|ios::out|ios::binary);
    cout<<"enter the information: "<<endl;
    e.getdata();
    s.write((char*)&e,sizeof(e));
    s.close();
}
void employee::showrecord(){
    employee e;
    fstream s;
    s.open("test 4.txt",ios::in|ios::binary);
    s.seekg(0);
    while(s.read((char*)&e,sizeof(e))){
        e.display();
    }
    s.close();
}
int main()
{
    employee e[3],s;
    for(int i=0;i<=2;i++){
        e[i].getrecord();
    }
    s.showrecord();
    

return 0;
}