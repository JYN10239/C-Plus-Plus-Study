//函数是一个完成某项特定任务的程序，有特别的写法和调用方式
//函数的分类
//1.库函数：标准库中提供的现有的函数，在不同的头文件中进行了声明，可以多去c++标准库看看
//第三方网站：https://legacy.cplusplus.com/reference/

//2.2 自定义函数
//2.2.1 函数的语法形式
// 返回值类型 函数名（参数）


//3.2 函数传参
//3.2.1 数组做函数参数
// #include<iostream>
// using namespace std;
// void set_arr(int arr[3][5],int n,int m)//函数声明，形参：若一维，可省略大小，若二维，不可省略列数
// {
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         for (int j = 0; j < m; j++)
//         {
//             /* code */
//             arr[i][j]=1;
//         }
        
//     }
    
// }
// int main()
// {
//     int arr[3][5]={0};
//     //设置函数使数组里全部为1
//     set_arr(arr,3,5);//调用函数，数组参数写地址
//     //打印数组
//     //print_arr(arr,3,5);

//     //数组传参时，不会创建新的数组，直接在原本的数组进行操作

//     return 0;
// }


//3.2.2 字符串做函数参数
//形参s会创造独立的内存空间，改变形参不会改变实参

//3.3.3 全局变量不用传参
//把变量，数组定义成全局变量在比赛中经常使用
// #include<iostream>
// using namespace std;
// int arr[10]={0};
// void print_arr()
// {
//     for (int i = 0; i < 10; i++)
//     {
//         /* code */
//         cout<<arr[i];
//     }
    
// }
// int main()
// {
//     print_arr();
//     return 0;
// }


//3.3 返回值
//return后面可以什么都没有，直接写return，这种写法适合函数返回值为void的情况
//return返回的值和函数类型不一致，此时编译器会将返回类型自动转化为函数类型
//return执行后，函数就彻底返回，后面的语句不再执行


//4 函数的声明与调用
//4.2 函数调用
//4.3.1 传值调用：仅需要通过传参方式把值传给函数
// #include<iostream>
// using namespace std;

// int MAX(int x,int y)
// {
//     return x>y?x:y;
// }
// int main()
// {
//     int a=0;
//     int b=0;
//     cin>>a>>b;
//     //求两个整数的最大值
//     int m = MAX(a,b);
//     cout<<m<<endl;
//     return 0;
// }

//4.3.2 传引用调用：需要将传过去的参数进行改变
// #include<iostream>
// using namespace std;
// void Swap(int& x,int& y)
// {
//     int t =0;
//     t=x;
//     x=y;
//     y=t;
// }
// int main()
// {
//     //格式：类型& 引用变量名 = 引用实体；
//     int a = 3;
//     int b = 5;
//     //引用：1. 没有新的空间，只是起了个名字 2. 引用必须初始化，要先有本名再取别名 3.作为一个绰号，他不能做别人的别名
//     int& ra = a;
//     cout<<a<<" "<<ra<<endl;
    
//     //引用的作用：把函数参数设置成引用的样子
//     Swap(a,b);
//     cout<<a<<" "<<b<<endl;
//     return 0;
// }

//库函数中的swap函数:可以交换变量，可以交换数组
// #include<iostream>
// #include<utility>
// using namespace std;
// int main()
// {
//     int arr[5]={1,2,3,4};
//     int arr2[5]={0,2,4,6,8};
//     swap(arr,arr2);
//     for(int e:arr)
//     {
//         cout<<e<<" ";
//     }
//     return 0;
// }

//4.3.3 传值调用和传引用调用的效率比较
//传值是要新建一块空间的，时间会更长