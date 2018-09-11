/**
* Copyright: Copyright (c) 2018 angeltears-hyj, All right reserved.
* 
* @Functional description:
* @Author : angeltears-onter
* @Date : 18-9-11.
* @package : libevent
*/

#include <stdio.h>
#include <stdarg.h>
#include <memory.h>
#include <stdlib.h>
extern void myprint(const char *format,...) __attribute__((format(printf,1,2)));
void myprint(const char* format, ...)
{
    va_list ap;
    va_start(ap, format);
    char buf[1024];
    memset(buf, 0 , sizeof(buf));
    vsnprintf(buf, 1023, format, ap);
    (void)printf("%s",buf);
    va_end(ap);
}



void __attribute__((noreturn)) onExit();

void onExit()
{}

int test(int state) {
    if (state == 1) {
        onExit();
    }else {
        return 0;
    }
}

int main()
{
    test(1);
}

