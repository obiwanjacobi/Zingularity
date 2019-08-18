#pragma once

#include "Types.h"
#include <assert.h>

#ifdef __cplusplus
extern "C" {
#endif

//
// Async
//

typedef struct
{
    uint16_t State;// = 0;

} AsyncThis;

extern const uint8_t AsyncThis_size;

/**
 * Usage example:
 * Async_Function(<fn-name>)
 * {
 *   Async_WaitUntil(async, <condition>);
 * }
 * Async_EndFn()
 *
 * Async Function delcaration:
 * bool_t <fn-name>(AsyncThis* async) {}
 */

#define Async_Declaration(name) bool_t name(AsyncThis *async)

#define Async_DeclarationWithParameters(name, parameters) bool_t name(AsyncThis *async, parameters)

/** MACRO: Declare an async function 'name'.
 *  \return Returns an indication if the task has yielded (false) or simply exited (true).
 */
#define Async_Function(name) bool_t name(AsyncThis *async) Async_Scope()

 /** MACRO: Declare an async function 'name' with parameters.
  *  \return Returns an indication if the task has yielded (false) or simply exited (true).
  */
#define Async_FunctionWithParams(name, parameters) bool_t name(AsyncThis *async, parameters) Async_Scope()


/** MACRO: start an async scope inside a function.
 */
#define Async_Scope()           \
    {                           \
        bool_t _yield_ = false;   \
        switch (async->State)   \
        {                       \
        case 0:


/** MACRO: Declare the end of the async function.
 *  Exits the async function (true).
 */
#define Async_End           \
    }                       \
    Async_Return()          \
}

/** MACRO: Exits the async function immediately.
 *  \return Returns true from the async function.
 */
#define Async_Return()      \
    async->State = 0;       \
    return true;


/** Asynchronously waits for the expression to become true.
 *  The expression is evaluated before the async function is exited (false).
 */
#define Async_WaitUntil(id, expression)     \
    async->State = id; case id:             \
    if (!(expression)) {                    \
        return false;                       \
    }

/** MACRO: Yields from the async function until the expression evaluates to true.
 *  The async function is yielded (exited) first and on reentry is the expression evaluated.
 *  \return Returns false from the async function.
 */
#define Async_YieldUntil(id, expression)    \
    _yield_ = true;                         \
    async->State = id; case id:             \
    if (_yield_ || !(expression)) {         \
        return false;                       \
    }

/** MACRO: Yields from the async function.
 *  The async function is yielded (exited) first and on reentry is the procedure resumed.
 *  \return Returns false from the async function.
 */
#define Async_Yield(id)             \
    _yield_ = true;                 \
    async->State = id; case id:     \
    if (_yield_) {                  \
        return false;               \
    }


inline void Async_Reset(AsyncThis* async) { async->State = 0; }

#ifdef __cplusplus
}
#endif