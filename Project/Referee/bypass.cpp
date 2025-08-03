#include "bypass.h"

void (*old_retHook)();
void retHook() { return; }

void (*old_notifyServer)();
void notifyServer() { return; }

void bypass::run() {
	MH_Initialize();
	printf("[ > ] initialized MH\n");
	printf("[ > ] ref base: [%p]\n", GetModuleHandleA("Referee.dll"));

	utils::create_hook((void**)((uint64_t)GetModuleHandleA("Referee.dll") + offsets::refOne), &retHook, (void**)&old_retHook);
	utils::create_hook((void**)((uint64_t)GetModuleHandleA("Referee.dll") + offsets::refTwo), &retHook, (void**)&old_retHook);
	utils::create_hook((void**)((uint64_t)GetModuleHandleA("Referee.dll") + offsets::refThree), &retHook, (void**)&old_retHook);

	utils::create_hook((void**)((uint64_t)GetModuleHandleA("GameAssembly.dll") + offsets::notifyServerCertificate), &notifyServer, (void**)&old_notifyServer);
	printf("[ + ] ssl is fire\n");

	printf("[ + ] finished bypass\n");
}