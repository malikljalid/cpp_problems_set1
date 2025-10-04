#include <iostream>
#include <cmath>

float getCircleArea(float L)
{
    const float PI = 3.141592653589793238;

    return ((L*L) / (4 * PI));
}

float readCircle(void)
{
    float L;

    std::cout << "Please enter Circumference L : ";
    std::cin >> L;

    return (getCircleArea(L));
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
