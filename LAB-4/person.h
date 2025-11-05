// person.h
#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
protected:
    std::string name;
    int age;
    Person* next;  // Для связанного списка

public:
    static Person* begin;  // Указатель на начало списка
    static void print();   // Просмотр списка

    Person(const std::string& n, int a);
    virtual ~Person();

    void Add();  // Метод для добавления в список

    virtual void Show() const = 0;  // Виртуальный метод для вывода (абстрактный)
};

#endif