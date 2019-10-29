#include "GradeReport.h"

#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

std::vector<Student> getStudentData(std::string filename) {
    std::vector<Student> data;
    std::string line, id, name;
    std::ifstream fin(filename);
    getline(fin, line); // gets rid of the column names
    while(getline(fin, line)) {
        std::istringstream ss(line);
        getline(ss, id, ',');
        getline(ss, name, ',');
        Student s(name, stoi(id));
        data.push_back(s);
    }
    fin.close();
    return data;
}

std::vector<Mark> getMarkData(std::string filename) {
    std::vector<Mark> data;
    std::string line, test_id, student_id, mark; 
    std::ifstream fin(filename);
    getline(fin, line); // gets rid of the column names
    while(getline(fin, line)) {
        std::istringstream ss(line);
        getline(ss, test_id, ',');
        getline(ss, student_id, ',');
        getline(ss, mark, ',');
        Mark m(stoi(test_id), stoi(student_id), stod(mark));
        data.push_back(m);
    }
    fin.close();
    return data;
}

std::vector<Test> getTestData(std::string filename) {
    std::vector<Test> data;
    std::string line, id, course_id, weight; 
    std::ifstream fin(filename);
    getline(fin, line); // gets rid of the column names
    while(getline(fin, line)) {
        std::istringstream ss(line);
        getline(ss, id, ',');
        getline(ss, course_id, ',');
        getline(ss, weight, ',');
        Test t(stoi(id), stoi(course_id), stod(weight));
        data.push_back(t);
    }
    fin.close();
    return data;
}

std::vector<Course> getCourseData(std::string filename) {
    std::vector<Course> data;
    std::string line, id, name, teacher; 
    std::ifstream fin(filename);
    getline(fin, line); // gets rid of the column names
    while(getline(fin, line)) {
        std::istringstream ss(line);
        getline(ss, id, ',');
        getline(ss, name, ',');
        getline(ss, teacher, ',');
        Course c(stoi(id), name, teacher);
        data.push_back(c);
    }
    fin.close();
    return data;
}

int main(int argc, char*argv[]) {
    if(argc < 5) {
        std::cout << "Incorrect number of arguments\n";
        std::cout << "Usage: ./report courses.csv tests.csv students.csv ";
        std::cout << "marks.csv\n";
        exit(1);
    }
    std::string courses = argv[1];
    std::string tests = argv[2];
    std::string students = argv[3];
    std::string marks = argv[4];
    if(courses != "courses.csv" || 
       tests != "tests.csv" || 
       students != "students.csv" ||
       marks != "marks.csv") {
        std::cout << "Incorrect order of filenames\n";
        std::cout << "Usage: ./report courses.csv tests.csv students.csv ";
        std::cout << "marks.csv\n";
        exit(1);
    }

    auto course_data = getCourseData(courses);
    auto test_data = getTestData(tests);
    auto student_data = getStudentData(students);
    auto mark_data = getMarkData(marks);

    for(auto m : mark_data)
        m.print();

    for(auto s : student_data)
        s.print();

    for(auto t : test_data)
        t.print();

    for(auto c : course_data)
        c.print();

    return 0;
}
