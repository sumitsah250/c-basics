#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char name[20];
    char address[20];
    long int contact;
    fstream sumit;
    sumit.open("s.txt",ios::out);
    int n;
    cout<<"enter the numeber of student data you want to write on file:";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"enter the name:";cin>>name;
        cout<<"enter the address:";cin>>address;
        cout<<"enter the contact:";cin>>contact;
        sumit<<name<<"\t"<<address<<"\t"<<contact<<endl;
    }
    cout<<"the data is written in the file"<<endl;
    sumit.close();
    sumit.open("s.txt",ios::in);
    while(sumit){
         sumit>>name>>address>>contact;
        cout<<" name:"<<name<<endl;
        cout<<" address:"<<address<<endl;
        cout<<" contact:"<<contact<<endl;
    }
    cout<<"the data is written in the file"<<endl;
    sumit.close();
return 0;
}