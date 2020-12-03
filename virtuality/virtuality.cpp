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
        cout << "Конструктор Tree()";
    }
    Tree(string fruit, int age) {
        this->fruit = fruit;
        this->age = age;
        cout << "Конструктор Tree(string fruit)";
    }
    Tree(Tree& wood) {
        fruit = wood.fruit;
        age = wood.age;
        cout << "Конструктор Tree(Tree& wood)";
    }
    virtual string classname() {
        cout << "Виртуальный метод classname Tree";
        return class_name;
    }
    virtual bool isA(string cn) {
        cout << "Виртуальный метод isA Tree";
        if (class_name == cn)
            return true;
        else
            return false;
    }
    virtual ~Tree() {
        cout << "Виртуальный деструктор Tree";
    }
};

class Apple_Tree: public Tree {
private:
    string class_name = "Apple_Tree";
public:
    Apple_Tree() {
        fruit = "Apple";
        age = 0;
        cout << "Конструктор Apple_Tree()";
    }
    Apple_Tree(string fruit, int age) {
        this->fruit = fruit;
        this->age = age;
        cout << "Конструктор Apple_Tree(string fruit)";
    }
    Apple_Tree(Apple_Tree& wood) {
        fruit = wood.fruit;
        age = wood.age;
        cout << "Конструктор Apple_Tree(Tree& wood)";
    }
    string classname() {
        cout << "НеВиртуальный метод classname Apple_Tree";
        return class_name;
    }
    bool isA(string cn) {
        cout << "НеВиртуальный метод isA Apple_Tree";
        if (class_name == cn)
            return true;
        else
            return false;
    }
    ~Apple_Tree() {
        cout << "Деструктор Apple_Tree";
    }
};

class Pear_Tree : public Tree {
private:
    string class_name = "Pear_Tree";
public:
    Pear_Tree() {
        fruit = "Pear";
        age = 0;
        cout << "Конструктор Pear_Tree()";
    }
    Pear_Tree(string fruit, int age) {
        this->fruit = fruit;
        this->age = age;
        cout << "Конструктор Pear_Tree(string fruit)";
    }
    Pear_Tree(Pear_Tree& wood) {
        fruit = wood.fruit;
        age = wood.age;
        cout << "Конструктор Pear_Tree(Tree& wood)";
    }
    string classname() {
        cout << "НеВиртуальный метод classname Pear_Tree";
        return class_name;
    }
    bool isA(string cn) {
        cout << "НеВиртуальный метод isA Pear_Tree";
        if (class_name == cn)
            return true;
        else
            return false;
    }
    ~Pear_Tree() {
        cout << "Деструктор Pear_Tree";
    }
};

class Cherry_Tree : public Tree {
private:
    string class_name = "Cherry_Tree";
public:
    Cherry_Tree() {
        fruit = "Cherry";
        cout << "Конструктор Cherry_Tree()";
    }
    Cherry_Tree(string fruit, int age) {
        this->fruit = fruit;
        cout << "Конструктор Cherry_Tree(string fruit)";
    }
    Cherry_Tree(Cherry_Tree& wood) {
        fruit = wood.fruit;
        cout << "Конструктор Cherry_Tree(Tree& wood)";
    }
    string classname() {
        cout << "НеВиртуальный метод classname Cherry_Tree";
        return class_name;
    }
    bool isA(string cn) {
        cout << "НеВиртуальный метод isA Cherry_Tree";
        if (class_name == cn)
            return true;
        else
            return false;
    }
    ~Cherry_Tree() {
        cout << "Деструктор Cherry_Tree";
    }
};

int main()
{

}