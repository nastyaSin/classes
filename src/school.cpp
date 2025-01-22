#include "school.h"

void School::AddGroup(Group gr)
{
    groups[count_groups] = gr;
    count_groups++;
}

void School::AddTeacher(Teacher t)
{
    teachers[count_teachers] = t;
    count_teachers++;
}

void School::PrintClasses()
{
    for (int i = 0; i < GROUP_SIZE; i++)
    {
        cout << groups[i].class_number << endl;
    }
}

void School::PrintTeachers()
{
    for (int i = 0; i < TEACHERS_NUM; i++)
    {
        cout << teachers[i].name << endl;
    }
}

School::School(int number)
{
    school_number = number;
}
