#pragma once
#include <string>
#include <Windows.h>

class console {
private:
	std::string title{};
public:
	console(std::string title) : title(title) {}

	void init();
};