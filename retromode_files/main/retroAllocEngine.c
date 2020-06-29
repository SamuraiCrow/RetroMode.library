/* :ts=4
 *  $VER: retroAllocEngine.c $Revision$ (30-Jan-2019)
 *
 *  This file is part of retromode.
 *
 *  Copyright (c) 2019 LiveForIt Software.
 *  MIT License.
 *
 * $Id$
 *
 * $Log$
 *
 *
 */


#include <exec/exec.h>
#include <proto/exec.h>
#include <dos/dos.h>
#include <exec/types.h>
#include <libraries/retromode.h>
#include <proto/retromode.h>
#include <stdarg.h>
#include "libbase.h"

/****** retromode/main/retroAllocEngine ******************************************
*
*   NAME
*      retroAllocEngine -- Description
*
*   SYNOPSIS
*      struct retroVideo * retroAllocEngine(struct Window * window);
*
*   FUNCTION
*
*   INPUTS
*       window - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

#undef new_engine
#undef retroEngine

struct retroEngine * _retromode_retroAllocEngine(struct RetroModeIFace *Self,
       struct Window * window, struct retroVideo *video)
{
	struct retroEngine *new_engine ;

	if (IGraphics == NULL) return NULL;

	new_engine = (struct retroEngine *) AllocVecTags( sizeof(struct retroEngine),  
					AVT_Type, MEMF_SHARED, 
					AVT_ClearWithValue, 0 ,
					TAG_END	);

	if (new_engine)
	{
		InitRastPort(&new_engine->rp);

		new_engine -> window = window;
		new_engine -> rp.BitMap = AllocBitMap( video -> width , video -> height, 32, BMF_DISPLAYABLE, new_engine -> window ->RPort -> BitMap);
		new_engine -> limit_mouse = FALSE;
	}

	  return new_engine;
}

