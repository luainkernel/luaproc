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
#define lpthread_attr_t pthread_attr_t
#define lpthread_barrier_t pthread_barrier_t
#define lpthread_barrierattr_t pthread_barrierattr_t
#define lpthread_condattr_t pthread_condattr_t

#define LPTHREAD_COND_INITIALIZER   PTHREAD_COND_INITIALIZER
#define LPTHREAD_MUTEX_INITIALIZER  PTHREAD_MUTEX_INITIALIZER
#define LPTHREAD_CREATE_JOINABLE PTHREAD_CREATE_JOINABLE
#define LPTHREAD_CREATE_DETACHED PTHREAD_CREATE_DETACHED
#define LPTHREAD_RWLOCK_INITIALIZER PTHREAD_RWLOCK_INITIALIZER
#define LPTHREAD_INHERIT_SCHED PTHREAD_INHERIT_SCHED
#define LPTHREAD_EXPLICIT_SCHED PTHREAD_EXPLICIT_SCHED
#define LPTHREAD_SCOPE_SYSTEM PTHREAD_SCOPE_SYSTEM
#define LPTHREAD_SCOPE_PROCESS PTHREAD_SCOPE_PROCESS
#define LPTHREAD_PROCESS_PRIVATE PTHREAD_PROCESS_PRIVATE
#define LPTHREAD_PROCESS_SHARED PTHREAD_PROCESS_SHARED
#define LPTHREAD_CANCEL_ENABLE PTHREAD_CANCEL_ENABLE
#define LPTHREAD_CANCEL_DISABLE PTHREAD_CANCEL_DISABLE
#define LPTHREAD_CANCEL_DEFERRED PTHREAD_CANCEL_DEFERRED
#define LPTHREAD_CANCEL_ASYNCHRONOUS PTHREAD_CANCEL_ASYNCHRONOUS
#define LPTHREAD_CANCELED PTHREAD_CANCELED
#define LPTHREAD_ONCE_INIT PTHREAD_ONCE_INIT
#define LPTHREAD_BARRIER_SERIAL_THREAD PTHREAD_BARRIER_SERIAL_THREAD



#define lpthread_atfork(prepare, parent, child) pthread_atfork(prepare, parent, child)
#define lpthread_attr_destroy(attr) pthread_attr_destroy(attr)
#define lpthread_attr_getdetachstate(attr, state) pthread_attr_getdetachstate(attr, state)
#define lpthread_attr_getguardsize(attr, guardsize) pthread_attr_getguardsize(attr, guardsize)
#define lpthread_attr_getinheritsched(attr, inheritsched) pthread_attr_getinheritsched(attr, inheritsched)
#define lpthread_attr_getschedparam(attr, param) pthread_attr_getschedparam(attr, param)
#define lpthread_attr_getschedpolicy(attr, policy) pthread_attr_getschedpolicy(attr, policy)
#define lpthread_attr_getscope(attr, contentionscope) pthread_attr_getscope(attr, contentionscope)
#define lpthread_attr_getstack(attr, stackaddr, stacksize) pthread_attr_getstack(attr, stackaddr, stacksize)
#define lpthread_attr_getstackaddr(attr, stackaddr) pthread_attr_getstackaddr(attr, stackaddr)
#define lpthread_attr_getstacksize(attr, stacksize) pthread_attr_getstacksize(attr, stacksize)
#define lpthread_attr_init(attr) pthread_attr_init(attr)
#define lpthread_attr_setdetachstate(attr, state) pthread_attr_setdetachstate(attr, state)
#define lpthread_attr_setguardsize(attr, guardsize) pthread_attr_setguardsize(attr, guardsize)
#define lpthread_attr_setinheritsched(attr, inheritsched) pthread_attr_setinheritsched(attr, inheritsched)
#define lpthread_attr_setschedparam(attr, param) pthread_attr_setschedparam(attr, param)
#define lpthread_attr_setschedpolicy(attr, policy) pthread_attr_setschedpolicy(attr, policy)
#define lpthread_attr_setscope(attr, contentionscope) pthread_attr_setscope(attr, contentionscope)
#define lpthread_attr_setstack(attr, stackaddr, stacksize) pthread_attr_setstack(attr, stackaddr, stacksize)
#define lpthread_attr_setstackaddr(attr, stackaddr) pthread_attr_setstackaddr(attr, stackaddr)
#define lpthread_attr_setstacksize(attr, stacksize) pthread_attr_setstacksize(attr, stacksize)
#define lpthread_barrier_destroy(barrier) pthread_barrier_destroy(barrier)
#define lpthread_barrier_init(barrier,attr, count) pthread_barrier_init(barrier, attr, count)
#define lpthread_barrier_wait(barrier) pthread_barrier_wait(barrier)
#define lpthread_barrierattr_destroy(attr) pthread_barrierattr_destroy(attr)
#define lpthread_barrierattr_init(attr) pthread_barrierattr_init(attr)
#define lpthread_barrierattr_getpshared(attr, pshared) pthread_barrierattr_getpshared(attr, pshared)
#define lpthread_barrierattr_setpshared(attr, pshared) pthread_barrierattr_setpshared(attr, pshared)
#define lpthread_cancel(thread) pthread_cancel(thread)
#define lpthread_cleanup_pop(exec) pthread_cleanup_pop(exec)
#define lpthread_cleanup_push(routine, arg) pthread_cleanup_push(routine, arg)
#define lpthread_create(thread, attr, routine, arg) pthread_create(thread, attr, routine, arg)
#define lpthread_cond_init(mutex, attr) pthread_cond_init(mutex,attr)
#define lpthread_cond_wait(cond, mutex) pthread_cond_wait(cond, mutex)
#define lpthread_cond_signal(cond) pthread_cond_signal(cond)
#define lpthread_cond_broadcast(cond) pthread_cond_broadcast(cond)
#define lpthread_cond_destroy(cond) pthread_cond_destroy(cond)
#define lpthread_cond_timedwait(cond, mutex, abstime) pthread_cond_timedwait(cond, mutex, abstime)
#define lpthread_exit(retval) pthread_exit(retval)
#define lpthread_mutex_init(mutex, attr) pthread_mutex_init(mutex, attr)   
#define lpthread_mutex_lock(mutex) pthread_mutex_lock(mutex)
#define lpthread_mutex_trylock(mutex) pthread_mutex_trylock(mutex)
#define lpthread_mutex_unlock(mutex) pthread_mutex_unlock(mutex)
#define lpthread_mutex_destroy(mutex) pthread_mutex_destroy(mutex)


#else
#error Not Supported
#endif
#endif
#endif

#endif
