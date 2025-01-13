#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <windows.h>
#include <string>
#include "class.h"

using namespace std;

class Student
{
public:
    Student(string name);

    string student_name;
    int grades[];
    void PrintGrades();
};

#endif