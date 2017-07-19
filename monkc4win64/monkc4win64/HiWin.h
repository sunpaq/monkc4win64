/*
 * HiWin.h
 *
 *  Created on: 2017Äê7ÔÂ18ÈÕ
 *      Author: SunYuLi
 */

#ifndef HIWIN_H_
#define HIWIN_H_

#include "monkc.h"

class(HiWin, MCObject,
    char* name);

method(HiWin, HiWin*, initWithName, const char* name);
method(HiWin, void, sayHello, voida);

#endif /* HIWIN_H_ */
