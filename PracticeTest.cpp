/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Ab");
    ASSERT_TRUE(actual);
}


TEST(PracticeTest, is_not_a_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Ba");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_sorted_decending)
{
    int first = 1;
    int second = 5;
    int third = 7;

    Practice obj;
    bool actual = obj.sortDescending(first, second, third);
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_sorted_decending)
{
    int first = 6;
    int second = 2;
    int third = 7;

    Practice obj;
    bool actual = obj.sortDescending(first, second, third);
    ASSERT_TRUE(actual);
}
