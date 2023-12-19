#include <iostream>
using namespace std;

class employee
{
private:
    int id;
    char name[100];

public:
    void getData()
    {
        cout << "Enter employee ID: ";
        cin >> id;
        cout << "Enter employee name: ";
        cin.ignore();
        cin.getline(name, 100);
    }

    void display()
    {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
    }
};

class manager : public employee
{
private:
    float salary;

public:
    void getData()
    {
        employee::getData();
        cout << "Enter manager's salary: ";
        cin >> salary;
    }

    void display()
    {
        employee::display();
        cout << "Manager's Salary: " << salary << endl;
    }
};

class projectManager : public manager
{
private:
    int totalExperience;
    int numOfProjectsHandled;

public:
    void getData()
    {
        manager::getData();
        cout << "Enter total experience: ";
        cin >> totalExperience;
        cout << "Enter number of projects handled: ";
        cin >> numOfProjectsHandled;
    }

    void display()
    {
        manager::display();
        cout << "Total Experience: " << totalExperience << " years" << endl;
        cout << "Number of Projects Handled: " << numOfProjectsHandled << endl;
    }
};

int main()
{
    projectManager pm;
    pm.getData();
    cout << endl;
    pm.display();

    return 0;
}