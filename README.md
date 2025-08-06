## We bypassing Referee tn because RR doesnt wanna patch anything!!! (Includes SSL & Latest RR Dump [Will be always updated :3])

**Tutorial**: https://www.youtube.com/watch?v=DV5YnMlXRCE

### Requirements:
- A fucking brain (Not that hard to install this shit, follow a YT tutorial, and compile the given project with this source)

### Thingies to install:
- Visual Studio (To Compile Project)
- Scylla (https://github.com/NtQuery/Scylla/releases/tag/v0.9.8) [Refer to YT Tutorial on how to install]
- Ida (7.5+ Required)
- Ida Fusion (https://github.com/senator715/IDA-Fusion) [Throw in plugins folder in IDA directory once installed, refer to repository readme]
- Git (https://git-scm.com/downloads/win) [Git for Windows/x64 Setup])
- MinHook (Refer to below on how to install)

## Installaing MinHook (Git & Vcpkg)

You can download and install MinHook using the [vcpkg](https://github.com/Microsoft/vcpkg) dependency manager:

    git clone https://github.com/microsoft/vcpkg
    .\vcpkg\bootstrap-vcpkg.bat
    .\vcpkg\vcpkg integrate install
    .\vcpkg\vcpkg install minhook



    
## Referee Check Signatures:
    \x4C\x89\x4C\x24\x00\x4C\x89\x44\x24\x00\x48\x89\x54\x24\x00\x48\x89\x4C\x24\x00\x48\x81\xEC\x00\x00\x00\x00\x48\x8B\x05\x00\x00\x00\x00\x48\x33\xC4\x48\x89\x84\x24\x00\x00\x00\x00\x48\x8D\x84\x24
    
**Refer to tutorial on how to use this signature, and what to find with it to bypass Referee**


## Using project
**After everything has been installed, switch debug to release, then hit (ctrl + b) to compile the project. Then inject with any method you'd like!**

## Credits:
- pillowguy._. (Finding Referee bypass, blah blah blah yk the rest)
- Ryan (Creating YT Tutorial for people)
  
