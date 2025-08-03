### Deps

## Installing Git

You can download git at https://git-scm.com/downloads/win
**Just hit next until the thing fucking installs**

## Installaing MinHook (Git & Vcpkg)

You can download and install MinHook using the [vcpkg](https://github.com/Microsoft/vcpkg) dependency manager:

    git clone https://github.com/microsoft/vcpkg
    .\vcpkg\bootstrap-vcpkg.bat
    .\vcpkg\vcpkg integrate install
    .\vcpkg\vcpkg install minhook
