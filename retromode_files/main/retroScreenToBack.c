/* :ts=4
 *  $VER: retroScreenBack.c $Revision$ (24-Oct-2017)
 *
 *  This file is part of retromode.
 *
 *  Copyright (c) 2017 LiveForIt Software.
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

/****** retromode/main/retroScreenBack ******************************************
*
*   NAME
*      retroScreenBack -- Description
*
*   SYNOPSIS
*      void retroScreenToBack(struct retroScreen * screen, int offsetx, 
*          int offsety);
*
*   FUNCTION
*
*   INPUTS
*       screen - 
*       offsetx - 
*       offsety - 
*
*   RESULT
*       This function does not return a result
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

void _retromode_retroScreenToBack(struct RetroModeIFace *Self, struct retroScreen * screen)
{
	struct retroVideo *video = screen -> attachedToVideo;
	struct retroScreen **ptr;

	for ( ptr = video -> attachedScreens_end-1 ; ptr >= video -> attachedScreens ; ptr-- )
	{
		if ( *ptr == screen)
		{
			for ( ; ptr > video -> attachedScreens ; ptr--)
			{
				*ptr = *(ptr-1);
			}
			break;
		}
	}

	if ( video -> screensAttached > 0) *video -> attachedScreens = screen;
}

