#include <iostream>

using namespace std;
class Tree {
private:
    string class_name = "Tree";
public:
    string fruit;
    Tree() {
        fruit = "";
        cout << "Конструктор Tree()";
    }
    Tree(string fruit) {
        this->fruit = fruit;
        cout << "Конструктор Tree(string fruit)";
    }
    Tree(Tree& wood) {
        fruit = wood.fruit;
        cout << "Конструктор Tree(Tree& wood)";
    }
    virtual string classname() {
        cout << "Виртуальный метод classname Tree";
        return class_name;
    }
    virtual bool isA(string cn) {
        if (class_name == cn)
            return true;
        else
            return false;
    }
    virtual ~Tree() {
        cout << "Виртуальный деструктор Tree";
    }
};

int main()
{
}
