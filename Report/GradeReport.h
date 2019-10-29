#ifndef GRADE_REPORT_H
#define GRADE_REPORT_H

#include <vector>

#include "Student.h"
#include "Mark.h"
#include "Course.h"
#include "Test.h"

class GradeReport {
public:
    GradeReport() = default;
    GradeReport(Student, std::vector<Mark>, std::vector<Test>, 
                std::vector<Course>);
private:
    Student _student;
    std::vector<Mark> _marks;
    std::vector<Test> _tests;
    std::vector<Course> _courses;
};

#endif
