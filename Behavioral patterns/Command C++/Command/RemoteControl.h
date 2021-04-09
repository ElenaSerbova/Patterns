#pragma once
class SimpleRemoteControl
{
	ICommand* button;
public:
	void setCommand(ICommand* command)
	{
		button = command;
	}

	void buttonClicked()
	{
		button->execute();
	}
};

class RemoteControl
{
	vector<ICommand*> onCommands;
	vector<ICommand*> offCommands;

	ICommand* undoCommand;
public:

	RemoteControl()
	{
		onCommands.reserve(7);
		offCommands.reserve(7);

		onCommands.resize(7, new NoCommand());
		offCommands.resize(7, new NoCommand());

		undoCommand = new NoCommand();
	}

	void setCommand(int slot, ICommand* onCommand, ICommand* offCommand)
	{
		onCommands[slot] = onCommand;
		offCommands[slot] = offCommand;
	}

	void onButtonClicked(int slot)
	{
		onCommands[slot]->execute();
		undoCommand = onCommands[slot];
	}

	void offButtonClicked(int slot)
	{
		offCommands[slot]->execute();
		undoCommand = offCommands[slot];
	}

	void undoClicked()
	{
		undoCommand->undo();
	}

};

