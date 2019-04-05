#include <iostream>
#include <functional>

int main()
{
	[out = std::ref(std::cout << "Hello ")](){ out.get() << "World wow\n"; }();
	//printf("Hello World\n");
}
