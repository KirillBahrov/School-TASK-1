#include "Teacher.h"
#include <sstream>
using namespace School;
Teacher::Teacher(std::string firstName, std::string secondName, std::string patronymicName) :firstName{ firstName }, secondName{ secondName }, patronymicName{ patronymicName } {}

std::shared_ptr<Teacher> School::Teacher::createTeacher(std::string firstName, std::string secondName, std::string patronymicName)
{
    return std::make_shared<Teacher>(Teacher(firstName, secondName, patronymicName));
}

std::shared_ptr<Class> School::Teacher::getClass()
{
    return teacherClass;
}

const std::shared_ptr<Class>& School::Teacher::getClass() const noexcept
{
    return teacherClass;
}

std::string School::Teacher::ToString() const
{
    std::stringstream buffer{};
    buffer << firstName << " " << secondName << " " << patronymicName;
    return buffer.str();
}
