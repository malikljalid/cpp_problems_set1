#include <iostream>
#include <cmath>

float getTriangleArea(int A, int H)
{
    return ((A / (float)2) * H);
}

float readRectangle(void)
{
    int A, H;

    std::cout << "Please enter A : ";
    std::cin >> A;

    std::cout << "Please enter H  : ";
    std::cin >> H;

    return (getTriangleArea(A, H));
}

void printTriangleArea(float Area)
{
    std::cout << "\nTriangle Area = " << Area << std::endl;
}

int main(void)
{
    printTriangleArea(readRectangle());
    return (0);
}
