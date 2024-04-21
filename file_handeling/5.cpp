#include<iostream>
using namespace std;

int main()
{
    char c;
    int count=0;
    cout<<"enter text"<<endl;
    cin.get(c);
    while(c!='\n'){
        cout.put(c);
        count++;
        cin.get(c);
    }
    cout<<"the numbre of characters is:"<<count<<endl;

return 0;
}