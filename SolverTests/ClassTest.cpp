
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
	};
}
