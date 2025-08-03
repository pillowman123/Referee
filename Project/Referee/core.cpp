#include "core.h"

//restructure this project if u want, idfc

void core::main() {
    console cmd("Referee Bypass - @pillowguy._.");
    cmd.init();

    bypass::run();
}

BOOL APIENTRY DllMain(HMODULE hMod, DWORD ulReason, LPVOID lpReserved) {
    switch (ulReason) {
    case DLL_PROCESS_ATTACH:
        std::thread(&core::main).detach();
        break;
    }
    return TRUE;
}