#include "header.h"
#include "unity/unity.h"

void setUp() {}
void tearDown() {}

void test_logincredential(void){
	TEST_ASSERT_EQUAL_INT(0,login("user\n","pass\n"));
	TEST_ASSERT_EQUAL_INT(0,login("user","1234"));
}

int main(){
    UNITY_BEGIN();
    RUN_TEST(test_logincredential);
    return UNITY_END();
}
