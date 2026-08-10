/*
    Copy Constructor
        • A copy constructor is a type of constructor that creates a new object by copying the contents of an already existing object of the same class. It is called whenever an object is initialized with another object of the same class. This process, known as copy initialization, involves assigning the values of each data member of the original object to the new one.
        • [IMP] A copy constructor performs member-wise copy, which means that it copies each data member of an object individually to create a new object. A copy constructor, like all other constructors in C++, has no return type, including void.

        Characteristics of Copy Constructor
            • The copy constructor does a member-wise copy, which means it transfers each member variable from the source object to the new object.
            • If no copy constructor is explicitly defined, the compiler will build a default copy constructor.
            • Programmers can create their own copy constructor to handle special copy behaviours like deep copying or resource management.
            • Using a reference in the parameter avoids unnecessary copying and ensures better performance.
        
        Types of Copy Constructor
            1. Default Copy Constructor → It is useful for classes that do not use pointers or dynamic memory and where a `shallow copy (refer Unresolved Codes)` of members is enough.
            2. User Defined Copy Constructor → A user-defined copy constructor allows the programmer to determine how data is copied from one object to another. It is useful when the default copy behaviour is insufficient, such as when using dynamic memory or custom logic (deep copy).
        
        When the Copy Constructor is invoked?
            • When a function returns an object of a given class by value.
            • When an object is supplied as a value to a function.
            • When a new object is initialized by referencing an existing object of the same class.
            • When the compiler creates a temporary object as part of expression evaluation.
*/

# include <iostream>
using namespace std;