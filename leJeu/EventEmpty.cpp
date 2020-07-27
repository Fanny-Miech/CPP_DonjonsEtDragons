#include "EventEmpty.h"
#include <iostream>

using namespace std;

EventEmpty::EventEmpty()
{
}

EventEmpty::~EventEmpty()
{
}

void EventEmpty::display() const
{
	cout << "Case vide" << endl;
}

void EventEmpty::interact()
{
	cout << "je suis une case vide" << endl;
}
