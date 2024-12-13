#include "pch.h"
#include "CppUnitTest.h"
#include "..\Solver\Class.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace School;
namespace SolverTest
{
	TEST_CLASS(ClassTest)
	{
	public:

		TEST_METHOD(Ctor_ValidData_Success)
		{
			std::string name = "2B";
			auto classTest = Class::createClass(name);
			Assert::AreEqual(classTest->ToString(), name);
		}
		TEST_METHOD(addTimetable_ValidData_Success)
		{
			auto classTest = Class::createClass("2B");
			auto timetable = Timetable::createTimetable();
			auto result = classTest->addTimeTable(timetable);
			Assert::IsTrue(result);
		}
		TEST_METHOD(addTeacher_ValidData_Success)
		{
			std::string name = "Ivan";
			std::string secondName = "Ivanov";
			std::string patr = "Ivanovich";
			std::string exp = "Ivan Ivanov Ivanovich";
			auto teacher = Teacher::createTeacher(name, secondName, patr);
			auto classTest = Class::createClass("2B");
			auto result = classTest->addTeacher(teacher);
			Assert::IsTrue(result);
		}
		TEST_METHOD(addStudent_ValidData_Success)
		{
			int grade = 5;
			std::string name = "Ivan";
			std::string secondName = "Ivanov";
			std::string patr = "Ivanovich";
			std::string exp = "Ivan Ivanov Ivanovich";
			auto student = Student::createStudent(grade, name, secondName, patr);
			auto classTest = Class::createClass("2B");
			auto result = classTest->addStudent(student);
			Assert::IsTrue(result);
		}
	};
}
