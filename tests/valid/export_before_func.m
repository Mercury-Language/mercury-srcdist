:- module export_before_func.

:- interface.

:- pred foo is det.

:- implementation.

:- import_module string, maybe.

foo.

:- pragma foreign_export("C", return_yes(in) = out, "EXPORTED_return_yes"). 
:- func return_yes(string) = maybe(string).

return_yes(Str) = yes(Str).

