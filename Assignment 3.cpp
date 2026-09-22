#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    string name;
    int employeeId;
    string department;
    double salary;

    void show()
    {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employeeId << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee e;

    e.name = "Rahul";
    e.employeeId = 101;
    e.department = "HR";
    e.salary = 45000;

    e.show();

    return 0;
}
