//***********************************************************************
// * Description: A template Stack class designed to be used with       *
// * any simple C++ type to include floating point, double              *
// * floating point, character, and Boolean.                            *
// * Date: January, 8th, 2022						*
// * Author: Antoaneta Mutafchieva					*
// * Made with CLion 2020					        *
// * Reference:	cplusplus.com, Absolute C++(6e) by Walter Savitch	*
// * Lectures Dr. Gaitros, Youtube channel Dr. Gaitros                  *

#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

const int DEFAULTSIZE = 100;
template <typename T> class Stack;
template <typename T> ostream & operator <<(ostream & os,  Stack<T> &obj);
template <typename T>

class Stack {

public:
    Stack();                    // Default Constructor, stack is size 100.
    Stack(const int size);      // Constructor, creates stack of size "size"
    Stack(const Stack<T> & Obj);// Copy constructor
    ~Stack();                   // Destructor
    bool Full();                // Return true if the stack is full
    bool Empty();               // Return true if the stack is empty
    int Size();                 // Return the size of the stack
    int Number();               // Return the number of elements stored
    T Top();                    // Returns the top element, does not pop it
    T Print();
    bool Push (const T item);   // Put an item on the stack
    bool Pop();                 // Pop an item off and display it
    bool operator == (const Stack<T> & s); // = operator overload.
    friend ostream &operator << (ostream & os, Stack<T> &s)
    {
      if (s.Empty())      {os << "The Stack is Empty" << endl;}
           else           {os << "The Stack not Empty" << endl;}
        os << "The Top element is -> " << s.Top() << endl;
        os << "The size of the stack is: " << s.Size() << endl;
        os << "The number of elements it can hold is: " << s.Number() << endl;
        if (s.Full())       {os << "The Stack is Full" << endl;}
           else             {os << "The Stack is not Full" << endl;}
        os << "Popping the top element before we print it out" << endl;
        os << "The contents of the stack is: " << s.Print() << endl;
          return os;
    }

protected:
    T * _stack;                 // The "stack"
    int _size;                  // The number of elements the stack can hold
    int _top;                   // Points to the top element
    int _number;                // The number of elements in the stack.
};

//*************************************************
//Default Constructor, stack is size 100. *********
//*************************************************
template <class T>
Stack<T>::Stack()
{
    _size = DEFAULTSIZE;
    _top = -1;
    _number = 0;
    _stack = new T[_number];
}

//*************************************************
//Constructor, creates stack of size "size" *******
//*************************************************
template <class T>
Stack<T>::Stack(const int size)
{
    _size = size;
    _top = -1;
    _number = 0;
    _stack = new T[size];
}

//*************************************************
//Copy constructor ********************************
//*************************************************
template <class T>
Stack<T>::Stack(const Stack<T> & obj)
{
    _size = obj._size;
    _top = obj._top;
    _number = obj._number;
    _stack = new T[_size];

    for(int x=0; x <= _top; x++) {
        _stack[x] = obj._stack[x];         // Iterate to copy elements
    }
}

//*************************************************
//Destructor **************************************
//*************************************************
template <class T>
Stack<T>::~Stack()
{
    if(!Empty())
    { delete [] _stack; }
}

//*************************************************
//Return true if the stack is full ****************
//*************************************************
template <class T>
bool Stack<T>::Full()
{
    return _size == _number;
}

//*************************************************
//Return true if the stack is empty ***************
//*************************************************
template <class T>
bool Stack<T>::Empty()
{
    return _top == -1;
}

//*************************************************
//Return the size of the stack ********************
//*************************************************
template <class T>
int Stack<T>::Size()
{
    return _size;
}

//*************************************************
//Return the number of elements stored ************
//*************************************************
template <class T>
int Stack<T>::Number()
{
    return _number;
}

//*************************************************
//Top - Returns the top element, does not pop it.**
//*************************************************
template <class T>
T Stack<T>::Top()
{
    return _stack[_top];
}

//*************************************************
//Push - Put an item on the stack.*****************
//*************************************************
template <class T>
bool Stack<T>::Push (const T item)
{
    if (!Full()) {                  // check if not being full
        _stack[++_top] = item;       // add an element
        _number++;
        return true;}
    else
        cout << "Error pushing, stack full!" << endl;
        return false;
}

//*************************************************
//Pop an item off and display to std out **********
//*************************************************
template <class T>
bool Stack<T>::Pop()
{
    if (!Empty()) {               // check if not being empty
        cout << Top() << endl;
        --_top;
        --_size;
        return true;}
    else
        cout << "Stack is empty" << endl;
    return false;
}

template <class T>
T Stack<T>::Print()
{
    --_top;
    --_size;
    --_number;
    for (int x=_number-1; x >= 1; x--)
        cout << _stack[x] << " ";
        return _stack[0];
    // Iterate to print elements
}

//*************************************************
//Test overload assignment operator ***************
//*************************************************
template <class T>
bool Stack<T>::operator ==(const Stack<T> & s)
{
    return (_stack ==s._stack && _size == s._size && _top == s._top && _number == s._number);
}
#endif //STACK_H
