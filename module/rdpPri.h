/*
Copyright 2013-2016 Jay Sorg

Permission to use, copy, modify, distribute, and sell this software and its
documentation for any purpose is hereby granted without fee, provided that
the above copyright notice appear in all copies and that both that
copyright notice and this permission notice appear in supporting
documentation.

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
OPEN GROUP BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

to deal with privates changing in xorg versions

*/

#ifndef _XRDPPRI_H
#define _XRDPPRI_H

#include <xorg-server.h>
#include <xorgVersion.h>
#include <xf86.h>

#include <screenint.h>
#include <gc.h>

typedef void* rdpDevPrivateKey;

extern _X_EXPORT rdpDevPrivateKey
rdpAllocateGCPrivate(ScreenPtr pScreen, int bytes);
extern _X_EXPORT rdpDevPrivateKey
rdpAllocatePixmapPrivate(ScreenPtr pScreen, int bytes);
extern _X_EXPORT rdpDevPrivateKey
rdpAllocateWindowPrivate(ScreenPtr pScreen, int bytes);
extern _X_EXPORT void*
rdpGetGCPrivate(GCPtr pGC, rdpDevPrivateKey key);
extern _X_EXPORT void*
rdpGetPixmapPrivate(PixmapPtr pPixmap, rdpDevPrivateKey key);
extern _X_EXPORT void*
rdpGetWindowPrivate(WindowPtr pWindow, rdpDevPrivateKey key);
extern _X_EXPORT int
rdpPrivateInit(void);

#endif
