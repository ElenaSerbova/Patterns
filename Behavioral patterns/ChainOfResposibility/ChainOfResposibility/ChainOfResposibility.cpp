#include "Header.h"

IHandler* createChain()
{
    IHandler* authHandler = new AuthorizationHandler();
    IHandler* csrfHandler = new CscrTokenHandler();
    IHandler* validationHandler = new ValidationHandler();

    authHandler->SetNext(csrfHandler);
    csrfHandler->SetNext(validationHandler);
}

int main()
{
    IHandler* chainHandlers = createChain();

    Request request{ "Kolya", "", "data" };

    try
    {
        chainHandlers->Handle(request);
    }
    catch (const exception& ex)
    {
        cout << ex.what() << endl;
    }
}
