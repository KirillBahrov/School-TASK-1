#pragma once
#include <iostream>

namespace School
{
	class Subject final : public std::enable_shared_from_this<Subject>
	{
	private:
		std::string subject;

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
		std::shared_ptr<Subject> createSubject(std::string subj);

		/**
		* @brief функция для получения названия предмета
		* @return возвращает название предмета  
		*/
		std::string getSubject();

		/**
		* @brief функция, сериализующая ответы в строку
		* @return возвращает строку
		*/
		std::string ToString()const;
	};
}