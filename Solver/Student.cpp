#include "Student.h"

using namespace School;
std::shared_ptr<Student> School::Student::createStudent(int grade, std::string firstName, std::string secondName, std::string patronymicName)
{
    return std::make_shared<Student>(Student{ grade,firstName,secondName,patronymicName });
}

std::shared_ptr<Class> School::Student::getClass()
{
    return studentClass;
}
