#include <iostream>

void read3Numbers(int &A, int &B, int &C)
{
    std::cout << "Please enter Number 1 : ";
    std::cin >> A;

    std::cout << "Please enter Number 2 : ";
    std::cin >> B;

    std::cout << "Please enter Number 3 : ";
    std::cin >> C;
}

int  getMaxOf(int A, int B, int C)
{
    if (A > B && A > C)
    {
        return (A);
    }
    else if (B > C)
    {
        return (B);
    }
    else
    {
        return (C);
    }
}

void printMaxNumber(int Max)
{
    std::cout << "Max Number is : " << Max << std::endl;
}

int main(void)
{
    int A, B, C;

    read3Numbers(A, B, C);
    printMaxNumber(getMaxOf(A, B, C));

    return (0);
}
