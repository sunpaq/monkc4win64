#include "HiWin.h"

int main(void)
{
	HiWin* hi =ff(new(HiWin), initWithName, "Steve");
	ff(hi, sayHello, 0);
	
	system("pause");
	return 0;
}