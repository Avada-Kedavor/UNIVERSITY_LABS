// head_of_department.cpp
#include "head_of_department.h"
#include <iostream>

HeadOfDepartment::HeadOfDepartment(const std::string& n, int a, const std::string& s, const std::string& d)
    : Teacher(n, a, s), department(d) {}

void HeadOfDepartment::Show() const {
    std::cout << "Head of Department: Name = " << name << ", Age = " << age
              << ", Subject = " << subject << ", Department = " << department << std::endl;
}