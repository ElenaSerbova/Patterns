#pragma once
class Component
{
public:	
	virtual ~Component() = 0 {};
	virtual void Print() = 0 {};
};

class Wall : public Component
{
public:
	~Wall() {}
	void Print() {
		cout << "Wall" << endl;
	}
};

class Roof : public Component
{
public:
	~Roof() {}
	void Print() {
		cout << "Roof" << endl;
	}
};

class Door : public Component
{
public:
	~Door() {}
	void Print() {
		cout << "Door" << endl;
	}
};

class Window : public Component
{
public:
	~Window() {}
	void Print() {
		cout << "Window" << endl;
	}
};

