#include "Student.h"

Student::Student(int id, std::string name, std::vector<Course> courses): 
    _id(id), _name(name), _courses(courses) {}

std::string Student::getName() const {
    return _name;
}

void Student::setName(std::string name) {
    _name = name;
}

int Student::getID() const {
    return _id;
}

void Student::setID(int id) {
    _id = id;
}

double Student::totalGrade() {
    return 1.0;
}

void Student::print() {
    std::cout << "Student Id: " << _id << ", name: " << _name << std::endl;
};

