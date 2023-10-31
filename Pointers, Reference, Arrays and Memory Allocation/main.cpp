#include <iostream>

using namespace std;

int main(){

    /*
    
    First, let's talk about pointers in C++. When we create a variable, corresponsing 
    to that variable a memory build and the value of the variable store in that memory.
    So, the other variable that holds the memory address of any other varialbe is called
    pointer.
    
    */

   // Variable declaration

   int value = 12;
   int * valueMemoryAddress = &value;

   cout << "The value is: " << value << endl;
   cout << "The memory address of value is: " <<  valueMemoryAddress << endl;






    return 0;
}