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

int main(void) {

	HiWin* hi = ff(new(HiWin), initWithName, "Steve");

	HiWin_sayHello(hi, 0);
	ff(hi, sayHello, 0);

	return EXIT_SUCCESS;
}