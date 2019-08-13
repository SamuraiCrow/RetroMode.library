
/* This file was generated by idltool 53.6. Do not edit */

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef EXEC_EXEC_H
#include <exec/exec.h>
#endif
#ifndef EXEC_INTERFACES_H
#include <exec/interfaces.h>
#endif

#ifndef LIBRARIES_RETROMODE_H
#include <libraries/retromode.h>
#endif

extern ULONG                VARARGS68K _retromode_Obtain(struct RetroModeIFace *);
extern ULONG                VARARGS68K _retromode_Release(struct RetroModeIFace *);
extern struct retroEngine * VARARGS68K _retromode_retroAllocEngine(struct RetroModeIFace *, struct Window * window, struct retroVideo * video);
extern struct retroVideo *  VARARGS68K _retromode_retroAllocVideo(struct RetroModeIFace *, int width, int height);
extern void                 VARARGS68K _retromode_retroFreeVideo(struct RetroModeIFace *, struct retroVideo * video);
extern void                 VARARGS68K _retromode_retroFreeEngine(struct RetroModeIFace *, struct retroEngine * engine);
extern void                 VARARGS68K _retromode_retroClearVideo(struct RetroModeIFace *, struct retroVideo * video, unsigned int color);
extern void                 VARARGS68K _retromode_retroDrawVideo(struct RetroModeIFace *, struct retroVideo * video);
extern void                 VARARGS68K _retromode_retroDmaVideo(struct RetroModeIFace *, struct retroVideo * video, struct retroEngine * engine);
extern struct retroScreen * VARARGS68K _retromode_retroOpenScreen(struct RetroModeIFace *, int width, int height, int videomode);
extern void                 VARARGS68K _retromode_retroCloseScreen(struct RetroModeIFace *, struct retroScreen ** screen);
extern void                 VARARGS68K _retromode_retroApplyScreen(struct RetroModeIFace *, struct retroScreen * screen, struct retroVideo * video, int scanlinex, int scanliney, int displayWidth, int displayHeight);
extern void                 VARARGS68K _retromode_retroPixel(struct RetroModeIFace *, struct retroScreen * screen, unsigned char * memory, int x, int y, unsigned char color);
extern unsigned char        VARARGS68K _retromode_retroPoint(struct RetroModeIFace *, struct retroScreen * screen, int x, int y);
extern void                 VARARGS68K _retromode_retroFlash(struct RetroModeIFace *, struct retroScreen * screen, unsigned char color, char * data);
extern void                 VARARGS68K _retromode_retroCycleColorsUp(struct RetroModeIFace *, struct retroScreen * screen, int delay, unsigned char from_color, unsigned char to_color, unsigned char flags);
extern void                 VARARGS68K _retromode_retroCycleColorsDown(struct RetroModeIFace *, struct retroScreen * screen, int delay, unsigned char from_color, unsigned char to_color, unsigned char flags);
extern void                 VARARGS68K _retromode_retroBAR(struct RetroModeIFace *, struct retroScreen * screen, int buffer, int x0, int y0, int x1, int y1, unsigned char color);
extern void                 VARARGS68K _retromode_retroOrBAR(struct RetroModeIFace *, struct retroScreen * screen, int buffer, int x0, int y0, int x1, int y1, unsigned char or_mask);
extern void                 VARARGS68K _retromode_retroXorBAR(struct RetroModeIFace *, struct retroScreen * screen, int buffer, int x0, int y0, int x1, int y1, unsigned char xor_mask);
extern void                 VARARGS68K _retromode_retroBarPattern(struct RetroModeIFace *, struct retroScreen * screen, int buffer, int x0, int y0, int x1, int y1, struct retroSprite * sprite, int image, unsigned char ink0, unsigned char ink1);
extern void                 VARARGS68K _retromode_retroBox(struct RetroModeIFace *, struct retroScreen * screen, int buffer, int x0, int y0, int x1, int y1, unsigned char color);
extern void                 VARARGS68K _retromode_retroOrBox(struct RetroModeIFace *, struct retroScreen * screen, int buffer, int x0, int y0, int x1, int y1, unsigned char or_mask);
extern void                 VARARGS68K _retromode_retroXorBox(struct RetroModeIFace *, struct retroScreen * screen, int buffer, int x0, int y0, int x1, int y1, unsigned char xor_mask);
extern void                 VARARGS68K _retromode_retroShift(struct RetroModeIFace *, struct retroScreen * screen, int buffer, int x0, int y0, int x1, int y1, int bits);
extern void                 VARARGS68K _retromode_retroCircleFilled(struct RetroModeIFace *, struct retroScreen * screen, int buffer, int cx, int cy, int r, unsigned char color);
extern void                 VARARGS68K _retromode_retroEllipse(struct RetroModeIFace *, struct retroScreen * screen, int buffer, int cx, int cy, int r1, int r2, double angel, unsigned char color);
extern void                 VARARGS68K _retromode_retroOrCircleFilled(struct RetroModeIFace *, struct retroScreen * screen, int buffer, int cx, int cy, int r, unsigned char or_mask);
extern void                 VARARGS68K _retromode_retroXorCircleFilled(struct RetroModeIFace *, struct retroScreen * screen, int buffer, int cx, int cy, int r, unsigned char xor_mask);
extern void                 VARARGS68K _retromode_retroScreenColor(struct RetroModeIFace *, struct retroScreen * screen, int color, unsigned char r, unsigned char g, unsigned char b);
extern void                 VARARGS68K _retromode_retroScreenBlit(struct RetroModeIFace *, struct retroScreen * SourceScreen, int fromBuffer, int fromX, int fromY, int width, int height, struct retroScreen * screen, int toBuffer, int toX, int toY);
extern void                 VARARGS68K _retromode_retroOrScreenBlit(struct RetroModeIFace *, struct retroScreen * SourceScreen, int fromMode, int fromX, int fromY, int width, int height, struct retroScreen * screen, int toMode, int toX, int toY);
extern void                 VARARGS68K _retromode_retroXorScreenBlit(struct RetroModeIFace *, struct retroScreen * SourceScreen, int fromMode, int fromX, int fromY, int width, int height, struct retroScreen * screen, int toMode, int toX, int toY);
extern void                 VARARGS68K _retromode_retroBitmapBlit(struct RetroModeIFace *, struct BitMap * bitmap, int fromX, int fromY, int width, int height, struct retroScreen * screen, int buffer, int toX, int toY);
extern void                 VARARGS68K _retromode_retroOrBitmapBlit(struct RetroModeIFace *, struct BitMap * bitmap, int fromX, int fromY, int width, int height, struct retroScreen * screen, int buffer, int toX, int toY);
extern void                 VARARGS68K _retromode_retroXorBitmapBlit(struct RetroModeIFace *, struct BitMap * bitmap, int fromX, int fromY, int width, int height, struct retroScreen * screen, int buffer, int toX, int toY);
extern void                 VARARGS68K _retromode_retroAndClear(struct RetroModeIFace *, struct retroScreen * screen, int buffer, int x0, int y0, int x1, int y1, unsigned char and_mask);
extern void                 VARARGS68K _retromode_retroModeBadVideoSync(struct RetroModeIFace *, struct retroVideo * video, double sync_offset, double incRad, double r);
extern void                 VARARGS68K _retromode_AfterEffectScanline(struct RetroModeIFace *, struct retroVideo * video);
extern void                 VARARGS68K _retromode_AfterEffectAdjustRGB(struct RetroModeIFace *, struct retroVideo * video, unsigned int red_shift, unsigned int green_shift, unsigned int blue_shift);
extern void                 VARARGS68K _retromode_retroTriangle(struct RetroModeIFace *, struct retroScreen * screen, int x1, int y1, int x2, int y2, int x3, int y3, unsigned char color);
extern void                 VARARGS68K _retromode_retroOrTriangle(struct RetroModeIFace *, struct retroScreen * screen, int x1, int y1, int x2, int y2, int x3, int y3, unsigned char or_color);
extern void                 VARARGS68K _retromode_retroXorTriangle(struct RetroModeIFace *, struct retroScreen * screen, int x1, int y1, int x2, int y2, int x3, int y3, unsigned char xor_color);
extern void                 VARARGS68K _retromode_retroLine(struct RetroModeIFace *, struct retroScreen * screen, int buffer, int x1, int y1, int x2, int y2, unsigned char color);
extern void                 VARARGS68K _retromode_retroOrLine(struct RetroModeIFace *, struct retroScreen * screen, int buffer, int x1, int y1, int x2, int y2, unsigned char color);
extern void                 VARARGS68K _retromode_retroXorLine(struct RetroModeIFace *, struct retroScreen * screen, int buffer, int x1, int y1, int x2, int y2, unsigned char color);
extern struct retroFrame *  VARARGS68K _retromode_retroAllocFrame(struct RetroModeIFace *, struct retroScreen * screen, int buffer, int x1, int y1, int x2, int y2, int hotspotX, int hotspotY);
extern void                 VARARGS68K _retromode_retroFreeFrame(struct RetroModeIFace *, struct retroFrame * frame);
extern void                 VARARGS68K _retromode_retroDrawFrame(struct RetroModeIFace *, struct retroFrame * frame, struct retroScreen * screen, int X, int Y);
extern int                  VARARGS68K _retromode_retroDeleteFlash(struct RetroModeIFace *, struct retroScreen * screen, unsigned char color);
extern void                 VARARGS68K _retromode_retroScreenOffset(struct RetroModeIFace *, struct retroScreen * screen, int offsetx, int offsety);
extern void                 VARARGS68K _retromode_retroScreenDetach(struct RetroModeIFace *, struct retroScreen * screen);
extern void                 VARARGS68K _retromode_retroScreenToFront(struct RetroModeIFace *, struct retroScreen * screen);
extern void                 VARARGS68K _retromode_retroScreenToBack(struct RetroModeIFace *, struct retroScreen * screen);
extern void                 VARARGS68K _retromode_retroStar(struct RetroModeIFace *, struct retroScreen * screen, int buffer, int x, int y, int n, int r0, int r1, double g, unsigned char color);
extern void                 VARARGS68K _retromode_retroOrStar(struct RetroModeIFace *, struct retroScreen * screen, int buffer, int x, int y, int n, int r0, int r1, double g, unsigned char color);
extern void                 VARARGS68K _retromode_retroPolyLine(struct RetroModeIFace *, struct retroScreen * screen, unsigned char color, ...);
extern void                 VARARGS68K _retromode_retroPolyGon(struct RetroModeIFace *, struct retroScreen * screen, unsigned char color, ...);
extern void                 VARARGS68K _retromode_retroBoing(struct RetroModeIFace *, struct retroScreen * screen, int buffer, int x, int y, int r0, int r1, unsigned char color0, unsigned char color1);
extern struct retroSprite * VARARGS68K _retromode_retroLoadABKSprite(struct RetroModeIFace *, char * filename);
extern void                 VARARGS68K _retromode_retroFreeSprite(struct RetroModeIFace *, struct retroSprite * sprite);
extern void                 VARARGS68K _retromode_retroPasteSprite(struct RetroModeIFace *, struct retroScreen * screen, struct retroSprite * sprite, int x, int y, int image, int flags, int mask);
extern void                 VARARGS68K _retromode_retroFill(struct RetroModeIFace *, struct retroScreen * screen, int buffer, int x, int y, unsigned char color);
extern void                 VARARGS68K _retromode_retroOrFill(struct RetroModeIFace *, struct retroScreen * screen, int buffer, int x, int y, int and_mask, unsigned char or_color);
extern void                 VARARGS68K _retromode_retroBarRounded(struct RetroModeIFace *, struct retroScreen * screen, int buffer, int x0, int y0, int x1, int y1, int r, unsigned char color);
extern void                 VARARGS68K _retromode_retroOrBarRounded(struct RetroModeIFace *, struct retroScreen * screen, int buffer, int x0, int y0, int x1, int y1, int r, unsigned char color);
extern void                 VARARGS68K _retromode_retroXorBarRounded(struct RetroModeIFace *, struct retroScreen * screen, int buffer, int x0, int y0, int x1, int y1, int r, unsigned char color);
extern void                 VARARGS68K _retromode_retroThickLine(struct RetroModeIFace *, struct retroScreen * screen, int buffer, int x0, int y0, int x1, int y1, int thickness, unsigned char color);
extern void                 VARARGS68K _retromode_retroZoom(struct RetroModeIFace *, struct retroScreen * fromScreen, int x0, int y0, int x1, int y1, struct retroScreen * toScreen, int x2, int y2, int x3, int y3);
extern void                 VARARGS68K _retromode_retroBobble(struct RetroModeIFace *, struct retroScreen * fromScreen, int fromX, int fromY, int fromR, struct retroScreen * toScreen, int toX, int toY, int toR);
extern void                 VARARGS68K _retromode_retroRainbowColorRange(struct RetroModeIFace *, struct retroVideo * video, int rainbowNumber, int fromLine, int fromR, int fromG, int fromB, int toLine, int toR, int toG, int toB);
extern void                 VARARGS68K _retromode_retroRain(struct RetroModeIFace *, struct retroVideo * video, int rainbowNumber, int line, int r, int g, int b);
extern struct retroScreen * VARARGS68K _retromode_retroScreenClone(struct RetroModeIFace *, struct retroScreen * SourceScreen, int videomode);
extern void                 VARARGS68K _retromode_retroSetRainbow(struct RetroModeIFace *, struct retroVideo * video, int rainbowNumber, unsigned char color, int tableSize);
extern void                 VARARGS68K _retromode_retroRainbow(struct RetroModeIFace *, struct retroVideo * video, int rainbowNumber, int offset, int verticalOffset, int height);
extern void                 VARARGS68K _retromode_retroAllocSpriteObjects(struct RetroModeIFace *, struct retroVideo * video, int numberOfSprites);
extern void                 VARARGS68K _retromode_retroFreeSpriteObjects(struct RetroModeIFace *, struct retroVideo * video);
extern void                 VARARGS68K _retromode_AfterEffectDrawSrpites(struct RetroModeIFace *, struct retroVideo * video);
extern void                 VARARGS68K _retromode_retroSprite(struct RetroModeIFace *, struct retroVideo * video, int number, int x, int y, int image);
extern void                 VARARGS68K _retromode_retroColorRange(struct RetroModeIFace *, struct retroScreen * screen, int fromColor, int fromR, int fromG, int fromB, int toColor, int toR, int toG, int toB);
extern void                 VARARGS68K _retromode_retroPolyGonArray(struct RetroModeIFace *, struct retroScreen * screen, int buffer, unsigned char color, int count, int * array);
extern void                 VARARGS68K _retromode_retroCycleOff(struct RetroModeIFace *, struct retroScreen * screen);
extern void                 VARARGS68K _retromode_retroFadeScreen(struct RetroModeIFace *, struct retroScreen * screen);
extern void                 VARARGS68K _retromode_retroCircle(struct RetroModeIFace *, struct retroScreen * screen, int buffer, int cx, int cy, int r, unsigned char color);
extern void                 VARARGS68K _retromode_retroAllocDoubleBuffer(struct RetroModeIFace *, struct retroScreen * screen);
extern struct retroSprite * VARARGS68K _retromode_retroLoadSprite(struct RetroModeIFace *, void * fd, cust_fread_t cust_fread);
extern void                 VARARGS68K _retromode_retroGetSprite(struct RetroModeIFace *, struct retroScreen * screen, struct retroSprite * sprite, int image, int x0, int y0, int x1, int y1);
extern void                 VARARGS68K _retromode_retroFreeSpriteObject(struct RetroModeIFace *, struct retroSpriteObject * spriteObject, BOOL onlyData);
extern void                 VARARGS68K _retromode_retroScreenToBitmap(struct RetroModeIFace *, struct retroScreen * screen, int fromX, int fromY, int width, int height, struct BitMap * bitmap, int toX, int toY);
extern struct retroBlock *  VARARGS68K _retromode_retroAllocBlock(struct RetroModeIFace *, int width, int height);
extern void                 VARARGS68K _retromode_retroFreeBlock(struct RetroModeIFace *, struct retroBlock * block);
extern void                 VARARGS68K _retromode_retroGetBlock(struct RetroModeIFace *, struct retroScreen * screen, int buffer, struct retroBlock * block, int x, int y);
extern void                 VARARGS68K _retromode_retroPutBlock(struct RetroModeIFace *, struct retroScreen * screen, int buffer, struct retroBlock * block, int x, int y, unsigned char bitmask);
extern void                 VARARGS68K _retromode_retroPasteIcon(struct RetroModeIFace *, struct retroScreen * screen, int buffer, struct retroSprite * sprite, int x, int y, int image);
