#pragma once

#define EntryPoint __stdcall DllMain
#define CreateThreadEasy(func) CreateThread(0, 0, (LPTHREAD_START_ROUTINE)&func, 0, 0, 0)