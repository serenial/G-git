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


static int do_clone(const char *url, const char *path)
{
	git_repository *repo = NULL;
	int ret = git_clone(&repo, url, path, NULL);
	git_repository_free(repo);
	return ret;
}

void SendEvent(LVUserEventRef *rwer)
{
	LStrHandle newStringHandle;
	size_t stringBufferSize = sizeof(int32) + 100 * sizeof(uChar);
	//Allocate memory for a LabVIEW string handle using LabVIEW's
	//memory manager functions.

	newStringHandle = (LStrHandle)DSNewHandle(stringBufferSize);

	//Sleep(2000);
	//PopulateStringHandle(newStringHandle, stringBufferSize, "Guess where I came from");

	//Post event to Event structure. Refer to "Using External Code
	//with LabVIEW manual for information about this function.
	PostLVUserEvent(*rwer, (void *)&newStringHandle);

	//Sleep(5000);
	//PopulateStringHandle(newStringHandle, stringBufferSize, "This is from THE dll");
	PostLVUserEvent(*rwer, (void *)&newStringHandle);

	//Sleep(5000);
	// PopulateStringHandle(newStringHandle, stringBufferSize, "This is also from the dll");
	PostLVUserEvent(*rwer, (void *)&newStringHandle);

	return;
}