#include "stdafx.h"
#include "MainView.h"
using namespace System::Collections::Generic;
using namespace System;

namespace ModelViewViewModelViewModel{
    void MainView::PopulateList()
    {
        List<String^>^ returnList = gcnew List<String^>();
        returnList->Add("Hello World");
    }
    MainView::MainView()
    {
    }
};
