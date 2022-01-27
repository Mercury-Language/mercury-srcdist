

mtc_union.optdate mtc_union.trans_opt_date mtc_union.err mtc_union.c_date mtc_union.s_date mtc_union.pic_s_date mtc_union.il_date mtc_union.java_date : mtc_union.m \
	bool.int \
	builtin.int \
	getopt.int \
	io.int \
	list.int \
	map.int \
	maybe.int \
	mdbcomp.int \
	private_builtin.int \
	set.int \
	string.int \
	mdbcomp.shared_utilities.int \
	mdbcomp.trace_counts.int \
	array.int2 \
	assoc_list.int2 \
	bimap.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	integer.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2 \
	mdbcomp.goal_path.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.sym_name.int2

mtc_union.pic_o mtc_union.$O : \
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
	integer.mih \
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
	mdbcomp.sym_name.mih \
	mdbcomp.trace_counts.mih

mtc_union.mh mtc_union.mih : mtc_union.c


ifeq ($(findstring il,$(GRADE)),il)
mtc_union.module_dep : mtc_union.il
else
 ifeq ($(findstring java,$(GRADE)),java)
mtc_union.module_dep : jmercury/mtc_union.java
 else
mtc_union.module_dep : mtc_union.c
 endif
endif


mtc_union.date mtc_union.date0 : mtc_union.m \
	bool.int3 \
	builtin.int3 \
	getopt.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	set.int3 \
	string.int3 \
	mdbcomp.shared_utilities.int3 \
	mdbcomp.trace_counts.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	integer.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.sym_name.int3

mtc_union.date0 : mtc_union.m \
	bool.int3 \
	builtin.int3 \
	getopt.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	set.int3 \
	string.int3 \
	mdbcomp.shared_utilities.int3 \
	mdbcomp.trace_counts.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	integer.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.sym_name.int3



mtc_union.$O :  \
	io.mh \
	io.mh \
	time.mh \
	string.mh



mtc_union.pic_o :  \
	io.mh \
	io.mh \
	time.mh \
	string.mh


mtc_union.int0 : mtc_union.date0
	@:
mtc_union.int : mtc_union.date
	@:
mtc_union.int2 : mtc_union.date
	@:
mtc_union.int3 : mtc_union.date3
	@:
mtc_union.opt : mtc_union.optdate
	@:
mtc_union.trans_opt : mtc_union.trans_opt_date
	@:
