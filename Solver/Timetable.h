#pragma once
#include <iostream>
#include "Class.h"
#include "Subject.h"

namespace School
{
	class Subject;
	class Class;
	class Timetable final :public std::enable_shared_from_this<Timetable>
	{
	private:

		std::vector<std::shared_ptr<Subject>> subjects;

		Class* currentClass;

		Timetable() {}

	public:

		std::shared_ptr<Timetable>createTimetable();

		bool addClass(std::shared_ptr<Class>curClass);

		bool addSubject(std::shared_ptr<Subject>subj);

		std::string ToString() const;
	};
}