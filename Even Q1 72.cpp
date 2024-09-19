/*
Q.No 1
Employee Management System
File handling has been effectively used for each feature of this project
Operation
1.	Add  Employee Information
2.	Search Employee Information
4.	Delete Employee Data
5.	Search Employee Record.

*/
	

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

class Employee {
public:
    string emp_name, designation, line;
    int emp_id;
    float salary;

    void add_emp() {
        ofstream out("Employee_info.txt", ios::app);

        cout << "\n -----Add Employee-------";
        cout << "\n Enter name: ";
        cin >> emp_name;
        cout << "\n Enter ID: ";
        cin >> emp_id;
        cout << "\n Enter designation: ";
        cin >> designation;
        cout << "\n Enter salary: ";
        cin >> salary;

        out << "\n" << emp_name;
        out << "\n " << emp_id;
        out << " \n" << designation;
        out << "\n" << salary;
        out.close();
        cout << "\n Added to the file successfully...";
    }

    void view_emp() {
        cout << "\n -----Employeee info-------";
        ifstream file("Employee_info.txt");

        if (file.is_open()) {
            while (getline(file, line)) {
                cout << line << endl;
            }
            file.close();
        } else {
            cout << "Error opening file." << endl;
        }
    }

    void search_emp(int searchId) {
        ifstream file("Employee_info.txt");

        if (file.is_open()) {
            while (getline(file, line)) {
                stringstream ss(line);
                string tempName, tempDesignation;
                int tempId;
                float tempSalary;

                ss >> tempName >> tempId >> tempDesignation >> tempSalary;

                if (tempId == searchId) {
                    cout << "\n Employee Found:\n";
                    cout << "Name: " << tempName << endl;
                    cout << "ID: " << tempId << endl;
                    cout << "Designation: " << tempDesignation << endl;
                    cout << "Salary: " << tempSalary << endl;
                    return;
                }
            }
            cout << "\n Employee not found." << endl;
            file.close();
        } else {
            cout << "Error opening file." << endl;
        }
    }
};

int main() {
    Employee emp;

    int searchId;
    cout << "Enter employee ID to search: ";
    cin >> searchId;
    emp.search_emp(searchId);

  
    
    int ch;
    do {
        cout << "\n 1. Add employee";
        cout << "\n 2. View Employee";
        cout << "\n 3. Search Employee";
        cout << "\n 4. Exit ";

        switch (ch) {
            case 1:
                emp.add_emp();
                break;
            case 2:
                emp.view_emp();
                break;
            case 3:
                emp.search_emp(1);
                break;
            case 4:
                cout << "\n Exit";
                break;
            default:
                cout << "\n Invalid choice.....";
        }
        cout << endl;

    } while (ch != 4);
    

    return 0;
}
  
	

	
