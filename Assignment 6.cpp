#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    string name;
    int employeeId;

    // Constructor
    Employee()
    {
        cout << "Employee record created." << endl;
    }

    // Destructor
    ~Employee()
    {
        cout << "Employee record removed from memory." << endl;
    }

    void show()
    {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employeeId << endl;
    }
};

int main()
{
    Employee e;

    e.name = "Aarav";
    e.employeeId = 105;

    e.show();

    return 0;
}
