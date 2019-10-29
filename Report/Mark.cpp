#include "Mark.h"

#include <iostream>

Mark::Mark(int test_id, int student_id, double mark): _test_id(test_id),
                                                      _student_id(student_id),
                                                      _mark(mark) {}

int Mark::getTestId() const {
    return _test_id;
}

void Mark::setTestId(int test_id) {
    _test_id = test_id;
}

int Mark::getStudentId() const { 
    return _student_id;
}
void Mark::setStudentId(int student_id) {
    _student_id = student_id;
}

double Mark::getMark() const {
    return _mark;
}

void Mark::setMark(double mark) {
    _mark = mark;
}

void Mark::print() {
    std::cout << "Test id: " << _test_id << " Student id: " << _student_id;
    std::cout << " Mark: " << _mark << std::endl;
}
