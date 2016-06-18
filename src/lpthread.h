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
#define lpclockid_t clockid_t
#define lpthread_key_t pthread_key_t
#define lpthread_mutexattr_t pthread_mutexattr_t
#define lpthread_once_t pthread_once_t
#define lpthread_rwlock_t pthread_rwlock_t
#define lpthread_rwlockattr_t pthread_rwlockattr_t
#define lpthread_spinlock_t pthread_spinlock_t

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
#define lpthread_condattr_destroy(attr) pthread_condattr_destroy(attr)
#define lpthread_condattr_init(attr) pthread_condattr_init(attr)
#define lpthread_condattr_getclock(attr, clock_id) pthread_condattr_getlock(attr, clock_id)
#define lpthread_condattr_setclock(attr, clock_id) pthread_condattr_setclock(attr, clock_id)
#define lpthread_condattr_getpshared(attr, pshared) pthread_condattr_getpshared(attr, pshared)
#define lpthread_condattr_setpshared(attr, pshared) pthread_condattr_setpshared(attr, pshared)
#define lpthread_detach(thread) pthread_detach(thread)
#define lpthread_equal(thread1, thread2) pthread_equal(thread1, thread2)
#define lpthread_getconcurrency() pthread_getconcurrency()
#define lpthread_getcpuclockid(threadid, clock_id) pthread_getcpuclockid(threadid, clock_id)
#define lpthread_getschedparam(thread, policy, param) pthread_getschedparam(thread, policy, param)
#define lpthread_getspecific(key) pthread_getspecific(key)
#define lpthread_join(thread, value_ptr) pthread_join(thread, value_ptr)
#define lpthread_key_create(key, destructor) pthread_key_create(key, destructor)
#define lpthread_key_delete(key) pthread_key_delete(key)
#define lpthread_kill(thread, sig) pthread_kill(thread, sig)
#define lpthread_mutex_destroy(mutex) pthread_mutex_destroy(mutex)
#define lpthread_mutex_getprioceiling(mutex, prioceiling) pthread_mutex_getprioceiling(mutex, prioceiling)
#define lpthread_mutex_setprioceiling(mutex, prioceiling, old_ceiling) pthread_mutex_setprioceiling(mutex, prioceiling, old_ceiling)
#define lpthread_mutex_timedlock(mutex, abs_time) pthread_mutex_timedlock(mutex, abs_time)
#define lpthread_exit(retval) pthread_exit(retval)
#define lpthread_mutex_init(mutex, attr) pthread_mutex_init(mutex, attr)   
#define lpthread_mutex_lock(mutex) pthread_mutex_lock(mutex)
#define lpthread_mutex_trylock(mutex) pthread_mutex_trylock(mutex)
#define lpthread_mutex_unlock(mutex) pthread_mutex_unlock(mutex)
#define lpthread_mutex_destroy(mutex) pthread_mutex_destroy(mutex)
#define lpthread_mutexattr_destroy(attr) pthread_mutexattr_destroy(attr)
#define lpthread_mutexattr_getprioceiling(attr, prioceiling) pthread_mutexattr_getprioceiling(attr, prioceiling)
#define lpthread_mutexattr_getprotocol(attr, protocol) pthread_mutexattr_getprotocol(attr, protocol)
#define lpthread_mutexattr_getpshared(attr, pshared) pthread_mutexattr_getpshared(attr, pshared)
#define lpthread_mutexattr_gettype(attr, type) pthread_mutexattr_gettype(attr, type)
#define lpthread_mutexattr_init(attr) pthread_mutexattr_init(attr)
#define lpthread_mutexattr_setprioceiling(attr, prioceiling) pthread_mutexattr_setprioceiling(attr, prioceiling)
#define lpthread_mutexattr_setprotocol(attr, protocol) pthread_mutexattr_setprotocol(attr, protocol)
#define lpthread_mutexattr_setpshared(attr, pshared) pthread_mutexattr_setpshared(attr, pshared)
#define lpthread_mutexattr_settype(attr, type) pthread_mutexattr_settype(attr, type)
#define lpthread_once(once_control, init_routine) pthread_once(once_control, init_routine)
#define lpthread_rwlock_destroy(rwlock) pthread_rwlock_destroy(rwlock)
#define lpthread_rwlock_init(rwlock, attr) pthread_rwlock_init(rwlock, attr)
#define lpthread_rwlock_rdlock(rwlock) pthread_rwlock_rdlock(rwlock)
#define lpthread_rwlock_timedrdlock(rwlock, abstime) pthread_rwlock_timedrdlock(rwlock, abstime)
#define lpthread_rwlock_timedwrlock(rwlock, abstimeout) pthread_rwlock_timedwrlock(rwlock, abstimeout)
#define lpthread_rwlock_tryrdlock(rwlock) pthread_rwlock_tryrdlock(rwlock)
#define lpthread_rwlock_trywrlock(rwlock) pthread_rwlock_trywrlock(rwlock)
#define lpthread_rwlock_unlock(rwlock) pthread_rwlock_unlock(rwlock)
#define lpthread_rwlock_wrlock(rwlock) pthread_rwlock_wrlock(rwlock)
#define lpthread_rwlockattr_destroy(attr) pthread_rwlockattr_destroy(attr)
#define lpthread_rwlockattr_getpshared(attr, pshared) pthread_rwlockattr_getpshared(attr, pshared)
#define lpthread_rwlockattr_init(attr) pthread_rwlockattr_init(attr)
#define lpthread_rwlockattr_setpshared(attr, pshared) pthread_rwlockattr_setpshared(attr, pshared)
#define lpthread_self() pthread_self()
#define lpthread_setcancelstate(state, oldstate) pthread_setcancelstate(state, oldstate)
#define lpthread_setcanceltype(type, oldtype) pthread_setcanceltype(type, oldtype)
#define lpthread_setconcurrency(newlvl) pthread_setconcurrency(newlvl)
#define lpthread_setschedparam(thread, policy, param) pthread_setschedparam(thread, policy, param)
#define lpthread_setschedprio(thread, prio) pthread_setschedprio(thread, prio)
#define lpthread_setspecific(key, value) pthread_setspecific(key, value)
#define lpthread_sigmask(how, set, oset) pthread_sigmask(how, set, oset)
#define lpthread_spin_destroy(lock) pthread_spin_destroy(lock)
#define lpthread_spin_init(lock, pshared) pthread_spin_init(lock, pshared)
#define lpthread_spin_lock(lock) pthread_spin_lock(lock)
#define lpthread_spin_trylock(lock) pthread_spin_trylock(lock)
#define lpthread_spin_unlock(lock) pthread_spin_unlock(lock)
#define lpthread_testcancel() pthread_testcancel()

#else
#error Not Supported
#endif
#endif
#endif

#endif
