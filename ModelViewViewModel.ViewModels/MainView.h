#pragma once
#include<string>
#include "../Models/Person.h"


using namespace System::Collections::Generic;
using namespace System;

namespace ModelViewViewModelViewModel{
    public ref class ManagedPerson {
    internal:
        ManagedPerson(Person* person)
        {
            this->person = person;
        }
    public:
        ManagedPerson()
        {
            this->person = new Person();
        }

        String^ GetFirstName()
        {
            return gcnew String(person->GetFirstName());
        }

        String^ GetLastName()
        {
            return gcnew String(person->GetLastName());
        }

        String^ GetFullName()
        {
            return gcnew String(person->GetFullName());
        }
    private:
        Person* person;
    };

    public ref class MainView
    {
    public:
        MainView();
        void PopulateList();
        List<ManagedPerson ^>^ GetList(){ return myList; }
    private:
        List<ManagedPerson ^>^ myList;
    };
}
