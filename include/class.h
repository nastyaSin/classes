#ifndef CLASS_H
#define CLASS_H
#include <iostream>
#include <windows.h>
#include <string>
#include "student.h"
#include "school.h"

using namespace std;

const int SIZE_STUDENTS = 20;

class Class
{
public:
    Class(string name);

    string class_number;

    Student students[SIZE_STUDENTS];

    void PrintStudents();
};

#endif