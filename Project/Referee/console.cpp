#include "console.h"

void console::init() {
	AllocConsole();
	SetConsoleTitleA(title.c_str());

	FILE* f;
	freopen_s(&f, "CONOUT$", "w", stdout);
}