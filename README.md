# Data-Structures - Stacks


Assignment Description:
You are to write a C++ Stack class template (see stack.h) which implements a stack. You must implement your own dynamically allocated list for this assignment that will handle these simple C++ simple types ( char, float, double, and  bool).  You may not use any C++ standard templates other than iostream.  You are to provide for the implementation for the member functions full, empty, top, push, pop, and size,  as well as a default constructor that creates an empty stack of size 100, a constructor where the size is past in as a const int,  and a destructor. You must also implement a copy constructor, an assignment operator (=), and overload the << operator to  print out the status of the stack.  The size of the stack will be fixed upon definition (call of the constructor) and cannot be changed except by the assignment operator overload(=).  This will  simplify the implementation purpose of this assignment is for the student to demonstrate proficiency in:   

Distinguishing between a function template and a concrete function: definition, implementation, and file structure conventions
Demonstrate correct notation and syntax for defining and implementing a function template
Use a friend to create an overload operator for the << operator
State the rules compilers use to instantiate a function template
Test a function template for correct syntax
Test a function template for correct behavior
Test a function template for use with multiple types.
Test the overload << operations
Test the overload = operations.
Detailed Instructions:
You are to make a copy of the main.cpp and stack.h files attached to this assignments. You will need to add additional code to these files and create your own makefile.
With templates you do not produce two file ( .h and .cpp). Instead the class template definition and implementation can be contained in one file. In this case stack.h.
I would suggest that as you write  the code that you comment out any member function that you have not implemented in the main routine to help in testing.
All of the member function implementations (full, empty, top, push, pop, number, and size) will go in the stack.h file. 
Each type (char, float, int,double, and bool) will use the same ostream << operator overload.
Member Function requirements:
Full – returns true if the Stack is full, false otherwise.
Empty - return true if the Stack is empty, false otherwise
Top – returns the top element but does not remove it from the Stack. (Note: It returns a copy to the calling routine but does not print it out)
Push – puts an element on the Stack, Issues an error to standard output a message if you try to Push an element on a full stack.
Pop – removes an item from the top of the stack.   Prints an error message if the stack is empty before the Pop operation.
Number – Returns the number of elements stored in the stack.
Size – Returns the Size of the Stack ( what was allocated ).
<< - ostream overload, Prints out the entire contents of the stack.  Prints a message if the stack is empty.  Print out the status of the stack,
If it is empty or not (Use Empty())
If it is full or not:  (Use Full())
The size of the stack (Use Size())
The number of elements in the stack (Use Number())
The top element (Use Top())
If there are at least two elements, pop the top element off.  (Use Pop())
The elements in the stack print out one after another on the same line separated by a space. 
= - assignment operator overload.  A hard copy of one object to another.   Makes a copy of the object passed in into the object on the left of the assignment operator. 
The default constructor which allocates 100 elements.
The constructor with one parameter allocates the number of elements indicated by the integer passed in. If the integer is less than zero, the default value is used.

Sample Output:

Assignment #0 Test Program
********* Test of Character Stack*********
The Stack not Empty
The Top element is-> A
The size of the stack is: 26
The number of elements it can hold is: 26
The Stack is Full
Popping the top element before we print it out
The contents of the stack is: B C D E F G H I J K L M N O P Q R S T U V W X Y Z 

********** Test of Assignment = operator overload *********
**********There should be one, less, top element is B*********
The Stack not Empty
The Top element is-> B
The size of the stack is: 26
The number of elements it can hold is: 25
The Stack is not Full
Popping the top element before we print it out
The contents of the stack is: C D E F G H I J K L M N O P Q R S T U V W X Y Z 

********** Test of the Integer Stack *********
The Stack not Empty
The Top element is-> 0
The size of the stack is: 100
The number of elements it can hold is: 11
The Stack is not Full
Popping the top element before we print it out
The contents of the stack is: 1 2 3 4 5 6 7 8 9 10 

********** Test of the Float Stack *********
********** Should be an error, stack is full ********
Error pushing, stack full!
The Stack not Empty
The Top element is-> 1.5
The size of the stack is: 10
The number of elements it can hold is: 10
The Stack is Full
Popping the top element before we print it out
The contents of the stack is: 2.5 3.5 4.5 5.5 6.5 7.5 8.5 9.5 10.5 

********* Test of Bool stack, copy constructor *********
The Stack not Empty
The Top element is-> 0
The size of the stack is: 2
The number of elements it can hold is: 2
The Stack is Full
Popping the top element before we print it out
The contents of the stack is: 1 

Process finished with exit code 0

Submission:
Tar up List.hpp and your makefile into a single tar archive and submit online via Canvas.
