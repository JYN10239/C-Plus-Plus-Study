//const 函数默认参数
#include<iostream>
using namespace std;
const double pi = 3.14;
double caculate_size(double r,double PI=pi);
int main()
{
    double r;
    cin>>r;
    cout<<caculate_size(r);
    return 0;
}
double caculate_size(double r,double PI)
{
    return PI*r*r;
}