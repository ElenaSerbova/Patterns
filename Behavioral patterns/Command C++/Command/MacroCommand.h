#pragma once
#include "pch.h"

class MacroCommand : public ICommand
{
	vector<ICommand*> _commands;
public:
	MacroCommand() = default;

	MacroCommand(initializer_list<ICommand*> commands)
	{
		for (auto command : commands)
		{
			_commands.push_back(command);
		}
	}

	void AddCommand(ICommand* command)
	{
		_commands.push_back(command);
	}

	void execute() override 
	{
		for (auto command : _commands)
		{
			command->execute();
		}
	};

	void undo() override
	{
		for (auto command : _commands)
		{
			command->undo();
		}
	}
};

