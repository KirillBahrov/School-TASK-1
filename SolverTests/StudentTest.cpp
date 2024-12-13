#include "pch.h"
#include "CppUnitTest.h"
#include "..\Solver\Student.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace School;
namespace SolverTest
{
	TEST_CLASS(SolverTest)
	{
	public:

		TEST_METHOD(Ctor_ValidData_Success)
		{
			int grade = 5;
			std::string name = "Ivan";
			std::string secondName = "Ivanov";
			std::string patr = "Ivanovich";
			std::string exp = "Ivan Ivanov Ivanovich";
			auto student = Student::createStudent(grade, name, secondName, patr);
			Assert::AreEqual(student->ToString(), exp);
		}
	};
}
