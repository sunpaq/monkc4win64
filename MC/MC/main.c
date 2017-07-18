#include "HiWin.h"

int main(void)
{
	HiWin* hi =ff(new(HiWin), initWithName, "Steve");
	//static call
	HiWin_sayHello(hi, 0);
	//dynamic call
	ff(hi, sayHello, 0);
	
	system("pause");
	return 0;
}