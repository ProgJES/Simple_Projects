//Database.h
#include <iostream>
#include <vector>
#include "Employee.h"

namespace Records
{
	const int fisrtEmployeeNumber = 1000;
	
	class Database
	{
		protected:
			std::vector<Employee> m_Employees;
			int m_NextEmployeeNumber;
		public:
		Database();
		~Database();
		Employee& addEmployee(std::string firstName, std::string lastName);
		Employee& getEmployee(int employeeNumber);
		
		void displayAll() const;
		void displayCurrnt() const;
		void displayFormer() const;
	};
	
} //End of namespace
