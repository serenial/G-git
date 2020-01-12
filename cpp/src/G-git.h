// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the GGIT_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// GGIT_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef GGIT_EXPORTS
#define GGIT_API __declspec(dllexport)
#else
#define GGIT_API __declspec(dllimport)
#endif

#include "extcode.h"
#include "git2.h"

// This class is exported from the G-git.dll
class GGIT_API CGgit {
public:
	CGgit(void);
	// TODO: add your methods here.
};

extern GGIT_API int nGgit;

GGIT_API int fnGgit(void);

void SendEvent(LVUserEventRef *);

static int do_clone(const char, const char *);
