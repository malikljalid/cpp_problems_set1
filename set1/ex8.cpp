#include <iostream>

enum enResult { PASS, FAIL };

enResult getStudentResult(int StudentMark)
{
    if (StudentMark >= 50)
    {
        return (enResult::PASS);
    }
    else
    {
        return (enResult::FAIL);
    }
}

enResult readStudentMark(void)
{
    int StudentMark;

    std::cout << "Please enter your mark : ";
    std::cin >> StudentMark;

    return (getStudentResult(StudentMark));
}

void printStudentResult(enResult Result)
{
    if (Result == PASS)
    {
        std::cout << "Your Result : \"PASS\"\n";
    }
    else if (Result == FAIL)
    {
        std::cout << "Your Result : \"FAIL\"\n";
    }
}

int main(void)
{
    printStudentResult(readStudentMark());
    return (0);
}
