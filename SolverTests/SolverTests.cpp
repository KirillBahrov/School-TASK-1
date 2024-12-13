#include "pch.h"
#include "CppUnitTest.h"
#include "..\Solver\Subject.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace School;
namespace SolverTest
{
	TEST_CLASS(SolverTest)
	{
	public:

		TEST_METHOD(Ctor_ValidData_Success)
		{
			const std::string subject = "math";
			auto subj = Subject::createSubject(subject);
			Assert::AreEqual(subj->getSubject(), subject);
		}
	};
}
