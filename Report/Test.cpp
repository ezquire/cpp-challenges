#include "Test.h"

Test::Test(int id, double weight, double mark): _id(id),
                                                _weight(weight),
                                                _mark(mark) {}
int Test::getId() const {
    return _id;
}

void Test::setId(int id) {
    _id = id;
}

double Test::getWeight() const {
    return _weight;
}

void Test::setWeight(double weight) {
    _weight = weight;
}

double Test::getMark() const {
    return _mark;
}

void Test::setMark(double mark) {
    _mark = mark;
}

void Test::print() {
    std::cout << "Test id: " << _id << " Mark: " << _mark;
    std::cout << " Weight: " << _weight << std::endl;
}
