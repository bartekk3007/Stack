#include <iostream>

template<int N>
class Stack
{
private:
	int available;
	int last;
public:
	Stack()
	{
		available = N;
		last = 0;
	}
	int availableMembers() const
	{
		return available;
	}
	void* get(int n)
	{
		last = n;
		available -= n;
		return ::operator new (n);

	}
	void free()
	{
		available += last;
	}
};