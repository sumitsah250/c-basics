#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char ch;
    fstream out("bidur.txt",ios::out);
    cout<<"start writing the characters..."<<endl;
    while((ch=cin.get()) != '\n')
    {
        out.put(ch);
    }
    out.close();
    cout<<"file written!"<<endl;
return 0;
}