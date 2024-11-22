#pragma once
#include <string>

namespace School
{
    class Student
    {
    public:
        std::string name; 
        std::map<std::string, int> grades; 

        /**
        * @brief конструктор ученик
        * @param name - имя ученика
        */
        Student(const std::string& name);

        /**
        * @brief функция, добавляющая оценку по предмету
        * @param subject - предмет
        * @param grade - оценка
        */
        void addGrade(const std::string& subject, int grade);

        /**
        * @brief метод, показывающий оценки по предмету
        */
        std::string showGrades() const;
        
        /**
        * @brief функция, проверяющая наличие троек
        */
        bool hasOnlyGoodGrades() const;
    };
}