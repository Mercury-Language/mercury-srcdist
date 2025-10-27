#!/bin/sh
# Conditionally execute a command based if the file doesn't exist.
# If the command is omitted (and the file does not exist)
# then just exit with a non-zero code.

if test $# -lt 1
then
    echo "Usage: $0 file_name [command]" >&2
    exit 1
fi

file=$1
shift

# The C version tests for read access, presumably because it is limited
# to ANSI C.
if test -e "$file"
then
    exit 0
fi

echo "^^^^Starting command^^^^"
if test $# = 0
then
    exit 2
fi
exec "$@"
exit 1
