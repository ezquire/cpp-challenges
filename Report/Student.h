#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>
#include <vector>

#include "Course.h"

class Student {
public:
    Student() = default;
    Student(int, std::string, std::vector<Course>);
    std::string getName() const;
    void setName(std::string);
    int getID() const;
    void setID(int);
    double totalGrade();
    void print();
private:
    int _id;
    std::string _name;
    std::vector<Course> _courses;
};

#endif //STUDENT_H
