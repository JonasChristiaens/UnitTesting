#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
#include "FunctionsUtil.h"

TEST_SUITE("doctest unit testing")
{
	TEST_CASE("Function 1 unit testing")
	{
		CHECK(FunctionsUtil::function1(10) == 15);
		CHECK(FunctionsUtil::function1(5) == 10);
		CHECK(FunctionsUtil::function1(-3) == 0);
		CHECK(FunctionsUtil::function1(0) == 5);
	}

	TEST_CASE("Function 2 unit testing")
	{
		CHECK(FunctionsUtil::function2(15) == 30);
		CHECK(FunctionsUtil::function2(8) == 16);
		CHECK(FunctionsUtil::function2(3) == 6);
		CHECK(FunctionsUtil::function2(0) == 0);
	}

	TEST_CASE("Function 3 unit testing")
	{
		CHECK(FunctionsUtil::function3(45) == 40);
		CHECK(FunctionsUtil::function3(49) == 44);
		CHECK_THROWS(FunctionsUtil::function3(50));
		CHECK_THROWS(FunctionsUtil::function3(51));
	}

	TEST_CASE("Function 4 unit testing")
	{
		CHECK(FunctionsUtil::function4(30) == 35);
		CHECK(FunctionsUtil::function4(60) == -1);
		CHECK(FunctionsUtil::function4(45) == 50);
		CHECK(FunctionsUtil::function4(51) == -1);
	}

	TEST_CASE("Function 5 unit testing")
	{
		CHECK(FunctionsUtil::function5(5) == 5);
		CHECK(FunctionsUtil::function5(5) == 10);
		CHECK(FunctionsUtil::function5(10) == 20);
		CHECK(FunctionsUtil::function5(0) == 0);
		CHECK(FunctionsUtil::function5(5) == 5);
	}

	TEST_CASE("Function 6 unit testing")
	{
		CHECK(FunctionsUtil::function6(8) == 9);
		CHECK(FunctionsUtil::function6(3) == 3);
		CHECK(FunctionsUtil::function6(10) == 12);
		CHECK(FunctionsUtil::function6(20) == 23);
	}

	TEST_CASE("process unit testing")
	{
		CHECK(FunctionsUtil::process(10) == 35);
		CHECK(FunctionsUtil::process(7) == 28);
		CHECK(FunctionsUtil::process(-17) == -32);
	}
}