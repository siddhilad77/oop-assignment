#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    int rollNo;
    string branch;

    void show()
    {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Branch: " << branch << endl;
    }
};

int main()
{
    Student s;

    s.name = "Anjali";
    s.rollNo = 25;
    s.branch = "AIML";

    s.show();

    return 0;
}
