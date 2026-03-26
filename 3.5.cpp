//string排序：输入n个字符串，将他们排序后从大到小输出，每行输出一个字符串
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string *str = new string[n];
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
    }
    for(int i=0;i<n-1;i++)
    {
        int max_idx=i;
        for(int j=i+1;j<n;j++)
        {
            if(str[j]>str[max_idx])
            {
                max_idx=j;
            }
        }
        if (max_idx != i) {
            string temp = str[i];
            str[i] = str[max_idx];
            str[max_idx] = temp;
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<str[i]<<endl;
    }

    delete[] str;
    return 0;
}