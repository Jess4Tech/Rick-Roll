#include "pch.h"
#include <iostream>
#include <time.h>
#include <Windows.h>


int main() {
	while (true) {
		ShellExecute(NULL, L"open", L"https://www.youtube.com/watch?v=dQw4w9WgXcQ", NULL, NULL, SW_SHOWNORMAL);
		Sleep(600000);
	}
	
}