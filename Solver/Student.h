#pragma once
#include <iostream>
#include "Class.h"
namespace School
{
	class Class;
	class Student final :public std::enable_shared_from_this<Student>
	{
	private:
		int grade;

		std::string firstName;

		std::string secondName;

		std::string patronymicName;

		std::shared_ptr <Class> studentClass;

		Student(int grade, std::string firstName, std::string secondName, std::string patronymicName) :grade{ grade }, firstName{ firstName }, secondName{ secondName }, patronymicName{ patronymicName } {}

	public:
		std::shared_ptr<Student> createStudent(int grade, std::string firstName, std::string secondName, std::string patronymicName);

		std::shared_ptr<Class> getClass();
	};


}
