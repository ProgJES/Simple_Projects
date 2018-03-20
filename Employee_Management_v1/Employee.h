//Employee.h
#ifndef EMPLOYEE__H
#define EMPLOYEE__H

#include <string>

namespace Records
{
	const int startingSalary = 30000;
	
	class Employee
	{
		//Protected member variables
		protected:
			std::string m_FirstName;
			std::string m_LastName;
			int m_EmployeeNumber;
			int m_Salary;
			bool m_Hired;
			
		//Public member functionns	
		public:
			Employee();
			void promote(int raiseAmount = 1000);
			void demote(int demeritAmount = 1000);
			void hire();
			void fire();
			void display() const;
			
			//Getters and Setters
			void setFirstName(std::string firstName);
			std::string getFirstName() const;
			
			void setLastName(std::string lastName);
			std::string getLastName() const;
			
			void setEmployeeNumber(int employeeNumber);
			int getEmployeeNumber() const;
			
			void setSalary(int newSalary);
			int getSalary() const;
			
			bool getIsHired() const; 
	}; //End of class declaration
} //End of namespace

#endif
