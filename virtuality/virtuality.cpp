#include <iostream>
#include "Tree.h"
#include "Base.h"

using namespace std;

void func1(Base obj) {
    cout << "***** func1 *****\n";
}

void func2(Base* obj) {
    cout << "***** func2 *****\n";
}

void func3(Base& obj) {
    cout << "***** func3 *****\n";
}

void decor(int coun) {
    int n = 58;
    cout << endl;
    for (int i = 0; i < n; ++i)
        cout << "*";
    cout << " " << coun << " ";
    for (int i = 0; i < n; ++i)
        cout << "*";
    cout << endl << endl;
}
int main()
{
    setlocale(0, "");
    decor(1);
    cout << "Создание объектов классов дерево, яблоня и грушевое дерево(приведенное к классу дерево):\n";
    Tree* tree1 = new Tree();
    Apple_Tree* apple_tree = new Apple_Tree();
    Tree* tree2 = new Pear_Tree();

    decor(2);
    cout << "Проверим на принадлежность к определенному классу:\n\n";

    cout << "(Проверка через метод isA)\n";
    cout << tree1->isA("Tree") << endl;
    cout << apple_tree->isA("Apple_Tree") << endl;
    cout << tree2->isA("Tree") << endl;

    cout << "\n(Проверка через метод classname)\n";
    cout << tree1->classname() << endl;
    cout << apple_tree->classname() << endl;
    cout << tree2->classname() << endl;

    decor(3);
    cout << "Безопасное приведение типов (dynamic_cast):\n";
    Pear_Tree* pear_tree = dynamic_cast<Pear_Tree*>(tree2);
    cout << pear_tree->classname() << endl;
    pear_tree->method();
    tree2->method();

    decor(4);
    Pear_Tree* pear_tree1 = new Pear_Tree;
    cout << "\nОпасное приведение типов:\n";
    if (tree2->isA("Pear_Tree"))
        pear_tree1 = (Pear_Tree*)tree2;
    cout << pear_tree1->classname() << endl;

    decor(5);
    cout << "Передача объектов классов Base и Desk в качестве параметров функций:\n\n";
    
    cout << "\tBase:\n";
    Base base1;
    func1(base1);
    cout << endl;
    Base* base2 = new Base();
    func2(base2);
    cout << endl;
    Base base3;
    func3(base3);
    cout << endl;

    cout << "\tDesk:\n";
    Desk desk1;
    func1(desk1);
    cout << endl;
    Desk* desk2 = new Desk();
    func2(desk2);
    cout << endl;
    Desk desk3;
    func3(desk3);
    cout << endl;
    decor(0);
}