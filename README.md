mercury-srcdist
===============

This repository holds the contents of Mercury source distribution tarballs.
Each source distribution is held in a tagged commit. You can clone the entire
repository and then check out the tag that you are interested in, or you can
download a release from Github from the
[releases](https://github.com/Mercury-Language/mercury-srcdist/tags)
tab. To browse the list of available tags, it may be most convenient to follow
this link to the
[initial commit](https://github.com/Mercury-Language/mercury-srcdist/commit/9101f6d96bc9d0e2ec0f84048d85b00c4826a595)
then click on the ellipsis (...) to expand the list of tags.

To keep a clone up-to-date, please use `git fetch --tags`.

Building from a git checkout
----------------------------

When performing a checkout, git will set the current time as the timestamp
on every file it modifies, but only those. This can confuse the Mercury
build system, which uses the timestamp on certain files to indicate when
another file was last meaningfully changed. The simplest solution is to
ensure that all files have the same modification time before starting
the build process, e.g.

    git reset --hard rotd-2019-02-18
    git clean -fdx .
    find . -type f | xargs touch -r VERSION
    ./configure ...
    make install ...

Extras
------

Prior to about 2013, the "extras" directory was distributed as separate
"mercury-extras" packages; those packages have not been imported.
