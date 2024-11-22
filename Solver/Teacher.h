#pragma once
#include <vector>
#include <map>
#include <string>

namespace School 
{
    class Teacher 
    {
    public:
        std::string name;
        std::string direction;
        int maxLessonsPerDay = 6;
        std::map<std::string, std::vector<std::string>> timetable;

        /**
        * @brief конструктор учитель 
        * @param name - имя учителя
        * @param direction - направление предмета учителя(гум/технарь)
        */
        Teacher(const std::string& name, const std::string& direction);

        /**
        * @brief функция добавления урока в расписание
        * @param day - день недели
        * @param lesson - название урока
        */
        void addLesson(const std::string& day, const std::string& lesson);

        std::string showTimetable() const;
    };
}