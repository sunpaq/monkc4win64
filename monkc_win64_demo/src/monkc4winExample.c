/*
 ============================================================================
 Name        : monkc4winExample.c
 Author      : sunpaq
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "HiWin.h"

#include "Monkey.h"
#include "MonkeyExt.h"
#include "MCContext.h"
#include "MCString.h"

void testOOP()
{
	Monkey* m = new(Monkey);
	//static call
	Monkey_info(m, 0);

	//dynamic call
	ff(m, showage, 0);
	ff(m, showname, 0);

	//call protocal Flyable
	ff(m, fly, 0);
	ff(m, takeoff, "yeah!");
	ff(m, landing, "OK");

	//call extensions
	ff(m, extensionMethod, 0);
	ff(m, extensionFunction, 0);

	//call an wrong method name
	//ff(m, typo, 0);

	printf("%s\n", "finish");
}

int main(int argc, char const *argv[])
{
	extend(Monkey, Ext);
	testOOP();

	HiWin* hi = ff(new(HiWin), initWithName, "Steve");
	HiWin_sayHello(hi, 0);
	ff(hi, sayHello, 0);

	MCString* str = MCString_newForHttp("github.com/sunpaq", 0);
	ff(str, print, true);

	system("pause");
	return EXIT_SUCCESS;
}
