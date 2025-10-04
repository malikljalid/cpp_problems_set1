#include <iostream>
#include <cmath>

float getCircleArea(float A)
{
    const float PI = 3.141592653589793238;

    return ((PI * A*A) / 4);
}

float readCircle(void)
{
    float A;

    std::cout << "Please enter square side A : ";
    std::cin >> A;

    return (getCircleArea(A));
}

void printCircleArea(float Area)
{
    std::cout << "\nCircle Area = " << Area << std::endl;
}

int main(void)
{
    printCircleArea(readCircle());
    return (0);
}
