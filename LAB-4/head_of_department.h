// head_of_department.h
#ifndef HEAD_OF_DEPARTMENT_H
#define HEAD_OF_DEPARTMENT_H

#include "teacher.h"
#include <string>

class HeadOfDepartment : public Teacher {
protected:
    std::string department;

public:
    HeadOfDepartment(const std::string& n, int a, const std::string& s, const std::string& d);
    void Show() const override;
};

#endif