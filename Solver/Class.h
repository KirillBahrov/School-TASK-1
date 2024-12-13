#pragma once
#include <iostream>
#include <vector>
#include "Student.h"
#include "Teacher.h"
#include "Timetable.h"
namespace School
{
	class Teacher;
	class Student;
	class Timetable;
	class Class final : std::enable_shared_from_this<Class>
	{
	private:
		std::string className;

		std::vector<Student*> students;

		std::weak_ptr<Teacher> teacher;

		Timetable* timetable;
		/**
		* @brief конструктор класс
		* @param name - имя класса
		* @return возвращает созданный объект
		*/
		Class(std::string name);

	public:
		/**
		* @brief функция, создающая класс
		* @param name - имя класса
		* @return умный указатель на созданный класс
		*/
		static std::shared_ptr<Class> createClass(std::string name);

		/**
		* @brief функция, работающая с массивом учеников
		* @return массив учеников
		*/
		std::vector<Student*> getStudents();

		/**
		* @brief функция для получения имя класса
		* @return возвращает имя класса
		*/
		std::string getClassName()const;

		/**
		* @brief функция, добавляющая ученика
		* @param student - ученик
		* @return true, если добавление произведено успешно
		*/
		bool addStudent(std::shared_ptr<Student> student);

		/**
		* @brief функция, добавляющая учителя
		* @param teacher - учитель
		* @return true, если добавление произведено успешно
		*/
		bool addTeacher(std::shared_ptr<Teacher> teacher);

		/**
		* @brief функция, добавляющая расписание
		* @param time - расписание
		* @return true, если добавление произведено успешно
		*/
		bool addTimeTable(std::shared_ptr<Timetable> time);

		/**
		* @brief функция, сериализующая ответы в строку
		* @return возвращает строку
		*/
		std::string ToString() const;
	};

}
