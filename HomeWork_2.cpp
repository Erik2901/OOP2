#include <iostream>

/////// exercise 1

class Person {
protected:
    std::string name;
    int age;
    std::string sex;
    int weight;
    
public:
    Person() {};
    Person(std::string name, int age, std::string sex, int weight) {
        this->name = name;
        this->age = age;
        this->sex = sex;
        this->weight = weight;
    }
    void setName(std::string name) { this->name = name; }
    void setAge(int age) { this->age = age; }
    void setSex(int sex) { this->sex = sex; }
    void setweight(int weight) { this->weight = weight; }
    void printPerson() {
        std::cout << "Name: " << this->name << std::endl << "Age: " << this->age << std::endl << "Sex: " << this->sex << std::endl << "Weight: " << this->weight << std::endl << std::endl;
    }
};

class Student : public Person {
    int year;
    int id = 0;
    static int count() {
        static int counter = 1;
        return counter++;
    }
public:
    Student(std::string name, int age, std::string sex, int weight, int year = 1) {
        this->name = name;
        this->age = age;
        this->sex = sex;
        this->weight = weight;
        this->year = year;
        this->id = count();
    }
    void setYear(int year) { this->year = year; }
    void printStudent() {
        std::cout << "Student No: " << this->id << std::endl << "Name: " << this->name << std::endl << "Age: " << this->age << std::endl << "Sex: " << this->sex << std::endl << "Weight: " << this->weight << std::endl << "Study year(s): " << this->year << std::endl << std::endl;
    }
};

////////

////// exercise 2

class Fruit {
protected:
    std::string name;
    std::string color;

public:
    void setName(std::string name) { this->name = name; }
    void setColor(std::string color) { this->name = color; }
    std::string getName() {
        return name;
    }
    std::string getColor() {
        return color;
    }
};

class Apple : public Fruit {
public:
    Apple(std::string color = "green", std::string name = "apple") {
        this->color = color;
        this->name = name;
    }
};

class Banana : public Fruit {
public:
    Banana(std::string color = "yellow", std::string name = "banana") {
        this->color = color;
        this->name = name;
    }
};

class GrannySmith : public Apple {
public:
    GrannySmith(std::string color = "green", std::string name = "GrannySmith ") {
        this->color = color;
        this->name = name + this->name ;
    }
};

//////

int main()
{

///// exercise 1

    Student s1("Max", 21, "Male", 70, 4);
    Student s2("Ada", 22, "Female", 50, 3);
    Student s3("Jane", 18, "Female", 45, 5);
    s1.printStudent();
    s2.printStudent();
    s3.printStudent();

//////// 

//////// exercise 2

    Apple a("red");
    Banana b;
    GrannySmith c;

    std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
    std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
    std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";

////////

///// exercise 3
/*
1.Создать класс например "Game", где будет хранится переменные значения карт и методы: 
    1.Который даёт значение картам(рандомно).
    2.Раздаёт карты.
    3.Проверяет состояние карт дилера и при необходимости даёт карту дилеру(если у него не больше 17).
    4.Даёт игроку возможность застраховать карту если у дилера первая карта 10/В/Д/К.
2.Создать произвольный класс например "Player", где будет хранится информация о игроке(Например: кол-во денег, его игровые карты и т.д.) и создать методы:
    1.Проверяет выиграл игрок или проиграл.
    2.Возможность поменять ставку или удвоить.
    3.Попросить карту.
    4.Возможность разделить карты(если попались 2 одинаковых).

Думаю можно обойтись используя не более 2 класса.
Конечно тут описаны 8 метода но при написании игры думаю придётся написать и использовать еше несколько.

    
*/
    system("pause");
    return 0;
}
