//TOPIC: std::stack in C++ !!

//NOTES:
//0. std::stack class is a container adapter that gives the programmer the functionality of a stack
//1. Internally it uses std::deque STL container.
//2. It is LIFO (Last-in, first-out) data structure.
//3. std::stack allows to push(insert) and pop(remove) only from back.

// FUNCTIONS PROVIDED:
// empty() - Returns whether the stack is empty - Time Complexity : 0(1)
// size() - Returns the size of the stack - Time Complexity: 0(1)
// top() - Returns a reference to the top most element of the stack - Time Complexity : 0(1)
// push(g) - Adds the element 'g' at the top of the stack - Time Complexity : 0(1)
// pop() - Deletes the top most element of the stack - Time Complexity : 0(1)

// PROGRAM



#include "pch.h"
#include <iostream>
#include <stack>
using namespace std;

#define _CRT_SECURE_NO_WARNINGS
#pragma warning( disable : 4996)

void print(std::stack<int> stk) {
	while (!stk.empty()) {
		cout << stk.top() << endl;
		stk.pop(); //Remove from the back
	}
}

int main() {

	std::stack<int> stk;

	stk.push(2);
	stk.push(3);
	stk.push(4);

	print(stk);

	return 0;
}