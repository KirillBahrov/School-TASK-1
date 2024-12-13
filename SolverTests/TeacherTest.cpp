#include "pch.h"
#include "CppUnitTest.h"
#include "..\Solver\Teacher.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace School;
namespace SolverTest
{
	TEST_CLASS(TeacherTest)
	{
	public:

		TEST_METHOD(Ctor_ValidData_Success)
		{
			std::string name = "Ivan";
			std::string secondName = "Ivanov";
			std::string patr = "Ivanovich";
			std::string exp = "Ivan Ivanov Ivanovich";
			auto teacher = Teacher::createTeacher(name, secondName, patr);
			Assert::AreEqual(teacher->ToString(), exp);
		}
	};
}
