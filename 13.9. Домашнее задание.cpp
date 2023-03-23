// 13.9. Домашнее задание.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <Windows.h>
#include "BinaryTree.h"

//данная программа принимает на вход имена, 
//форммирует из них цеочку знакомств и 
//выводит на экран цепочки 3-х рукопожатий

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Name name;
    name.addInt("Олег");
    name.addInt("Никита");
    name.addInt("Настя");
    name.addInt("Ваня");
    name.addInt("Женя");

    name.print();

    name.quest();
    return 0;
}
