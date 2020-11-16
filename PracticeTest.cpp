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

TEST(PracticeTest, is_not_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Not a palindrome");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("racecar");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, symbols_not_palidrone)
{
    Practice obj;
    bool actual = obj.isPalindrome("[;");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, empty_string_palidrone)
{
    Practice obj;
    bool actual = obj.isPalindrome("");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, single_char_palidrone)
{
    Practice obj;
    bool actual = obj.isPalindrome("f");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, with_space_palidrone)
{
    Practice obj;
    bool actual = obj.isPalindrome("and dna");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, long_palidrone)
{
    Practice obj;
    bool actual = obj.isPalindrome("saippuakivikauppias");
    ASSERT_TRUE(actual);
}

TEST(sortDescending, simple_desc)
{
    Practice obj;
		int i(3), j(2), z(1);
    bool actual = obj.sortDescending(i,j,z);
    ASSERT_TRUE(actual);
}

TEST(sortDescending, simple_desc_all_same)
{
    Practice obj;
		int i(1), j(1), z(1);
    bool actual = obj.sortDescending(i,j,z);
    ASSERT_TRUE(actual);
}

TEST(sortDescending, simple_desc_f2_same)
{
    Practice obj;
		int i(1), j(1), z(2);
    bool actual = obj.sortDescending(i,j,z);
    ASSERT_TRUE(actual);
}

TEST(sortDescending, simple_desc_l2_same)
{
    Practice obj;
		int i(2), j(1), z(1);
    bool actual = obj.sortDescending(i,j,z);
    ASSERT_TRUE(actual);
}

TEST(sortDescending, simple_desc_ends_same)
{
    Practice obj;
		int i(1), j(2), z(1);
    bool actual = obj.sortDescending(i,j,z);
    ASSERT_TRUE(actual);
}

TEST(sortDescending, bigger_then_int)
{
    Practice obj;
		int i(1000000000000000), j(2), z(1);
    bool actual = obj.sortDescending(i,j,z);
    ASSERT_TRUE(actual);
}
