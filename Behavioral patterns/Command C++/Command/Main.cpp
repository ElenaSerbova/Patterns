#include "pch.h"
#include <iostream>

int main()
{
	/*SimpleRemoteControl control;
	
	control.setCommand(new TvOnCommand());
	control.buttonClicked();

	control.setCommand(new TvOffCommand());
	control.buttonClicked();*/

	RemoteControl control;
	control.setCommand(0, new TvOnCommand(), new TvOffCommand());
	control.onButtonClicked(0);
	control.offButtonClicked(0);

	control.setCommand(1, new LightOnCommand(), new LightOffCommand());
	control.onButtonClicked(1);
	control.offButtonClicked(1);

	MacroCommand* getOutCommand = new MacroCommand({ new TvOffCommand, new LightOffCommand, new SecurityOnCommand });
	MacroCommand* backToHomeCommand = new MacroCommand({ new LightOnCommand, new SecurityOffCommand });

	control.setCommand(2, getOutCommand, backToHomeCommand);
	control.onButtonClicked(2);
}
