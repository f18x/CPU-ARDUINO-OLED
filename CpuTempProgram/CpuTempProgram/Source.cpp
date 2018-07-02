// Todo 
// Read CPU temp
// Store temp in a string or anything else
// Send CPU Temp trough serial to arduino

#include <iostream> // input output
#include <windows.h> // including windows.h

void setup() {
	SetConsoleTitle(TEXT ("CPU temperature")); // Can't go wrong with a good title

}
int main() {
	setup(); // Running everything we put in setup 
	
				
	getchar(); // Just a endline

	return 0;
}