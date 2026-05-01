// Create a class student with private variables name and age. Take input using cin and diplay cout
#include <iostream>
#include <string>  
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student student;
    student.input();
    student.display();
    return 0;
}

//Create a class add with 2 numbers. Take input and print there sum.
#include <iostream>
using namespace std;

class Add {
private:
    int num1;
    int num2;

public:
    void input() {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
    }

    void printSum() {
        cout << "Sum: " << num1 + num2 << endl;
    }
};

int main() {
    Add add;
    add.input();
    add.printSum();
    return 0;
}

// Create a class rectangle with length and breadth. Take input and print area.

#include <iostream>
using namespace std;

class area{
private:
    int length;
    int breadth;

public 
}