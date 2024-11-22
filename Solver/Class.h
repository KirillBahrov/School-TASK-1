#pragma once
#include <string>
#include "Student.h"
#include "Teacher.h"
#include <vector>

namespace School
{
    class SchoolClass 
    {
    public:
        std::string className; 
        Teacher classTeacher; 
        std::vector<Student> students;

        /**
        * @brief конструктор класс учеников
        */
        SchoolClass(const std::string& className, Teacher classTeacher);

        /**
        * @brief метод добавления ученика в класс
        */
        void addStudent(const Student& student);

        /**
        * @brief метод, показывающий учеников класса
        */
        std::string showStudents() const;

        /**
        * @brief метод, показывающий классного руководителя
        */
        std::string showClassTeacher() const;

        /**
        * @brief метод, показывающий учеников без троек
        */
        std::string showStudentsWithoutThrees() const;
    };
}
