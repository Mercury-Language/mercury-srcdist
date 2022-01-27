

mtc_diff.optdate mtc_diff.trans_opt_date mtc_diff.err mtc_diff.c_date mtc_diff.s_date mtc_diff.pic_s_date mtc_diff.il_date mtc_diff.java_date : mtc_diff.m \
	builtin.int \
	getopt.int \
	io.int \
	list.int \
	map.int \
	mdbcomp.int \
	private_builtin.int \
	string.int \
	mdbcomp.shared_utilities.int \
	mdbcomp.trace_counts.int \
	array.int2 \
	assoc_list.int2 \
	bimap.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	integer.int2 \
	maybe.int2 \
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
	mdbcomp.sym_name.int2

mtc_diff.pic_o mtc_diff.$O : \
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

mtc_diff.mh mtc_diff.mih : mtc_diff.c


ifeq ($(findstring il,$(GRADE)),il)
mtc_diff.module_dep : mtc_diff.il
else
 ifeq ($(findstring java,$(GRADE)),java)
mtc_diff.module_dep : jmercury/mtc_diff.java
 else
mtc_diff.module_dep : mtc_diff.c
 endif
endif


mtc_diff.date mtc_diff.date0 : mtc_diff.m \
	builtin.int3 \
	getopt.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	string.int3 \
	mdbcomp.shared_utilities.int3 \
	mdbcomp.trace_counts.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	integer.int3 \
	maybe.int3 \
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
	mdbcomp.sym_name.int3

mtc_diff.date0 : mtc_diff.m \
	builtin.int3 \
	getopt.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	string.int3 \
	mdbcomp.shared_utilities.int3 \
	mdbcomp.trace_counts.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	integer.int3 \
	maybe.int3 \
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
	mdbcomp.sym_name.int3



mtc_diff.$O :  \
	io.mh \
	string.mh \
	time.mh



mtc_diff.pic_o :  \
	io.mh \
	string.mh \
	time.mh


mtc_diff.int0 : mtc_diff.date0
	@:
mtc_diff.int : mtc_diff.date
	@:
mtc_diff.int2 : mtc_diff.date
	@:
mtc_diff.int3 : mtc_diff.date3
	@:
mtc_diff.opt : mtc_diff.optdate
	@:
mtc_diff.trans_opt : mtc_diff.trans_opt_date
	@:
