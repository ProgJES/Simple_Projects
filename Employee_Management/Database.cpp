//Database.cpp
#include <iostream>
#include <stdexcept>
#include "Database.h"

using namespace std;

namespace Records	
{
	Database::Database()
	{
		this->m_NextEmployeeNumber = fisrtEmployeeNumber;
	}
	Database::~Database()
	{
		
	}
	
	Employee& Database::addEmployee(string firstName, string lastName)
	{
		Employee theEmployee;
		
		theEmployee.setFirstName(firstName);
		theEmployee.setLastName(lastName);
		
		theEmployee.setEmployeeNumber(this->m_NextEmployeeNumber++);
		
		theEmployee.hire();
		
		this->m_Employees.push_back(theEmployee);
		
		return this->m_Employees[this->m_Employees.size() - 1];		
	}
	
	Employee& Database::getEmployee(int employeeNumber)
	{
		for(auto iter = this->m_Employees.begin(); iter != this->m_Employees.end(); ++iter)
		{
			if(iter->getEmployeeNumber() == employeeNumber)
			{
				return *iter;
			}
		}
		cerr << "No employee with number " << employeeNumber << endl;
		throw exception();
	}
	
	
	void Database::displayAll() const
	{
		for(auto iter = this->m_Employees.begin(); iter != this->m_Employees.end(); ++iter)
		{
			iter->display();
		}
	}
	void Database::displayCurrnt() const
	{
		for(auto iter = this->m_Employees.begin(); iter != this->m_Employees.end(); ++iter)
		{
			if(iter->getIsHired())
			{
				iter->display();
			}
		}
	}
	void Database::displayFormer() const
	{
		for(auto iter = this->m_Employees.begin(); iter != this->m_Employees.end(); ++iter)
		{
			if(!iter->getIsHired())
			{
				iter->display();	
			}	
		}
	}
}//End of namespace
