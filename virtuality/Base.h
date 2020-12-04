#pragma once
#include <iostream>

using namespace std;

class Base {
public:
    Base() {
        cout << "Конструктор Base()\n";
    }
    Base(Base* obj) {
        cout << "Конструктор Base(Base* obj)\n";
    }
    Base(Base& obj) {
        cout << "Конструктор Base(Base& obj)\n";
    }
    ~Base() {
        cout << "Деструктор ~Base()\n";
    }
};

class Desk : public Base {
public:
    Desk() {
        cout << "Конструктор Desk()\n";
    }
    Desk(Desk* obj) {
        cout << "Конструктор Desk(Desk* obj)\n";
    }
    Desk(Desk& obj) {
        cout << "Конструктор Desk(Desk& obj)\n";
    }
    ~Desk() {
        cout << "Деструктор ~Desk()\n";
    }
};
