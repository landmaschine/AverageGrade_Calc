#include <iostream>
#include "../include/averageGrade_f.h"

double averageGrade_f(int a, int array[])
{
    float combinedArr = 0;

    for (int i = 0; i < a; i++)
    {
        combinedArr += array[i];
    }
    combinedArr = combinedArr / a;

    return combinedArr;
}

void UserInput_f(int nmbGrades, int gradenmbs, int length, int array[]) {
        while (nmbGrades >= gradenmbs)
    {
        int temp = 0;
        length++;
        std::cout << gradenmbs << ". Grade: ";
        std::cin >> temp;
        gradenmbs++;
        if (temp <= 5 && temp >= 1)
        {
            array[length] = temp;
        }
        else
        {
            std::cout << "Enter a Valid Grade!" << std::endl;
            length--;
            gradenmbs--;
        }
    }
}