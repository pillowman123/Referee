#pragma once
#include <MinHook.h>

namespace utils
{
	extern inline MH_STATUS create_hook(void* target, void* detour, void** orig);
}