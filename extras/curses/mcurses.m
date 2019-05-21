%----------------------------------------------------------------------------%
% Copyright (C) 1994-2000 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury Distribution.
%----------------------------------------------------------------------------%

%----------------------------------------------------------------------------%
%
% top level of the curses binding
%
% Please note that this is still a partial binding; it does not provide
% complete curses functionality.
% Major things this binding implements:
%     * Creation, destruction, clearing, raising, and lowering of arbitary
%       windows.
%     * Scrolling.
%     * Colour on a character by character basis.
%
%----------------------------------------------------------------------------%
:- module mcurses.
:- interface.
:- include_module basics, user, misc.
