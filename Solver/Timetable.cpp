#include "Timetable.h"
#include <sstream>
using namespace School;
Timetable::Timetable()
{
}

std::shared_ptr<Timetable> School::Timetable::createTimetable()
{
	return std::make_shared<Timetable>(Timetable());
}

bool School::Timetable::addClass(std::shared_ptr<Class> curClass)
{
	currentClass = curClass.get();
	return true;
}

bool School::Timetable::addSubject(std::shared_ptr<Subject> subj)
{
	subjects.push_back(subj);
	return true;
}

std::string School::Timetable::ToString() const
{
	std::stringstream buffer{};
	buffer << currentClass->getClassName();
	for (auto& temp : subjects)
	{
		buffer << " " << temp->ToString();
	}
	return buffer.str();
}
