/*******************************************************************************
*
*  (C) COPYRIGHT AUTHORS, 2014 - 2015
*
*  TITLE:       SUP.H
*
*  VERSION:     1.20
*
*  DATE:        29 Mar 2015
*
*  Common header file for the program support routines.
*
* THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
* ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED
* TO THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
* PARTICULAR PURPOSE.
*
*******************************************************************************/

BOOLEAN supIsProcess32bit(
	_In_ HANDLE hProcess
	);

HANDLE supGetExplorerHandle(
	VOID
	);

BOOL supGetElevationType(
	TOKEN_ELEVATION_TYPE *lpType
	);

BOOL supWriteBufferToFile(
	_In_ LPWSTR lpFileName,
	_In_ PVOID Buffer,
	_In_ DWORD BufferSize
	);

BOOL supRunProcess(
	_In_ LPWSTR lpszProcessName,
	_In_opt_ LPWSTR lpszParameters
	);
