#include "Singleton.h"

int main()
{
    Singleton* s1 = Singleton::GetObject();
    s1->Print();

    Singleton* s2 = Singleton::GetObject();
    s2->Print();
}

