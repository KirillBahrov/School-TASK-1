#pragma once
#include <iostream>
#include "Class.h"
#include "Subject.h"

namespace School
{
	class Subject;
	class Class;
	class Timetable final :public std::enable_shared_from_this<Timetable>
	{
	private:

		std::vector<std::shared_ptr<Subject>> subjects;

		std::vector<Class*> currentClass;

		/**
		* @brief конструктор расписание
		* @return возвращает объект класса
		*/
		Timetable();

	public:
		/**
		* @brief функция, создающая расписание
		* @return возвращает умный указатель на объект
		*/
		static std::shared_ptr<Timetable>createTimetable();

		/**
		* @brief функция добавления класса
		* @param curClass - имя класса
		* @return True, если добавление успешно
		*/
		bool addClass(std::shared_ptr<Class>curClass);

		/**
		* @brief функция добавления предмета
		* @param subj - название предмета
		* @return True, если добавления успешно
		*/
		bool addSubject(std::shared_ptr<Subject>subj);

		/**
		* @brief функция получения класса
		* @return вектор классов
		*/
		std::vector<Class*> getClass();

		/**
		* @brief функция получения предмета
		* @return вектор предметов
		*/
		std::vector<std::shared_ptr<Subject>> getSubject();

		/**
		* @brief функция, сериализующая ответы в строку
		* @return возвращает строку
		*/
		std::string ToString() const;
	};
}