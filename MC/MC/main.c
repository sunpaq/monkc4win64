#include "libs/MCString.h"
#include "HiWin.h"
#include "Monkey.h"
#include "MonkeyExt.h"

void testOOP()
{
	extend(Monkey, Ext);
	
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

int main(void)
{
	HiWin* hi =ff(new(HiWin), initWithName, "Steve");
	ff(hi, sayHello, 0);
	
	testOOP();

	release(hi);
	system("pause");
	return 0;
}