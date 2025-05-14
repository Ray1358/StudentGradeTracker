#ifndef CPP_PROJECTS_GRADES_H
#define CPP_PROJECTS_GRADES_H

#include <iostream>
#include <vector>


class Student{
private:
std::string id;
std::string stduentName;
std::vector<int>grades;
public:
Student(std::string studentID, std::string name, std::vector<int>studentGrades){
    name = stduentName;
    id = studentID;
    grades = studentGrades;
    std::cout << "Constructer called for student " << name << std::endl;

}
    {
    ~ Student(){
        std::cout << "destrcutor called for student: " << name << std::endl;
    }


    void Student::printGrades(){
        std::cout << "Enter the number of ghrades you need to enter for student: " << std::endl;
        int num = 0;
        cin >> num;
        std::vector<int>grades(num);
        for(int i = 0; i < grades.size(); i ++){

            std::cout << name << " grades where: " << i+1 << ".)" << grades.at(i) << "." << std::endl;
        }

    }

}


#endif // CPP_PROJECTS_GRADES_H
