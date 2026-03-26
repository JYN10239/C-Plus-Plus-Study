//string翻转：输入n个字符串，完成每个字符串的翻转
#include <iostream>
#include <string>
using namespace std;

class String {
    string s;
    int len; // 用来存储字符串长度
public:
    // 1. 输入函数：从控制台读取字符串并更新长度
    void setS() {
        cin >> s;
        len = s.length();
    }

    // 2. 翻转函数：手动实现字符交换逻辑
    void reverse() {
        for (int i = 0; i < len / 2; i++) {
            // 交换首尾对应的字符
            char temp = s[i];
            s[i] = s[len - 1 - i];
            s[len - 1 - i] = temp;
        }
    }

    // 3. 输出函数
    void printS() {
        cout << s << endl;
    }
};

int main() {
    int n;
    String S;
    
    // 输入测试用例的数量
    if (!(cin >> n)) return 0;
    
    for (int i = 0; i < n; i++) {
        S.setS();      // 输入字符串
        S.reverse();   // 翻转字符串
        S.printS();    // 输出结果
    }
    
    return 0;
}