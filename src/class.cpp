#include "class.h"

Class::Class(string name)
{
    class_number = name;
}

void Class::PrintStudents()
{
    for (int i = 0; i < SIZE_STUDENTS; i++)
    {
        cout << students[i].name << endl;
    }
}