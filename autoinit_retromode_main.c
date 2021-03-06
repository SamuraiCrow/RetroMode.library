/*
**	$Id$
**	Generated by IDLTool 53.6
**	Do not edit
**
**	AutoInit stub for retromode
**
**	Copyright (c) 2010 LiveForIt Software.
**	MIT License
*/

#include <exec/types.h>
#include <libraries/retromode.h>

#include <interfaces/retromode.h>
#include <proto/exec.h>
#include <assert.h>

struct retromodeIFace * Iretromode = NULL;
static struct Library * __retromodeBase;
static struct retromodeIFace * __Iretromode;

/****************************************************************************/

extern struct Library * retromodeBase;

/****************************************************************************/

void retromode_main_constructor(void)
{
    if (retromodeBase == NULL) /* Library base is NULL, we need to open it */
    {
        /* We were called before the base constructor.
         * This means we will be called _after_ the base destructor.
         * So we cant drop the interface _after_ closing the last library base,
         * we just open the library here which ensures that.
         */
        __retromodeBase = retromodeBase = (struct Library *)IExec->OpenLibrary("retromode.library", 0L);
        assert(retromodeBase != NULL);
    }

    __Iretromode = Iretromode = (struct retromodeIFace *)IExec->GetInterface((struct Library *)retromodeBase, "main", 1, NULL);
    assert(Iretromode != NULL);
}
__attribute__((section(".ctors.zzzy"))) static void
(*retromode_main_constructor_ptr)(void) USED = retromode_main_constructor;

/****************************************************************************/

void retromode_main_destructor(void)
{
    if (__Iretromode)
    {
        IExec->DropInterface ((struct Interface *)__Iretromode);
    }
    if (__retromodeBase)
    {
        IExec->CloseLibrary((struct Library *)__retromodeBase);
    }
}
__attribute__((section(".dtors.zzzy"))) static void
(*retromode_main_destructor_ptr)(void) USED = retromode_main_destructor;

/****************************************************************************/

