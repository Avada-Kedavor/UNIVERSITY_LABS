// person.cpp
#include "person.h"
#include <iostream>

Person* Person::begin = nullptr;  // Инициализация статической переменной

Person::Person(const std::string& n, int a) : name(n), age(a), next(nullptr) {
    // Вариант 1: Добавление в список в конструкторе базового класса
    // this->Add();  // Раскомментировать для демонстрации добавления в конструкторе
}

Person::~Person() {
    // Здесь можно реализовать удаление из списка, но для простоты опустим
}

void Person::Add() {
    if (begin == nullptr) {
        begin = this;
    } else {
        Person* current = begin;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = this;
    }
}

void Person::print() {
    Person* current = begin;
    while (current != nullptr) {
        current->Show();
        current = current->next;
    }
}
