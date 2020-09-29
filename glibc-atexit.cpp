#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif
#include <thread>
#include <cstdio>
#include <cstdlib>
#include <dlfcn.h>


#ifndef _GLIBCXX_HAVE___CXA_THREAD_ATEXIT_IMPL
#error __cxa_thread_atexit_impl not supported
#endif


int main()
{
	
	void *addr = dlsym(RTLD_DEFAULT, "__cxa_thread_atexit_impl");
	Dl_info info;
	dladdr(addr, &info);
	printf("%p %s\n", addr, info.dli_fname);
	return 0;
}
