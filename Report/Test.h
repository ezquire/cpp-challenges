#ifndef TEST_H
#define TEST_H

#include <iostream>

class Test {
public:
    Test() = default;
    Test(int, double, double);
    int getId() const;
    void setId(int);
    double getWeight() const;
    void setWeight(double);
    double getMark() const;
    void setMark(double);
    void print();
private:
    int _id;
    double _weight;
    double _mark;
};

#endif //TEST_H
