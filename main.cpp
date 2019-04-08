#include <iostream>
#include <functional>
#include <gtest.h>


int add(int a, int b) {
	return a + b;
}

int multi(int a, int b) {

	return a*b;

}
float devide(int a, int b){
	if (b!=0){
		return a/b;
	} else {
		return 0;
	}
}
int mod(int a, int b){
return a%b;

}
TEST (simple_test_case, sample_test)
{	
	EXPECT_EQ(5, add(3,2));
}

TEST (simple_test_case, add)
{	
	int a = 3;
	int b = 2;
	ASSERT_EQ(5,add(a,b)) << "This is check for simple text message\n";
}

TEST (simple_test_case, multi)
{	
	ASSERT_EQ(6,multi(3,2)) << "This is check for simple text message\n";
}

TEST (simple_test_case, devide)
{	
	ASSERT_EQ(5,devide(10,2)) << "This is check for simple text message\n";
}

TEST (simple_test_case, mod)
{	
	ASSERT_EQ(0,mod(0,2)) << "This is check for simple text message\n";
}

TEST (simple_test_case, mod1)
{	
	ASSERT_EQ(1,mod(1,2)) << "This is check for simple text message\n";
}
TEST (simple_test_case, mod2)
{	
	ASSERT_EQ(0,mod(2,2)) << "This is check for simple text message\n";
}