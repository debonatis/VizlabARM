/* 
 * File:   stdafx.h
 * Author: deb
 *
 * Created on 23. januar 2014, 11:41
 */

#if defined(WIN32) || defined(WIN64)

#pragma once

#ifndef _WIN32_WINNT		// Allow use of features specific to Windows XP or later.                   
#define _WIN32_WINNT 0x0501	// Change this to the appropriate value to target other versions of Windows.
#endif		

#define _CRT_SECURE_NO_WARNINGS		

#include <stdio.h>
#include <tchar.h>

#elif defined(MACOSX)

#else

#include <stdio.h>

#endif
