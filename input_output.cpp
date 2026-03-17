//性能差异：scanf/printf 执行速度更快
//输入的数据量比较大时(10^9)，cin输入时间长
#include<iostream>
#include<ctime>
#include<cstdio>
using namespace std;
const int num = 10000000;

int main()
{
    //优化方式
    //step1:断开与c语言的联系
    ios::sync_with_stdio(false);
    //step2:断开cin和cout之间的绑定
    cin.tie(0);

    return 0;
}