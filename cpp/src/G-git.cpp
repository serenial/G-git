// G-git.cpp : Defines the exported functions for the DLL application.
//

#include "G-git.h"


// This is an example of an exported variable
GGIT_API int nGgit=0;

// This is an example of an exported function.
GGIT_API int fnGgit(void)
{
    return 42;
}

// This is the constructor of a class that has been exported.
// see G-git.h for the class definition
CGgit::CGgit()
{
    return;
}
