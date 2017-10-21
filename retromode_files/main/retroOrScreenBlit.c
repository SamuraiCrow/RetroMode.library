/* :ts=4
 *  $VER: retroOrScreenBlit.c $Revision$ (19-Oct-2017)
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


#include <exec/exec.h>
#include <proto/exec.h>
#include <dos/dos.h>
#include <exec/types.h>
#include <libraries/retromode.h>
#include <proto/retromode.h>
#include <stdarg.h>

/****** retromode/main/retroOrScreenBlit ******************************************
*
*   NAME
*      retroOrScreenBlit -- Description
*
*   SYNOPSIS
*      void retroOrScreenBlit(struct BitMap * bitmap, int fromX, int fromY, 
*          int width, int heigh, struct retroScreen * screen, int toX, 
*          int toY);
*
*   FUNCTION
*
*   INPUTS
*       bitmap - 
*       fromX - 
*       fromY - 
*       width - 
*       heigh - 
*       screen - 
*       toX - 
*       toY - 
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

void _retromode_retroOrScreenBlit(struct RetroModeIFace *Self,
       struct retroScreen * source,
       int fromX,
       int fromY,
       int width,
       int height,
       struct retroScreen * destination,
       int toX,
       int toY)
{
	// pointers
	unsigned char *destination_horizontal_ptr;

	// range
	unsigned char *src_vertical_ptr;
	unsigned char *src_vertical_end;

	unsigned char *src_horizontal_ptr;
	unsigned char *src_horizontal_end;

	unsigned char *destination_memory;

	// limit to 0,0

	if (fromX<0)	{ toX-=fromX; width+=fromX; fromX = 0;}		// - & - is +
	if (fromY<0)	{ toY-=fromY; height+=fromY; fromY = 0;}		// - & - is +

	if (toX<0)	{ fromX-=toX; width+=toX; toX = 0; }		// - & - is +
	if (toY<0)	{ fromY-=toY; height+=toY; toY = 0; }		// - & - is +

	// make sure width is inside source, and destination

	if (fromX+width>source->width) width = source->width - fromX;
	if (toX+width>destination->width) width = destination->width - toX;

	// make sure height is inside source, and destination

	if (fromY+height>source->height) height = source->height - fromY;
	if (toY+height>destination->height) height = destination->height - toY;

	// we now know the limit, we can now do job, safely.

	src_vertical_ptr = source -> Memory + (source -> height * fromY) + fromX;
	src_vertical_end = src_vertical_ptr + (source -> height * source -> width);

	destination_memory = destination -> Memory + (destination -> width * toY) + toX;

	for(;src_vertical_ptr<src_vertical_end;src_vertical_ptr += source -> width)
	{
		destination_horizontal_ptr = destination_memory;
		src_horizontal_end =src_vertical_ptr+width;
		for(src_horizontal_ptr=src_vertical_ptr;src_horizontal_ptr<src_horizontal_end;src_horizontal_ptr++)
		{
			*destination_horizontal_ptr++ |= *src_horizontal_ptr;
		}
		destination_memory += destination -> width;
	}
}

