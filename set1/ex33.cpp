#include <iostream>

enum enGrade { A, B, C, D, E, F };

struct stStudent
{
    short int   Mark;
    enGrade     Grade;
};

enGrade getStudentGrade(short int Mark)
{
    if (Mark >= 90)
    {
        return (enGrade::A);
    }
    else if (Mark >= 80)
    {
        return (enGrade::B);
    }
    else if (Mark >= 70)
    {
        return (enGrade::C);
    }
    else if (Mark >= 60)
    {
        return (enGrade::D);
    }
    else if (Mark >= 50)
    {
        return (enGrade::E);
    }
    else
    {
        return (enGrade::F);
    }
}

short int readStudentMark(void)
{
    short int StudentMark;

    std::cout << "Please enter your mark : ";
    std::cin >> StudentMark;

    return (StudentMark);
}

bool StudentMarkIsNotValid(short int StudentMark)
{
    return (StudentMark < 0 || StudentMark > 100);
}

void printError(void)
{
    std::cout << "Mark is Not! Enter a Mark between 0 ~ 100!\n\n";
}

short int readValidStudentMark(void)
{
    short int StudentMark = readStudentMark();

    while (StudentMarkIsNotValid(StudentMark) == true)
    {
        printError();
        StudentMark = readStudentMark();
    }

    return (StudentMark);
}

stStudent readStudent(void)
{
    stStudent Student;

    Student.Mark  = readValidStudentMark();
    Student.Grade = getStudentGrade(Student.Mark);

    return (Student);
}

void printStudentGrade(enGrade StudentGrade)
{
    char Grade[6] = { 'A', 'B', 'C', 'D', 'E', 'F' };

    std::cout << "Your Grade is : " << Grade[StudentGrade] << std::endl;
}

int main(void)
{
    printStudentGrade(readStudent().Grade);
    return (0);
}
