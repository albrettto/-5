#pragma once
#include <iostream>

using namespace std;

class Tree {
private:
    string class_name = "Tree";
public:
    string fruit;
    int age;
    Tree() {
        fruit = "";
        age = 0;
        cout << "����������� Tree()\n";
    }
    Tree(string fruit, int age) {
        this->fruit = fruit;
        this->age = age;
        cout << "����������� Tree(string fruit)\n";
    }
    Tree(Tree& wood) {
        fruit = wood.fruit;
        age = wood.age;
        cout << "����������� Tree(Tree& wood)\n";
    }
    virtual string classname() {
        cout << "����������� ����� classname Tree\n";
        return class_name;
    }
    virtual bool isA(string cn) {
        cout << "����������� ����� isA Tree\n";
        if (class_name == cn)
            return true;
        else
            return false;
    }
    void method() {
        cout << "����� Tree\n";
    }
    virtual ~Tree() {
        cout << "����������� ���������� Tree\n";
    }
};

class Apple_Tree : public Tree {
private:
    string class_name = "Apple_Tree";
public:
    Apple_Tree() {
        fruit = "Apple";
        age = 0;
        cout << "����������� Apple_Tree()\n";
    }
    Apple_Tree(string fruit, int age) {
        this->fruit = fruit;
        this->age = age;
        cout << "����������� Apple_Tree(string fruit)\n";
    }
    Apple_Tree(Apple_Tree& wood) {
        fruit = wood.fruit;
        age = wood.age;
        cout << "����������� Apple_Tree(Tree& wood)\n";
    }
    string classname() {
        cout << "������������� ����� classname Apple_Tree\n";
        return class_name;
    }
    bool isA(string cn) {
        cout << "������������� ����� isA Apple_Tree\n";
        if (class_name == cn)
            return true;
        else
            return false;
    }
    void method() {
        cout << "����� Apple_Tree\n";
    }
    ~Apple_Tree() {
        cout << "���������� Apple_Tree\n";
    }
};

class Pear_Tree : public Tree {
private:
    string class_name = "Pear_Tree";
public:
    Pear_Tree() {
        fruit = "Pear";
        age = 0;
        cout << "����������� Pear_Tree()\n";
    }
    Pear_Tree(string fruit, int age) {
        this->fruit = fruit;
        this->age = age;
        cout << "����������� Pear_Tree(string fruit)\n";
    }
    Pear_Tree(Pear_Tree& wood) {
        fruit = wood.fruit;
        age = wood.age;
        cout << "����������� Pear_Tree(Tree& wood)\n";
    }
    string classname() {
        cout << "������������� ����� classname Pear_Tree\n";
        return class_name;
    }
    bool isA(string cn) {
        cout << "������������� ����� isA Pear_Tree\n";
        if (class_name == cn)
            return true;
        else
            return false;
    }
    void method() {
        cout << "����� Pear_Tree\n";
    }
    ~Pear_Tree() {
        cout << "���������� Pear_Tree\n";
    }
};