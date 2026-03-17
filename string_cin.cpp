//2.2字符数组的输入




//2.2.1 输入没有空格的字符串
// #include<iostream>
// using namespace std;
// int main()
// {
//     char arr[10];
//     cin>>arr;
//     cout<<arr;//无法输出空格的

//     char arr2[10];
//     cin>>arr+1;
//     cout<<arr+1;

//     return 0;
// }




//2.2.2 输入有空格的字符串
// #include<iostream>
// using namespace std;
// int main()
// {
//     //2.2.2.1  gets和fgets
//     // char arr[20];
//     // gets(arr);
//     // cout<<arr;//不读取\n，并且在最后一个位置自动加上\0

//     // char arr[20];
//     // fgets(arr,20,stdin);//读取19个字符，最后一个肯定会是\0，而且还会有一个回车
//     // cout<<arr;

//     //2.2.2.2  scanf
//     // char arr[20];
//     // scanf("%[^\n]s",arr);//直到读到换行才停止，不读取换行，同时补足\0
//     // cout<<arr<<endl;

//     //2.2.2.3  getchar
//     // char arr[20];
//     // //abc def\n
//     // int ch=0;
//     // int i=0;
//     // while((ch=getchar())!='\n')
//     // {
//     //     arr[i]=(char)ch;
//     //     i++;
//     // }
//     // arr[i]='\0';
//     // cout<<arr;
//     return 0;
// }




//2.3 size()
// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
//     string s1;
//     string s2 ="hello";
//     cout<<s1.size()<<s2.size()<<endl;
//     return 0;
// }




//2.4 迭代器 ：是一种对象，类似于指针
//包含在string头文件中
//2.4.1 begin() 和 end()
//begin() 返回指向字符串第一个字符
//end() 返回字符串最后一个字符的后一个字符
// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
//     string s = "abcdef";
//     string::iterator it1 = s.begin();
//     string::iterator it2 = s.end();
//     cout<<*it1<<endl;
//     cout<<it2 - it1<<endl;
//     it1++;
//     cout<<*it1<<endl;

//     //遍历字符串
//     for(string::iterator it=s.begin();it<s.end();it++)
//     {
//         cout<<*it<<endl;
//     }

//     //倒过来遍历
//     for(auto e = s.end()-1;e>=s.begin();e--)//想不起来类型也可以用auto
//     {
//         cout<<*e;
//     }
//     return 0;
// }




//2.5 push_back():每次在字符串尾部增加一个字符
// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
//     string s;
//     s.push_back('h');
//     s.push_back('i');
//     cout<<s;

//     //循环连续插入
//     char c=0;
//     string s1;
//     for(c='a';c<'z';c++)
//     {
//         s1.push_back(c);
//     }
//     cout<<s1;
//     return 0;
// }




//2.6 字符串的+=和-=运算：可以向原有的字符串追加新的字符串
// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
//     //追加在后面
//     string s="hello ";
//     s+="world";
//     cout<<s<<endl;

//     string s1 ="hello ";
//     string s2= s1+"world";
//     cout<<s1<<endl;
//     cout<<s2<<endl;

//     //追加在前面
//     string s3="world "+s1;
//     cout<<s3<<endl;

//     //同样的也可以直接加字符
//     string s4=s1+'X';
//     cout<<s4<<endl;
//     return 0;
// }




//2.7 pop_back():成员函数，用于删除字符串中尾部的一个字符
// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
//     string s ="hello world";
//     s.pop_back();
//     cout<<s<<endl;

//     //循环删除字符串中的所有元素
//     string s1 = "hello";
//     while(s1.size()>=1)
//     {
//         s1.pop_back();
//     }
//     cout<<s1.size()<<endl;
//     return 0;
// }




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




//2.9 find:返回查找到的字符的第一个位置
//语法：find(str,pos)
// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
//     string s="hello world hi x";
//     string str="llo";
//     int n =s.find(str);
//     cout<<n<<endl;
//     n=s.find('l',3);
//     cout<<n<<endl;

//     //找不到时
//     n=s.find("lm");
//     cout<<n<<endl;
//     if(n==string::npos)
//     {
//         cout<<"找不到"<<endl;
//     }
//     return 0;
// }




//2.10 substr():用于截取字符串中指定位置指定长度的子串，函数原型如下
// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
//     string s="hello world hello everyone";
//     size_t n =s.find("world");
//     string s2=s.substr(n);
//     cout<<s2<<endl;
//     return 0;
// }




//2.11 string的关系运算
//运算符的重载
//字符串的比较是比较对应位置的字符的ASCII码值
//"100" < "9"  "abcd" <"ff
// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
//     string s="hello world";
    
//     string s2="hello";
//     if(s == s2+"world")
//     {
//         cout<<"==";
//     }
    
//     else{
//         cout<<"!=";
//     }

//     //c风格的也可以
//     char str[]="hello world";
//     if(str==s)
//     {
//         cout<<"yes";
//     }
//     else cout<<"not at all";
//     return 0;
// }




//2.12 和string相关的函数
//2.12.1 stoi/stol:将字符串转化为int/long类型的值
// #include<iostream>
// #include<string>
