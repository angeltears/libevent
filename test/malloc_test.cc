/**
* Copyright: Copyright (c) 2018 angeltears-hyj, All right reserved.
* 
* @Functional description:
* @Author : angeltears-onter
* @Date : 18-9-13.
* @package : libevent
*/

#include <event.h>
#include <malloc.h>
#include <stdio.h>
void* mymalloc(size_t n)
{
    printf("this is my malloc\n");
    return malloc(n);
}


void* myrealloc(void * p, size_t sz)
{
    printf("this is my realloc\n");
    return realloc(p, sz);
}

void myfree(void * p)
{
    printf("this is my free\n");
}
void onTime(int sock, short event, void * arg)
{
    printf("Hello, World!\n");

    struct timeval tv;
    tv.tv_sec = 1;
    tv.tv_usec = 0;

    event_add((struct event*)arg, &tv);
}
int main()
{
    {
        printf("before set\n");
        event_init();
    }
    {
        printf("after set\n");
        event_set_mem_functions(mymalloc, myrealloc, myfree);
        event_init();
    }
    return 0;
}