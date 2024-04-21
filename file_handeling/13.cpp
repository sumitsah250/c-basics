#include<iostream>
#include<fstream>
using namespace std;
class number{
    static int t;
    int n;
    public:
    void getdata(){
        cout<<"enter the data no:"<<t<<" : ";
        cin>>n;
        t++;
    }
    void showdata(){
        cout<<n;
    }
    void getrecord(){
        fstream file;
        number n1;
        file.open("test 8.txt",ios::app|ios::out);
        n1.getdata();
        file.write((char*)&n1,sizeof(n1));
        file.close();
    }
    void showrecord(){
        fstream file;
        number n1;
        file.open("test 8.txt",ios::app|ios::in);
        file.read((char*)&n1,sizeof(n1));
        while(!file.eof()){
            n1.showdata();
            file.read((char*)&n1,sizeof(n1));
        }
        file.close();
    }

};
int number::t=1;

int main()
{
    number n1,n2;
    int x;
    cout<<"enter the number of data you want to enter:"<<endl;
    cin>>x;
    for(int i=0;i<x;i++){
        n1.getrecord();
    }
    n2.showrecord();
return 0;
}