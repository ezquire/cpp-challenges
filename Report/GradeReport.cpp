#include "GradeReport.h"

GradeReport::GradeReport(Student student, std::vector<Mark> marks, 
                         std::vector<Test> tests, 
                         std::vector<Course> courses): _student(student),
                                                       _marks(marks),
                                                       _tests(tests),
                                                       _courses(courses) {}
