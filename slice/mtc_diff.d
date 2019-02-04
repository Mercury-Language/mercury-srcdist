

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
	mdbcomp.prim_data.int2

ifeq ($(TARGET_ASM),yes)
mtc_diff.mh mtc_diff.mih : mtc_diff.s
else
mtc_diff.mh mtc_diff.mih : mtc_diff.c
endif

ifeq ($(TARGET_ASM),yes)
mtc_diff.module_dep : mtc_diff.s
else
 ifeq ($(findstring il,$(GRADE)),il)
mtc_diff.module_dep : mtc_diff.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
mtc_diff.module_dep : jmercury/mtc_diff.java
  else
mtc_diff.module_dep : mtc_diff.c
  endif
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
	mdbcomp.prim_data.int3

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
	mdbcomp.prim_data.int3



mtc_diff.$O :  \
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



mtc_diff.pic_o :  \
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
