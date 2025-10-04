#include <iostream>
#include <cmath>

float getCircleArea(int D)
{
    const float PI = 3.141592653589793238;

    return ((PI * D*D) / 4);
}

float readCircle(void)
{
    float D;

    std::cout << "Please enter Diameter : ";
    std::cin >> D;

    return (getCircleArea(D));
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
