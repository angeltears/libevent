/**
* Copyright: Copyright (c) 2018 angeltears-hyj, All right reserved.
* 
* @Functional description:
* @Author : angeltears-onter
* @Date : 18-9-15.
* @package : libevent
*/

#include <event.h>
#include <event2/thread.h>


int main()
{
   struct evthread_lock_callbacks cbs;

   evthread_use_pthreads();
   evthread_set_lock_callbacks(&cbs);  // must be first define befor use;

}