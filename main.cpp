#include <iostream>
#include <functional>

#include "gtest.h"

#include "median.h"

using namespace std;

int main(){
	myMedian tmpMedian;

	for (int i = 0; i < 20; i++) {
		tmpMedian.addValue(rand() % 21);
		//std::cout << "median calc is: " <<tmpMedian.GetMedian() << " for index " << i << "\n";
	}
	std::cout << "this is odd median " << tmpMedian.GetMedian() << "\n";
	std::cout << "this is the saved list\n\n";
	tmpMedian.printList();
}

// TEST (simple_test_case, sample_test)
// {	
// 		myMedian* tmpMedian = new myMedian();
// 		tmpMedian->addValue(1);
// 	EXPECT_EQ(1, tmpMedian->GetMedian());
// }

TEST (simple_test_case, add)
{	
	int a = 3;
	int b = 2;
	ASSERT_EQ(5,a+b) << "\n\nThis is check for simple text message\n";
}
