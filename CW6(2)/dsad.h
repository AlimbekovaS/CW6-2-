#pragma once

class var
{
	int intVal;
	
public:
	var(int v) { intVal = v; }

	//operator int
	operator int() { return intVal; }
};
