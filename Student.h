//
// Created by 刘子虎 on 2018/4/14.
//

#ifndef DAY1_STUDENT_H
#define DAY1_STUDENT_H


class Student {
public:
    int pice;
    char name[20];
    char title[21];
    int sum(){
        return pice*2;
    }
    char* getName();
};
//在类外面通过 :: 定义函数

char* Student::getName(){
    return name;
}


#endif //DAY1_STUDENT_H
