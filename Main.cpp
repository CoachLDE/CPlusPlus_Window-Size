/************************************************************************************************
	Name: CoachLDE
	Date: 09.27.2023
	Purpose: In this program I will create a function that will allow me to change the dimensions
			 of the console window.
*************************************************************************************************/

#include <iostream>
#include <Windows.h>	//In this library is the function that will allow is to control cursor position
#include <conio.h>		//In this library is a function to detect keypresses

using namespace std;

void windowSize(int x, int y)
{
	HWND console = GetConsoleWindow();		//Get the Console Window and put it in a variable of the Window Handle type
	RECT ConsoleRect;						//Rect Structure defines a Rectangle (The Window)
	GetWindowRect(console, &ConsoleRect);

	MoveWindow(console, ConsoleRect.left, ConsoleRect.top, x, y, TRUE);
}

int main()
{
	while (true)
	{
		windowSize(500, 700);
	}

	return 0;
}