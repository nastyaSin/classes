#include "group.h"

Group::Group(string name)
{
    class_number = name;
}

void Group::PrintStudents()
{
    for (int i = 0; i < SIZE_STUDENTS; i++)
    {
        cout << students[i].student_name << endl;
    }
}

void Group::AddStudent(Student st)
{
    students[count] = st;
    count++;
}
