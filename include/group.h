#ifndef GROUP_H
#define GROUP_H
#include <iostream>
#include <windows.h>
#include <string>
#include "student.h"

using namespace std;

const int SIZE_STUDENTS = 20;

class Group
{
public:
    int count = 0;
    // Class() = default;
    Group() : class_number(0) {}
    Group(string name);

    string class_number;

    Student students[SIZE_STUDENTS];

    void PrintStudents();
    void AddStudent(Student st);
};

#endif