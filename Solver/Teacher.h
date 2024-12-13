#pragma once
#include <iostream>
#include "Class.h"

namespace School
{
	class Class;
	class Teacher final : public std::enable_shared_from_this<Teacher>
	{
	private:
		std::string firstName;

		std::string secondName;

		std::string patronymicName;

		std::shared_ptr<Class> teacherClass;

		/**
		* @brief конструктор учитель
		* @param firstName - имя учителя
		* @param secondName - фамилия учителя
		* @param patronymicName - отчество учителя
		* @return возвращает объект класса
		*/
		Teacher(std::string firstName, std::string secondName, std::string patronymicName);

	public:
		/**
		* @brief функция, создающая учителя
		* @param firstName - имя учителя
		* @param secondName - фамилия учителя
		* @param patronymicName - отчество учителя
		* @return возвращает умный указатель на объект
		*/
		static std::shared_ptr<Teacher> createTeacher(std::string firstName, std::string secondName, std::string patronymicName);

		/**
		* @brief функция для класса учеников
		* @return возвращает класс учеников
		*/
		std::shared_ptr<Class> getClass();
		const std::shared_ptr<Class>& getClass() const noexcept;
		/**
		* @brief функция, сериализующая ответы в строку
		* @return возвращает строку
		*/
		std::string ToString() const;
	};

}
