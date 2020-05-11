/* :ts=4
 *  $VER: retroCloseScreen.c $Revision$ (03-Oct-2017)
 *
 *  This file is part of retromode.
 *
 *  Copyright (c) 2017 LiveForIt Software.
 *  MIT License
 *
 * $Id$
 *
 * $Log$
 *
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include <exec/exec.h>
#include <proto/exec.h>
#include <dos/dos.h>
#include <exec/types.h>
#include <libraries/retromode.h>
#include <proto/retromode.h>
#include <stdarg.h>
#include "libbase.h"

/****** retromode/main/retroCloseScreen ******************************************
*
*   NAME
*      retroCloseScreen -- Description
*
*   SYNOPSIS
*      void retroCloseScreen(struct retroScreen * screen);
*
*   FUNCTION
*
*   INPUTS
*       screen - 
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

extern void _retromode_retroScreenDetach(struct RetroModeIFace *Self, struct retroScreen * screen);

void _retromode_retroCloseScreen(struct RetroModeIFace *Self, struct retroScreen **screen)
{
	struct retroFlashTable * flash;
	struct retroShiftColors * shift;
	int idx;

	if (screen == NULL)
	{
		IDOS -> Printf("your passing a NULL pointer, you should be passing ref to pointer &screenPointer\n");
		return;
	}

	if (*screen==NULL)
	{
		IDOS -> Printf("you have closed this Screen before, maybe your clsong the wrong Screen?\n");
		return;
	}

	if ((*screen) -> clones > 0)
	{
		IDOS -> Printf("you are closeing Screen in the wrong order, close clones before original screen?\n");
		return;
	}

	_retromode_retroScreenDetach( Self, *screen );

	for (idx = 0; idx<256; idx++)
	{
		flash = (*screen)->allocatedFlashs[idx];
		if (flash)
		{
			if (flash -> table)
			{
				IExec -> FreeVec(flash -> table);
				flash -> table = NULL;
			}
			IExec -> FreeVec(flash);
			(*screen)->allocatedFlashs[idx] = NULL;	
		}

		shift = (*screen)->allocatedShifts[idx];
		if (shift)
		{
			IExec -> FreeVec(shift);
			(*screen)->allocatedShifts[idx] = NULL;	
		}
	}
	
	if ((*screen) -> cloneOfScreen)
	{
		(*screen) -> cloneOfScreen -> clones--;	// I guess we might use list, but I'm too lazy
	}
	else
	{
		if ((*screen) -> Memory[0]) IExec -> FreeVec((*screen) -> Memory[0]);
		if ((*screen) -> Memory[1]) IExec -> FreeVec((*screen) -> Memory[1]);
	}

	(*screen) -> Memory[0] = NULL;
	(*screen) -> Memory[1] = NULL;

	IExec -> FreeVec(*screen);
	*screen = NULL;
}

