#include <iostream>
using namespace std;
int main() {
    cout << "Hello, World! Jerry Hello\n";//c++单行注释
    cout << "Hello, World! Jerry Hello\n";//c++单行注释
    cout << "简答的测试一下输出函数\n";
    cout << "简单的测试"<<"测试一下"<< endl;
   /**
     * unsigned 类型的数据长度是一样的
     * C++中内置数据类型
     * bool:布尔类型 数据长度：1
     * int：整数类型 数据长度：4
     * char:字符串类型 数据长度：1
     * long:长整数类型 数据长度：8
     * float:浮点类型 数据长度：4
     * double:双浮点类型 数据长度：8
     * wchar_t:宽类型 数据长度：4
     * void:无类型 数据长度：无法验证，无类型
     * */
    /*cout << "Hello, World! Jerry Hello";
    cout << "Hello, World! Jerry Hello";多行注释*/
    cout << "bool所占的字节为:" << sizeof(bool)<< endl;
    cout << "int所占的字节为:" << sizeof(int)<< endl;
    cout << "char所占的字节为:" << sizeof(char)<< endl;
    cout << "long所占的字节为:" << sizeof(long)<< endl;
    cout << "float所占的字节为:" << sizeof(float)<< endl;
    cout << "double所占的字节为:" << sizeof(double)<< endl;
    cout << "wchar_t所占的字节为:" << sizeof(wchar_t)<< endl;
    cout << "void所占的字节为:" << sizeof(int)<< endl;
    cout << "unsigned int所占的字节为:" << sizeof(unsigned int)<< endl;
    cout << "unsigned char所占的字节为:" << sizeof(unsigned char)<< endl;
    cout << "unsigned long所占的字节为:" << sizeof(unsigned long)<< endl;
    int a = 10;
    cout << "a:" << a << endl;
    return 0;
}