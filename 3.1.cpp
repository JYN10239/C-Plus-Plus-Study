//2.8 insert 
// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
//     string s ="hello";
//     s.insert(s.find('e'),"xxx");//在e的前面插入xxx
//     cout<<s;
//     return 0;
// }
#include<iostream>
#include<string>
using namespace std;
int main()
{
    
    int i;
    while(cin>>i&&i!=-1)
    {
        string s="-(^-^)+";
        for(int j=1;j<i;j++)
        {
            s.insert(s.find('('), 1, '(');
            s.insert(s.find('+'),1,')');
        }
        if(i==0)
        {
            s="-^-^+";
        }
        cout<<s<<endl;
    }
    return 0;
}