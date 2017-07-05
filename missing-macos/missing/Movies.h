/*
	missing/Movies.h
	----------------
*/

#ifndef MISSING_MOVIES_H
#define MISSING_MOVIES_H

// Mac OS X
#ifdef __APPLE__
#include <ApplicationServices/ApplicationServices.h>
#endif

#ifndef __MAC_10_12

// Mac OS X
#ifdef __APPLE__
#include <QuickTime/QuickTime.h>
#endif

// Mac OS
#ifndef __MOVIES__
#include <Movies.h>
#endif

#else

#ifdef __cplusplus
extern "C" {
#endif

#if !__LP64__

extern OSErr
BeginFullScreen( Ptr*        state,
                 GDHandle    gdh,
                 short*      width,
                 short*      height,
                 WindowRef*  window,
                 RGBColor*   color,
                 long        flags );

extern OSErr
EndFullScreen( Ptr state, long flags );

#endif  // #if !__LP64__

#ifdef __cplusplus
}
#endif

#endif  // #ifndef __MAC_10_12

#endif

