#include "Class.h"

using namespace School;
std::vector<std::shared_ptr<Student>> School::Class::getStudents()
{
    return students;
}

bool School::Class::addStudent(std::shared_ptr<Student>& student)
{
    students.push_back(student);
    student.get()->getClass() = shared_from_this();
    return true;
}

bool School::Class::addTeacher(std::shared_ptr<Teacher>& teacher)
{
    this->teacher = teacher;
    teacher.get()->getClass() = shared_from_this();
    return true;
}
