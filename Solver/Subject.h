#pragma once
#include <iostream>

namespace School
{
	class Subject final : public std::enable_shared_from_this<Subject>
	{
	private:

		std::string subject;

		Subject(std::string subj) :subject{ subj } {}

	public:

		std::shared_ptr<Subject> createSubject(std::string subj);

		std::string getSubject();

		std::string ToString()const;
	};
}