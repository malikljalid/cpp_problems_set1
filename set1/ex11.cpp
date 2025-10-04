#include <iostream>
#include <cmath>

enum enClassResult { PASS, FAIL };

struct stClass
{
    short int     Marks[3];
    float         Average;
    enClassResult Result;
};


float getClassAverage(int SumOfMarks)
{
    return (SumOfMarks / (float)3);
}

enClassResult getClassResult(float AverageOfClass)
{
    if (AverageOfClass >= 50)
    {
        return (enClassResult::PASS);
    }
    else
    {
        return (enClassResult::FAIL);
    }
}

stClass readClassMarks(void)
{
    stClass Class;
    int     Sum = 0;

    for (int i = 0; i < 3; i++)
    {
        std::cout << "Please enter Number " << i << " : ";
        std::cin >> Class.Marks[i];
    
        Sum += Class.Marks[i];
    }

    Class.Average = getClassAverage(Sum);
    Class.Result  = getClassResult(Class.Average);

    return (Class);
}

void printResultOfClass(stClass Class)
{
    std::string Res[2] = {"PASS", "FAIL"};

    std::cout << "Average of Class : " << round(Class.Average) << std::endl;
    std::cout << "Result of Class  : " << Res[Class.Result] << std::endl;
}

int main(void)
{
    printResultOfClass(readClassMarks());
    return (0);
}
