// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the MODELS_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// MODELS_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef MODELS_EXPORTS
#define MODELS_API __declspec(dllexport)
#else
#define MODELS_API __declspec(dllimport)
#endif
#include <string>
using namespace std;
// This class is exported from the Models.dll
class MODELS_API Person {
public:
    Person(void);
    const char* GetFirstName(){ return firstName.c_str(); }
    const char* GetLastName(){ return lastName.c_str(); }
    const char* GetFullName(){ return string(firstName + " " + lastName).c_str(); }
private:
    string firstName;
    string lastName;
};

