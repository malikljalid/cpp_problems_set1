#include <iostream>
#include <cmath>

float getCircleArea(float A, float B)
{
    const float PI    = 3.141592653589793238;
    float       ALPHA = (2*A - B) / (2*A + B);

    return (PI * pow(B/2, 2) * ALPHA);
}

float readCircle(void)
{
    float A, B;

    std::cout << "Please enter triangle side A : ";
    std::cin >> A;

    std::cout << "Please enter triangle side B : ";
    std::cin >> B;

    return (getCircleArea(A, B));
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
