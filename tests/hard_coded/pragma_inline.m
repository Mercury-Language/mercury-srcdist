%---------------------------------------------------------------------------%
% vim: ts=4 sw=4 et ft=mercury
%---------------------------------------------------------------------------%
%
% A test of the pragma(inline, ...) declarations.

:- module pragma_inline.

:- interface.

:- import_module io.

:- pred main(io__state::di, io__state::uo) is det.

:- implementation.

:- import_module list.
:- import_module string.

main -->
    { L = "l"},
    { append_strings(L, L, LL) },
    { string__append_list(["He", LL, "o, world\n"], String) },
    c_write_string(String).

:- pragma foreign_decl("C",
"
#include <stdio.h>
").

:- pred c_write_string(string::in, io__state::di, io__state::uo) is det.

:- pragma foreign_proc("C",
    c_write_string(Message::in, IO0::di, IO::uo),
    [promise_pure, will_not_call_mercury],
"
    printf(""%s"", Message);
    IO = IO0;
").
c_write_string(Str) -->
    io__write_string(Str).

:- pragma inline(c_write_string/3).

:- pragma foreign_decl("C", "#include <string.h>").
:- pragma foreign_decl("C", "#include ""mercury_heap.h""").

:- pred append_strings(string::in, string::in, string::out) is det.
:- pragma inline(append_strings/3).

:- pragma foreign_proc("C",
    append_strings(S1::in, S2::in, S3::out),
    [promise_pure, will_not_call_mercury],
"{
        size_t len_1, len_2;
    MR_Word tmp;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_offset_incr_hp_atomic(tmp, 0, (len_1 + len_2 + sizeof(MR_Word))
        / sizeof(MR_Word));
    S3 = (char *) tmp;
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}").
append_strings(A, B, A ++ B).
