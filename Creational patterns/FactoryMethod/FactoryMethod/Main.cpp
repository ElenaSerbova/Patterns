#include "Header.h"

Game* Choice();

int main()
{
    Game* game = Choice();
    game->Run();    
}


Game* Choice()
{
    cout << "1. Human" << endl;
    cout << "2. Elf" << endl;

    int choice;
    cin >> choice;

    switch (choice)
    {
    case 1:
        return new HumanGame;
    case 2:
        return new ElfGame;
    default:
        return nullptr;
    }
}