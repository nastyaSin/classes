#include <iostream>
#include <windows.h>
#include <string>
#include "student.h"

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    School school1(40);

    Class class1("9A");

    Teacher teacher1("Мария Ивановна", "История");
    Teacher teacher2("Александр Александрович", "Труды");

    Student s1("Иванов");
    Student s2("Петров");

    system("pause");

    return 0;
}