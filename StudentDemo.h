//
// Created by 刘子虎 on 2018/4/15.
//

#ifndef DAY1_STUDENTDEMO_H
#define DAY1_STUDENTDEMO_H

#include "Student.h"

class StudentDemo : public Student{
public:
    int getStudentAge() {
        return getAge();
    }
    int getStudentAge(int i){
        return getAge();
    }
    StudentDemo operator+(StudentDemo &stu){
        age = stu.age*2;
        return stu;
    }
};
#endif //DAY1_STUDENTDEMO_H
