#include "Monkey.h"
#include "MonkeyExt.h"
#include "HiWin.h"

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

int main(void) {

	testOOP();

	HiWin* hi = ff(new(HiWin), initWithName, "Steve");
	HiWin_sayHello(hi, 0);
	ff(hi, sayHello, 0);

	system("pause");
	return 0;
}