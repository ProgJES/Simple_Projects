//Employee.cpp

#include <iostream>
#include "Employee.h"

using namespace std;

namespace Records
{
	/*Public Member funcions*/
	Employee::Employee() : 
		m_FirstName(""), 
		m_LastName(""), 
		m_EmployeeNumber(-1),
		m_Salary(startingSalary), 
		m_Hired(false)
	{
		this->m_Hired = false;
	}
	void Employee::promote(int raiseAmount)
	{
		this->setSalary(this->getSalary() + raiseAmount);
	}
	void Employee::demote(int demeritAmount)
	{
		this->setSalary(this->getSalary() - demeritAmount);
	}
	void Employee::hire()
	{
		this->m_Hired = true;
	}
	void Employee::fire()
	{
		this->m_Hired = false;
	}
	void Employee::display() const
	{
		cout << "Employee: " << this->getLastName() << ", " << this->getFirstName() << endl;
		cout << "-----------------------------------" << endl;
		cout << (this->getIsHired() ? "Currnet Employee" : "Former Employee")<< endl;
		cout << "Employee Number: " << getEmployeeNumber() << endl;
		cout << "Salary $" << this->getSalary() << endl;
		cout << endl;
	}
	
	/*Getters and Setters*/
	void Employee::setFirstName(string firstName)
	{
		this->m_FirstName = firstName;
	}
	string Employee::getFirstName() const
	{
		return this->m_FirstName;
	}
	
	void Employee::setLastName(string lastName)
	{
		this->m_LastName = lastName;
	}
	string Employee::getLastName() const
	{
		return this->m_LastName;
	}
	
	void Employee::setEmployeeNumber(int employeeNumber)
	{
		this->m_EmployeeNumber = employeeNumber;
	}
	int Employee::getEmployeeNumber() const
	{
		return this->m_EmployeeNumber;
	}
	
	void Employee::setSalary(int newSalary)
	{
		this->m_Salary = newSalary;
	}
	int Employee::getSalary() const
	{
		return this->m_Salary;
	}
	
	bool Employee::getIsHired() const
	{
		return this->m_Hired;
	}	
}//End of namespace
