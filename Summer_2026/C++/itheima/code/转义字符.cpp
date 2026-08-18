#include<iostream>
using namespace std;
int main()
{
    //转义字符的作用：表示无法显示的ASCII字符
    //换行符号 \n(C语言中)

    cout << "Hello World" << endl;

    cout << "Hello World\n";

    //反斜杠  "\\"
    cout << "\\" << endl;//只打一个反斜杠会报错

    //水平制表符 \t(字符加上空格一共8个字符)
    //作用：可以整齐地输出数据
    cout << "aaa\tHello World" << endl;
    cout << "aaaa\tHello World" << endl;
    cout << "a\tHello World" << endl;

    system("pause");
    return 0;
}