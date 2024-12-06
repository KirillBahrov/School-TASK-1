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

		std::vector<std::shared_ptr<Student>> students;
		std::shared_ptr<Teacher> teacher;

	public:

		std::vector<std::shared_ptr<Student>> getStudents();

		bool addStudent(std::shared_ptr<Student>& student);

		bool addTeacher(std::shared_ptr<Teacher>& teacher);
	};

}
