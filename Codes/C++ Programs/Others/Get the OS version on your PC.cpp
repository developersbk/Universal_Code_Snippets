Get the OS version on your PC

#include <windows.h>
#include <iostream>
#include <dos.h>
#include <string.h> 
int main(void)

{
OSVERSIONINFO osver;
osver.dwOSVersionInfoSize = sizeof(osver);
if (GetVersionEx(&osver))

{
if (osver.dwPlatformId == VER_PLATFORM_WIN32s)
cout <<"Win32 ";
else if (osver.dwPlatformId == VER_PLATFORM_WIN32_WINDOWS)

{
if (osver.dwMinorVersion == 0 && (strchr(osver.szCSDVersion,'B') == NULL)
&& (strchr(osver.szCSDVersion,'C') == NULL))
cout <<"Windows 95 ";
else if (osver.dwMinorVersion == 0 && (strchr(osver.szCSDVersion,'B') != NULL))
cout <<"Windows 95 OSR 2 ";
else if (osver.dwMinorVersion == 0 && (strchr(osver.szCSDVersion,'C') != NULL))
cout <<"Windows 95 OSR 2.5 ";
else if (osver.dwMinorVersion == 10 && (strchr(osver.szCSDVersion,'A') == NULL))
cout <<"Windows 98 ";
else if (osver.dwMinorVersion == 10 && (strchr(osver.szCSDVersion,'A') != NULL))
cout <<"Windows 98 Second Edition ";
else if (osver.dwMinorVersion == 90)
cout <<"Windows Millenium Edition ";
else
cout<<"Unknown Windows ";
}
else if (osver.dwPlatformId == VER_PLATFORM_WIN32_NT)
cout <<"Windows NT ";
cout <<osver.dwMajorVersion<<"."<<osver.dwMinorVersion<<"."
<<(osver.dwBuildNumber & 0xffff)<<osver.szCSDVersion<<endl;
}
else


{
cout <<"Cannot gain version information."<<endl;
}
system("pause");
return 0;
}
