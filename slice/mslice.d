

mslice.optdate mslice.trans_opt_date mslice.err mslice.c_date mslice.s_date mslice.pic_s_date mslice.il_date mslice.java_date : mslice.m \
	builtin.int \
	getopt.int \
	io.int \
	list.int \
	maybe.int \
	mdbcomp.int \
	private_builtin.int \
	string.int \
	mdbcomp.shared_utilities.int \
	mdbcomp.slice_and_dice.int \
	array.int2 \
	assoc_list.int2 \
	bimap.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	map.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2 \
	mdbcomp.goal_path.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.sym_name.int2 \
	mdbcomp.trace_counts.int2

mslice.pic_o mslice.$O : \
	array.mih \
	assoc_list.mih \
	bimap.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
	char.mih \
	construct.mih \
	deconstruct.mih \
	enum.mih \
	getopt.mih \
	io.mih \
	list.mih \
	map.mih \
	maybe.mih \
	mdbcomp.mih \
	ops.mih \
	pair.mih \
	pretty_printer.mih \
	private_builtin.mih \
	random.mih \
	rtti_implementation.mih \
	set.mih \
	set_ordlist.mih \
	stream.mih \
	string.mih \
	term.mih \
	time.mih \
	tree234.mih \
	type_desc.mih \
	univ.mih \
	mdbcomp.goal_path.mih \
	mdbcomp.prim_data.mih \
	mdbcomp.shared_utilities.mih \
	mdbcomp.slice_and_dice.mih \
	mdbcomp.sym_name.mih \
	mdbcomp.trace_counts.mih

mslice.mh mslice.mih : mslice.c


ifeq ($(findstring il,$(GRADE)),il)
mslice.module_dep : mslice.il
else
 ifeq ($(findstring java,$(GRADE)),java)
mslice.module_dep : jmercury/mslice.java
 else
mslice.module_dep : mslice.c
 endif
endif


mslice.date mslice.date0 : mslice.m \
	builtin.int3 \
	getopt.int3 \
	io.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	string.int3 \
	mdbcomp.shared_utilities.int3 \
	mdbcomp.slice_and_dice.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.sym_name.int3 \
	mdbcomp.trace_counts.int3

mslice.date0 : mslice.m \
	builtin.int3 \
	getopt.int3 \
	io.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	string.int3 \
	mdbcomp.shared_utilities.int3 \
	mdbcomp.slice_and_dice.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.sym_name.int3 \
	mdbcomp.trace_counts.int3



mslice.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh



mslice.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh


mslice.int0 : mslice.date0
	@:
mslice.int : mslice.date
	@:
mslice.int2 : mslice.date
	@:
mslice.int3 : mslice.date3
	@:
mslice.opt : mslice.optdate
	@:
mslice.trans_opt : mslice.trans_opt_date
	@:
