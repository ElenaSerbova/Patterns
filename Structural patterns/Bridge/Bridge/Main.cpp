#include "Header.h"

int main()
{
    Remote* remote = new Remote(new SamsungTv());
    remote->On();
    remote->NextChanel();
    remote->Off();

    remote = new Remote(new LgTv());
    remote->On();
    remote->NextChanel();
    remote->Off();

    RemoteEx* remoteEx = new RemoteEx(new SamsungTv());
    remoteEx->On();
    remoteEx->SetChanel(5);
    remoteEx->Off();

    remoteEx = new RemoteEx(new LgTv());
    remoteEx->On();
    remoteEx->SetChanel(5);
    remoteEx->Off();
}
