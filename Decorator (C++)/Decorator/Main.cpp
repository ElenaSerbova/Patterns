#include "Header.h"

int main()
{
    INotifier* notifier = new SmsDecorator();
    notifier = new EmailDecorator(notifier);
    notifier = new FacebookDecorator(notifier);

    notifier->Send("tratatatatata");

    delete notifier;

}