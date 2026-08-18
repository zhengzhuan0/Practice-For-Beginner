#include <iostream>
using namespace std;
int main()
{
    //1.字符型变量创建方式
    //Grammar: char ch = 'a';仅限单个字符
    char ch = 'a';
    cout << ch << endl;
    char ch2 = 'A';
    cout << ch2 << endl;
    //2.字符型变量所占内存大小:1byte
    cout << "char字符型变量占据的内存空间为：" << sizeof(ch) << endl ;
    //3.字符型变量常见错误
    //char ch2 = "b";//创建字符型变量时要用单引号
    //char ch2 = 'abcdef';//单引号内只能有一个字符
    //4.字符型变量对应ASCII编码
    //a-97
    //A-65
    cout << "a对应的ASCII值为:"<< (int)ch << endl;
    cout << "A对应的ASCII值为:"<< (int)ch2 << endl;
    system("pause");
    
    return 0;
}