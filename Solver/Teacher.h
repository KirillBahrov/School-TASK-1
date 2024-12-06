#pragma once
#include <iostream>
#include "Class.h"

namespace School
{
	class Class;
	class Teacher final : public std::enable_shared_from_this<Teacher>
	{
	private:
		std::string firstName;

		std::string secondName;

		std::string patronymicName;

		std::shared_ptr<Class> teacherClass;

		Teacher(std::string firstName, std::string secondName, std::string patronymicName) :firstName{ firstName }, secondName{ secondName }, patronymicName{ patronymicName } {}

	public:

		std::shared_ptr<Teacher> createTeacher(std::string firstName, std::string secondName, std::string patronymicName);

		std::shared_ptr<Class> getClass();
	};

}
