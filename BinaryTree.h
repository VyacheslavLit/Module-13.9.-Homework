#pragma once
#include <string>

//����� Name ��������� ������� �������� �����.
//��������:
//��������� ��������, ��� ��� ����� � ���� �� �����;
//����� ���������� ���j�� ��������;
//����� ������ �� ����� ���� ������� ���������;
//����� ����������� � ������ �� ����� ������� 3-� �����������.
class Name {
public:
    struct name { // ��������� ����
        name(std::string name):_name(name) 
        {   
            parent = nullptr;
            child = nullptr;
        };
        ~name() 
        {
            // ������ �� ����� ������
            if (child != nullptr)
                delete child;
        }
        name* parent; // ������������ ����
        name* child; // ����� ����
        std::string _name; // ������ - ����� �����
    };

    Name() { root = nullptr; }
    ~Name() {if (root != nullptr) delete root; }

    void addInt(std::string names);
    void print();

    void quest();

private:
    int count = 0;
    name* root; // �������� ����
    void questPrint(name* current);
};