#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    int rollNo;
    string branch;

    void setDetails(string name, int rollNo, string branch)
    {
        this->name = name;
        this->rollNo = rollNo;
        this->branch = branch;
    }

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

    s.setDetails("Priya", 32, "Computer Science");

    s.show();

    return 0;
}
