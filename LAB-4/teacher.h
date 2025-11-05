// teacher.h
#ifndef TEACHER_H
#define TEACHER_H

#include "person.h"
#include <string>

class Teacher : public Person {
protected:
    std::string subject;

public:
    Teacher(const std::string& n, int a, const std::string& s);
    void Show() const override;
};

#endif
