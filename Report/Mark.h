#ifndef MARK_H
#define MARK_H

class Mark {
public:
    Mark() = default;
    Mark(int, int, double);
    int getTestId() const;
    void setTestId(int);
    int getStudentId() const;
    void setStudentId(int);
    double getMark() const;
    void setMark(double);
    void print();
private:
    int _test_id;
    int _student_id;
    double _mark;
};

#endif //MARK_H
