#include <iostream>
#include <cmath>

float getCircleArea(int R)
{
    const float PI = 3.141592653589793238;

    return (PI * R*R);
}

float readCircle(void)
{
    int R;

    std::cout << "Please enter R : ";
    std::cin >> R;

    return (getCircleArea(R));
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
