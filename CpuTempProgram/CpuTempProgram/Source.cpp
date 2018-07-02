#include <iostream>
#include <windows.h>

void setup() {
	SetConsoleTitle(TEXT ("CPU temperature")); 
}
int main() {
	setup();
	// Todo 
	// Read CPU temp
	// Store temp in a string or anything else
	// Send CPU Temp trough serial to arduino
				
	getchar(); // Just a endline

	return 0;
}