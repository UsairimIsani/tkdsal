#include <iostream>
using namespace std;

class Person
{
public:
    string profession;
    int age;

    Person() : profession("unemployed"), age(16) {}
    void display()
    {
        cout << "My profession is: " << profession << endl;
        cout << "My age is: " << age << endl;
        walk();
        talk();
    }
    void walk() { cout << "I can walk." << endl; }
    void talk() { cout << "I can talk." << endl; }
};

// MathsTeacher class is derived from base class Person.
class MathsTeacher : public Person
{
public:
    MathsTeacher()
    {
        cout << "Hello" << endl;
    }
    void teachMaths()
    {
        cout << "I can teach Maths." << endl;
        Person::profession = "Teacher Pande";
    }
};

// Footballer class is derived from base class Person.
class Footballer : public Person
{
public:
    void playFootball() { cout << "I can play Football." << endl; }
};

int main()
{
    MathsTeacher teacher;
    // teacher.profession = "Teacher";
    teacher.age = 23;
    teacher.teachMaths();
    teacher.display();

    Footballer footballer;
    footballer.profession = "Footballer";
    footballer.age = 19;
    footballer.display();
    footballer.playFootball();

    return 0;
}