/*
 ** Kernel includes and settings
 ** Supported kernels: NetBSD
 */

#ifndef _LPCONF_H_
#define _LPCONF_H_

#include <sys/lua.h>
#include <sys/module.h>
#include <sys/systm.h>
#include <sys/kthread.h>
#include <sys/condvar.h>
#include <sys/mutex.h>
#include <sys/lwp.h>

inline lua_State* luaK_newstate( void ) {
  lua_State* L = lua_newstate(lua_alloc, NULL);
  if(!L)
    printf("Can't create kernel state!\n");
  else
    printf("Kernel state created succesfully!");
  return L;
}

#endif 
