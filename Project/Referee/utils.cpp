#include "utils.h"


inline MH_STATUS utils::create_hook(void* target, void* detour, void** orig) {
	MH_CreateHook(target, detour, orig);
	return MH_EnableHook(target);
}