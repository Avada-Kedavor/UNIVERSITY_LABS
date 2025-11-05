// student.h
#ifndef STUDENT_H
#define STUDENT_H

#include "person.h"
#include <string>

class Student : public Person {
protected:
    std::string major;

public:
    Student(const std::string& n, int a, const std::string& m);
    void Show() const override;
};

#endif