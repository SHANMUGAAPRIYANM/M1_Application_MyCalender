#include "unity.h"
#include "function.h"

#define PROJECT_NAME  "My-Calendar"

void test_Find out the day(void)
{
TEST_ASSERT_EQUAL(pass,Day(1));
}
void test_print all the day of month(void)
{
TEST_ASSERT_EQUAL(pass,displaymonth(1));
}
void test_addnote(void){
TEST_ASSERT_EQUAL(pass,Note added(1));
}
int main()
{
UNITY_BEGIN();

    RUN_TEST(test_);
    RUN_TEST(test_);
    RUN_TEST(test_);

return UNITY_END();
}
