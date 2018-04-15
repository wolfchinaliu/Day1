#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <stdio.h>
#include <cstring>
#include "Student.h"
#include "StudentDemo.h"

using namespace std;

extern int aa;
extern int bb;
extern float ff;

//声明结构books
struct Books{
    char title[20];
    char name[50];
    int sice;


};
int Student::age = 20;
//声明函数
void swap(int &x, int &y);

//定义内联函数
inline int getMax(int x,int y){
    return x > y ? x : y;
}
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
    /**
     * 自定义type类型
     * 关键字：typedef
     * 模板：typedef type newName;
     *
     */
    typedef int newName;
    newName f = 3;
    cout << "newName:" << f << endl;
    /**
     * 枚举类型：enum 枚举名{
     *      标识符[=整型常数],
     *      标识符[=整型常数]
     *
     *  } 枚举变量;
     *  通常如果省略整型常量则表明第一个枚举类型
     *  第一个枚举通常为0，如果存在后面存在赋值特例，后面的枚举都+1。
     *  
     */
    enum color{
        red,green,blue
    } c;
    cout << "c:" << c << endl;
    c = blue;
    cout << "c:" << c << endl;
//    c green = 5;
    cout << "blue:" << blue << endl;
    cout << "green" << green << endl;
    /**
     * C++中变量的定义：
     *      变量的定义就是告诉编译器在何处创建了变量的存储，以及如何创建变量的存储：type fileName;
     *      变量的初始化就是在变量定义以后给变量通过一个=和表达式给予变量一个初始值
     *      变量的声明是告诉编译器保证变量是以给定的类型和名称的存在，这样编译器就不用在编译阶段关注变量的细节情况也能编译，
     *      变量的声明只在编译的时候有用，在运行的时候还是要实际的变量声明。
     *      变量的声明对于多个文件的时候很有用，不必关注变量的具体细节既可以编译
     * question：对于放在return 0 后面的文件都不会做执行。
     */
    int aa, bb;
    float ff;
    aa = 10;
    bb = 20;
    ff = 70.00f;
    cout << "aa:" << aa << endl;
    cout << "bb:" << bb << endl;
    ff = ff/3;
    cout << "ff:" << ff << endl;
    /**
     * 全局变量和局部变量：
     *      全局变量和局部变量可以同名，但是局部变量的优先级高于全局变量，碰到同名的局部变量的值会覆盖全局变量的值。
     *      局部变量的定义，系统不会对其赋予初始化，但是全局变量会对其赋初始化：
     *          int:0
     *          char:'/0'
     *          float:0
     *          double:0
     *          pointer:NULL
     */
    /**
     * 定义常量
     *  C++中有两种定义常量的方式：
     *      #
     */
    /***
     * C++修饰符：
     *  unsigned:
     *  signed:
     *  short:
     *  long:
     *  unsigned,signed,short,long都可以修饰整型，signed,unsigned可应用字符型，unsigned,signed可用于修饰short和long类型。
     *  long用于修饰双精度类型。
     */
    /***
     * 数字：srand()可以生成随机数
     */
    int jj;
    // 设置种子:如果设置的种子是一样的话，每次生成的随机数都是一样的
//    srand((unsigned) time(NULL));
    srand((unsigned)2);
    /**生成十个随机数**/
    for (int ii = 0; ii < 10; ++ii) {
        jj = rand();
        cout << "生成的随机数：" << jj << endl;
    }
    /**
     * 数组：
     *  C++中的数组表示方式：type arrName[arrSize]
     *  C++中多维数组格式：type arrName[arrSize1][arrSize2][arrSize3]
     */
    //声明数组
    int arr[10];
    //初始化数组
    for (int i = 0; i < 10; ++i) {
        arr[i] = i+10*i;
    }
    //输出数组：这里用到一个函数setw() 该函数表示格式化输出，如果不够用空格补
    for (int j = 0; j < 10; ++j) {
        cout << "Element[" << j << "]:" << arr[j]<< endl;
    }
    //声明一个多维数组:5行三列
    int arr2[5][3];
    //初始化二维数组
    for (int k = 0; k < 5; ++k) {
        for (int i = 0; i < 3; ++i) {
            arr2[k][i] = 10+i*k;
        }
    }
    //输出二维数组
    for (int l = 0; l < 5; ++l) {
        for (int i = 0; i < 3; ++i) {
            cout << "Element[" << l << "]["<< i << "]:"<< arr2[l][i]<< endl;
        }
    }
    //声明三维数组
    int arr3[5][4][3];
    for (int m = 0; m < 5; ++m) {
        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j < 3; ++j) {
                arr3[m][i][j] = 10 + m * i * j;
            }
        }
    }
    //输出三维数组
    for (int l = 0; l < 5; ++l) {
        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j < 3; ++j) {
                cout << "Element[" << l << "]["<< i << "]["<<j<<"]:"<< arr3[l][i][j]<< endl;
            }
        }
    }
    /**
     * 指向数组的指针
     *  double *p
     *  double blue[10]
     *  p = &blue
     *  p代表指向blue数组的第一个元素的地址，所以*p 表示指向数组的指针
     */
    double balance [7] = {100.0,200.0,3444.34,333.44,555.34,333.343,444.232};
    double * p;
    p = balance;
    for (int n = 0; n < 7; ++n) {
        cout << "*p:[" << n << "]" << *(p+n) << endl;
    }
    /**
     * 引用传递：
     *  type& x
     *  指针和引用的区别：
     *      引用必须在创建的时候赋值，而指针不用
     *      引用不存在空引用，必须制定内存地址，指针可以存在空指针
     *      引用一旦指定了具体的值，就不可以改变，但是指针可以
     *
     */
    int x = 200;
    int y = 500;
    int& ix =x;
//    int& ix = y;

    int * pi;
    pi = &x;
    pi = &y;
    cout << "*pi:" << *pi << endl;
    cout << "x:" << x << endl;
    cout << "y:" << y << endl;
    cout << "交换后"<< endl;
    swap(x, y);
    cout << "x:" << x << endl;
    cout << "y:" << y << endl;
    /**
     * 时间和日期
     *  ：获取时间和日期，首先要引入 #include <ctime>
     *  struct tm {
     *     int tm_sec;   // 秒，正常范围从 0 到 59，但允许至 61
     *     int tm_min;   // 分，范围从 0 到 59
     *     int tm_hour;  // 小时，范围从 0 到 23
     *     int tm_mday;  // 一月中的第几天，范围从 1 到 31
     *     int tm_mon;   // 月，范围从 0 到 11
     *     int tm_year;  // 自 1900 年起的年数
     *     int tm_wday;  // 一周中的第几天，范围从 0 到 6，从星期日算起
     *     int tm_yday;  // 一年中的第几天，范围从 0 到 365，从 1 月 1 日算起
     *     int tm_isdst; // 夏令时
     *   }
     */
    //基于当前的系统时间和日期
    time_t now = time(0);
    //将now时间转换为字符串
    char *dt = ctime(&now);
    cout << "time:" << dt << endl;
    /**
     * C++中输入输出流
     *  <iostream>:该文件定义了cout，cin,cerr,clog对象，表示标准输出，标准输入，非缓冲标准错误流，标准日志流。
     *  cout:表示输出数据，格式为cout + << ,其中<< 可以连续使用，也可以在末尾添加 endl 表示换行符。
     *  cin:表示输入数据，一般代表为从键盘中获取输入流。格式为：cin >> 变量名
     *  crror:表示非缓冲错误输入，表示插入到err中的数据会立马输出，格式为：err << 也是可以连续使用 <<
     *  elog:表示标准的日志流，该流对象是缓冲流，当有数据插入到里面的时候，知道该缓冲满了才会将数据输出。格式 clog <<  <<可以连续使用
     */
/*    char name[50];
    cin>>name;
    cout << "name:" << name << endl;
    cerr << "Error:" << name << endl;
    clog << "Log:" << name << endl;*/
    /**
     * C++中数据结构：数组可以存储相同类型的数据，但是对于结构Struct 来说可以存储不同类型的不同数据。
     *  在结构中，想要访问结构中的属性，可以直接通过 structName.porperty即可
     *  结构体可以作为函数的参数直接传入进去
     *  指向结构体的指针： struct structName *point;
     *  指针的参数可以通过 -> 赋值
     *
     */
    //定义两个结构体
    Books books1;
    Books books2;
    books1.sice = 22;
    strcpy(books1.name,"java");
    strcpy(books1.title,"Jerry");
    books2.sice = 33;
    strcpy(books2.name,"PHP");
    strcpy(books2.title,"Jack");
    struct Books *bookPoint;
    bookPoint = &books1;
    bookPoint->sice = 200;

    cout << "books1:[" << "name:" << books1.name << " title:" << books1.title << " sice:" << books1.sice << "]"<< endl;
    cout << "books2:[" << "name:" << books2.name << " title:" << books2.title << " sice:" << books2.sice << "]"<< endl;
    /**
     * class对象函数的调用
     * 在class中如果在类对象中直接调用创建函数，或者是在class中声明函数，在通过外面实现函数。
     * public protect private 三种继继承方式 class中的默认修饰符是private。
     * 对于public 所有的都可以访问，对于protect属性，只有派生类可以访问和友元函数可以访问，对于private只有自己可以访问。
     * public 继承的话，派生类中的变量不会改变，基类中的public还是public变量，protect变量还是protect变量，private还是private
     * protect 继承的话，派生类中的public 修饰的话会变成protect，protect还是protect，private还是private
     * private 继承的话，派生类中的public和protect都会变成private，private也会变成private。
     */
    //创建一个对象
    Student student;
    //调用class参数
    strcpy(student.name, "java");
    cout << "student.name:" << student.name << endl;
    cout << "student.pice:" << student.pice << endl;
    cout << "sutdent.title:" << student.title << endl;
    cout << "sutdent.sum():" << student.sum() << endl;
    cout << "sutdent.getName():" << student.getName() << endl;
    /**
     * class的构造函数和析构函数
     *  1：对于构造函数来说，它是一种特殊的成员函数，名字和类名一致，没有返回值，可以传入参数进行实例化，会在创建对象的时候执行
     *  2：对于析构函数来说也是一样，但是不用与构造函数，析构函数的名字前面加个 "~" 符号进行区分，析构函数是每次删除所创建对象的
     *     时候执行，析构函数有助于程序跳出（文件关闭，内存释放的时候）前释放资源。
     *     2.2：对于析构函数来说，没有返回值，也没有传入参数。
     */
    //调用构造函数
    Student student1(12, const_cast<char *>("JAVA"), const_cast<char *>("JAVA Program"));
    cout << "student1.name:" << student1.name << endl;
    cout << "student1.pice:" << student1.pice << endl;
    cout << "student.title:" << student1.title << endl;
    //析构函数默认在函数删除的时候执行，所以不需要调用
    /**
     * 拷贝构造函数，什么时候调动拷贝构造函数，只有当class中包含或者内置指针变量是才需要复制函数
     * 拷贝构造函数是特殊的构造函数，该函数的参数为 const修饰的对象引用常量 例如： const Student &st
     * 拷贝函数用在什么地方：
     *  1：一个对象通过值传递的方式传入函数体
     *  2：一个函数以值传递的方式从函数返回
     *  3：一个对象需要通过另一个对象进行初始化
     */
    //测试拷贝构造函数
    Student student2(student1);
    cout << "student2.name:" << student2.name << endl;
    cout << "student2.title" << student2.title << endl;
    cout << "student2.pice:" << student2.pice << endl;
    /**
     * 友元函数：
     *  对于友元函数来说，函数的定义是放在class的外部，但是有访问class对象的private属性和protect属性的权限。
     *  对于友元函数来说，如果参数中包含static对象，这不需要传入对象来引用，如果是全局变量，也不需要通过对象的引用来调用
     *  可以直接调用友元函数，不用通过对象或者指针的引用
     *  友元函数需要通过 friend 标识符修饰
     */
    //友元函数的调用

    cout << "student2.getDoublePrice():" << getDoublePice(student2) << endl;

    /**
     * 内联函数：对于内联函数来说一般是小于十行以内采用内联函数，内联函数是通过inline 关键字修饰的函数
     * 当编辑器在编译的时候，一般会将调用内联函数代码块替换为内联函数的实现，提高运行效率，但是代码量会变大变多
     * 这是一种空间换区时间的方式，同时一般强调 开关 switch语句一般不适合在内联函数
     */
    //调用内联函数
    cout << "max:" << getMax(200, 100) << endl;
    /**
     * this 指针：
     *      只有成员函数才是有this指针，可以指向class中的属性
     *      对于友元函数和静态函数都没有this 指针
     * 指向class的指针，对于指向class的指针和指向struct的指针用法基本一致
     *      对于class和struct的区别之前讲过？
     * 静态变量和静态方法：
     *       对于静态变量来说，不管创造多少个静态变量都只有一个副本，静态变量只能在class中定义但是不能声明，
     *       声明要在class外部声明。
     *       静态函数只能调用静态变量，不能调用非静态变量，静态函数没有this指针。
     *       静态变量的声明和初始化只能在函数外面。
     *       静态成员函数只能在class中声明
     */

    //样例
    Student *s;
    s = &student2;
    cout << "s.name" << s->name << endl;
    cout << "s.title:" << s->title << endl;
    //静态变量和函数的调用
    cout << "age:" << Student::age << endl;
    cout << "Student.getAge():" << Student::getAge() << endl;
    /**
     * C++中继承的方式：
     *  通过":"表示继承方式，C++中支持多继承，Java中不支持。
     *  派生类继承了基类的所有方法，但是有些方法没有继承
     *          1：构造函数，析构函数，拷贝构造函数
     *          2：友元函数
     *          3：基类的重载运算符
     *
     */
    StudentDemo demo;
    cout << "demo.getAge:" << demo.getAge() << endl;
    /**
     * 函数的重载和运算符的重载
     *  1：函数的重载，通过定义不同的形参（参数的个数，参数的类型，参数的顺序）来重载函数，程序会根据重载策略决定运行那个函数
     *  2：重载的运算符是一种带有特殊名称的函数：函数名通过 operator 关键字后加要重载的运算符符号，也有函数返回值和函数参数。
     *     对于const 有没有无所谓
     *  3：不可重载的运算符：.成员访问运算符 ::域运算符  sizeof 长度运算符 .* ->* 指针运算符 ? 条件运算符 #预处理运算符
     */
    //函数的重载
    int i =2;
    cout << "demo.getAge:" << demo.getStudentAge(i) << endl;
    demo = demo+demo;
    cout << "demo.+:" << demo.age<< endl;
    //运算符的重载
    return 0;


}
void swap(int& x,int&  y){
    int temp;
    temp = x;
    x = y;
    y = temp;
    return;
}
