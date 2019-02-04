/*
** vim: ts=4 sw=4 expandtab
*/
/*
** Copyright (C) 2001-2002, 2006 The University of Melbourne.
** This file may only be copied under the terms of the GNU Library General
** Public License - see the file COPYING.LIB in the Mercury distribution.
*/

/*
** This module contains utility functions for the rest of the Mercury runtime.
**
** Author: petdr
*/

#include    "mercury_imp.h"
#include    "mercury_runtime_util.h"

#include    <stdio.h>

#ifdef MR_HAVE_UNISTD_H
  #include  <unistd.h>
#endif

#include    <errno.h>

#ifndef MR_HAVE_STRERROR

/*
** Apparently SunOS 4.1.3 doesn't have strerror()
**  (!%^&!^% non-ANSI systems, grumble...)
*/

extern  int     sys_nerr;
extern  char    *sys_errlist[];

char *
strerror(int errnum)
{
    if (errnum >= 0 && errnum < sys_nerr && sys_errlist[errnum] != NULL) {
        return sys_errlist[errnum];
    } else {
        static  char    buf[30];

        sprintf(buf, "Error %d", errnum);
        return buf;
    }
}

#endif  /* MR_HAVE_STRERROR */

FILE *
MR_checked_fopen(const char *filename, const char *message, const char *mode)
{
    FILE *file;

    errno = 0;
    file = fopen(filename, mode);
    if (file == NULL) {
        fprintf(stderr, "Mercury runtime: couldn't %s file `%s': %s\n",
            message, filename, strerror(errno));
        exit(EXIT_FAILURE);
    }
    return file;
}

void
MR_checked_fclose(FILE *file, const char *filename)
{
    errno = 0;
    if (fclose(file) != 0) {
        fprintf(stderr, "Mercury runtime: error closing file `%s': %s\n",
            filename, strerror(errno));
        exit(EXIT_FAILURE);
    }
}

void
MR_checked_atexit(void (*func)(void))
{
    errno = 0;
    if (atexit(func) != 0) {
        fprintf(stderr, "Mercury runtime: error in call to atexit: %s\n",
            strerror(errno));
        exit(EXIT_FAILURE);
    }
}

#if ! defined(MR_HAVE_PUTENV) && defined(MR_HAVE__PUTENV)
  #define putenv _putenv
#endif

int
MR_setenv(const char *name, const char *value, int overwrite)
{
#if defined(MR_HAVE_SETENV)
    return setenv(name, value, overwrite);
#elif defined(MR_HAVE_PUTENV) || defined(MR_HAVE__PUTENV)
    char *env;
    int length;
    int result;

    if (!overwrite && getenv(name) != NULL) {
        return 0;
    }

    length = strlen(name) + strlen(value) + 2;
    env = MR_NEW_ARRAY(char, length);

    env[0] = '\0';
    strcat(env, name);
    strcat(env, "=");
    strcat(env, value);

    result = putenv(env);

    MR_free(env);
    
    return result;
#else
  #error "MR_setenv: unable to define"
#endif
}
