#pragma once

class ICommand
{
public:	
	virtual ~ICommand() = 0 {};
	virtual void execute() = 0;
	virtual void undo() = 0;
};

