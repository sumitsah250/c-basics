#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char ch;
    ifstream in("student.txt",ios::in);
    if(in.fail()){
        cout<<"error opening the file"<<endl;
        cout<<"exiting ..."<<endl;
        exit(1);
    }
    cout<<"the contents of file "<<endl;
    while(in.get(ch)){
        cout<<ch;
    }
    return 0;
}