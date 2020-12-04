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
        cout << "Конструктор Tree()\n";
    }
    Tree(string fruit, int age) {
        this->fruit = fruit;
        this->age = age;
        cout << "Конструктор Tree(string fruit)\n";
    }
    Tree(Tree& wood) {
        fruit = wood.fruit;
        age = wood.age;
        cout << "Конструктор Tree(Tree& wood)\n";
    }
    virtual string classname() {
        cout << "Виртуальный метод classname Tree\n";
        return class_name;
    }
    virtual bool isA(string cn) {
        cout << "Виртуальный метод isA Tree\n";
        if (class_name == cn)
            return true;
        else
            return false;
    }
    void method() {
        cout << "Метод Tree\n";
    }
    virtual ~Tree() {
        cout << "Виртуальный деструктор Tree\n";
    }
};

class Apple_Tree : public Tree {
private:
    string class_name = "Apple_Tree";
public:
    Apple_Tree() {
        fruit = "Apple";
        age = 0;
        cout << "Конструктор Apple_Tree()\n";
    }
    Apple_Tree(string fruit, int age) {
        this->fruit = fruit;
        this->age = age;
        cout << "Конструктор Apple_Tree(string fruit)\n";
    }
    Apple_Tree(Apple_Tree& wood) {
        fruit = wood.fruit;
        age = wood.age;
        cout << "Конструктор Apple_Tree(Tree& wood)\n";
    }
    string classname() {
        cout << "НеВиртуальный метод classname Apple_Tree\n";
        return class_name;
    }
    bool isA(string cn) {
        cout << "НеВиртуальный метод isA Apple_Tree\n";
        if (class_name == cn)
            return true;
        else
            return false;
    }
    void method() {
        cout << "Метод Apple_Tree\n";
    }
    ~Apple_Tree() {
        cout << "Деструктор Apple_Tree\n";
    }
};

class Pear_Tree : public Tree {
private:
    string class_name = "Pear_Tree";
public:
    Pear_Tree() {
        fruit = "Pear";
        age = 0;
        cout << "Конструктор Pear_Tree()\n";
    }
    Pear_Tree(string fruit, int age) {
        this->fruit = fruit;
        this->age = age;
        cout << "Конструктор Pear_Tree(string fruit)\n";
    }
    Pear_Tree(Pear_Tree& wood) {
        fruit = wood.fruit;
        age = wood.age;
        cout << "Конструктор Pear_Tree(Tree& wood)\n";
    }
    string classname() {
        cout << "НеВиртуальный метод classname Pear_Tree\n";
        return class_name;
    }
    bool isA(string cn) {
        cout << "НеВиртуальный метод isA Pear_Tree\n";
        if (class_name == cn)
            return true;
        else
            return false;
    }
    void method() {
        cout << "Метод Pear_Tree\n";
    }
    ~Pear_Tree() {
        cout << "Деструктор Pear_Tree\n";
    }
};