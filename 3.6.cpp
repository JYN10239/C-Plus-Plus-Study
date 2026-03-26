//string乘法
#include<iostream>
#include<string>
using namespace std;
class String
{
    string s;
    public:
    void setS(string str) {
        s = str;
    }
    void cal(int m)
    {
        for(int i=0;i<m;i++)
        {
            cout<<s;
        }
        cout<<endl;
    }
};
int main()
{
    int n,m;
    String S;
    // 1. 先输入测试数据的组数 n
    if (!(cin >> n)) return 0;

    // 2. 循环处理每组数据
    while (n--) {
        // 输入整型数字 m
        cin >> m;
        
        // 输入字符串
        string temp;
        cin >> temp;
        
        // 3. 调用类成员函数处理
        S.setS(temp);
        S.cal(m);
    }
    return 0;
}