#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	/*
	
		***** List Data structure *****
		
		The list is among the most generic in data structures.
		
		List Operations:
		
			createList(): Create a new list 
			copy():	Set one list to be a copy of other.
			clear(): Clear a list (remove all elements).
			insert(X, ?): Insert element X at a particular position in the list.
			remove(?): Remove element at some position in the list.
			update(X,?): Replace the element at a given position.
			find(X): Determine if the element X is in the list.
			length(): Return the length of the list.
			
			If we use the "current" marker, the following four methods will be useful.
			
			1) start(): moves to "current" pointer to the very first element.
			2) tail(): moves to "current" pointer to the very last element.
			3) next(): move the "current" pointer to forward one element.
			4) back(): move the "current" pointer to backward one element.
	
	
	*|
	
	
	return 0;
}
