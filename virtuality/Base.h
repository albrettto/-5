#pragma once
#include <iostream>

using namespace std;

class Base {
public:
    Base() {
        cout << "����������� Base()\n";
    }
    Base(Base* obj) {
        cout << "����������� Base(Base* obj)\n";
    }
    Base(Base& obj) {
        cout << "����������� Base(Base& obj)\n";
    }
    ~Base() {
        cout << "���������� ~Base()\n";
    }
};

class Desk : public Base {
public:
    Desk() {
        cout << "����������� Desk()\n";
    }
    Desk(Desk* obj) {
        cout << "����������� Desk(Desk* obj)\n";
    }
    Desk(Desk& obj) {
        cout << "����������� Desk(Desk& obj)\n";
    }
    ~Desk() {
        cout << "���������� ~Desk()\n";
    }
};
