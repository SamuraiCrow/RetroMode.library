#ifndef RETROMODE_INTERFACE_DEF_H
#define RETROMODE_INTERFACE_DEF_H
/*
** This file is machine generated from idltool
** Do not edit
*/ 

#include <exec/types.i>
#include <exec/exec.i>
#include <exec/interfaces.i>

STRUCTURE RetroModeIFace, InterfaceData_SIZE
	    FPTR IRetroMode_Obtain
	    FPTR IRetroMode_Release
	    FPTR IRetroMode_Expunge
	    FPTR IRetroMode_Clone
	    FPTR IRetroMode_retroAllocVideo
	    FPTR IRetroMode_retroFreeVideo
	    FPTR IRetroMode_retroClearVideo
	    FPTR IRetroMode_retroDrawVideo
	    FPTR IRetroMode_retroDmaVideo
	    FPTR IRetroMode_retroOpenScreen
	    FPTR IRetroMode_retroCloseScreen
	    FPTR IRetroMode_retroApplyScreen
	    FPTR IRetroMode_retroPixel
	    FPTR IRetroMode_retroPoint
	    FPTR IRetroMode_retroFlash
	    FPTR IRetroMode_retroCycleColorsUp
	    FPTR IRetroMode_retroCycleColorsDown
	    FPTR IRetroMode_retroBAR
	    FPTR IRetroMode_retroOrBAR
	    FPTR IRetroMode_retroXorBAR
	    FPTR IRetroMode_retroBox
	    FPTR IRetroMode_retroOrBox
	    FPTR IRetroMode_retroXorBox
	    FPTR IRetroMode_retroShift
	    FPTR IRetroMode_retroCircle
	    FPTR IRetroMode_retroEclipse
	    FPTR IRetroMode_retroOrCircle
	    FPTR IRetroMode_retroXorCircle
	    FPTR IRetroMode_retroScreenColor
	    FPTR IRetroMode_retroScreenBlit
	    FPTR IRetroMode_retroOrScreenBlit
	    FPTR IRetroMode_retroXorScreenBlit
	    FPTR IRetroMode_retroBitmapBlit
	    FPTR IRetroMode_retroOrBitmapBlit
	    FPTR IRetroMode_retroXorBitmapBlit
	    FPTR IRetroMode_retroAndClear
	    FPTR IRetroMode_retroModeBadVideoSync
	    FPTR IRetroMode_AfterEffectScanline
	    FPTR IRetroMode_AfterEffectAdjustRGB
	    FPTR IRetroMode_retroTriangle
	    FPTR IRetroMode_retroOrTriangle
	    FPTR IRetroMode_retroXorTriangle
	    FPTR IRetroMode_retroLine
	    FPTR IRetroMode_retroOrLine
	    FPTR IRetroMode_retroXorLine
	    FPTR IRetroMode_retroAllocFrame
	    FPTR IRetroMode_retroFreeFrame
	    FPTR IRetroMode_retroDrawFrame
	    FPTR IRetroMode_retroDeleteFlash
	    FPTR IRetroMode_retroScreenOffset
	    FPTR IRetroMode_retroScreenDetach
	    FPTR IRetroMode_retroScreenToFront
	    FPTR IRetroMode_retroScreenToBack
	    FPTR IRetroMode_retroStar
	    FPTR IRetroMode_retroOrStar
	    FPTR IRetroMode_retroPolyLine
	    FPTR IRetroMode_retroPolyGon
	    FPTR IRetroMode_retroBoing
	    FPTR IRetroMode_retroLoadABKSprite
	    FPTR IRetroMode_retroFreeSprite
	    FPTR IRetroMode_retroPasteSprite
	    FPTR IRetroMode_retroFill
	    FPTR IRetroMode_retroOrFill
	    FPTR IRetroMode_retroBarRounded
	    FPTR IRetroMode_retroOrBarRounded
	    FPTR IRetroMode_retroXorBarRounded
	    FPTR IRetroMode_retroThickLine
	    FPTR IRetroMode_retroZoom
	    FPTR IRetroMode_retroBobble
	    FPTR IRetroMode_retroRainbowColorRange
	    FPTR IRetroMode_retroRain
	    FPTR IRetroMode_retroScreenClone
	    FPTR IRetroMode_retroSetRainbow
	    FPTR IRetroMode_retroRainbow
	    FPTR IRetroMode_retroAllocSpriteObjects
	    FPTR IRetroMode_retroFreeSpriteObjects
	    FPTR IRetroMode_AfterEffectDrawSrpites
	    FPTR IRetroMode_retroSprite
	LABEL RetroModeIFace_SIZE

#endif
