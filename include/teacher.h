#ifndef TEACHER_H
#define TEACHER_H
#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

class Teacher
{
public:
    Teacher(string n, string subject);

    string name;
    string school_subject;
};

#endif