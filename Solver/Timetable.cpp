#include "Timetable.h"
#include <sstream>
#include <string>
#include <map>
#include <vector>

namespace School
{
        void Timetable::addStudentLesson(const std::string& studentName, const std::string& subject) 
        {
            studentTimetable[studentName].push_back(subject);
        }

        std::string Timetable::showStudentTimetable(const std::string& studentName)
        {
            std::stringstream ss;
            ss << "Расписание ученика " << studentName << ":\n";
            auto it = studentTimetable.find(studentName);
            if (it != studentTimetable.end())
            {
                for (const auto& lesson : it->second) 
                {
                    ss << lesson << " ";
                }
                ss << std::endl;
            }
            else
            {
                ss << "Нет расписания для этого ученика.\n";
            }
            return ss.str();
        }

        void Timetable::addTeacherLesson(const std::string& teacherName, const std::string& day, const std::string& lesson)
        {
            teacherTimetable[teacherName].push_back(day + ": " + lesson);
        }

        std::string Timetable::showTeacherTimetable(const std::string& teacherName)
        {
            std::stringstream ss;
            ss << "Расписание учителя " << teacherName << ":\n";
            auto it = teacherTimetable.find(teacherName);
            if (it != teacherTimetable.end())
            {
                for (const auto& lesson : it->second) 
                {
                    ss << lesson << " ";
                }
                ss << std::endl;
            }
            else 
            {
                ss << "Нет расписания для этого учителя.\n";
            }
            return ss.str();
        }
}
