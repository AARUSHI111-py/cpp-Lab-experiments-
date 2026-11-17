// College Course Registration System 
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Colors for the terminal
string RED = "\033[31m", GREEN = "\033[32m", CYAN = "\033[36m", RESET = "\033[0m";

// Course data stored in arrays. Position 0 = course 1, position 1 = course 2, ...
string names[5]    = {"Intro to Programming", "Data Structures", "Calculus", "Physics", "English"};
string teachers[5] = {"Dr. Smith", "Dr. Patel", "Prof. Lee", "Dr. Brown", "Ms. Johnson"};
int credits[5]     = {4, 4, 3, 3, 2};
int seatsLeft[5]   = {2, 30, 40, 35, 50};
int registered[5]  = {0, 0, 0, 0, 0};      // 1 means I joined this course

// Read a number (keeps asking if the user types a letter)
int readNumber() {
    int n;
    while (!(cin >> n)) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Please enter a number: ";
    }
    return n;
}

// Add up the credits of my courses
int totalCredits() {
    int total = 0;
    for (int i = 0; i < 5; i++)
        if (registered[i] == 1) total = total + credits[i];
    return total;
}

// Show all courses in a table
void showCourses() {
    cout << CYAN << "\n=========== AVAILABLE COURSES ===========\n No | " << left << setw(21) << "Course Name" << "| " << setw(13) << "Teacher"
         << "| Credits | Seats Left\n" << RESET;
    for (int i = 0; i < 5; i++) {
        cout << " " << i + 1 << "  | " << setw(21) << names[i] << "| " << setw(13) << teachers[i]
             << "| " << setw(8) << credits[i] << "| ";
        if (seatsLeft[i] == 0) cout << RED << "FULL" << RESET << endl;      // red if no seats
        else cout << GREEN << seatsLeft[i] << RESET << endl;                // green if seats left
    }
}

void registerCourse() {
    showCourses();
    cout << "Enter course number to register: ";
    int n = readNumber() - 1;                  // -1 because arrays start at 0
    if (n < 0 || n > 4) cout << RED << "Wrong course number!\n" << RESET;
    else if (registered[n] == 1) cout << RED << "You already joined this course!\n" << RESET;
    else if (seatsLeft[n] == 0) cout << RED << "Sorry, this course is full!\n" << RESET;
    else if (totalCredits() + credits[n] > 18) cout << RED << "You cannot take more than 18 credits!\n" << RESET;
    else {
        registered[n] = 1;
        seatsLeft[n] = seatsLeft[n] - 1;
        cout << GREEN << "Done! You joined " << names[n] << ".\n" << RESET;
    }
}

void dropCourse() {
    cout << "Enter course number to drop: ";
    int n = readNumber() - 1;
    if (n < 0 || n > 4 || registered[n] == 0) cout << RED << "You are not in this course!\n" << RESET;
    else {
        registered[n] = 0;
        seatsLeft[n] = seatsLeft[n] + 1;
        cout << GREEN << "Course dropped.\n" << RESET;
    }
}

void showSchedule() {
    cout << CYAN << "\n============= MY SCHEDULE =============\n" << RESET;
    if (totalCredits() == 0) cout << "You have not joined any course yet.\n";
    for (int i = 0; i < 5; i++)
        if (registered[i] == 1) cout << " " << i + 1 << ". " << names[i] << " (" << credits[i] << " credits)\n";
    cout << "Total credits: " << totalCredits() << " / 18\n";
}

int main() {
    string studentName;
    cout << CYAN << "\n****** COLLEGE COURSE REGISTRATION ******\n" << RESET << "Enter your name: ";
    getline(cin, studentName);
    int choice = -1;
    while (choice != 0) {
        cout << "\nHello, " << studentName << "!\n";
        cout << " 1. View Courses\n 2. Register\n 3. Drop\n 4. My Schedule\n 0. Exit\nChoose: ";
        choice = readNumber();
        if (choice == 1) showCourses();
        else if (choice == 2) registerCourse();
        else if (choice == 3) dropCourse();
        else if (choice == 4) showSchedule();
        else if (choice != 0) cout << RED << "Invalid choice!\n" << RESET;
    }
    cout << GREEN << "Thank you! Goodbye.\n" << RESET;
    return 0;
}
