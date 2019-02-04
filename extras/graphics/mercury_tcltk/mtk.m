%-----------------------------------------------------------------------------%
% Copyright (C) 1997-1998,2000, 2003-2006 The University of Melbourne.
% Copyright (C) 2001 The Rationalizer Intelligent Software AG
% Copyright (C) 2014, 2018 The Mercury team.
% This file is distributed under the terms specified in COPYING.LIB.
%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%
%
% file: mtk.
% main author: conway.
% stability: very low.
%
%
% This file provides an interface to the Tk widget set, [conceptually]
% bypassing Tcl.
%
% 07/13/01 hkrug@rationalizer.com:
%       * interface:
%         - added constant root_window for access of the root window by
%           the application  
%       * implementation:
%         - more carefull formation of internal Tk-names for created 
%           widgets, when the parent is the root window:
%	    string.format("%s.button%d", [s("."), i(13)], Widget)
%           would result in the invalid name "..button13"
%
%-----------------------------------------------------------------------------%

:- module mtk.
:- interface.

:- import_module mtcltk.

:- import_module bool.
:- import_module io.
:- import_module list.
:- import_module maybe.
:- import_module pair.

%-----------------------------------------------------------------------------%

:- type widget.

:- type config
	--->	active(bool)
	;	active_background(string)
	;	active_foreground(string)
	;	active_relief(string)
	;	anchor(anchor)
	;	aspect(int)
	;	background(string)
	;	bitmap(string)
	;	border_width(int)
	;	command(pred(tcl_interp, io, io))
	;	cursor(string)
	;	disabled_foreground(string)
	;	element_border_width(int)
	;	export_selection(bool)
	;	fill_color(string)
	;	font(string)
	;	foreground(string)
	;	highlight_background(string)
	;	highlight_color(string)
	;	highlight_thickness(int)
	;	height(int)
	;	indicator_color(string)
	;	indicator_on(bool)
	;	insert_background(string)
	;	insert_border_width(int)
	;	insert_off_time(int)
	;	insert_on_time(int)
	;	insert_width(int)
	;	jump(bool)
	;	justify(string)
	;	label(string)
	;	menu(widget)
	;	multiple_select(bool)
	;	orient(orientation)
	;	outline_color(string)
	;	padx(int)
	;	pady(int)
	;	relief(string)
	;	repeat_delay(int)
	;	repeat_interval(int)
	;	scale_height(int)
	;	scale_range(int, int)
	;	scale_text(string)
	;	screen(string)
	;	scroll_region(int, int)
	;	select_background(string)
	;	select_border_width(int)
	;	select_foreground(string)
	;	show(bool)
	;	slider_length(int)
	;	take_focus(bool)
	;	text(string)
	;	text_variable(string)
	;	tick_interval(int)
	;	title(string)
	;	trough_color(string)
	;	underline(int)
	;	width(int)
	;	winposition(int, int)
	;	winsize(int, int)
	;	wrap(bool)
	;	wrap_length(int).

:- inst config
	--->	active(ground)
	;	active_background(ground)
	;	active_foreground(ground)
	;	active_relief(ground)
	;	anchor(ground)
	;	aspect(ground)
	;	background(ground)
	;	bitmap(ground)
	;	border_width(ground)
	;	command(pred(in, di, uo) is det)
	;	cursor(ground)
	;	disabled_foreground(ground)
	;	element_border_width(ground)
	;	export_selection(ground)
	;	fill_color(ground)
	;	font(ground)
	;	foreground(ground)
	;	highlight_background(ground)
	;	highlight_color(ground)
	;	highlight_thickness(ground)
	;	height(ground)
	;	indicator_color(ground)
	;	indicator_on(ground)
	;	insert_background(ground)
	;	insert_border_width(ground)
	;	insert_off_time(ground)
	;	insert_on_time(ground)
	;	insert_width(ground)
	;	jump(ground)
	;	justify(ground)
	;	label(ground)
	;	menu(bound(menu(ground)))
	;	multiple_select(ground)
	;	orient(ground)
	;	outline_color(ground)
	;	padx(ground)
	;	pady(ground)
	;	relief(ground)
	;	repeat_delay(ground)
	;	repeat_interval(ground)
	;	scale_height(ground)
	;	scale_range(ground, ground)
	;	scale_text(ground)
	;	screen(ground)
	;	scroll_region(ground, ground)
	;	select_background(ground)
	;	select_border_width(ground)
	;	select_foreground(ground)
	;	show(ground)
	;	slider_length(ground)
	;	take_focus(ground)
	;	text(ground)
	;	text_variable(ground)
	;	tick_interval(ground)
	;	title(ground)
	;	trough_color(ground)
	;	underline(ground)
	;	width(ground)
	;	winposition(ground, ground)
	;	winsize(ground, ground)
	;	wrap(ground)
	;	wrap_length(ground).

:- type orientation
	--->	horiz
	;	vert.

:- inst toplevel ---> window(ground).

% A constant to access the root window in the Tk hierarchy,
% comp. John K. Ousterhout, Tcl and the Tk Toolkit, 1994, p.151.
% The root window is the one designated as "." in Tk way of 
% speaking. It is necessary to access not only a top level window
% created by the application, but the main application window
% provided by the framework.
:- func root_window = widget.
:- mode root_window = out(toplevel) is det.	

:- inst window 
	--->	window(ground)
	;	frame(ground).

:- inst button ---> button(ground).

:- inst button_config 
	--->	active(ground)
	;	active_foreground(ground)
	;	active_background(ground)
	;	anchor(ground)
	;	background(ground)
	;	bitmap(ground)
	;	border_width(ground)
	;	command(pred(in, di, uo) is det)
	;	cursor(ground)
	;	disabled_foreground(ground)
	;	font(ground)
	;	highlight_background(ground)
	;	highlight_color(ground)
	;	highlight_thickness(ground)
	;	height(ground)
	;	justify(ground)
	;	padx(ground)
	;	pady(ground)
	;	relief(ground)
	;	take_focus(ground)
	;	text(ground)
	;	text_variable(ground)
	;	underline(ground)
	;	width(ground)
	;	wrap_length(ground).

:- inst canvas ---> canvas(ground).

:- inst entry ---> entry(ground).

:- inst entry_config
	--->	active(ground)
	;	background(ground)
	;	border_width(ground)
	;	cursor(ground)
	;	export_selection(ground)
	;	font(ground)
	;	foreground(ground)
	;	highlight_background(ground)
	;	highlight_color(ground)
	;	highlight_thickness(ground)
	;	height(ground)
	;	insert_background(ground)
	;	insert_border_width(ground)
	;	insert_off_time(ground)
	;	insert_on_time(ground)
	;	insert_width(ground)
	;	justify(ground)
	;	relief(ground)
	;	select_background(ground)
	;	select_border_width(ground)
	;	select_foreground(ground)
	;	show(ground)
	;	take_focus(ground)
	;	width(ground).

:- inst label ---> label(ground).

:- inst listbox ---> listbox(ground).

:- inst listbox_config
	--->	background(ground)
	;	border_width(ground)
	;	cursor(ground)
	;	export_selection(ground)
	;	font(ground)
	;	foreground(ground)
	;	height(ground)
	;	highlight_background(ground)
	;	highlight_color(ground)
	;	highlight_thickness(ground)
	;	multiple_select(ground)
	;	relief(ground)
	;	select_background(ground)
	;	select_border_width(ground)
	;	select_foreground(ground)
	;	take_focus(ground)
	;	width(ground).

:- inst radiobutton ---> radiobutton(ground).

:- inst scrollbar ---> scrollbar(ground).

:- inst scrollbar_config
	--->	active_background(ground)
	;	active_relief(ground)
	;	background(ground)
	;	border_width(ground)
	;	cursor(ground)
	;	element_border_width(ground)
	;	highlight_background(ground)
	;	highlight_color(ground)
	;	highlight_thickness(ground)
	;	jump(ground)
	;	orient(ground)
	;	relief(ground)
	;	repeat_delay(ground)
	;	repeat_interval(ground)
	;	select_background(ground)
	;	select_border_width(ground)
	;	select_foreground(ground)
	;	take_focus(ground)
	;	trough_color(ground)
	;	width(ground).

:- inst text ---> text(ground).

:- inst text_config
	--->	active(ground)
	;	background(ground)
	;	border_width(ground)
	;	cursor(ground)
	;	export_selection(ground)
	;	font(ground)
	;	foreground(ground)
	;	height(ground)
	;	highlight_background(ground)
	;	highlight_color(ground)
	;	highlight_thickness(ground)
	;	insert_background(ground)
	;	insert_border_width(ground)
	;	insert_off_time(ground)
	;	insert_on_time(ground)
	;	insert_width(ground)
	;	padx(ground)
	;	pady(ground)
	;	relief(ground)
	;	select_background(ground)
	;	select_border_width(ground)
	;	select_foreground(ground)
	;	take_focus(ground)
	;	width(ground)
	;	wrap(ground).

:- type anchor
	--->	n ; ne ; e ; se ; s ; sw ; w ; nw ; c .

:- pred window(tcl_interp, list(config), widget, io, io).
:- mode window(in, in(list_skel(config)), out(toplevel), di, uo) is det.

:- pred button(tcl_interp, list(config), widget, widget, io, io).
:- mode button(in, in(list_skel(button_config)), in(window), out(button),
		di, uo) is det.

	:- pred flash(tcl_interp, widget, io, io).
	:- mode flash(in, in(button), di, uo) is det.

	:- pred invoke(tcl_interp, widget, io, io).
	:- mode invoke(in, in(button), di, uo) is det.

	:- pred enable(tcl_interp, widget, io, io).
	:- mode enable(in, in(button), di, uo) is det.

	:- pred disable(tcl_interp, widget, io, io).
	:- mode disable(in, in(button), di, uo) is det.

:- pred canvas(tcl_interp, list(config), widget, widget, io, io).
:- mode canvas(in, in(list_skel(config)), in(window), out(canvas),
		di, uo) is det.

	:- type canvas_item.

	:- type canvas_item_type
			--->	arc(int, int, int, int)
			;	bitmap(int, int)
			;	image(int, int)
			;	line(list(pair(int, int)))
			;	oval(int, int, int, int)
			;	polygon(list(pair(int, int)))
			;	rectangle(int, int, int, int)
			;	text(int, int)
			.

	:- type item_config
		--->	anchor(anchor)
		;	background(string)
		;	bitmap(string)
		;	extent(int)
		;	fill(string)
		;	foreground(string)
		;	outline(string)
		;	start(int)
		;	type(string)
		;	width(int)
		.

	:- type item_spec
			--->	item(canvas_item)
			;	(all)
			.

	:- pred create(tcl_interp, widget, canvas_item_type, list(item_config),
			canvas_item, io, io).
	:- mode create(in, in, in, in, out, di, uo) is det.

	:- pred canvas_delete(tcl_interp, widget, item_spec,
			io, io).
	:- mode canvas_delete(in, in, in, di, uo) is det.

	:- pred canvas_item_configure(tcl_interp, widget, canvas_item,
			list(item_config), io, io).
	:- mode canvas_item_configure(in, in, in, in, di, uo) is det.

	:- pred canvas_item_coords(tcl_interp, widget, canvas_item, int, int,
			io, io).
	:- mode canvas_item_coords(in, in, in, in, in, di, uo) is det.

	:- pred canvas_move(tcl_interp, widget, canvas_item, int, int,
			io, io).
	:- mode canvas_move(in, in, in, in, in, di, uo) is det.

:- pred entry(tcl_interp, list(config), widget, widget, io, io).
:- mode entry(in, in(list_skel(entry_config)), in(window), out(entry),
		di, uo) is det.

:- pred frame(tcl_interp, list(config), widget, widget, io, io).
:- mode frame(in, in(list_skel(config)), in(window), out(window),
		di, uo) is det.

:- pred label(tcl_interp, list(config), widget, widget, io, io).
:- mode label(in, in(list_skel(config)), in(window), out(label),
		di, uo) is det.

:- pred listbox(tcl_interp, list(config), widget, widget, io, io).
:- mode listbox(in, in(list_skel(listbox_config)), in(window), out(listbox),
		di, uo) is det.

	:- pred link(tcl_interp, widget, widget, io, io).
	:- mode link(in, in(listbox), in(scrollbar), di, uo) is det.

	:- type insertion
		--->	start
		;	at(int)
		;	end
		.
		
	:- pred insert(tcl_interp, widget, insertion, string,
			io, io).
	:- mode insert(in, in(listbox), in, in, di, uo) is det.

	:- pred delete(tcl_interp, widget, insertion, io, io).
	:- mode delete(in, in(listbox), in, di, uo) is det.

	:- pred delete_all(tcl_interp, widget, io, io).
	:- mode delete_all(in, in(listbox), di, uo) is det.

:- inst menubutton ---> menubutton(ground).

:- pred menubutton(tcl_interp, list(config), widget, widget,
		io, io).
:- mode menubutton(in, in(list_skel(config)), in(window), out(menubutton),
		di, uo) is det.

:- inst menu ---> menu(ground).

:- pred menu(tcl_interp, list(config), widget, widget, io, io).
:- mode menu(in, in(list_skel(config)), in(menubutton), out(menu),
		di, uo) is det.

	:- type menu_item
		--->	command
		;	separator
		.

	:- pred add_menu_item(tcl_interp, widget, menu_item, list(config),
			io, io).
	:- mode add_menu_item(in, in(menu), in, in(list_skel(config)),
			di, uo) is det.

:- type radio_group.

:- pred new_radio_group(tcl_interp, radio_group, io, io).
:- mode new_radio_group(in, out, di, uo) is det.

:- pred set_radio_group(tcl_interp, radio_group, string, io, io).
:- mode set_radio_group(in, in, in, di, uo) is det.

:- pred radiobutton(tcl_interp, list(config), widget, radio_group, string,
		widget, io, io).
:- mode radiobutton(in, in(list_skel(config)), in(window), in, in,
		out(radiobutton), di, uo) is det.

:- pred scrollbar(tcl_interp, list(config), widget, widget,
		io, io).
:- mode scrollbar(in, in(list_skel(scrollbar_config)), in(window),
		out(scrollbar), di, uo) is det.

:- pred text(tcl_interp, list(config), widget, widget, io, io).
:- mode text(in, in(list_skel(text_config)), in(window), out(text),
		di, uo) is det.

:- type pack_option
	--->	top
	;	bottom
	;	left
	;	right
	;	expand
	;	fill_x
	;	fill_y
	;	fill_both
	.

:- type pack_item
	--->	pack(widget, list(pack_option))
	.

:- type grid_option
	--->	row(int)
	;	col(int)
	.

:- type grid_item
	--->	grid(widget, list(grid_option))
	.


:- pred pack(tcl_interp, list(pack_item), io, io).
:- mode pack(in, in, di, uo) is det.

:- pred grid(tcl_interp, list(grid_item), io, io).
:- mode grid(in, in, di, uo) is det.

:- pred layout_grid(tcl_interp, list(list(maybe(widget))),
		io, io).
:- mode layout_grid(in, in, di, uo) is det.

:- pred destroy(tcl_interp, widget, io, io).
:- mode destroy(in, in, di, uo) is det.

:- type (event)	--->	event(list(event_modifier), event_type).

:- type event_modifier
	--->	control
	;	shift
	;	lock
	;	button1
	;	button2
	;	button3
	;	button4
	;	button5
	;	mod1
	;	mod2
	;	mod3
	;	mod4
	;	mod5
	;	meta
	;	alt
	;	double
	;	triple
	.

:- type event_type
	--->	button(int) %press
	;	button_release(int)
	;	circulate
	;	colormap
	;	configure
	;	destroy
	;	enter
	;	expose
	;	focus_in
	;	focus_out
	;	gravity
	;	key %press
	;	key_release
	;	leave
	;	map
	;	motion
	;	property
	;	reparent
	;	unmap
	;	visibility
	.

:- type event_data_spec
	--->	button
	;	key
	;	x
	;	y
	.

:- type event_data
	--->	button(int)
	;	key(int)
	;	x(int)
	;	y(int)
	.

:- pred bind(tcl_interp, widget, event, list(event_data_spec),
		pred(tcl_interp, list(event_data), io, io),
		io, io).
:- mode bind(in, in, in, in, pred(in, in, di, uo) is det, di, uo) is det.

:- pred configure(tcl_interp, widget, list(config), io, io).
:- mode configure(in, in, in(list_skel(config)), di, uo) is det.

:- pred get(tcl_interp, widget, string, io, io).
:- mode get(in, in(entry), out, di, uo) is det.
:- mode get(in, in(text), out, di, uo) is det.

:- pred set(tcl_interp, widget, string, io, io).
:- mode set(in, in(entry), in, di, uo) is det.
:- mode set(in, in(text), in, di, uo) is det.

:- pred get_selection(tcl_interp, widget, string, io, io).
:- mode get_selection(in, in, out, di, uo) is det.

:- pred ensure_window(widget, widget).
:- mode ensure_window(in, out(window)) is det.

% XXX hack until we can implement cget.
:- pred unbind_command(tcl_interp, widget, io, io).
:- mode unbind_command(in, in, di, uo) is det.

%------------------------------------------------------------------------------%

:- implementation.

:- import_module string, int, require.

:- type widget
	--->	window(wpath)
	;	frame(wpath)
	;	button(wpath)
	;	canvas(wpath)
	;	entry(wpath)
	;	label(wpath)
	;	listbox(wpath)
	;	menubutton(wpath)
	;	menu(wpath)
	;	radiobutton(wpath)
	;	scrollbar(wpath)
	;	text(wpath)
	.

:- type wpath	==	string.

:- type canvas_item	==	string.

%------------------------------------------------------------------------------%

% The straightforward implementation of root_window.
root_window = window(".").

window(Interp, Configs, window(Widget)) -->
	get_thingy_counter(Id),
	set_thingy_counter(Id + 1),
	{ string.format(".toplevel%d", [i(Id)], Widget) },
	{ string.format("toplevel %s ", [s(Widget)], Str0) },
	stringify_configs(Interp, Configs, Str1),
	{ string.append(Str0, Str1, Str) },
	eval(Interp, Str, Res, ResStr),
	{ Res = tcl_ok -> true ; error(ResStr) }.

%------------------------------------------------------------------------------%

button(Interp, Configs, ParentWidget, button(Widget)) -->
	{ unwrap(ParentWidget, Parent) },
	get_thingy_counter(Id),
	set_thingy_counter(Id + 1),
	{ string.format("%s.button%d", [s(no_dot_wpath(Parent)), i(Id)], Widget) },
	{ string.format("button %s ", [s(Widget)], Str0) },
	stringify_configs(Interp, Configs, Str1),
	{ string.append(Str0, Str1, Str) },
	eval(Interp, Str, Res, ResStr),
	{ Res = tcl_ok -> true ; error(ResStr) }.

flash(Interp, Widget) -->
	{ unwrap(Widget, Path) },
	{ string.format("%s flash", [s(Path)], Str) },
	eval(Interp, Str, Res, ResStr),
	{ Res = tcl_ok -> true ; error(ResStr) }.

invoke(Interp, Widget) -->
	{ unwrap(Widget, Path) },
	{ string.format("%s invoke", [s(Path)], Str) },
	eval(Interp, Str, Res, ResStr),
	{ Res = tcl_ok -> true ; error(ResStr) }.

enable(Interp, Widget) -->
	{ unwrap(Widget, Path) },
	{ string.format("%s configure -state normal", [s(Path)], Str) },
	eval(Interp, Str, Res, ResStr),
	{ Res = tcl_ok -> true ; error(ResStr) }.

disable(Interp, Widget) -->
	{ unwrap(Widget, Path) },
	{ string.format("%s configure -state disabled", [s(Path)], Str) },
	eval(Interp, Str, Res, ResStr),
	{ Res = tcl_ok -> true ; error(ResStr) }.

%------------------------------------------------------------------------------%

canvas(Interp, Configs, ParentWidget, canvas(Widget)) -->
	{ unwrap(ParentWidget, Parent) },
	get_thingy_counter(Id),
	set_thingy_counter(Id + 1),
	{ string.format("%s.canvas%d", [s(no_dot_wpath(Parent)), i(Id)], Widget) },
	{ string.format("canvas %s ", [s(Widget)], Str0) },
	stringify_configs(Interp, Configs, Str1),
	{ string.append(Str0, Str1, Str) },
	eval(Interp, Str, Res, ResStr),
	{ Res = tcl_ok -> true ; error(ResStr) }.

create(Interp, Widget, ItemType, Configs, CanvasItem) -->
	{ unwrap(Widget, Path) },
	{ stringify_item_configs(Configs, ConfStr) },
	{ stringify_itemtype(ItemType, ItemStr) },
	{ string.format("%s create %s %s", [s(Path), s(ItemStr), s(ConfStr)],
		CmdStr) },
	eval(Interp, CmdStr, Res, CanvasItem),
	{ Res = tcl_ok -> true ; error(CanvasItem) }.

canvas_delete(Interp, Widget, item(CanvasItem)) -->
	{ unwrap(Widget, Path) },
	{ string.format("%s delete %s", [s(Path), s(CanvasItem)], CmdStr) },
	eval(Interp, CmdStr, Res, ResStr),
	{ Res = tcl_ok -> true ; error(ResStr) }.
canvas_delete(Interp, Widget, all) -->
	{ unwrap(Widget, Path) },
	{ string.format("%s delete all", [s(Path)], CmdStr) },
	eval(Interp, CmdStr, Res, ResStr),
	{ Res = tcl_ok -> true ; error(ResStr) }.

canvas_item_configure(Interp, Widget, Item, Configs) -->
	{ unwrap(Widget, Path) },
	{ stringify_item_configs(Configs, ConfStr) },
	{ string.format("%s itemconfigure %s %s", [s(Path),
		s(Item), s(ConfStr)], CmdStr) },
	eval(Interp, CmdStr, Res, ResStr),
	{ Res = tcl_ok -> true ; error(ResStr) }.

canvas_item_coords(Interp, Widget, Item, Dx, Dy) -->
	{ unwrap(Widget, Path) },
	{ string.format("%s coords %s %d %d", [s(Path), s(Item), i(Dx), i(Dy)],
		CmdStr) },
	eval(Interp, CmdStr, Res, ResStr),
	{ Res = tcl_ok -> true ; error(ResStr) }.

canvas_move(Interp, Widget, Item, Dx, Dy) -->
	{ unwrap(Widget, Path) },
	{ string.format("%s move %s %d %d", [s(Path), s(Item), i(Dx), i(Dy)],
		CmdStr) },
	eval(Interp, CmdStr, Res, ResStr),
	{ Res = tcl_ok -> true ; error(ResStr) }.

:- pred stringify_itemtype(canvas_item_type, string).
:- mode stringify_itemtype(in, out) is det.

stringify_itemtype(arc(X1, Y1, X2, Y2), Str) :-
	string.format("arc %d %d %d %d", [i(X1), i(Y1), i(X2), i(Y2)], Str).
stringify_itemtype(bitmap(X, Y), Str) :-
	string.format("bitmap %d %d", [i(X), i(Y)], Str).
stringify_itemtype(image(X, Y), Str) :-
	string.format("image %d %d", [i(X), i(Y)], Str).
stringify_itemtype(line(Points), Str) :-
	stringify_points(Points, PointStr),
	string.append("line ", PointStr, Str).
stringify_itemtype(oval(X1, Y1, X2, Y2), Str) :-
	string.format("oval %d %d %d %d", [i(X1), i(Y1), i(X2), i(Y2)], Str).
stringify_itemtype(polygon(Points), Str) :-
	stringify_points(Points, PointStr),
	string.append("polygon ", PointStr, Str).
stringify_itemtype(rectangle(X1, Y1, X2, Y2), Str) :-
	string.format("rectangle %d %d %d %d", [i(X1),i(Y1),i(X2),i(Y2)], Str).
stringify_itemtype(text(X, Y), Str) :-
	string.format("text %d %d", [i(X), i(Y)], Str).

:- pred stringify_points(list(pair(int, int)), string).
:- mode stringify_points(in, out) is det.

stringify_points([], "").
stringify_points([X - Y], Str) :-
	string.format("%d %d", [i(X), i(Y)], Str).
stringify_points([X - Y|Rest], Str) :-
	Rest = [_|_],
	stringify_points(Rest, RestStr),
	string.format("%d %d ", [i(X), i(Y)], ThisStr),
	string.append(ThisStr, RestStr, Str).

:- pred stringify_item_configs(list(item_config), string).
:- mode stringify_item_configs(in, out) is det.

stringify_item_configs([], "").
stringify_item_configs([Cfg|Cfgs], Str) :-
	(
		Cfg = anchor(Anc),
		stringify_anchor(Anc, AStr),
		string.format("-anchor %s ", [s(AStr)], CfgStr)
	;
		Cfg =	background(Col),
		string.format("-background %s ", [s(Col)], CfgStr)
	;
		Cfg =	bitmap(Bitm),
		string.format("-bitmap %s ", [s(Bitm)], CfgStr)
	;
		Cfg =	extent(Ext),
		string.format("-extent %d ", [i(Ext)], CfgStr)
	;
		Cfg =	fill(Col),
		string.format("-fill %s ", [s(Col)], CfgStr)
	;
		Cfg =	foreground(Col),
		string.format("-foreground %s ", [s(Col)], CfgStr)
	;
		Cfg =	outline(Col),
		string.format("-outline %s ", [s(Col)], CfgStr)
	;
		Cfg =	start(St),
		string.format("-width %d ", [i(St)], CfgStr)
	;
		Cfg =	type(Col),
		string.format("-type %s ", [s(Col)], CfgStr)
	;
		Cfg =	width(Int),
		string.format("-width %d ", [i(Int)], CfgStr)
	),
	stringify_item_configs(Cfgs, Str0),
	string.append(CfgStr, Str0, Str).


%------------------------------------------------------------------------------%

entry(Interp, Configs, ParentWidget, entry(Widget)) -->
	{ unwrap(ParentWidget, Parent) },
	get_thingy_counter(Id),
	set_thingy_counter(Id + 1),
	{ string.format("%s.entry%d", [s(no_dot_wpath(Parent)), i(Id)], Widget) },
	{ string.format("entry %s ", [s(Widget)], Str0) },
	stringify_configs(Interp, Configs, Str1),
	{ string.append(Str0, Str1, Str) },
	eval(Interp, Str, Res, ResStr),
	{ Res = tcl_ok -> true ; error(ResStr) }.

%------------------------------------------------------------------------------%

frame(Interp, Configs, ParentWidget, frame(Widget)) -->
	{ unwrap(ParentWidget, Parent) },
	get_thingy_counter(Id),
	set_thingy_counter(Id + 1),
	{ string.format("%s.frame%d", [s(no_dot_wpath(Parent)), i(Id)], Widget) },
	{ string.format("frame %s ", [s(Widget)], Str0) },
	stringify_configs(Interp, Configs, Str1),
	{ string.append(Str0, Str1, Str) },
	eval(Interp, Str, Res, ResStr),
	{ Res = tcl_ok -> true ; error(ResStr) }.

%------------------------------------------------------------------------------%

label(Interp, Configs, ParentWidget, label(Widget)) -->
	{ unwrap(ParentWidget, Parent) },
	get_thingy_counter(Id),
	set_thingy_counter(Id + 1),
	{ string.format("%s.label%d", [s(no_dot_wpath(Parent)), i(Id)], Widget) },
	{ string.format("label %s ", [s(Widget)], Str0) },
	stringify_configs(Interp, Configs, Str1),
	{ string.append(Str0, Str1, Str) },
	eval(Interp, Str, Res, ResStr),
	{ Res = tcl_ok -> true ; error(ResStr) }.

%------------------------------------------------------------------------------%

listbox(Interp, Configs, ParentWidget, listbox(Widget)) -->
	{ unwrap(ParentWidget, Parent) },
	get_thingy_counter(Id),
	set_thingy_counter(Id + 1),
	{ string.format("%s.listbox%d", [s(no_dot_wpath(Parent)), i(Id)], Widget) },
	{ string.format("listbox %s ", [s(Widget)], Str0) },
	stringify_configs(Interp, Configs, Str1),
	{ string.append(Str0, Str1, Str) },
	eval(Interp, Str, Res, ResStr),
	{ Res = tcl_ok -> true ; error(ResStr) }.

link(Interp, ListBoxWidget, ScrollBarWidget) -->
	{ unwrap(ListBoxWidget, ListBox) },
	{ unwrap(ScrollBarWidget, ScrollBar) },
	{ string.format("%s configure -yscroll ""%s set""",
		[s(ListBox), s(ScrollBar)], Str1) },
	eval(Interp, Str1, Res1, ResStr1),
	{ Res1 = tcl_ok -> true ; error(ResStr1) },
	{ string.format("%s configure -command ""%s yview""",
		[s(ScrollBar), s(ListBox)], Str2) },
	eval(Interp, Str2, Res2, ResStr2),
	{ Res2 = tcl_ok -> true ; error(ResStr2) }.

insert(Interp, Widget, start, Text) -->
	{ unwrap(Widget, Path) },
	{ string.format("%s insert 0 ""%s""", [s(Path), s(Text)], Str) },
	eval(Interp, Str, Res, ResStr),
	{ Res = tcl_ok -> true ; error(ResStr) }.
insert(Interp, Widget, at(N), Text) -->
	{ unwrap(Widget, Path) },
	{ string.format("%s insert %d ""%s""",
		[s(Path), i(N), s(Text)], Str) },
	eval(Interp, Str, Res, ResStr),
	{ Res = tcl_ok -> true ; error(ResStr) }.
insert(Interp, Widget, end, Text) -->
	{ unwrap(Widget, Path) },
	{ string.format("%s insert end ""%s""", [s(Path), s(Text)], Str) },
	eval(Interp, Str, Res, ResStr),
	{ Res = tcl_ok -> true ; error(ResStr) }.

delete(Interp, Widget, start) -->
	{ unwrap(Widget, Path) },
	{ string.format("%s delete 0", [s(Path)], Str) },
	eval(Interp, Str, Res, ResStr),
	{ Res = tcl_ok -> true ; error(ResStr) }.
delete(Interp, Widget, at(N)) -->
	{ unwrap(Widget, Path) },
	{ string.format("%s delete %d", [s(Path), i(N)], Str) },
	eval(Interp, Str, Res, ResStr),
	{ Res = tcl_ok -> true ; error(ResStr) }.
delete(Interp, Widget, end) -->
	{ unwrap(Widget, Path) },
	{ string.format("%s delete end", [s(Path)], Str) },
	eval(Interp, Str, Res, ResStr),
	{ Res = tcl_ok -> true ; error(ResStr) }.

delete_all(Interp, Widget) -->
	{ unwrap(Widget, Path) },
	{ string.format("%s delete 0 end", [s(Path)], Str) },
	eval(Interp, Str, Res, ResStr),
	{ Res = tcl_ok -> true ; error(ResStr) }.

get_selection(Interp, _Widget, Selection) -->
	eval(Interp, "selection get", Res, Selection),
	{ Res = tcl_ok -> true ; error(Selection) }.

%------------------------------------------------------------------------------%

menubutton(Interp, Configs, ParentWidget, menubutton(Widget)) -->
	{ unwrap(ParentWidget, Parent) },
	get_thingy_counter(Id),
	set_thingy_counter(Id + 1),
	{ string.format("%s.menubutton%d", [s(no_dot_wpath(Parent)), i(Id)], Widget) },
	{ string.format("menubutton %s ", [s(Widget)], Str0) },
	stringify_configs(Interp, Configs, Str1),
	{ string.append(Str0, Str1, Str) },
	eval(Interp, Str, Res, ResStr),
	{ Res = tcl_ok -> true ; error(ResStr) }.

%------------------------------------------------------------------------------%

menu(Interp, Configs, ParentWidget, menu(Widget)) -->
	{ unwrap(ParentWidget, Parent) },
	get_thingy_counter(Id),
	set_thingy_counter(Id + 1),
	{ string.format("%s.menu%d", [s(no_dot_wpath(Parent)), i(Id)], Widget) },
	{ string.format("menu %s ", [s(Widget)], Str0) },
	stringify_configs(Interp, Configs, Str1),
	{ string.append(Str0, Str1, Str) },
	eval(Interp, Str, Res, ResStr),
	{ Res = tcl_ok -> true ; error(ResStr) }.

add_menu_item(Interp, Widget, command, Configs) -->
	{ unwrap(Widget, Path) },
	stringify_configs(Interp, Configs, Str1),
	{ string.format("%s add command %s", [s(Path), s(Str1)], Str) },
	eval(Interp, Str, Res, ResStr),
	{ Res = tcl_ok -> true ; error(ResStr) }.

add_menu_item(Interp, Widget, separator, Configs) -->
	{ unwrap(Widget, Path) },
	stringify_configs(Interp, Configs, Str1),
	{ string.format("%s add separator %s", [s(Path), s(Str1)], Str) },
	eval(Interp, Str, Res, ResStr),
	{ Res = tcl_ok -> true ; error(ResStr) }.

%------------------------------------------------------------------------------%

:- type radio_group	==	string.

new_radio_group(_Interp, RadioVar) -->
	get_thingy_counter(Id),
	set_thingy_counter(Id + 1),
	{ string.format("radiovar%d", [i(Id)], RadioVar) }.

set_radio_group(Interp, RadVar, Value) -->
	{ string.format("set %s %s", [s(RadVar), s(Value)], CmdStr) },
	eval(Interp, CmdStr, Res, ResStr),
	{ Res = tcl_ok -> true ; error(ResStr) }.

radiobutton(Interp, Configs, ParentWidget, RadioVar, Value,
		radiobutton(Widget)) -->
	{ unwrap(ParentWidget, Parent) },
	get_thingy_counter(Id),
	set_thingy_counter(Id + 1),
	{ string.format("%s.radiobutton%d", [s(no_dot_wpath(Parent)), i(Id)], Widget) },
	{ string.format("radiobutton %s -indicatoron 0 -variable %s -value %s ",
		[s(Widget), s(RadioVar), s(Value)], Str0) },
	stringify_configs(Interp, Configs, Str1),
	{ string.append(Str0, Str1, Str) },
	eval(Interp, Str, Res, ResStr),
	{ Res = tcl_ok -> true ; error(ResStr) }.

%------------------------------------------------------------------------------%

scrollbar(Interp, Configs, ParentWidget, scrollbar(Widget)) -->
	{ unwrap(ParentWidget, Parent) },
	get_thingy_counter(Id),
	set_thingy_counter(Id + 1),
	{ string.format("%s.scrollbar%d", [s(no_dot_wpath(Parent)), i(Id)], Widget) },
	{ string.format("scrollbar %s ", [s(Widget)], Str0) },
	stringify_configs(Interp, Configs, Str1),
	{ string.append(Str0, Str1, Str) },
	eval(Interp, Str, Res, ResStr),
	{ Res = tcl_ok -> true ; error(ResStr) }.

%------------------------------------------------------------------------------%

text(Interp, Configs, ParentWidget, text(Widget)) -->
	{ unwrap(ParentWidget, Parent) },
	get_thingy_counter(Id),
	set_thingy_counter(Id + 1),
	{ string.format("%s.text%d", [s(no_dot_wpath(Parent)), i(Id)], Widget) },
	{ string.format("text %s ", [s(Widget)], Str0) },
	stringify_configs(Interp, Configs, Str1),
	{ string.append(Str0, Str1, Str) },
	eval(Interp, Str, Res, ResStr),
	{ Res = tcl_ok -> true ; error(ResStr) }.

%------------------------------------------------------------------------------%

pack(_Interp, []) --> [].
pack(Interp, [Item|Items]) -->
	pack_item(Interp, Item),
	pack(Interp, Items).

:- pred pack_item(tcl_interp, pack_item, io, io).
:- mode pack_item(in, in, di, uo) is det.

pack_item(Interp, PackItem) -->
	{ PackItem = pack(Widget, Options) },
	{ unwrap(Widget, Path) },
	{ stringify_pack_options(Options, OptStr) },
	{ string.format("pack %s %s", [s(Path), s(OptStr)], Str) },
	eval(Interp, Str, Res, ResStr),
	{ Res = tcl_ok -> true ; error(ResStr) }.

:- pred stringify_pack_options(list(pack_option), string).
:- mode stringify_pack_options(in, out) is det.

stringify_pack_options([], "").
stringify_pack_options([Opt], Str) :-
	stringify_pack_option(Opt, Str).
stringify_pack_options([Opt|Opts], Str) :-
	Opts = [_|_],
	stringify_pack_option(Opt, Str0),
	stringify_pack_options(Opts, Str1),
	string.format("%s %s", [s(Str0), s(Str1)], Str).

:- pred stringify_pack_option(pack_option, string).
:- mode stringify_pack_option(in, out) is det.

stringify_pack_option(left, "-side left").
stringify_pack_option(right, "-side right").
stringify_pack_option(top, "-side top").
stringify_pack_option(bottom, "-side bottom").
stringify_pack_option(expand, "-expand 1").
stringify_pack_option(fill_x, "-fill x").
stringify_pack_option(fill_y, "-fill y").
stringify_pack_option(fill_both, "-fill both").

%------------------------------------------------------------------------------%

grid(_Interp, []) --> [].
grid(Interp, [Item|Items]) -->
	grid_item(Interp, Item),
	grid(Interp, Items).

:- pred grid_item(tcl_interp, grid_item, io, io).
:- mode grid_item(in, in, di, uo) is det.

grid_item(Interp, PackItem) -->
	{ PackItem = grid(Widget, Options) },
	{ unwrap(Widget, Path) },
	{ stringify_grid_options(Options, OptStr) },
	{ string.format("grid %s %s", [s(Path), s(OptStr)], Str) },
	eval(Interp, Str, Res, ResStr),
	{ Res = tcl_ok -> true ; error(ResStr) }.

:- pred stringify_grid_options(list(grid_option), string).
:- mode stringify_grid_options(in, out) is det.

stringify_grid_options([], "").
stringify_grid_options([Opt], Str) :-
	stringify_grid_option(Opt, Str).
stringify_grid_options([Opt|Opts], Str) :-
	Opts = [_|_],
	stringify_grid_option(Opt, Str0),
	stringify_grid_options(Opts, Str1),
	string.format("%s %s", [s(Str0), s(Str1)], Str).

:- pred stringify_grid_option(grid_option, string).
:- mode stringify_grid_option(in, out) is det.

stringify_grid_option(row(I), Str) :-
	string.format("-row %d", [i(I)], Str).
stringify_grid_option(col(I), Str) :-
	string.format("-column %d", [i(I)], Str).

%------------------------------------------------------------------------------%

layout_grid(Interp, Widgets) -->
	layout_grid2(Interp, Widgets, 1).

:- pred layout_grid2(tcl_interp, list(list(maybe(widget))), int,
		io, io).
:- mode layout_grid2(in, in, in, di, uo) is det.

layout_grid2(_Interp, [], _) --> [].
layout_grid2(Interp, [Row|Rows], N) -->
	layout_grid3(Interp, Row, N, 1),
	layout_grid2(Interp, Rows, N+1).

:- pred layout_grid3(tcl_interp, list(maybe(widget)), int, int,
		io, io).
:- mode layout_grid3(in, in, in, in, di, uo) is det.

layout_grid3(_Interp, [], _, _) --> [].
layout_grid3(Interp, [MWid|MWids], N, M) -->
	(
		{ MWid = yes(Widget) },
		grid(Interp, [grid(Widget, [row(N), col(M)])])
	;
		{ MWid = no }
	),
	layout_grid3(Interp, MWids, N, M+1).


%------------------------------------------------------------------------------%

destroy(Interp, Widget) -->
	{ unwrap(Widget, Path) },
	{ string.format("destroy %s", [s(Path)], Str) },
	eval(Interp, Str, Res, ResStr),
	{ Res = tcl_ok -> true ; error(ResStr) }.

%------------------------------------------------------------------------------%

bind(Interp, Widget, Event, EDataSpecs, Closure) -->
	{ unwrap(Widget, Path) },
	get_thingy_counter(Id),
	set_thingy_counter(Id + 1),
	{ string.format("cmd%d", [i(Id)], CmdName) },
	{ stringify_event(Event, EventStr) },
	{ stringify_edata_specs(EDataSpecs, EDataStr) },
	create_command(Interp, CmdName, bind_wrapper(Closure, EDataSpecs)),
	{ string.format("bind %s %s { %s %s }", [s(Path), s(EventStr),
		s(CmdName), s(EDataStr)], Str) },
	eval(Interp, Str, Res, ResStr),
	{ Res = tcl_ok -> true ; error(ResStr) }.

:- pred bind_wrapper(pred(tcl_interp, list(event_data), io, io),
		list(event_data_spec),
		tcl_interp, list(string), tcl_status, string,
		io, io).
:- mode bind_wrapper(pred(in, in, di, uo) is det, in, in, in, out, out,
		di, uo) is det.

bind_wrapper(Closure, EDataSpecs, Interp, Args0, tcl_ok, "") -->
	(
		{ Args0 = [] },
		{ error("bind_wrapper: no args") }
	;
		{ Args0 = [_|Args] },
		{ decode_edata(EDataSpecs, Args, EData) },
		call(Closure, Interp, EData)
	).

:- pred stringify_event(event, string).
:- mode stringify_event(in, out) is det.

stringify_event(event(Mods, Type), Str) :-
	stringify_event_type(Type, TypeStr),
	(
		Mods = [],
		string.format("<%s>", [s(TypeStr)], Str)
	;
		Mods = [_|_],
		stringify_mods(Mods, ModsStr),
		string.format("<%s%s>", [s(ModsStr), s(TypeStr)], Str)
	).

:- pred stringify_event_type(event_type, string).
:- mode stringify_event_type(in, out) is det.

stringify_event_type(button(N), Str) :-
	string.format("Button-%d", [i(N)], Str).
stringify_event_type(button_release(N), Str) :-
	string.format("ButtonRelease-%d", [i(N)], Str).
stringify_event_type(circulate, "Circulate").
stringify_event_type(colormap, "ColorMap").
stringify_event_type(configure, "Configure").
stringify_event_type(destroy, "Destroy").
stringify_event_type(enter, "Enter").
stringify_event_type(expose, "Expose").
stringify_event_type(focus_in, "FocusIn").
stringify_event_type(focus_out, "FocusOut").
stringify_event_type(gravity, "Gravity").
stringify_event_type(key, "Key").			% XXX add keysyms
stringify_event_type(key_release, "KeyRelease").
stringify_event_type(leave, "Leave").
stringify_event_type(map, "Map").
stringify_event_type(motion, "Motion").
stringify_event_type(property, "Property").
stringify_event_type(reparent, "Reparent").
stringify_event_type(unmap, "Unmap").
stringify_event_type(visibility, "Visibility").

:- pred stringify_mods(list(event_modifier), string).
:- mode stringify_mods(in, out) is det.

stringify_mods([], "").
stringify_mods([Mod|Mods], Str) :-
	stringify_mods(Mods, Str0),
	stringify_mod(Mod, Str1),
	string.format("%s-%s", [s(Str1), s(Str0)], Str).

:- pred stringify_mod(event_modifier, string).
:- mode stringify_mod(in, out) is det.

stringify_mod(control, "Control").
stringify_mod(shift, "Shift").
stringify_mod(lock, "Lock").
stringify_mod(button1, "Button1").
stringify_mod(button2, "Button2").
stringify_mod(button3, "Button3").
stringify_mod(button4, "Button4").
stringify_mod(button5, "Button5").
stringify_mod(mod1, "Mod1").
stringify_mod(mod2, "Mod2").
stringify_mod(mod3, "Mod3").
stringify_mod(mod4, "Mod4").
stringify_mod(mod5, "Mod5").
stringify_mod(meta, "Meta").
stringify_mod(alt, "Alt").
stringify_mod(double, "Double").
stringify_mod(triple, "Triple").

:- pred stringify_edata_specs(list(event_data_spec), string).
:- mode stringify_edata_specs(in, out) is det.

stringify_edata_specs([], "").
stringify_edata_specs([Spec|Rest], Str) :-
	(	Spec = button,	SpecStr = "%b "
	;	Spec = key,	SpecStr = "%k "
	;	Spec = x,	SpecStr = "%x "
	;	Spec = y,	SpecStr = "%y "
	),
	stringify_edata_specs(Rest, Str0),
	string.append(SpecStr, Str0, Str).

:- pred decode_edata(list(event_data_spec), list(string), list(event_data)).
:- mode decode_edata(in, in, out) is det.

decode_edata([], [], []).
decode_edata([_|_], [], _) :-
	error("decode_edata: ran out of args").
decode_edata([], [_|_], _) :-
	error("decode_edata: too many args").
decode_edata([Spec|Specs], [Str|Strs], [Datum|Data]) :-
	decode_edata(Specs, Strs, Data),
	(
		Spec = button,
		( string.to_int(Str, Int) ->
			Datum = button(Int)
		;
			error("decode_edata: data format error")
		)
	;
		Spec = key,
		( string.to_int(Str, Int) ->
			Datum = key(Int)
		;
			error("decode_edata: data format error")
		)
	;
		Spec = x,
		( string.to_int(Str, Int) ->
			Datum = x(Int)
		;
			error("decode_edata: data format error")
		)
	;
		Spec = y,
		( string.to_int(Str, Int) ->
			Datum = y(Int)
		;
			error("decode_edata: data format error")
		)
	).

%------------------------------------------------------------------------------%

configure(Interp, Widget, Configs) -->
	{ unwrap(Widget, Path) },
	stringify_configs(Interp, Configs, ConfStr),
	{ string.format("%s configure %s", [s(Path), s(ConfStr)], Str) },
	eval(Interp, Str, Res, ResStr),
	{ Res = tcl_ok -> true ; error(ResStr) }.

%------------------------------------------------------------------------------%

ensure_window(Widget0, Widget) :-
	( (
		Widget0 = window(_)
	;
		Widget0 = frame(_)
	) ->
		Widget = Widget0
	;
		error("ensure_window: not a window")
	).

%------------------------------------------------------------------------------%

get(Interp, entry(Path), String) -->
	{ string.format("%s get", [s(Path)], CmdStr) },
	eval(Interp, CmdStr, Res, String),
	{ Res = tcl_ok -> true ; error(String) }.
get(Interp, text(Path), String) -->
	{ string.format("%s get 1.0 end", [s(Path)], CmdStr) },
	eval(Interp, CmdStr, Res, String),
	{ Res = tcl_ok -> true ; error(String) }.


set(Interp, entry(Path), String) -->
	{ string.format("%s delete 0 end", [s(Path)], DelStr) },
	eval(Interp, DelStr, DelRes, DelString),
	{ DelRes = tcl_ok -> true ; error(DelString) },
	{ string.format("%s insert 0 ""%s""",
		[s(Path), s(String)], InsStr) },
	eval(Interp, InsStr, InsRes, InsString),
	{ InsRes = tcl_ok -> true ; error(InsString) }.
set(Interp, text(Path), String) -->
	{ string.format("%s delete 1.0 end", [s(Path)], DelStr) },
	eval(Interp, DelStr, DelRes, DelString),
	{ DelRes = tcl_ok -> true ; error(DelString) },
	{ string.format("%s insert 1.0 ""%s""",
		[s(Path), s(String)], InsStr) },
	eval(Interp, InsStr, InsRes, InsString),
	{ InsRes = tcl_ok -> true ; error(InsString) }.

%------------------------------------------------------------------------------%

unbind_command(Interp, Widget) -->
	{ unwrap(Widget, Path) },
	{ string.format("%s cget -command", [s(Path)], Cmd1) },
	eval(Interp, Cmd1, Res1, ResStr1),
	{ Res1 = tcl_ok -> true ; error(ResStr1) },
	(
		{ ResStr1 \= "" }
	->
		delete_command(Interp, ResStr1, _)
	;
		[]
	).

%------------------------------------------------------------------------------%

:- pred stringify_configs(tcl_interp, list(config), string,
		io, io).
:- mode stringify_configs(in, in(list_skel(config)), out, di, uo) is det.

stringify_configs(_Interp, [], "") --> [].
stringify_configs(Interp, [Config|Configs], Str) -->
	stringify_configs(Interp, Configs, Str0),
	stringify_config(Interp, Config, Str1),
	{
		Str0 \= ""
	->
		string.append(" ", Str0, Str2),
		string.append(Str1, Str2, Str)
	;
		Str = Str1
	}.

:- pred stringify_config(tcl_interp, config, string, io, io).
:- mode stringify_config(in, in(config), out, di, uo) is det.

stringify_config(_Interp, active(Indicator), Str, IO, IO) :-
	(
		Indicator = yes, IndicatorStr = "normal"
	;
		Indicator = no, IndicatorStr = "disabled"
	),
	string.format("-state %s", [s(IndicatorStr)], Str).

stringify_config(_Interp, active_background(Color), Str, IO, IO) :-
	string.format("-activebackground %s", [s(Color)], Str).

stringify_config(_Interp, active_foreground(Color), Str, IO, IO) :-
	string.format("-activeforeground %s", [s(Color)], Str).

stringify_config(_Interp, active_relief(Relief), Str, IO, IO) :-
	string.format("-activerelief %s", [s(Relief)], Str).

stringify_config(_Interp, anchor(Ank), Str, IO, IO) :-
	stringify_anchor(Ank, AnkStr),
	string.format("-anchor %s", [s(AnkStr)], Str).

stringify_config(_Interp, aspect(Asp), Str, IO, IO) :-
	string.format("-aspect %d", [i(Asp)], Str).

stringify_config(_Interp, background(Color), Str, IO, IO) :-
	string.format("-background %s", [s(Color)], Str).

stringify_config(_Interp, bitmap(Bitmap), Str, IO, IO) :-
	string.format("-bitmap %s", [s(Bitmap)], Str).

stringify_config(_Interp, border_width(Wdth), Str, IO, IO) :-
	string.format("-borderwidth %d", [i(Wdth)], Str).

stringify_config(Interp, command(Closure), Str) -->
	get_thingy_counter(Id),
	set_thingy_counter(Id + 1),
	{ string.format("cmd%d", [i(Id)], CmdName) },
	create_command(Interp, CmdName, command_wrapper(Closure)),
	{ string.format("-command %s", [s(CmdName)], Str) }.

stringify_config(_Interp, cursor(Curse), Str, IO, IO) :-
	string.format("-cursor %s", [s(Curse)], Str).

stringify_config(_Interp, disabled_foreground(Color), Str, IO, IO) :-
	string.format("-disabledforeground %s", [s(Color)], Str).

stringify_config(_Interp, element_border_width(Height), Str, IO, IO) :-
	string.format("-elementborderwidth %d", [i(Height)], Str).

stringify_config(_Interp, export_selection(Indicator), Str, IO, IO) :-
	(
		Indicator = yes, IndicatorStr = "yes"
	;
		Indicator = no, IndicatorStr = "no"
	),
	string.format("-export_selection %s", [s(IndicatorStr)], Str).

stringify_config(_Interp, fill_color(Color), Str, IO, IO) :-
	string.format("-fill %s", [s(Color)], Str).

stringify_config(_Interp, font(Font), Str, IO, IO) :-
	string.format("-font %s", [s(Font)], Str).

stringify_config(_Interp, foreground(Color), Str, IO, IO) :-
	string.format("-foreground %s", [s(Color)], Str).

stringify_config(_Interp, height(Height), Str, IO, IO) :-
	string.format("-height %d", [i(Height)], Str).

stringify_config(_Interp, highlight_background(Color), Str, IO, IO) :-
	string.format("-highlightbackground %s", [s(Color)], Str).

stringify_config(_Interp, highlight_color(Color), Str, IO, IO) :-
	string.format("-highlightcolor %s", [s(Color)], Str).

stringify_config(_Interp, highlight_thickness(Width), Str, IO, IO) :-
	string.format("-highlightthickness %d", [i(Width)], Str).

stringify_config(_Interp, indicator_color(Color), Str, IO, IO) :-
	string.format("-selectcolor %s", [s(Color)], Str).

stringify_config(_Interp, indicator_on(Indicator), Str, IO, IO) :-
	(
		Indicator = yes, IndicatorStr = "yes"
	;
		Indicator = no, IndicatorStr = "no"
	),
	string.format("-indicatoron %s", [s(IndicatorStr)], Str).

stringify_config(_Interp, insert_background(Color), Str, IO, IO) :-
	string.format("-insertbackground %s", [s(Color)], Str).

stringify_config(_Interp, insert_border_width(Val), Str, IO, IO) :-
	string.format("-insertborderwidth %d", [i(Val)], Str).

stringify_config(_Interp, insert_off_time(Val), Str, IO, IO) :-
	string.format("-insertofftime %d", [i(Val)], Str).

stringify_config(_Interp, insert_on_time(Val), Str, IO, IO) :-
	string.format("-insertontime %d", [i(Val)], Str).

stringify_config(_Interp, insert_width(Val), Str, IO, IO) :-
	string.format("-insertwidth %d", [i(Val)], Str).

stringify_config(_Interp, jump(Indicator), Str, IO, IO) :-
	(
		Indicator = yes, IndicatorStr = "yes"
	;
		Indicator = no, IndicatorStr = "no"
	),
	string.format("-jump %s", [s(IndicatorStr)], Str).

stringify_config(_Interp, justify(Just), Str, IO, IO) :-
	string.format("-justify %s", [s(Just)], Str).

stringify_config(_Interp, label(Label), Str, IO, IO) :-
	string.format("-label {%s}", [s(Label)], Str).

stringify_config(_Interp, menu(menu(Path)), Str, IO, IO) :-
	string.format("-menu %s", [s(Path)], Str).

stringify_config(_Interp, multiple_select(Indicator), Str, IO, IO) :-
	(
		Indicator = yes, IndicatorStr = "extended"
	;
		Indicator = no, IndicatorStr = "browse"
	),
	string.format("-selectmode %s", [s(IndicatorStr)], Str).

stringify_config(_Interp, orient(Orientation), Str, IO, IO) :-
	(
		Orientation = horiz, OrientStr = "horizontal"
	;
		Orientation = vert, OrientStr = "vertical"
	),
	string.format("-orient %s", [s(OrientStr)], Str).

stringify_config(_Interp, outline_color(Color), Str, IO, IO) :-
	string.format("-outline %s", [s(Color)], Str).

stringify_config(_Interp, padx(Pad), Str, IO, IO) :-
	string.format("-padx %d", [i(Pad)], Str).

stringify_config(_Interp, pady(Pad), Str, IO, IO) :-
	string.format("-pady %d", [i(Pad)], Str).

stringify_config(_Interp, relief(Rel), Str, IO, IO) :-
	string.format("-relief %s", [s(Rel)], Str).

stringify_config(_Interp, repeat_delay(Len), Str, IO, IO) :-
	string.format("-repeatdelay %d", [i(Len)], Str).

stringify_config(_Interp, repeat_interval(Len), Str, IO, IO) :-
	string.format("-repeatinterval %d", [i(Len)], Str).

stringify_config(_Interp, scale_height(Len), Str, IO, IO) :-
	string.format("-length %d", [i(Len)], Str).

stringify_config(_Interp, scale_range(Min, Max), Str, IO, IO) :-
	string.format("-from %d -to %d", [i(Min), i(Max)], Str).

stringify_config(_Interp, scroll_region(H, W), Str, IO, IO) :-
	string.format("-scrollregion {0 0 %d %d}", [i(H), i(W)], Str).

stringify_config(_Interp, screen(Txt), Str, IO, IO) :-
	string.format("-screen %s", [s(Txt)], Str).

stringify_config(_Interp, scale_text(Txt), Str, IO, IO) :-
	string.format("-label %s", [s(Txt)], Str).

stringify_config(_Interp, select_background(Color), Str, IO, IO) :-
	string.format("-selectbackground %s", [s(Color)], Str).

stringify_config(_Interp, select_border_width(Width), Str, IO, IO) :-
	string.format("-selectborderwidth %d", [i(Width)], Str).

stringify_config(_Interp, select_foreground(Color), Str, IO, IO) :-
	string.format("-selectforeground %s", [s(Color)], Str).

stringify_config(_Interp, show(Show), Str, IO, IO) :-
	(
		Show = yes, ShowStr = "yes"
	;
		Show = no, ShowStr = "no"
	),
	string.format("-show %s", [s(ShowStr)], Str).


stringify_config(_Interp, slider_length(Len), Str, IO, IO) :-
	string.format("-sliderlength %d", [i(Len)], Str).

stringify_config(_Interp, take_focus(Focus), Str, IO, IO) :-
	(
		Focus = yes, FocusStr = "yes"
	;
		Focus = no, FocusStr = "no"
	),
	string.format("-takefocus %s", [s(FocusStr)], Str).

stringify_config(_Interp, text(Text), Str, IO, IO) :-
	string.format("-text ""%s""", [s(Text)], Str).

stringify_config(_Interp, text_variable(Text), Str, IO, IO) :-
	string.format("-textvariable %s", [s(Text)], Str).

stringify_config(_Interp, tick_interval(Len), Str, IO, IO) :-
	string.format("-tickinterval %d", [i(Len)], Str).

stringify_config(_Interp, title(Text), Str, IO, IO) :-
	string.format("-title ""%s""", [s(Text)], Str).

stringify_config(_Interp, trough_color(Col), Str, IO, IO) :-
	string.format("-troughcolor %s", [s(Col)], Str).

stringify_config(_Interp, underline(U), Str, IO, IO) :-
	string.format("-underline %d", [i(U)], Str).

stringify_config(_Interp, width(Width), Str, IO, IO) :-
	string.format("-width %d", [i(Width)], Str).

stringify_config(_Interp, winposition(Width, Height), Str, IO, IO) :-
	string.format("-geometry %d+%d", [i(Width), i(Height)], Str).

stringify_config(_Interp, winsize(Width, Height), Str, IO, IO) :-
	string.format("-geometry %dx%d", [i(Width), i(Height)], Str).

stringify_config(_Interp, wrap(Indicator), Str, IO, IO) :-
	(
		Indicator = yes, IndicatorStr = "yes"
	;
		Indicator = no, IndicatorStr = "no"
	),
	string.format("-wrap %s", [s(IndicatorStr)], Str).

stringify_config(_Interp, wrap_length(Width), Str, IO, IO) :-
	string.format("-wraplength %d", [i(Width)], Str).

:- pred stringify_anchor(anchor::in, string::out) is det.

stringify_anchor(Ank, AnkStr) :-
	( Ank = n, AnkStr = "n"
	; Ank = s, AnkStr = "s"
	; Ank = e, AnkStr = "e"
	; Ank = w, AnkStr = "w"
	; Ank = ne, AnkStr = "ne"
	; Ank = nw, AnkStr = "nw"
	; Ank = se, AnkStr = "se"
	; Ank = sw, AnkStr = "sw"
	; Ank = c, AnkStr = "c"
	).

:- pred unwrap(widget, wpath).
:- mode unwrap(in, out) is det.

unwrap(button(Path), Path).
unwrap(canvas(Path), Path).
unwrap(entry(Path), Path).
unwrap(frame(Path), Path).
unwrap(label(Path), Path).
unwrap(listbox(Path), Path).
unwrap(menubutton(Path), Path).
unwrap(menu(Path), Path).
unwrap(radiobutton(Path), Path).
unwrap(scrollbar(Path), Path).
unwrap(text(Path), Path).
unwrap(window(Path), Path).

% function to reduce the path "." of the root window to the 
% empty string "", used when forming names for new widgets
:- func no_dot_wpath(wpath) = wpath.
:- mode no_dot_wpath(in) = out is det.

no_dot_wpath(WPATH) = REDUCED_WPATH :-
  unwrap( root_window, ROOT_WPATH ),
  (  if WPATH = ROOT_WPATH
     then REDUCED_WPATH = ""
     else REDUCED_WPATH = WPATH
  ).

:- pred command_wrapper(pred(tcl_interp, io, io), tcl_interp,
		list(string), tcl_status, string, io, io).
:- mode command_wrapper(pred(in, di, uo) is det, in, in, out, out,
		di, uo) is det.

command_wrapper(Closure, Interp, _Args, tcl_ok, "") -->
	call(Closure, Interp).

:- pragma foreign_decl("C", "
	extern MR_Integer	tk_direct_thingy_counter;
").

:- pragma foreign_code("C", "
	MR_Integer	tk_direct_thingy_counter = 0;
").

:- pred get_thingy_counter(int::out, io::di, io::uo) is det.

:- pragma foreign_proc("C", get_thingy_counter(Int::out, IO0::di, IO::uo), 
	[will_not_call_mercury, promise_pure], "
	Int = tk_direct_thingy_counter;
	IO = IO0;
").

:- pred set_thingy_counter(int::in, io::di, io::uo) is det.

:- pragma foreign_proc("C", set_thingy_counter(Int::in, IO0::di, IO::uo),
	[will_not_call_mercury, promise_pure], "
	tk_direct_thingy_counter = Int;
	IO = IO0;
").

%-----------------------------------------------------------------------------%
:- end_module mtk.
%-----------------------------------------------------------------------------%
