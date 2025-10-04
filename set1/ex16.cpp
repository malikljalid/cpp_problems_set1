#include <iostream>
#include <cmath>

float getRectangleArea(int A, int D)
{
    return (A * sqrt(D*D - A*A));
}

float readRectangle(void)
{
    int A, D;

    std::cout << "Please enter Side Area : ";
    std::cin >> A;

    std::cout << "Please enter Diagonal  : ";
    std::cin >> D;

    return (getRectangleArea(A, D));
}

void printRectangleArea(float Area)
{
    std::cout << "\nRectagle Area = " << Area << std::endl;
}

int main(void)
{
    printRectangleArea(readRectangle());
    return (0);
}
