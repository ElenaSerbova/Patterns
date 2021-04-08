#include "Headers.h"

int main()
{
    SuperHero* ironMan = new IronMan();
    ironMan->Fly();

    SuperHero* tor = new Tor();
    tor->Fly();

    tor->SetFlyBehavior(new SimpleFly());
    tor->Fly();
}
