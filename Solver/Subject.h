#pragma once
#include <iostream>
#include "Timetable.h"
namespace School
{
	class Timetable;
	class Subject final : public std::enable_shared_from_this<Subject>
	{
	private:
		std::string subject;

		std::weak_ptr<Timetable> timetable;

		/**
		* @brief конструктор для предмета
		* @param subj - название предмета
		* @return возвращает объект класса
		*/
		Subject(std::string subj);

	public:
		/**
		* @brief функция, создающая предмет
		* @param subj - название предмета
		* @return возвращает умный указатель на объект
		*/
		static std::shared_ptr<Subject> createSubject(std::string subj);

		/**
		* @brief функция для получения названия предмета
		* @return возвращает название предмета
		*/
		std::string getSubject();

		/**
		* @brief функция для получения расписания предмета
		* @return возвращает расписание предмета
		*/
		std::weak_ptr<Timetable> getTimetable();

		/**
		* @brief функция, сериализующая ответы в строку
		* @return возвращает строку
		*/
		std::string ToString()const;
	};
}