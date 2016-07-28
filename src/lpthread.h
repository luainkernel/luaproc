#ifndef _LUA_LUAPROC_CONF_H_
#define _LUA_LUAPROC_CONF_H_


#ifdef LUAPROC_USE_PTHREADS
#ifdef __unix__
#include <unistd.h>
#if defined _POSIX_THREADS
#include <pthread.h>
#define lpthread_cond_t     pthread_cond_t
#define lpthread_mutex_t    pthread_mutex_t
#define lpthread_t pthread_t

#define lpthread_create pthread_create
#define lpthread_exit(retval) pthread_exit(retval)
#define lpthread_cond_init(mutex, attr) pthread_cond_init(mutex,attr)
#define lpthread_cond_wait(cond, mutex) pthread_cond_wait(cond, mutex)
#define lpthread_cond_signal(cond) pthread_cond_signal(cond)
#define lpthread_cond_broadcast(cond) pthread_cond_broadcast(cond)
#define lpthread_cond_destroy(cond) pthread_cond_destroy(cond)
#define lpthread_mutex_init(mutex, attr) pthread_mutex_init(mutex, attr)   
#define lpthread_mutex_lock(mutex) pthread_mutex_lock(mutex)
#define lpthread_mutex_trylock(mutex) pthread_mutex_trylock(mutex)
#define lpthread_mutex_unlock(mutex) pthread_mutex_unlock(mutex)
#define lpthread_mutex_destroy(mutex) pthread_mutex_destroy(mutex)
#define lpthread_join(thread, ptr) pthread_join(thread, ptr)

#else
#error Not Supported
#endif
#endif
#endif

#ifdef LUAPROC_USE_KTHREADS

#endif

#endif
