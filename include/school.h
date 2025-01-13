#ifndef SCHOOL_H
#define SCHOOL_H
#include <iostream>
#include <windows.h>
#include <string>
#include "class.h"
#include "teacher.h"

using namespace std;

const int GROUP_SIZE = 10;

const int TEACHERS_NUM = 15;

class School
{
public:
    School(int number);

    int school_number;
    Class group[GROUP_SIZE];
    Teacher teacher[TEACHERS_NUM];

    void PrintClasses();
    void PrintTeachers();
};

#endif