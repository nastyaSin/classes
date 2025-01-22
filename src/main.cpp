#include <iostream>
#include <windows.h>
#include <string>
#include "student.h"
#include "school.h"
#include "group.h"

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    School school1(40);

    Group group1("9A");
    Group group2("9Б");

    Teacher teacher1("Мария Ивановна", "История");
    Teacher teacher2("Александр Александрович", "Труды");
    
    school1.AddGroup(group1);
    school1.AddTeacher(teacher1);

    Student s1("Иванов");
    Student s2("Петров");

    school1.PrintClasses();
    
    school1.AddGroup(group2);
    
    group1.PrintStudents();

    system("pause");

    return 0;
}