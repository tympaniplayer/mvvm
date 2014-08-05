// Models.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "Person.h"




// This is the constructor of a class that has been exported.
// see Models.h for the class definition
Person::Person()
{
    firstName = "Nate";
    lastName = "Palmer";
    fullName = firstName + " " + lastName;
}

const char* Person::GetFirstName()
{ 
    return firstName.c_str(); 
}

const char* Person::GetLastName()
{ 
    return lastName.c_str(); 
}

const char* Person::GetFullName()
{ 
    // This line of code won't work. string(firstName + " " + lastName) goes
    // out of scope the moment this function exits, meaning you're referencing 
    // invalid memory.
    // return string(firstName + " " + lastName).c_str();
    return fullName.c_str();
}