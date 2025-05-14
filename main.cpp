#include<iostream>
#include "grades.h"


int main (){
     int grades = 0;
    std::cout << "Enter the number of grades you need to input: " << std::endl;
    std::cin >> grades;
    std::vector<int>num(grades);
    std::cout << "You have entered you need to insert " << grades << " grades into the system."<< std::endl;
    std::cout << std::endl;
    std::cout << "Now enter the grades you need to stay recorded." << std::endl;

    for (int i = 0; i < grades; i++){
        std::cin >> num.at(i);
        std::cout << "The following grades you have entered are: " << i+1 << ".) "<< num.at(i) << std::endl;
    }


    return 0;
}