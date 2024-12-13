#include "CppUnitTest.h"
#include "..\Solver\Subject.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace School;
namespace SolverTest
{
	TEST_CLASS(TimetableTest)
	{
	public:

		TEST_METHOD(addSubject_ValidData_Success)
		{
			const std::string subject = "math";
			auto subj = Subject::createSubject(subject);
			auto timetable = Timetable::createTimetable();
			auto result = timetable->addSubject(subj);
			Assert::IsTrue(result);
		}
		TEST_METHOD(addClass_ValidData_Success)
		{
			auto classTest = Class::createClass("2B");
			auto timetable = Timetable::createTimetable();
			auto result = timetable->addClass(classTest);
			Assert::IsTrue(result);
		}
	};
}
