

mdbcomp.trace_counts.optdate mdbcomp.trace_counts.trans_opt_date trace_counts.err mdbcomp.trace_counts.c_date mdbcomp.trace_counts.s_date mdbcomp.trace_counts.pic_s_date mdbcomp.trace_counts.il_date mdbcomp.trace_counts.java_date : trace_counts.m \
	mdbcomp.int0 \
	bool.int \
	builtin.int \
	exception.int \
	int.int \
	io.int \
	lexer.int \
	list.int \
	map.int \
	maybe.int \
	private_builtin.int \
	require.int \
	set.int \
	string.int \
	term_io.int \
	univ.int \
	mdbcomp.goal_path.int \
	mdbcomp.prim_data.int \
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
	stm_builtin.int2 \
	store.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	varset.int2

mdbcomp.trace_counts.mh mdbcomp.trace_counts.mih : mdbcomp.trace_counts.c


ifeq ($(findstring il,$(GRADE)),il)
mdbcomp.trace_counts.module_dep : mdbcomp.trace_counts.il
else
 ifeq ($(findstring java,$(GRADE)),java)
mdbcomp.trace_counts.module_dep : jmercury/mdbcomp__trace_counts.java
 else
mdbcomp.trace_counts.module_dep : mdbcomp.trace_counts.c
 endif
endif


mdbcomp.trace_counts.date mdbcomp.trace_counts.date0 \
	mdbcomp.date : trace_counts.m \
	mdbcomp.int0 \
	bool.int3 \
	builtin.int3 \
	exception.int3 \
	int.int3 \
	io.int3 \
	lexer.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	term_io.int3 \
	univ.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
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
	stm_builtin.int3 \
	store.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	varset.int3

mdbcomp.trace_counts.date0 \
	mdbcomp.date0 : trace_counts.m \
	bool.int3 \
	builtin.int3 \
	exception.int3 \
	int.int3 \
	io.int3 \
	lexer.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	term_io.int3 \
	univ.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
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
	stm_builtin.int3 \
	store.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	varset.int3



mdbcomp.trace_counts.$O :  \
	store.mh \
	store.mh \
	stm_builtin.mh \
	stm_builtin.mh \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	mdbcomp.mh



mdbcomp.trace_counts.pic_o :  \
	store.mh \
	store.mh \
	stm_builtin.mh \
	stm_builtin.mh \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	mdbcomp.mh


mdbcomp.trace_counts.int0 : mdbcomp.trace_counts.date0
	@:
mdbcomp.trace_counts.int : mdbcomp.trace_counts.date
	@:
mdbcomp.trace_counts.int2 : mdbcomp.trace_counts.date
	@:
mdbcomp.trace_counts.int3 : mdbcomp.trace_counts.date3
	@:
mdbcomp.trace_counts.opt : mdbcomp.trace_counts.optdate
	@:
mdbcomp.trace_counts.trans_opt : mdbcomp.trace_counts.trans_opt_date
	@:

mdbcomp.trace_counts.date0 : trace_counts.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) trace_counts.m
mdbcomp.trace_counts.date : trace_counts.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) trace_counts.m
mdbcomp.trace_counts.date3 : trace_counts.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) trace_counts.m
mdbcomp.trace_counts.optdate : trace_counts.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) trace_counts.m
mdbcomp.trace_counts.trans_opt_date : trace_counts.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) trace_counts.m
mdbcomp.trace_counts.c_date : trace_counts.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) trace_counts.m $(ERR_REDIRECT)
mdbcomp.trace_counts.il_date : trace_counts.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only trace_counts.m $(ERR_REDIRECT)
mdbcomp.trace_counts.java_date : trace_counts.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only trace_counts.m $(ERR_REDIRECT)
