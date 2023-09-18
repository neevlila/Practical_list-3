#include <iostream>
using namespace std;
struct Employee
{
    char name[50];
    int salary;
    int employeeCode;
    char dept[50];
};
int main()
{
    Employee e;
     
    cout << "Enter name of employee:: ";
    cin.getline(e.name, 50);
    cout << "Enter department::";
    cin.getline(e.dept, 50);
    cout << "Enter salary of employee::";
    cin >> e.salary;
    cout << "Enter employee code::";
    cin >> e.employeeCode;
    
    cout << "\n\tEmployee Details " << endl;
    cout << "Name::" << e.name << endl;
    cout << "Salary::" <<e.salary <<endl;
    cout << "Employee Code::" << e.employeeCode << endl;
	cout << "Department::" << e.dept <<endl;
	
	cout << "\nEnrollment no.220130318021";
	
    return 0;
}
