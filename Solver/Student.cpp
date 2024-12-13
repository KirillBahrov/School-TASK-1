#include "Student.h"
#include<sstream>
using namespace School;

Student::Student(int grade, std::string firstName, std::string secondName, std::string patronymicName) :grade{ grade }, firstName{ firstName }, secondName{ secondName }, patronymicName{ patronymicName } {}

std::shared_ptr<Student> School::Student::createStudent(int grade, std::string firstName, std::string secondName, std::string patronymicName)
{
    return std::make_shared<Student>(Student{ grade,firstName,secondName,patronymicName });
}

std::shared_ptr<Class>& School::Student::getClass()
{
    return studentClass;
}

int School::Student::getGrade()
{
    return grade;
}

std::string School::Student::ToString() const
{
    std::stringstream buffer{};
    buffer << firstName << " " << secondName << " " << patronymicName;
    return buffer.str();
}
