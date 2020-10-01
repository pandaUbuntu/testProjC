#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

class Human
{
public:
    string name;
};

class Student : public Human
{
private:
    string name = "";
public:
    string group;

    Student(string name) {
        this->name = name;
    }

    void learn()
    {
        cout << this->name << ": я учусь!" << endl;
    }
};

class Teacher : public Human
{
private:
    string name = "Panda Alexander";
public:
    string subject;
    void teach()
    {
        cout << endl << "teacher: я учу детей для их развития" << endl;
    }
};

class Derector : public Human
{
private:
    string name = "Наталя Петровна";
public:
    string admin;
    void menage()
    {
        cout << endl << "derector: я слежу, отвечаю за всю школу" << endl;
    }
};

class Cleaner : public Human
{
private:
    string name = "Дисковый Диск";
public:
    string storageRoom;
    string mop;
    void clean()
    {
        cout << endl << "cleaner: я прибираюсь по всей школе" << endl;
    }
};

class Nurse : public Human
{
private:
    string name = "Крыманчук Стаиский";
public:
    string MedBay;
    string firstAidKit;
    void heal()
    {
        cout << endl << "nurse: я помогаю детям если им плохо" << endl;
    }
};

class Security : public Human
{
private:
    string name = "Паша Хрыманчук";
public:
    string securityRoom;
    string camera;
    void guard()
    {
        cout << "и охраняю школу" << endl;
    }

    void follow()
    {
        cout << endl << "security: я слежу за всей школой ";
    }
};

class Cook : public Human
{
private:
    string name = "Паварихивна Лагивна";
public:
    string kitchen;
    string cooker;
    void cooks()
    {
        cout << endl << "cook: я готовлю еду для учеников" << endl;
    }
};

class Secretary : public Human
{
private:
    string name = "Сернокальвна Кльовая";
public:
    string SecretaryRoom;
    void assist()
    {
        cout << endl << "secretary: я помогаю директору" << endl;
    }
};

class Repairer : public Human
{
private:
    string name = "Каменьщик Каменовый";
public:
    string utilityRoom;
    void repair()
    {
        cout << endl << "repairer: я чиню то что сломалось :)" << endl;
    }
};

class ClassTeacher : public Human
{
private:
    string name = "Наталя Викторивна";
public:
    string ownGroup;
    void followTheGroup()
    {
        cout << endl << "classTeacher: я слежу за своей группой" << endl;
    }
};

int main()
{
    setlocale(0, "");

    cout << cin.get();
}