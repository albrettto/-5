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

class Apple_Tree: public Tree {
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

int main()
{
    setlocale(0, "");
    Tree* tree1 = new Tree();
    Apple_Tree* apple_tree = new Apple_Tree();
    Tree* tree2 = new Pear_Tree();

    cout << "\nПроверим на принадлежность к определенному классу:\n";

    cout << "(Проверка через метод isA)\n";
    cout << tree1->isA("Tree") << endl;
    cout << apple_tree->isA("Apple_Tree") << endl;
    cout << tree2->isA("Tree") << endl;

    cout << "\n(Проверка через метод classname)\n";
    cout << tree1->classname() << endl;
    cout << apple_tree->classname() << endl;
    cout << tree2->classname() << endl;

    cout << "\nБезопасное приведение типов (dynamic_cast):\n";
    Pear_Tree* pear_tree = dynamic_cast<Pear_Tree*>(tree2);
    cout << pear_tree->classname() << endl;
    pear_tree->method();
    tree2->method();

}