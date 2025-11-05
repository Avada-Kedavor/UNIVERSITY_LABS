// teacher.cpp
#include "teacher.h"
#include <iostream>

Teacher::Teacher(const std::string& n, int a, const std::string& s) : Person(n, a), subject(s) {}

void Teacher::Show() const {
    std::cout << "Teacher: Name = " << name << ", Age = " << age << ", Subject = " << subject << std::endl;
}
