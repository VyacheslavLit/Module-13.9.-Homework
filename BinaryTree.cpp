#include "BinaryTree.h"
#include <iostream>

//метод добавления нового человека
void Name::addInt(std::string names) {
    if (root == nullptr) {
        // если дерево пустое, то новый элемент станет корнем
        root = new name(names);
    }
    else {
        name* current = root; // начинаем с корня
        name* newName = nullptr;
        while (newName == nullptr) 
        {
            if (current->child != nullptr)
            {
                current = current->child;
                continue;
            }
            newName = new name(names);
            current->child = newName;
        }
    }
}

//метод вывода на экран всей цепочки знакомств
void Name::print()
{
    name* current = root; // начинаем с корня
    if (current == nullptr)return;
    std::cout << current->_name;
    while (current->child != nullptr)
    {
        current = current->child;
        std::cout << " ---> " << current->_name;
    }
    std::cout << std::endl;
}

//метод определения цепочки 3-х рукопожатий
void Name::quest()
{
    name* current = root; // начинаем с корня
    while(current->child->child->child != nullptr)
    {
        count++;
        questPrint(current);
        current = current->child;
    }
}

//дочерний метод, метода quest()
//выводящий на экран цепочку 3-х рукопожатий
void Name::questPrint(Name::name* current)
{
    std::cout << count << ". ";
    for (int i = 0; i < 3; i++)
    {
        std::cout << current->_name << " ----> ";
        current = current->child;
    }
    std::cout << current->_name << std::endl;
}
