#include "Class.h"
#include <sstream>
using namespace School;
Class::Class(std::string name) :className{ name } {};

std::shared_ptr<Class> School::Class::createClass(std::string name)
{
    return std::make_shared<Class>(Class{ name });
}
std::vector<Student*> School::Class::getStudents()
{
    return students;
}

std::string School::Class::getClassName() const
{
    return className;
}

bool School::Class::addStudent(std::shared_ptr<Student> student)
{
    students.push_back(student.get());
    student.get()->getClass() = shared_from_this();
    return true;
}

bool School::Class::addTeacher(std::shared_ptr<Teacher> teacher)
{
    this->teacher = teacher.get();
    teacher.get()->getClass() = shared_from_this();
    return true;
}

std::string School::Class::ToString() const
{
    std::stringstream buffer{};
    buffer << className << " " << teacher->ToString();
    for (auto& temp : students)
    {
        buffer << " " << temp->ToString();
    }
    return buffer.str();
}
