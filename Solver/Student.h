#pragma once
#include <iostream>
#include "Class.h"
namespace School
{
	class Class;
	class Student final :public std::enable_shared_from_this<Student>
	{
	private:
		int grade;

		std::string firstName;

		std::string secondName;

		std::string patronymicName;

		std::weak_ptr <Class> studentClass;

		/**
		* @brief конструктор ученик
		* @param grade - оценка ученика
		* @param firstName - имя ученика
		* @param secondName - фамилия ученика
		* @param patronymicName - отчество ученика
		* @return возвращает объект класса
		*/
		Student(int grade, std::string firstName, std::string secondName, std::string patronymicName);

	public:
		/**
		* @brief функция, создающая ученика
		* @param
		* @return возвращает умный указатель на объект
		*/
		std::shared_ptr<Student> createStudent(int grade, std::string firstName, std::string secondName, std::string patronymicName);

		/**
		* @brief функция для класса учеников
		* @return возвращает класс учеников
		*/
		std::weak_ptr<Class>& getClass();

		/**
		* @brief функция, сериализующая ответы в строку
		* @return возвращает строку
		*/
		std::string ToString() const;
	};
}
