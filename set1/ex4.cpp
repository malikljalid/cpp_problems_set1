#include <iostream>

enum enCandidatStatus { HIRED, REJECTED };

struct stCandidat
{
    bool        HasDriverLicense;
    int         Age;
};

stCandidat  readCandidat(void)
{
    stCandidat Candidat;

    std::cout << "What is your Age ? : ";
    std::cin >> Candidat.Age;

    std::cout << "Do you have a Driver License ? (Yes -> 1) / (No -> 0) : ";
    std::cin >> Candidat.HasDriverLicense;

    return (Candidat);
}

enCandidatStatus getCandidatStatus(stCandidat Candidat)
{
    if (Candidat.Age > 21 && Candidat.HasDriverLicense == true)
    {
        return (enCandidatStatus::HIRED);
    }
    else
    {
        return (enCandidatStatus::REJECTED);
    }
}

void printCandidatStatus(enCandidatStatus CandidatStatus)
{
    if (CandidatStatus == HIRED)
    {
        std::cout << "Congrats! You are HIRED!\n";
    }
    else
    {
        std::cout << "Good luck next time, Your are REJECTED for now.\n";
    }
}

int main(void)
{
    printCandidatStatus(getCandidatStatus(readCandidat()));
    return (0);
}
