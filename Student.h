//
// Created by 刘子虎 on 2018/4/14.
//

#ifndef DAY1_STUDENT_H
#define DAY1_STUDENT_H

using namespace std;

class Student {
public:
    //定义静态变量
    static int age;
    int pice;
    char name[20];
    char title[21];
    int sum(){
        return pice*2;
    }
    //声明有参构造函数
    Student(int p,char* pp,char* ppp);
    //声明无参构造函数
    Student();
    //析构函数的声明
    ~Student();
    char* getName();
    //声明拷贝构造函数
    Student(const Student &st);
    //定义友元函数
    friend int getDoublePice(Student student);
    //定义静态函数
    static int getAge() {
        return age;
    }
    //定义
protected:
    int sale;
};
//在类外面通过 :: 定义函数

char* Student::getName(){
    return this->name;
}

Student::Student(){
    cout << "Student :: new()"<< endl;
};
//构造函数的实现:如果进行赋值操作，直接通过: 就可以了,亦或者通过设置来实现
//C++中目前来说字符串的赋值就是通过函数库来实现，strcpy(name,pp)
Student::Student(int p, char* pp, char* ppp) {
    //通过设置来实现
    cout << "Student 带参构造函数" << endl;
    pice = p;
    strcpy(name,pp);
    strcpy(title, ppp);

}

Student::~Student() {
    cout << "Student is delete" << endl;
}

Student::Student(const Student &st) {
    strcpy(name, st.name);
    strcpy(title, st.title);
    pice = st.pice;
}

int getDoublePice(Student student) {
    return student.pice*2;
}



#endif //DAY1_STUDENT_H
