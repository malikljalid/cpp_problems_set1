#include <iostream>

int getRectangleArea(int A, int B)
{
    return (A * B);
}

int readRectangle(void)
{
    int A, B;

    std::cout << "Please enter A : ";
    std::cin >> A;

    std::cout << "Please enter B : ";
    std::cin >> B;

    return (getRectangleArea(A, B));
}

void printRectangleArea(int Area)
{
    std::cout << "Rectagle area : " << Area << std::endl;
}

int main(void)
{
    printRectangleArea(readRectangle());
    return (0);
}
