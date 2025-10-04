#include <iostream>
#include <cmath>

float getCircleArea(float A, float B, float C)
{
    const float PI    = 3.141592653589793238;
    float       P     = (A + B + C) / 2;
    float       ALPHA = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));

    return (PI * ALPHA * ALPHA);
}

float readCircle(void)
{
    float A, B, C;

    std::cout << "Please enter triangle side A : ";
    std::cin >> A;

    std::cout << "Please enter triangle side B : ";
    std::cin >> B;

    std::cout << "Please enter triangle side B : ";
    std::cin >> C;

    return (getCircleArea(A, B, C));
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
