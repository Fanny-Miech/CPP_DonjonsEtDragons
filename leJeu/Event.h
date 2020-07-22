#pragma once

class Event
{
public :
	Event();
	~Event();

	virtual void interact();
	void interact(Event& event);
};

