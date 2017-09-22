#include "stack.hpp"
#include <iostream>
int main()
{
	stack my_stack;
	my_stack.print();
	my_stack.push(1);
	my_stack.print();
	my_stack.push(2);
	my_stack.print();
	my_stack.push(3);
	my_stack.print();
	my_stack.push(4);
	my_stack.print();
	my_stack.push(5);
	my_stack.print();
	my_stack.push(6);
	my_stack.print();
	my_stack.push(7);
	my_stack.pop();
	my_stack.print();
	my_stack.pop();
	my_stack.print();
	my_stack.pop();
	my_stack.print();
	my_stack.pop();
	my_stack.print();
	my_stack.pop();
	my_stack.print();
	my_stack.pop();
	my_stack.print();
	my_stack.pop();	

	return 0;
}