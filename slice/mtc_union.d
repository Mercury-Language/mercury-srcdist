

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
	mdbcomp.trace_counts.int \
	array.int2 \
	assoc_list.int2 \
	bimap.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
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
	mdbcomp.prim_data.int2

ifeq ($(TARGET_ASM),yes)
mtc_union.mh mtc_union.mih : mtc_union.s
else
mtc_union.mh mtc_union.mih : mtc_union.c
endif

ifeq ($(TARGET_ASM),yes)
mtc_union.module_dep : mtc_union.s
else
 ifeq ($(findstring il,$(GRADE)),il)
mtc_union.module_dep : mtc_union.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
mtc_union.module_dep : jmercury/mtc_union.java
  else
mtc_union.module_dep : mtc_union.c
  endif
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
	mdbcomp.trace_counts.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
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
	mdbcomp.prim_data.int3

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
	mdbcomp.trace_counts.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
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
	mdbcomp.prim_data.int3



mtc_union.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



mtc_union.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


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
