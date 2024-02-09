#include <iostream>
#include "Stack.hpp"

int main()
{
	Stack<100> s1;
	std::cout << s1.availableMembers();

	return 0;
}