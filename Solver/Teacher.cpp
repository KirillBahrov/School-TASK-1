#include "Teacher.h"

using namespace School;

std::shared_ptr<Teacher> School::Teacher::createTeacher(std::string firstName, std::string secondName, std::string patronymicName)
{
    return std::make_shared<Teacher>(Teacher(firstName, secondName, patronymicName));
}

std::shared_ptr<Class> School::Teacher::getClass()
{
    return teacherClass;
}
