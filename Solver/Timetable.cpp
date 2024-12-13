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
	currentClass.push_back(curClass.get());
	return true;
}

bool School::Timetable::addSubject(std::shared_ptr<Subject> subj)
{
	subjects.push_back(subj);
	subj->getTimetable() = shared_from_this();
	return true;
}

std::vector<Class*> School::Timetable::getClass()
{
	return currentClass;
}

std::vector<std::shared_ptr<Subject>> School::Timetable::getSubject()
{
	return subjects;
}

std::string School::Timetable::ToString() const
{
	std::stringstream buffer{};
	for (auto& temp : currentClass)
	{
		buffer << temp->getClassName();
		for (auto& temp : subjects)
		{
			buffer << " " << temp->ToString();
		}
	}
	return buffer.str();
}
