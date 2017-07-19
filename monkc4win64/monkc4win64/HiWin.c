#include "HiWin.h"

oninit(HiWin)
{
	if(init(MCObject)) {
		obj->name = "HiWin";
		return obj;
	}
	return null;
}

method(HiWin, HiWin*, initWithName, const char* name)
{
	obj->name = (char*)name;
	return obj;
}

method(HiWin, void, sayHello, voida)
{
	printf("[%s] Hello Windows!\n", var(name));
}

onload(HiWin)
{
	if(load(MCObject)) {
		binding(HiWin, HiWin*, initWithName, const char* name);
		binding(HiWin, void, sayHello, voida);
		return cla;
	}
	return null;
}
