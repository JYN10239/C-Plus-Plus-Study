/*
请填写空白实现数组从大到小的排序，并按格式输出，每行最多输出5个数据

数组元素可能为int，char
【输入形式】

第一行：数组元素个数

第二行：数组所有元素
【输出形式】

输出排序后的数组，每行最多5个数据，元素间以空格隔开

【样例输入】

6

4 2 7 4 1 5
【样例输出】

7 5 4 4 2

1

【样例说明】
【评分标准】
*/
#include <iostream>
#include <algorithm>
#include <functional>
#include <cctype> // 包含 isdigit 函数

using namespace std;

int main()
{
    int n;
    cin>>n;
    char c;
    while(cin.get(c))
    {
        if(c!='\n'&&c!=' '&&c!='\r')
        {
            cin.putback(c);
            break;
        }
    }//跳过前几个输入的空格之类的模板

    c=cin.peek();
    if(isdigit(c)||c=='-')//如果c是数字或者负号
    {
        int *arr=new int[n];//开辟数字字符的数组
        for(int i=0;i<n;i++)
        Sort_print(arr,n);
    }
    return 0;
}