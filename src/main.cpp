/*
    Author Wessely Leon
    Date: 10/7/2023
    Compile Command: g++ main.cpp -o main
*/

#include <iostream>
#include "../include/averageGrade_f.h"

int main()
{
    int *Grade_array;
    int NumberOfGrades;
    int arrlength = -1;
    int gradenmb = 1;

    double averageGrade;

    std::cout << "Number of Grades: ";
    std::cin >> NumberOfGrades;

    Grade_array = new int(NumberOfGrades);

    UserInput_f(NumberOfGrades, gradenmb, arrlength, Grade_array);

    averageGrade = averageGrade_f(NumberOfGrades, Grade_array);

    std::cout << "Average: " << averageGrade << std::endl;
    delete(Grade_array);

    return 0;
}