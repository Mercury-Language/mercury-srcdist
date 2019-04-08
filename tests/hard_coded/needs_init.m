%---------------------------------------------------------------------------%
% vim: ts=4 sw=4 et ft=mercury
%---------------------------------------------------------------------------%
%
:- module needs_init.

:- interface.

:- import_module io.

:- pred main(io__state::di, io__state::uo) is det.

:- implementation.

:- pred init_modules(io__state::di, io__state::uo) is det.
:- pragma import(init_modules(di, uo), "do_init_modules").

main -->
    init_modules,
    write_string("world!\n").

:- pred hello(io__state::di, io__state::uo) is det.
:- pragma export(hello(di, uo), "run_at_init_time_init").
hello --> write_string("hello, ").

:- pragma c_header_code("
#include <stdio.h>
void run_at_init_time_init_type_tables(void);
void run_at_init_time_write_out_proc_statics(FILE *);
void run_at_init_time_init_debugger(void);
").

:- pragma c_code("

/*
INIT run_at_init_time
ENDINIT
*/

void run_at_init_time_init_type_tables() {}
void run_at_init_time_write_out_proc_statics(FILE *f) {}
void run_at_init_time_init_debugger() {}
").
