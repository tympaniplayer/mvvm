#pragma once
//#include <Person.h>
using namespace System::Collections::Generic;
using namespace System;
#include<string>
namespace ModelViewViewModelViewModel{
    public ref class MainView
    {
    public:
        MainView();
        void PopulateList();
        List<String ^>^ GetList(){ return myList; }
    private:
        List<String ^>^ myList;
    };
}
