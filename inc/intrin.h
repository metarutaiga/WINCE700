//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
//
// Use of this sample source code is subject to the terms of the Microsoft
// license agreement under which you licensed this sample source code. If
// you did not accept the terms of the license agreement, you are not
// authorized to use this sample source code. For the terms of the license,
// please see the license agreement between you and Microsoft or, if applicable,
// see the LICENSE.RTF on your install media or the root of your tools installation.
// THE SAMPLE SOURCE CODE IS PROVIDED "AS IS", WITH NO WARRANTIES.
//
#if     _MSC_VER > 1000
#pragma once
#endif

#ifndef _INC_INTRIN
#define _INC_INTRIN

#include "cmnintrin.h"

#if defined (_M_ARM)
#include "armintr.h"
#endif

#if defined (_M_SH)
#include "shintr.h"
#endif

#if defined (_M_IX86)
#include "mmintrin.h"
#include "xmmintrin.h"
#include "emmintrin.h"
#endif

#if defined (_M_ARM) || defined (_M_SH) || defined (_M_MRX000)
#pragma warning(disable:4163)
#define _BitScanReverse(a,b) (b)=_CountLeadingZeros((long)(a))
#endif

#endif  /* _INC_INTRIN */
