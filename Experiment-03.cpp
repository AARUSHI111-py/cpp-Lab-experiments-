#include <iostream>
#include <cstring>
using namespace std;

class Student
{
    char *name;

public:
    // Default constructor
    Student()
    {
        name = new char[10];
        strcpy(name, "Unknown");
        cout << "Default constructor" << endl;
    }

    // Parameterized constructor
    Student(const char *n)
    {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        cout << "Parameterized constructor" << endl;
    }

    // Copy Constructor
    Student(const Student &s)
    {
        name = new char[strlen(s.name) + 1];
        strcpy(name, s.name);
        cout << "copy constructor" << endl;
    }

    // Copy Assignment
    Student& operator=(const Student &s)
    {
        if (this != &s)
        {
            delete[] name;
            name = new char[strlen(s.name) + 1];
            strcpy(name, s.name);
        }
        cout << "copy assignment" << endl;
        return *this;
    }

    // Move Constructor
    Student(Student &&s)
    {
        name = s.name;
        s.name = nullptr;
        cout << "Move constructor" << endl;
    }

    // Move Assignment
    Student& operator=(Student &&s)
    {
        if (this != &s)
        {
            delete[] name;
            name = s.name;
            s.name = nullptr;
        }
        cout << "Move assignment" << endl;
        return *this;
    }

    // Destructor
    ~Student()
    {
        delete[] name;
        cout << "Destructor" << endl;
    }
};

int main()
{
    Student s1;
    Student s2("Anushi");
    Student s3 = s2;
    Student s4 = s2;
    Student s5 = Student("Aastha");
    Student s6;

    s6 = Student("Jack");

    return 0;
}
