#include "Student.h"
#include <string>
#include <map>
#include <sstream>

namespace School
{
    Student(const std::string& name) : name(name) {}

    void Student::addGrade(const std::string& subject, int grade)
    {
        grades[subject] = grade;
    }

    std::string Student::showGrades() const
    {
        std::stringstream ss;
        ss << "Успеваемость ученика " << name << ":\n";
        for (const auto& grade : grades) 
        {
            ss << grade.first << ": " << grade.second << "\n";
        }
        return ss.str();
    }

    bool Student::hasOnlyGoodGrades() const
    {
        for (const auto& grade : grades)
        {
            if (grade.second == 3) 
            {
                return false;
            }
        }
        return true;
    }
}
