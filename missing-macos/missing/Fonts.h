/*
	missing/Fonts.h
	---------------
*/

#ifndef MISSING_FONTS_H
#define MISSING_FONTS_H

// Mac OS X
#ifdef __APPLE__
#include <ApplicationServices/ApplicationServices.h>
#endif

// Mac OS
#ifndef __FONTS__
#include <Fonts.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

#ifdef MAC_OS_X_VERSION_10_7

// ...

#if !__LP64__

extern void GetFNum( ConstStr255Param  name,
                     short*            familyID );

#endif  // #if !__LP64__

// ...

enum
{
	kFontIDNewYork      =  2,
	kFontIDGeneva       =  3,
	kFontIDMonaco       =  4,
	kFontIDVenice       =  5,
	kFontIDLondon       =  6,
	kFontIDAthens       =  7,
	kFontIDSanFrancisco =  8,
	kFontIDToronto      =  9,
	kFontIDCairo        = 11,
	kFontIDLosAngeles   = 12,
	kFontIDTimes        = 20,
	kFontIDHelvetica    = 21,
	kFontIDCourier      = 22,
	kFontIDSymbol       = 23,
	kFontIDMobile       = 24
};

// ...

#endif  // #ifdef MAC_OS_X_VERSION_10_7

#ifdef __cplusplus
}
#endif

#endif

