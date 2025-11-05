// student.cpp
#include "student.h"
#include <iostream>

Student::Student(const std::string& n, int a, const std::string& m) : Person(n, a), major(m) {}

void Student::Show() const {
    std::cout << "Student: Name = " << name << ", Age = " << age << ", Major = " << major << std::endl;
}