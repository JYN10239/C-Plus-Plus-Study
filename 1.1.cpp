#include<iostream>
#include<iomanip>
const double PI=3.14159;
double calcCircleArea(double r);
using namespace std;
int main()
{
    
    double r;
    while(1)
    {
        cin>>r;
        if(r<=0)
        {
            cout<<"error"<<endl;
        }
        else
        {
            double area=calcCircleArea(r);
            cout<<fixed<<setprecision(2)<<area<<endl;
            break;
        }
    }
    return 0;
}
double calcCircleArea(double r)
{
    double area;
    area=PI*r*r;
    return area;
}