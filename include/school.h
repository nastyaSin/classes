#ifndef SCHOOL_H
#define SCHOOL_H
#include <iostream>
#include <windows.h>
#include <string>
#include "group.h"
#include "teacher.h"

using namespace std;

const int GROUP_SIZE = 10;

const int TEACHERS_NUM = 15;

class School
{
public:
    int count_teachers = 0;
    int count_groups = 0;

    School(int number);

    int school_number;
    Group groups[GROUP_SIZE];
    Teacher teachers[TEACHERS_NUM];

    void PrintClasses();
    void PrintTeachers();
    void AddGroup(Group gr);
    void AddTeacher(Teacher t);
};

#endif