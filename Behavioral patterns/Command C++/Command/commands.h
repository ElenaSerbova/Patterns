#pragma once
class TvOnCommand : public ICommand
{
	TvService* tv;
public:
	TvOnCommand() {
		tv = new TvService;	
	}
	~TvOnCommand() {
		delete tv;
	}

	virtual void execute()
	{
		tv->on();
	}

	virtual void undo()
	{
		tv->off();
	}

};

class TvOffCommand : public ICommand
{
public:
	TvOffCommand() {}
	~TvOffCommand() {}

	virtual void execute()
	{
		cout << "Tv off" << endl;
	}

	virtual void undo()
	{
		cout << "Undo tv off" << endl;
	}
};

class LightOnCommand : public ICommand
{
public:
	LightOnCommand() {}
	~LightOnCommand() {}

	virtual void execute()
	{
		cout << "Light on" << endl;
	}

	virtual void undo()
	{
		cout << "Undo light on" << endl;
	}

};

class LightOffCommand : public ICommand
{
public:
	LightOffCommand() {}
	~LightOffCommand() {}

	virtual void execute()
	{
		cout << "Light off" << endl;
	}

	virtual void undo()
	{
		cout << "Undo light off" << endl;
	}
};

class SecurityOnCommand : public ICommand
{
public:
	SecurityOnCommand() {}
	~SecurityOnCommand() {}

	virtual void execute()
	{
		cout << "Security on" << endl;
	}

	virtual void undo()
	{
		cout << "Undo security on" << endl;
	}

};

class SecurityOffCommand : public ICommand
{
public:
	SecurityOffCommand() {}
	~SecurityOffCommand() {}

	virtual void execute()
	{
		cout << "Security off" << endl;
	}

	virtual void undo()
	{
		cout << "Undo security off" << endl;
	}
};

class NoCommand : public ICommand
{
public:
	NoCommand() {}
	~NoCommand() {}

	virtual void execute()
	{		
	}

	virtual void undo()
	{		
	}
};
