#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char s;
    ofstream sumit;
    sumit.open("sumit.txt",ios::out);
    cout<<"start writing:"<<endl;
    while((s=cin.get())!='\n'){
        sumit.put(s);
        }
        sumit.close();
return 0;
}