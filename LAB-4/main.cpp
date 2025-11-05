// main.cpp
#include "student.h"
#include "teacher.h"
#include "head_of_department.h"

int main() {
    // Вариант 1: Добавление в список через конструктор (раскомментировать в person.cpp)
    // Student s1("Alice", 20, "Computer Science");
    // Teacher t1("Bob", 45, "Mathematics");
    // HeadOfDepartment h1("Charlie", 50, "Physics", "Science Dept");

    // Вариант 2: Добавление в список через метод Add()
    Student* s1 = new Student("Alice", 20, "Computer Science");
    s1->Add();

    Teacher* t1 = new Teacher("Bob", 45, "Mathematics");
    t1->Add();

    HeadOfDepartment* h1 = new HeadOfDepartment("Charlie", 50, "Physics", "Science Dept");
    h1->Add();

    // Просмотр списка через статический метод класса
    Person::print();

    // Очистка памяти (для демонстрации, в реальности нужно правильно удалять список)
    delete s1;
    delete t1;
    delete h1;

    return 0;
}
