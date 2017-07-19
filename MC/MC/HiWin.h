#include "libs/monkc.h"

class(HiWin, MCObject,
	char* name);

method(HiWin, HiWin*, initWithName, const char* name);
method(HiWin, void, sayHello, voida);