#pragma once
#include <sstream>
#include <string>
#include <map>
#include <vector>


namespace School
{
    class Timetable 
    {
    public:
        std::map<std::string, std::vector<std::string>> studentTimetable;

        /**
        * @brief функция добавления предмета в расписание ученика
        * @param studentName - имя ученика
        * @param subject - имя предмета
        */
        void addStudentLesson(const std::string& studentName, const std::string& subject);

        std::string showStudentTimetable(const std::string& studentName);

        std::map<std::string, std::vector<std::string>> teacherTimetable; 

        /**
        * @brief функция добавления урока в расписание учителя
        * @param teacherName - имя учителя
        * @param day - день недели
        * @param lesson - урок 
        */
        void addTeacherLesson(const std::string& teacherName, const std::string& day, const std::string& lesson);

        std::string showTeacherTimetable(const std::string& teacherName);
    };
}