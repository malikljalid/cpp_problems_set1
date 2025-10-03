#include <iostream>

struct stCandidat
{
    int  Age;
    bool HasDriverLicense;
    bool HasRecommandation;
};

stCandidat readCandidat(void)
{
    stCandidat Candidat;

    std::cout << "Please enter Your Age : ";
    std::cin >> Candidat.Age;
    
    std::cout << "Do you have a Driver License ? (Yes -> 1) / (No -> 0) : ";
    std::cin >> Candidat.HasDriverLicense;

    std::cout << "Do you have a Recommandation ? : (Yes -> 1) / (No -> 0) : ";
    std::cin >> Candidat.HasRecommandation;

    return (Candidat);
}

bool isCandidatHired(stCandidat Candidat)
{
    return ((Candidat.Age > 21 && Candidat.HasDriverLicense == true) || Candidat.HasRecommandation == true);
}

void printCandidatHiringStatus(stCandidat Candidat)
{
    if (isCandidatHired(Candidat) == true)
    {
        std::cout << "Congrats! You Are HIRED!\n";
    }
    else
    {
        std::cout << "Good Luck next time, Your application has been rejected.\n";
    }
}

int main(void)
{
    printCandidatHiringStatus(readCandidat());
    return (0);
}
