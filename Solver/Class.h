#pragma once
#include <iostream>
#include <vector>
#include "Student.h"
#include "Teacher.h"

namespace School
{
	class Teacher;
	class Student;
	class Class final : std::enable_shared_from_this<Class>
	{
	private:

		std::string className;

		std::vector<Student*> students;

		Teacher* teacher;

		Class(std::string name) :className{ name } {}

	public:

		std::shared_ptr<Class> createClass(std::string name);

		std::vector<Student*> getStudents();

		std::string getClassName()const;

		bool addStudent(std::shared_ptr<Student> student);

		bool addTeacher(std::shared_ptr<Teacher> teacher);

		std::string ToString() const;
	};

}
