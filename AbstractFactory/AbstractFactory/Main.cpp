#include "Header.h"

void GenerateGUI(GUIFactory* factory);

int main()
{
    GenerateGUI( new MacFactory());
    GenerateGUI(new WindowsFactory());    
}

void GenerateGUI(GUIFactory* factory)
{
    Button* button = factory->CreateButton();
    button->Print();

    Checkbox* checkbox = factory->CreateCheckbox();
    checkbox->Print();
}

