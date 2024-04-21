#include<iostream>
#include<fstream>
using namespace std;
int main()
{
char name[20];
int id;
fstream s;
s.open("test1.txt",ios::out);
int n;
cout<<"enter the number of data you wnat to enter:"<<endl;
cin>>n;
for(int i=1;i<=n;i++){
    cout<<"enter the name:";cin>>name;
    cout<<"enter the roll:";cin>>id;
    s<<name<<"\t"<<id;
}
s.close();
s.open("test1.txt",ios::in);
for(int i=1;i<=n;i++){
    s>>name>>id;
    cout<<"the name is:"<<name<<endl;
    cout<<"ID:"<<id<<endl;
}
// while(s.get(ch)){
//     cout<<ch;
// }
return 0;
}