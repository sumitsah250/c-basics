#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char ch;
    fstream sumit("sumit.txt",ios::in);
    if(sumit.fail()){
        cout<<"error opening the file"<<endl;
        cout<<"exiting"<<endl;
        exit(1);
    }
    cout<<"the contents of file are"<<endl;
    while(sumit.get(ch)){
        cout<<ch;
        
    }
    sumit.close();


return 0;
}