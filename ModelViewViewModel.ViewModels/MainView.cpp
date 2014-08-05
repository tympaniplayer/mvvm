#include "stdafx.h"
#include "MainView.h"

using namespace System::Collections::Generic;
using namespace System;


namespace ModelViewViewModelViewModel{
    void MainView::PopulateList()
    {
        myList = gcnew List<ManagedPerson^>();
        myList->Add(gcnew ManagedPerson(new Person()));
    }
    MainView::MainView()
    {
    }
};
