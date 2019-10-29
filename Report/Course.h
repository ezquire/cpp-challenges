#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <iostream>
#include <vector>

#include "Test.h"

class Course {
public:
    Course() = default;
    Course(int, std::string, std::string, std::vector<Test>);
    int getId() const;
    void setId(int);
    std::string getName() const;
    void setName(std::string);
    std::string getTeacher() const;
    void setTeacher(std::string);
    void print();
private:
    int _id;
    std::string _name;
    std::string _teacher;
    std::vector<Test> _tests;
};

#endif // COURSE_H
