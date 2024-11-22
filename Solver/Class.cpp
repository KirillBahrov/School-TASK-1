#include "Class.h"
#include <string>
#include "Student.h"
#include "Teacher.h"
#include <vector>
#include <sstream>


namespace School
{
        SchoolClass(const std::string& className, School::Teacher classTeacher)
            : className(className), classTeacher(classTeacher) {}

        void SchoolClass::addStudent(const School::Student& student)
        {
            students.push_back(student);
        }

        std::string SchoolClass::showStudents() const
        {
            std::stringstream ss;
            ss << "Список учеников класса " << className << ":\n";
            for (const auto& student : students) 
            {
                ss << student.name << "\n";
            }
            return ss.str();
        }

        std::string SchoolClass::showClassTeacher() const
        {
            std::stringstream ss;
            ss << "Классный руководитель класса " << className << ": " << classTeacher->name << "\n";
            return ss.str();
        }

        std::string SchoolClass::showStudentsWithoutThrees() const
        {
            std::stringstream ss;
            ss << "Ученики класса " << className << " без троек:\n";
            for (const auto& student : students) 
            {
                if (student.hasOnlyGoodGrades()) 
                {
                    ss << student.name << "\n";
                }
            }
            return ss.str();
        }
}
