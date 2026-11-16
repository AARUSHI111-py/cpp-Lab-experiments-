#include <iostream>
#include <memory>
#include <vector>

using namespace std;
using namespace chrono;

class Student
{
public:
    int roll;
    string name;

    Student(int r, string n)
    {
        roll = r;
        name = n;
        cout << "Memory allocated for " << name << endl;
    }

    ~Student()
    {
        cout << "Memory released for " << name << endl;
    }

    void display()
    {
        cout << "Roll No: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    cout << "\n--- UNIQUE POINTER ---\n";

    auto start = high_resolution_clock::now();

    {
        unique_ptr<Student> s1 =
            make_unique<Student>(101, "Aarushi");

        s1->display();

        cout << "\n--- SHARED POINTER ---\n";

        shared_ptr<Student> s2 =
            make_shared<Student>(102, "Rahul");

        shared_ptr<Student> s3 = s2;

        s2->display();

        cout << "Reference Count: "
             << s2.use_count() << endl;
    }

    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>
                    (stop - start);

    cout << "\nExecution Time: "
         << duration.count() << " microseconds";

    cout << "\nMemory automatically released!";
    return 0;
}
