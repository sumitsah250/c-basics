#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char ch;
    fstream sumit;
    sumit.open("1test.txt",ios::app);
    cout<<"enter the informatoin:"<<endl;
    while((ch=cin.get())!='\n'){
        sumit.put(ch);
    }
return 0;
}