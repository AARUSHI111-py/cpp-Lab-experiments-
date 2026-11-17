#include <iostream>
using namespace std;

// Base class
class Person
{
protected:
    string name;
    int age;

public:
    void getPerson()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Age: ";
        cin >> age;
    }

    void showPerson()
    {
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
    }
};

// Derived class - Single Inheritancee
class Student : public Person
{
protected:
    int rollNo;
    string course;

public:
    void getStudent()
    {
        getPerson();

        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Course: ";
        cin >> course;
    }

    void showStudent()
    {
        showPerson();

        cout << "\nRoll Number: " << rollNo;
        cout << "\nCourse: " << course;
    }
};

// Derived class - Multilevel Inheritance
class GraduateStudent : public Student
{
private:
    string researchTopic;

public:
    void getGraduate()
    {
        getStudent();

        cout << "Enter Research Topic: ";
        cin >> researchTopic;
    }

    void showGraduate()
    {
        showStudent();

        cout << "\nResearch Topic: "
             << researchTopic << endl;
    }
};

int main()
{
    GraduateStudent g;

    cout << "--- UNIVERSITY MANAGEMENT ---\n";

    g.getGraduate();

    cout << "\n--- STUDENT DETAILS ---\n";

    g.showGraduate();

    return 0;
}
