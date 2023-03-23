#include "BinaryTree.h"
#include <iostream>

//����� ���������� ������ ��������
void Name::addInt(std::string names) {
    if (root == nullptr) {
        // ���� ������ ������, �� ����� ������� ������ ������
        root = new name(names);
    }
    else {
        name* current = root; // �������� � �����
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

//����� ������ �� ����� ���� ������� ���������
void Name::print()
{
    name* current = root; // �������� � �����
    if (current == nullptr)return;
    std::cout << current->_name;
    while (current->child != nullptr)
    {
        current = current->child;
        std::cout << " ---> " << current->_name;
    }
    std::cout << std::endl;
}

//����� ����������� ������� 3-� �����������
void Name::quest()
{
    name* current = root; // �������� � �����
    while(current->child->child->child != nullptr)
    {
        count++;
        questPrint(current);
        current = current->child;
    }
}

//�������� �����, ������ quest()
//��������� �� ����� ������� 3-� �����������
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
