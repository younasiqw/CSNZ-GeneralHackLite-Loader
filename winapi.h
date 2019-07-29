#pragma once

#include <Windows.h>

typedef FARPROC(WINAPI* tGetProcAddress)(HMODULE hModule, LPCSTR lpProcName);
typedef HMODULE(WINAPI* tLoadLibraryA)(LPCSTR lpLibFileName);
typedef HWND(WINAPI* tFindWindowA)(LPCSTR lpClassName, LPCSTR lpWindowName);
typedef BOOL(WINAPI* tSetConsoleTitleA)(LPCTSTR lpConsoleTitle);
typedef HANDLE(WINAPI* tGetStdHandle)(DWORD nStdHandle);
typedef BOOL(WINAPI* tGetConsoleScreenBufferInfo)(HANDLE hConsoleOutput, PCONSOLE_SCREEN_BUFFER_INFO lpConsoleScreenBufferInfo);
typedef BOOL(WINAPI* tSetConsoleTextAttribute)(HANDLE hConsoleOutput, WORD wAttributes);
typedef HANDLE(WINAPI* tCreateThread)(LPSECURITY_ATTRIBUTES lpThreadAttributes, SIZE_T dwStackSize, LPTHREAD_START_ROUTINE lpStartAddress, LPVOID lpParameter, DWORD dwCreationFlags, LPDWORD lpThreadId);
typedef DWORD(WINAPI* tGetTempPathA)(DWORD nBufferLength, LPSTR lpBuffer);
typedef HANDLE(WINAPI* tCreateMutexA)(LPSECURITY_ATTRIBUTES lpMutexAttributes, BOOL bInitialOwner, LPCSTR lpName);
typedef BOOL(WINAPI* tCloseHandle)(HANDLE hObject);
typedef HGLOBAL(WINAPI* tLoadResource)(HMODULE hModule, HRSRC hResInfo);
typedef LPVOID(WINAPI* tLockResource)(HGLOBAL hResData);
typedef DWORD(WINAPI* tSizeofResource)(HMODULE hModule, HRSRC hResInfo);
typedef HANDLE(WINAPI* tOpenProcess)(DWORD dwDesiredAccess, BOOL bInheritHandle, DWORD dwProcessId);
typedef void (WINAPI* tSleep)(DWORD dwMilliseconds);
typedef BOOL(WINAPI* tWriteFile)(HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped);
typedef HANDLE(WINAPI* tCreateFileA)(LPCSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile);
typedef HRSRC(WINAPI* tFindResourceA)(HMODULE hModule, LPCSTR lpName, LPCSTR lpType);
typedef LPVOID(WINAPI* tVirtualAllocEx)(HANDLE hProcess, LPVOID lpAddress, SIZE_T dwSize, DWORD flAllocationType, DWORD flProtect);
typedef BOOL(WINAPI* tWriteProcessMemory)(HANDLE hProcess, LPVOID lpBaseAddress, LPCVOID lpBuffer, SIZE_T nSize, SIZE_T* lpNumberOfBytesWritten);
typedef HANDLE(WINAPI* tCreateRemoteThread)(HANDLE hProcess, LPSECURITY_ATTRIBUTES lpThreadAttributes, SIZE_T dwStackSize, LPTHREAD_START_ROUTINE lpStartAddress, LPVOID lpParameter, DWORD dwCreationFlags, LPDWORD lpThreadId);
typedef DWORD(WINAPI* tGetWindowThreadProcessId)(HWND hWnd, LPDWORD lpdwProcessId);
typedef DWORD(WINAPI* tWaitForSingleObject)(HANDLE hHandle, DWORD dwMilliseconds);

struct WinAPI
{
	tGetProcAddress hGetProcAddress;
	tLoadLibraryA hLoadLibraryA;
	tFindWindowA hFindWindowA;
	tSetConsoleTitleA hSetConsoleTitleA;
	tGetStdHandle hGetStdHandle;
	tGetConsoleScreenBufferInfo hGetConsoleScreenBufferInfo;
	tSetConsoleTextAttribute hSetConsoleTextAttribute;
	tCreateThread hCreateThread;
	tGetTempPathA hGetTempPathA;
	tCreateMutexA hCreateMutexA;
	tCloseHandle hCloseHandle;
	tLoadResource hLoadResource;
	tLockResource hLockResource;
	tSizeofResource hSizeofResource;
	tOpenProcess hOpenProcess;
	tSleep hSleep;
	tWriteFile hWriteFile;
	tCreateFileA hCreateFileA;
	tFindResourceA hFindResourceA;
	tVirtualAllocEx hVirtualAllocEx;
	tWriteProcessMemory hWriteProcessMemory;
	tCreateRemoteThread hCreateRemoteThread;
	tGetWindowThreadProcessId hGetWindowThreadProcessId;
	tWaitForSingleObject hWaitForSingleObject;
};
WinAPI winapi;