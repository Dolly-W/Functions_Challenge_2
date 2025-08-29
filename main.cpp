#include <iostream>
#include <limits>

//Grade inputs
void inputGrades(double& g1, double& g2, double& g3) {
    std::cout << "Enter First Grade: ";
    std::cin >> g1;
    std::cout << "Enter Second Grade: ";
    std::cin >> g2;
    std::cout << "Enter Third Grade: ";
    std::cin >> g3;
}
//Grade Average Calculation
double calculateAverage(const double g1, const double g2, const double g3) {
    return (g1 + g2 + g3) / 3.0;
}
//Assign Letter Grade
char getLetterGrade(const double average) {
    if (average >= 90) {
        return 'A';
    }
    else if (average >= 80) {
        return 'B';
    }
    else if (average >= 70) {
        return 'C';
    }
    else if (average >= 60) {
        return 'D';
    }
    else {
        return 'F';
    }
}

int main() {
    //Variables
    double g1=0;
    double g2=0;
    double g3=0;
    int selection;

    //Selection screen
    do {
        std::cout << "~~Student Grade Management~~\n";
        std::cout << "Options: \n";
        std::cout << "1) Input Grades\n";
        std::cout << "2) Calculate Grade Average\n";
        std::cout << "3) Display Letter Grade\n";
        std::cout << "4) Quit\n";
        std::cin >> selection;

        switch (selection) {
            case 1:
                inputGrades(g1, g2, g3);
                break;
            case 2:
                std::cout << "Your Grade Average: " << calculateAverage(g1, g2, g3) << std::endl;
                break;
            case 3:
                std::cout << "Your Letter Grade: " << getLetterGrade(calculateAverage(g1, g2, g3)) << std::endl;
                break;
            case 4:
                std::cout << "Goodbye.\n" << std::endl;
                break;
            default:
                std::cout << "Invalid Selection. Try Again.\n";
                break;
        }
    }
    while (selection != 4);
    return 0;
}


