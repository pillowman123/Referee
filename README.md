### Thingies to install:

## Installing Git

You can download git at https://git-scm.com/downloads/win
**Just hit next until the thing fucking installs**

## Installaing MinHook (Git & Vcpkg)

You can download and install MinHook using the [vcpkg](https://github.com/Microsoft/vcpkg) dependency manager:

    git clone https://github.com/microsoft/vcpkg
    .\vcpkg\bootstrap-vcpkg.bat
    .\vcpkg\vcpkg integrate install
    .\vcpkg\vcpkg install minhook


    
## Referee Check Signatures:

    \x4C\x89\x4C\x24\x00\x4C\x89\x44\x24\x00\x48\x89\x54\x24\x00\x48\x89\x4C\x24\x00\x48\x81\xEC\x00\x00\x00\x00\x48\x8B\x05\x00\x00\x00\x00\x48\x33\xC4\x48\x89\x84\x24\x00\x00\x00\x00\x48\x8D\x84\x24
