/*
 ** Threads API layer
 ** Supported kernels: NetBSD
 */

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
#define lpthread_exit pthread_exit
#define lpthread_cond_init pthread_cond_init
#define lpthread_cond_wait pthread_cond_wait
#define lpthread_cond_signal pthread_cond_signal
#define lpthread_cond_broadcast pthread_cond_broadcast
#define lpthread_cond_destroy pthread_cond_destroy
#define lpthread_mutex_init pthread_mutex_init   
#define lpthread_mutex_lock pthread_mutex_lock
#define lpthread_mutex_trylock pthread_mutex_trylock
#define lpthread_mutex_unlock pthread_mutex_unlock
#define lpthread_mutex_destroy pthread_mutex_destroy
#define lpthread_join pthread_join
#define lpthread_self pthread_self

#define WORKER worker

#else
#error Not Supported
#endif
#endif
#endif

#ifdef LUAPROC_USE_KTHREADS
#ifdef __unix__
#include "lpconf.h"
#define lpthread_t lwp_t
#define lpthread_mutex_t kmutex_t
#define lpthread_cond_t kcondvar_t

#define lpthread_create( thread, attr, routine, arg ) kthread_create( PRI_KTHREAD, KTHREAD_MPSAFE|KTHREAD_MUSTJOIN, NULL, routine, arg, thread, "luaproc" )
#define lpthread_join( thread, unused ) kthread_join( thread )
#define lpthread_exit kthread_exit
#define lpthread_mutex_init( mutex, unused ) /* int -> void */ mutex_init( mutex, MUTEX_DEFAULT, IPL_NONE )
#define lpthread_mutex_destroy mutex_destroy /* int -> void */
#define lpthread_mutex_lock mutex_enter /* int -> void */
#define lpthread_mutex_trylock mutex_tryenter
#define lpthread_mutex_unlock mutex_exit /* int -> void */
#define lpthread_cond_init(condvar, unused)/* int -> void */ cv_init( condvar, "luaproc" )
#define lpthread_cond_destroy cv_destroy /* int -> void */
#define lpthread_cond_wait cv_wait /* int -> void */
#define lpthread_cond_signal cv_signal /* int -> void */
#define lpthread_cond_broadcast cv_broadcast /* int -> void */
#define lpthread_self curlwp

#define WORKER ptr

#else
#error Not Supported
#endif
#endif
#endif
