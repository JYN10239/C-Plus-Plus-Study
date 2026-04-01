//设计类
#include<iostream>
#include<string>
using namespace std;

struct Lib
{
    int cur;//记录当前人数
    string stu[100];//记录当前人名
    public:
    //构造函数:初始化人数为0
    Lib():cur(0){}
    //要实现两种功能

    //1.处理进入请求
    void enter(string name)
    {
        if(cur<100)
        {
            stu[cur]=name;
            cur++;
        }
        showStatus();//直接展示数据
    }

    //2.处理退出请求：删去名字，减少一个人，并且记录一个标签
    void exit(string name)
    {
        int foundindex =-1;//定义-1为没找到
        for(int i=0;i<cur;i++)
        {
            if(stu[i]==name)
            {
                foundindex=i;
                break;
            }
        }
        if(foundindex)
        {
            //找到该索引下的人的名字，用后续的名字覆盖掉他，表示删除
            for(int i=foundindex;i<cur-1;i++)
            {
                stu[i]=stu[i+1];//删除掉了
            }
            cur--;//当前人数也少了一个
            showStatus();//展示数据
        }
        else
        {
            //如果没有找到这个名字
            cout<<"There is no"<<name<<endl;

        }
    }

    //展示数据的函数
    void showStatus()
    {
        cout<<cur<<endl;
        for(int i=0;i<cur;i++)
        {
            cout<<stu[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    struct Lib myLib;
    string situation;//两种状态，in或者out
    string name;//输入名字

    //循环读入
    while(cin>>situation>>name)
    {
        if(situation=="in")
        {
            //图书馆里增加一个人，以及一个人的名字
            myLib.enter(name);//把名字传进去
        }
        else if(situation=="out")
        {
            myLib.exit(name);//把名字删去
        }
    }
    return 0;
}