// MemeWare.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Windows.h"
using namespace std;

int main()
{
	FreeConsole();
	bool truth = true;
	int input = 0;
	while (truth == true) {
		if (GetAsyncKeyState('Q') & 0x8000) {
			input = 1;
		}
		else if(GetAsyncKeyState('W') & 0x8000) {
			input = 2;
		}
		else if (GetAsyncKeyState('E') & 0x8000) {
			input = 3;
		}
		else if (GetAsyncKeyState('R') & 0x8000) {
			input = 4;
		}
		else if (GetAsyncKeyState('T') & 0x8000) {
			input = 5;
		}
		else if (GetAsyncKeyState('Y') & 0x8000) {
			input = 6;
		}
		else if (GetAsyncKeyState('U') & 0x8000) {
			input = 7;
		}
		else if (GetAsyncKeyState('I') & 0x8000) {
			input = 8;
		}
		else if (GetAsyncKeyState('O') & 0x8000) {
			input = 9;
		}
		else if (GetAsyncKeyState('P') & 0x8000) {
			input = 10;
		}
		else if (GetAsyncKeyState('A') & 0x8000) {
			input = 11;
		}
		else if (GetAsyncKeyState('S') & 0x8000) {
			input = 12;
		}
		else if (GetAsyncKeyState('D') & 0x8000) {
			input = 13;
		}
		else if (GetAsyncKeyState('F') & 0x8000) {
			input = 14;
		}
		else if (GetAsyncKeyState('G') & 0x8000) {
			input = 15;
		}
		else if (GetAsyncKeyState('H') & 0x8000) {
			input = 16;
		}
		else if (GetAsyncKeyState('J') & 0x8000) {
			input = 17;
		}
		else if (GetAsyncKeyState('K') & 0x8000) {
			input = 18;
		}
		else if (GetAsyncKeyState('L') & 0x8000) {
			input = 19;
		}
		else if (GetAsyncKeyState('Z') & 0x8000) {
			input = 20;
		}
		else if (GetAsyncKeyState('X') & 0x8000) {
			input = 21;
		}
		else if (GetAsyncKeyState('C') & 0x8000) {
			input = 22;
		}
		else if (GetAsyncKeyState('V') & 0x8000) {
			input = 23;
		}
		else if (GetAsyncKeyState('B') & 0x8000) {
			input = 24;
		}
		else if (GetAsyncKeyState('N') & 0x8000) {
			input = 25;
		}
		else if (GetAsyncKeyState('M') & 0x8000) {
			input = 26;
		}
		if (input > 0) {
			switch (input) {
			case 1:
				ShellExecute(0, 0, L"https://www.youtube.com/watch?v=EQYL_70MuZ4", 0, 0, SW_SHOW);
				input = 0;
				break;
			case 2:
				ShellExecute(0, 0, L"https://www.youtube.com/watch?v=IDDdJ2lAsyI", 0, 0, SW_SHOW);
				input = 0;
				break;
			case 3:
				ShellExecute(0, 0, L"https://www.youtube.com/watch?v=dQw4w9WgXcQ", 0, 0, SW_SHOW);
				input = 0;
				break;
			case 4:
				ShellExecute(0, 0, L"https://www.youtube.com/watch?v=TUa4wO6MoIU", 0, 0, SW_SHOW);
				input = 0;
				break;
			case 5:
				ShellExecute(0, 0, L"https://www.youtube.com/watch?v=jeg_TJvkSjg", 0, 0, SW_SHOW);
				input = 0;
				break;
			case 6:
				ShellExecute(0, 0, L"https://www.youtube.com/watch?v=zBWPL7oD9X8", 0, 0, SW_SHOW);
				input = 0;
				break;
			case 7:
				ShellExecute(0, 0, L"https://www.youtube.com/watch?v=oLPcHl2yS3M", 0, 0, SW_SHOW);
				input = 0;
				break;
			case 8:
				ShellExecute(0, 0, L"https://www.youtube.com/watch?v=rD35Q2bh5iI", 0, 0, SW_SHOW);
				input = 0;
				break;
			case 9:
				ShellExecute(0, 0, L"https://www.youtube.com/watch?v=59z3izhxtGo", 0, 0, SW_SHOW);
				input = 0;
				break;
			case 10:
				ShellExecute(0, 0, L"https://www.youtube.com/watch?v=dOfNkMXXohE", 0, 0, SW_SHOW);
				input = 0;
				break;
			case 11:
				ShellExecute(0, 0, L"https://www.youtube.com/watch?v=RETRen4oHpo", 0, 0, SW_SHOW);
				input = 0;
				break;
			case 12:
				ShellExecute(0, 0, L"https://youtu.be/DhOieh80CFw?t=5", 0, 0, SW_SHOW);
				input = 0;
				break;
			case 13:
				ShellExecute(0, 0, L"https://www.youtube.com/watch?v=-U4593351yY", 0, 0, SW_SHOW);
				input = 0;
				break;
			case 14:
				ShellExecute(0, 0, L"https://www.youtube.com/watch?v=vKeET4mWXOE", 0, 0, SW_SHOW);
				input = 0;
				break;
			case 15:
				ShellExecute(0, 0, L"https://www.youtube.com/watch?v=z-33xndJvL0", 0, 0, SW_SHOW);
				input = 0;
				break;
			case 16:
				ShellExecute(0, 0, L"https://www.youtube.com/watch?v=Q75389kAqiM", 0, 0, SW_SHOW);
				input = 0;
				break;
			case 17:
				ShellExecute(0, 0, L"https://www.youtube.com/watch?v=dgha9S39Y6M", 0, 0, SW_SHOW);
				input = 0;
				break;
			case 18:
				ShellExecute(0, 0, L"https://www.youtube.com/watch?v=TKfS5zVfGBc", 0, 0, SW_SHOW);
				input = 0;
				break;
			case 19:
				ShellExecute(0, 0, L"https://www.youtube.com/watch?v=P5ge4mIIt04", 0, 0, SW_SHOW);
				input = 0;
				break;
			case 20:
				ShellExecute(0, 0, L"https://www.youtube.com/watch?v=HrN-GPYlcbQ", 0, 0, SW_SHOW);
				input = 0;
				break;
			case 21:
				ShellExecute(0, 0, L"https://www.youtube.com/watch?v=0Z06ffg6vjo", 0, 0, SW_SHOW);
				input = 0;
				break;
			case 22:
				ShellExecute(0, 0, L"https://www.youtube.com/watch?v=yFmoi5Rt2ns", 0, 0, SW_SHOW);
				input = 0;
				break;
			case 23:
				ShellExecute(0, 0, L"https://www.youtube.com/watch?v=oV3hisJEJGU", 0, 0, SW_SHOW);
				input = 0;
				break;
			case 24:
				ShellExecute(0, 0, L"https://www.youtube.com/watch?v=nHav2bhd-4M", 0, 0, SW_SHOW);
				input = 0;
				break;
			case 25:
				ShellExecute(0, 0, L"https://www.youtube.com/watch?v=YjnZ-omkOpI", 0, 0, SW_SHOW);
				input = 0;
				break;
			case 26:
				ShellExecute(0, 0, L"https://youtu.be/-yfOsVrJLGs?t=9", 0, 0, SW_SHOW);
				input = 0;
				break;
			}
		}
	}
    return 0;
}

