#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
string itoa(int x)
{
    if(x==0)
    {
        return "0";
    }
    string res="";
    bool is_nagative = false;
    if(x<0)
    {
        is_nagative=true;
        x=-x;
    }

    while(x>0)
    {
        int digital=x%10;
        char ch=digital+'0';
        res = ch+res;
        x/=10;
    }
    if(is_nagative)
    {
        res="-"+res;
    }
    
    
    return res;
}
int main()
{
    int x;
    cin>>x;
    string ret=itoa(x);
    cout<<ret<<endl;
    return 0;
}