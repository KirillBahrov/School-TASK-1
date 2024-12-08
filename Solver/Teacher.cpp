#include "Teacher.h"
#include <sstream>
using namespace School;

std::shared_ptr<Teacher> School::Teacher::createTeacher(std::string firstName, std::string secondName, std::string patronymicName)
{
    return std::make_shared<Teacher>(Teacher(firstName, secondName, patronymicName));
}

std::weak_ptr<Class> School::Teacher::getClass()
{
    return teacherClass;
}

std::string School::Teacher::ToString() const
{
    std::stringstream buffer{};
    buffer << firstName << " " << secondName << " " << patronymicName;
    return buffer.str();
}
