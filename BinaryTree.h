#pragma once
#include <string>

//класс Name описывает цепочку знакомых людей.
//содержит:
//структуру человека, кто его знает и кого он знает;
//метод добавления новjго человека;
//метод вывода на экран всей цепочки знакомств;
//метод определения и вывода на экран цепочки 3-х рукопожатий.
class Name {
public:
    struct name { // структура узла
        name(std::string name):_name(name) 
        {   
            parent = nullptr;
            child = nullptr;
        };
        ~name() 
        {
            // чистим за собой память
            if (child != nullptr)
                delete child;
        }
        name* parent; // родительский узел
        name* child; // левый узел
        std::string _name; // данные - целое число
    };

    Name() { root = nullptr; }
    ~Name() {if (root != nullptr) delete root; }

    void addInt(std::string names);
    void print();

    void quest();

private:
    int count = 0;
    name* root; // корневой узел
    void questPrint(name* current);
};