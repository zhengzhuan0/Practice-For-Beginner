#include<iostream>
using namespace std;

int main()
{
    //单精度 float 7位
    //双精度 double 15-16位
    //默认情况下 输出一个小数会显示出6位有效数字

    float f1 = 3.14f;//加f是因为编译器默认小数是双精度的

    cout << "f1=" << f1 << endl;

    double d1 = 3.14;

    cout << "d1=" << d1 << endl;

    //统计float和double所占用的内存空间

    cout << "float所占用的内存空间为：" << sizeof(f1) <<endl;//4byte
    cout << "double所占用的内存空间：" <<sizeof(d1) << endl;//8byte

    //科学计数法
    float f2 = 3e2;//3*10^2;
    cout << "f2=" << f2 << endl;

    float f3 = 3e-2;//3*10^-2
    cout << "f3=" << f3 << endl;
    system("pause");
    return 0;
}