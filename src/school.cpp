#include "school.h"

School::School(int number)
{
    school_number = number;
}

void School::PrintClasses()
{
    for (int i = 0; i < GROUP_SIZE; i++)
    {
        cout << group[i].class_number << endl;
    }
}

void School::PrintClasses()
{
    for (int i = 0; i < TEACHERS_NUM; i++)
    {
        cout << teacher[i].name << endl;
    }
}