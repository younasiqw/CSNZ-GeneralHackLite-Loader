#pragma once

#include "XorStr.h"

#define WB /*wb*/XorStr<0x16,3,0x0480FF57>("\x61\x75"+0x0480FF57).s
#define WND_NAME /*General Hack Lite Loader*/XorStr<0x57,25,0x81B6E192>("\x10\x3D\x37\x3F\x29\x3D\x31\x7E\x17\x01\x02\x09\x43\x28\x0C\x12\x02\x48\x25\x05\x0A\x08\x08\x1C"+0x81B6E192).s
#define GAME /*Game: */XorStr<0x2A,7,0x7BC90C4B>("\x6D\x4A\x41\x48\x14\x0F"+0x7BC90C4B).s
#define NOT_FOUND /*Not found\n*/XorStr<0x15,11,0x6D014351>("\x5B\x79\x63\x38\x7F\x75\x6E\x72\x79\x14"+0x6D014351).s
#define HACK /*Hack: */XorStr<0x64,7,0x216484CB>("\x2C\x04\x05\x0C\x52\x49"+0x216484CB).s
#define NOT_INJECTED /*Not injected\n*/XorStr<0xE5,14,0x09B699EC>("\xAB\x89\x93\xC8\x80\x84\x81\x89\x8E\x9A\x8A\x94\xFB"+0x09B699EC).s
#define GAME_NAME /*Counter-Strike Nexon: Zombies*/XorStr<0x4F,30,0x53EEB872>("\x0C\x3F\x24\x3C\x27\x31\x27\x7B\x04\x2C\x2B\x33\x30\x39\x7D\x10\x3A\x18\x0E\x0C\x59\x44\x3F\x09\x0A\x0A\x00\x0F\x18"+0x53EEB872).s
#define FOUND /*Found\n*/XorStr<0xCB,7,0xF20D4382>("\x8D\xA3\xB8\xA0\xAB\xDA"+0xF20D4382).s
#define INJECTED /*Injected\n*/XorStr<0x86,10,0x78BA7E14>("\xCF\xE9\xE2\xEC\xE9\xFF\xE9\xE9\x84"+0x78BA7E14).s
#define CLS /*cls*/XorStr<0x99,4,0x4594469B>("\xFA\xF6\xE8"+0x4594469B).s
#define NEED_ADMIN /*Please restart the application as administrator*/XorStr<0x1A,48,0xAC29B66B>("\x4A\x77\x79\x7C\x6D\x7A\x00\x53\x47\x50\x50\x44\x54\x53\x08\x5D\x42\x4E\x0C\x4C\x5E\x5F\x5C\x58\x51\x52\x40\x5C\x59\x59\x18\x58\x49\x1B\x5D\x59\x53\x56\x2E\x28\x31\x37\x36\x24\x32\x28\x3A"+0xAC29B66B).s
#define PATH /*%s\\%s.tmp*/XorStr<0x35,10,0xBAD3F58E>("\x10\x45\x6B\x1D\x4A\x14\x4F\x51\x4D"+0xBAD3F58E).s
#define S /*%s*/XorStr<0xA7,3,0x3DC87928>("\x82\xDB"+0x3DC87928).s

#define KERNEL_DLL /*kernel32.dll*/XorStr<0x31,13,0x7D7DC681>("\x5A\x57\x41\x5A\x50\x5A\x04\x0A\x17\x5E\x57\x50"+0x7D7DC681).s
#define USER_DLL /*user32.dll*/XorStr<0x43,11,0xCDF2CCE4>("\x36\x37\x20\x34\x74\x7A\x67\x2E\x27\x20"+0xCDF2CCE4).s
#define GETPROCADDRESS /*GetProcAddress*/XorStr<0xA8,15,0x70F94AAD>("\xEF\xCC\xDE\xFB\xDE\xC2\xCD\xEE\xD4\xD5\xC0\xD6\xC7\xC6"+0x70F94AAD).s
#define LOADLIBRARY /*LoadLibraryA*/XorStr<0x02,13,0x4C871906>("\x4E\x6C\x65\x61\x4A\x6E\x6A\x7B\x6B\x79\x75\x4C"+0x4C871906).s
#define FINDWINDOW /*FindWindowA*/XorStr<0x64,12,0x3F5B99F6>("\x22\x0C\x08\x03\x3F\x00\x04\x0F\x03\x1A\x2F"+0x3F5B99F6).s
#define CREATETHREAD /*CreateThread*/XorStr<0xDB,13,0x78313E83>("\x98\xAE\xB8\xBF\xAB\x85\xB5\x8A\x91\x81\x84\x82"+0x78313E83).s
#define CLOSEHANDLE /*CloseHandle*/XorStr<0x9F,12,0xF5D2C01C>("\xDC\xCC\xCE\xD1\xC6\xEC\xC4\xC8\xC3\xC4\xCC"+0xF5D2C01C).s
#define SETCONSOLETITLEA /*SetConsoleTitleA*/XorStr<0x8B,17,0xA3A0549B>("\xD8\xE9\xF9\xCD\xE0\xFE\xE2\xFD\xFF\xF1\xC1\xFF\xE3\xF4\xFC\xDB"+0xA3A0549B).s
#define GETSTDHANDLE /*GetStdHandle*/XorStr<0x99,13,0x64423165>("\xDE\xFF\xEF\xCF\xE9\xFA\xD7\xC1\xCF\xC6\xCF\xC1"+0x64423165).s
#define GETCONSOLESCREENBUFFERINFO /*GetConsoleScreenBufferInfo*/XorStr<0x73,27,0x2C5512CA>("\x34\x11\x01\x35\x18\x16\x0A\x15\x17\x19\x2E\x1D\x0D\xE5\xE4\xEC\xC1\xF1\xE3\xE0\xE2\xFA\xC0\xE4\xED\xE3"+0x2C5512CA).s
#define SETCONSOLETEXTATTRIBUTE /*SetConsoleTextAttribute*/XorStr<0x39,24,0x51350230>("\x6A\x5F\x4F\x7F\x52\x50\x4C\x2F\x2D\x27\x17\x21\x3D\x32\x06\x3C\x3D\x38\x22\x2E\x38\x3A\x2A"+0x51350230).s
#define GETTEMPPATHA /*GetTempPathA*/XorStr<0xA3,13,0x3A49FF00>("\xE4\xC1\xD1\xF2\xC2\xC5\xD9\xFA\xCA\xD8\xC5\xEF"+0x3A49FF00).s
#define CREATEMUTEXA /*CreateMutexA*/XorStr<0x81,13,0x8E6E2AA7>("\xC2\xF0\xE6\xE5\xF1\xE3\xCA\xFD\xFD\xEF\xF3\xCD"+0x8E6E2AA7).s
#define LOADRESOURCE /*LoadResource*/XorStr<0xCF,13,0xEC5F7C2A>("\x83\xBF\xB0\xB6\x81\xB1\xA6\xB9\xA2\xAA\xBA\xBF"+0xEC5F7C2A).s
#define LOCKRESOURCE /*LockResource*/XorStr<0xB3,13,0xDAA9915B>("\xFF\xDB\xD6\xDD\xE5\xDD\xCA\xD5\xCE\xCE\xDE\xDB"+0xDAA9915B).s
#define SIZEOFRESOURCE /*SizeofResource*/XorStr<0x1C,15,0xDD629CB0>("\x4F\x74\x64\x7A\x4F\x47\x70\x46\x57\x4A\x53\x55\x4B\x4C"+0xDD629CB0).s
#define OPENPROCESS /*OpenProcess*/XorStr<0x8F,12,0x6536A977>("\xC0\xE0\xF4\xFC\xC3\xE6\xFA\xF5\xF2\xEB\xEA"+0x6536A977).s
#define SLEEP /*Sleep*/XorStr<0x5B,6,0xC85A94CB>("\x08\x30\x38\x3B\x2F"+0xC85A94CB).s
#define WRITEFILE /*WriteFile*/XorStr<0x94,10,0x80A62806>("\xC3\xE7\xFF\xE3\xFD\xDF\xF3\xF7\xF9"+0x80A62806).s
#define CREATEFILEA /*CreateFileA*/XorStr<0x83,12,0x611AC886>("\xC0\xF6\xE0\xE7\xF3\xED\xCF\xE3\xE7\xE9\xCC"+0x611AC886).s
#define FINDRESOURCEA /*FindResourceA*/XorStr<0x7B,14,0xE1C3458C>("\x3D\x15\x13\x1A\x2D\xE5\xF2\xED\xF6\xF6\xE6\xE3\xC6"+0xE1C3458C).s
#define VIRTUALALLOCEX /*VirtualAllocEx*/XorStr<0x84,15,0x28787BAA>("\xD2\xEC\xF4\xF3\xFD\xE8\xE6\xCA\xE0\xE1\xE1\xEC\xD5\xE9"+0x28787BAA).s
#define WRITEPROCESSMEMORY /*WriteProcessMemory*/XorStr<0x92,19,0x19F595AA>("\xC5\xE1\xFD\xE1\xF3\xC7\xEA\xF6\xF9\xFE\xEF\xEE\xD3\xFA\xCD\xCE\xD0\xDA"+0x19F595AA).s
#define CREATEREMOTETHREAD /*CreateRemoteThread*/XorStr<0x05,19,0x31C11955>("\x46\x74\x62\x69\x7D\x6F\x59\x69\x60\x61\x7B\x75\x45\x7A\x61\x71\x74\x72"+0x31C11955).s
#define GETWINDOWTHREADPROCESSID /*GetWindowThreadProcessId*/XorStr<0x8D,25,0x6FA70A68>("\xCA\xEB\xFB\xC7\xF8\xFC\xF7\xFB\xE2\xC2\xFF\xEA\xFC\xFB\xFF\xCC\xEF\xF1\xFC\xC5\xD2\xD1\xEA\xC0"+0x6FA70A68).s
#define NT_DLL /*ntdll.dll*/XorStr<0xAF,10,0xDCC17ED6>("\xC1\xC4\xD5\xDE\xDF\x9A\xD1\xDA\xDB"+0xDCC17ED6).s
#define NTSETSTATEINFORMATIONTHREAD /*NtSetInformationThread*/XorStr<0x21,23,0x8C476206>("\x6F\x56\x70\x41\x51\x6F\x49\x4E\x46\x58\x46\x4D\x59\x47\x40\x5E\x65\x5A\x41\x51\x54\x52"+0x8C476206).s
#define WAITFORSINGLEOBJECT /*WaitForSingleObject*/XorStr<0x80,20,0x3253106C>("\xD7\xE0\xEB\xF7\xC2\xEA\xF4\xD4\xE1\xE7\xED\xE7\xE9\xC2\xEC\xE5\xF5\xF2\xE6"+0x3253106C).s
