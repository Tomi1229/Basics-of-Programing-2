#pragma once
#include <stdio.h>

class Computer
{
	unsigned static nextId;
	unsigned const id;
	unsigned const clockSpeed;

public:
	Computer();
	Computer(const Computer &); // Vigyazz! A masolatnak is egyedi azonositoja legyen!
	unsigned getClockSpeed() const;
	void print() const;
	friend void friendlyPrint(const Computer &); // Ez ne legyen tagfuggveny!
};

void friendlyPrint(const Computer &);