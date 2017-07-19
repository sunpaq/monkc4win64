#include "HiWin.h"
#include "libs/MCString.h"

int main(void)
{
	HiWin* hi =ff(new(HiWin), initWithName, "Steve");
	ff(hi, sayHello, 0);
	
	release(hi);
	system("pause");
	return 0;
}