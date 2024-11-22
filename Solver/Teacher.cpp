#include "Teacher.h"
#include <vector>
#include <map>
#include <string>
#include <sstream>
#include <exception>

namespace School 
{
        Teacher(const std::string& name, const std::string& direction)
            : name(name), direction(direction) {}

        void Teacher::addLesson(const std::string& day, const std::string& lesson) 
        {
            if (timetable[day].size() < maxLessonsPerDay) 
            {
                timetable[day].push_back(lesson);
            }
            else 
            {
                throw std::out_of_range("Превышение кол-ва уроков");
            }
        }


        std::string Teacher::showTimetable() const
        {
            std::stringstream ss;
            ss << "Расписание учителя " << name << ":\n";
            for (const auto& day : timetable) 
            {
                ss << day.first << ": ";
                for (const std::string& lesson : day.second) 
                {
                    ss << lesson << " ";
                }
                ss << std::endl;
            }
            return ss.str();
        }
}
