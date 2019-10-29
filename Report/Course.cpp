#include "Course.h"

Course::Course(int id, std::string name, std::string teach,
               std::vector<Test> tests): _id(id),
                                         _name(name),
                                         _teacher(teach),
                                         _tests(tests) {}
int Course::getId() const {
    return _id;
}

void Course::setId(int id) {
    _id = id;
}

std::string Course::getName() const {
    return _name;
}

void Course::setName(std::string name) {
    _name = name;
}

std::string Course::getTeacher() const {
    return _teacher;
}

void Course::setTeacher(std::string teach) {
    _teacher = teach;
}

void Course::print() {
    std::cout << "Course id: " << _id << " Name: " << _name;
    std::cout  << " Teacher: " <<  _teacher << std::endl;
}
