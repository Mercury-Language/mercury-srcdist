

mdb.declarative_analyser.optdate mdb.declarative_analyser.trans_opt_date declarative_analyser.err mdb.declarative_analyser.c_date mdb.declarative_analyser.s_date mdb.declarative_analyser.pic_s_date mdb.declarative_analyser.il_date mdb.declarative_analyser.java_date : declarative_analyser.m \
	mdb.int0 \
	array.int \
	bool.int \
	builtin.int \
	exception.int \
	float.int \
	int.int \
	io.int \
	list.int \
	map.int \
	math.int \
	maybe.int \
	mdbcomp.int \
	pair.int \
	private_builtin.int \
	string.int \
	unit.int \
	mdb.browser_info.int \
	mdb.declarative_debugger.int \
	mdb.declarative_edt.int \
	mdb.declarative_execution.int \
	mdb.declarative_oracle.int \
	mdb.declarative_user.int \
	mdbcomp.prim_data.int \
	mdbcomp.program_representation.int \
	mdbcomp.rtti_access.int \
	assoc_list.int2 \
	bimap.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	getopt.int2 \
	ops.int2 \
	pretty_printer.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	stm_builtin.int2 \
	store.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2 \
	mdb.browser_term.int2 \
	mdb.declarative_tree.int2 \
	mdb.help.int2 \
	mdb.io_action.int2 \
	mdb.parse.int2 \
	mdb.term_rep.int2 \
	mdbcomp.goal_path.int2 \
	mdbcomp.trace_counts.int2

mdb.declarative_analyser.mh mdb.declarative_analyser.mih : mdb.declarative_analyser.c


ifeq ($(findstring il,$(GRADE)),il)
mdb.declarative_analyser.module_dep : mdb.declarative_analyser.il
else
 ifeq ($(findstring java,$(GRADE)),java)
mdb.declarative_analyser.module_dep : jmercury/mdb__declarative_analyser.java
 else
mdb.declarative_analyser.module_dep : mdb.declarative_analyser.c
 endif
endif


mdb.declarative_analyser.date mdb.declarative_analyser.date0 \
	mdb.date : declarative_analyser.m \
	mdb.int0 \
	array.int3 \
	bool.int3 \
	builtin.int3 \
	exception.int3 \
	float.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	math.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	pair.int3 \
	private_builtin.int3 \
	string.int3 \
	unit.int3 \
	mdb.browser_info.int3 \
	mdb.declarative_debugger.int3 \
	mdb.declarative_edt.int3 \
	mdb.declarative_execution.int3 \
	mdb.declarative_oracle.int3 \
	mdb.declarative_user.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stm_builtin.int3 \
	store.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3 \
	mdb.browser_term.int3 \
	mdb.declarative_tree.int3 \
	mdb.help.int3 \
	mdb.io_action.int3 \
	mdb.parse.int3 \
	mdb.term_rep.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.trace_counts.int3

mdb.declarative_analyser.date0 \
	mdb.date0 : declarative_analyser.m \
	array.int3 \
	bool.int3 \
	builtin.int3 \
	exception.int3 \
	float.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	math.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	pair.int3 \
	private_builtin.int3 \
	string.int3 \
	unit.int3 \
	mdb.browser_info.int3 \
	mdb.declarative_debugger.int3 \
	mdb.declarative_edt.int3 \
	mdb.declarative_execution.int3 \
	mdb.declarative_oracle.int3 \
	mdb.declarative_user.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stm_builtin.int3 \
	store.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3 \
	mdb.browser_term.int3 \
	mdb.declarative_tree.int3 \
	mdb.help.int3 \
	mdb.io_action.int3 \
	mdb.parse.int3 \
	mdb.term_rep.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.trace_counts.int3



mdb.declarative_analyser.$O :  \
	store.mh \
	store.mh \
	stm_builtin.mh \
	stm_builtin.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh \
	array.mh \
	array.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	mdb.mh



mdb.declarative_analyser.pic_o :  \
	store.mh \
	store.mh \
	stm_builtin.mh \
	stm_builtin.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh \
	array.mh \
	array.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	mdb.mh


mdb.declarative_analyser.int0 : mdb.declarative_analyser.date0
	@:
mdb.declarative_analyser.int : mdb.declarative_analyser.date
	@:
mdb.declarative_analyser.int2 : mdb.declarative_analyser.date
	@:
mdb.declarative_analyser.int3 : mdb.declarative_analyser.date3
	@:
mdb.declarative_analyser.opt : mdb.declarative_analyser.optdate
	@:
mdb.declarative_analyser.trans_opt : mdb.declarative_analyser.trans_opt_date
	@:

mdb.declarative_analyser.date0 : declarative_analyser.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) mdb.declarative_analyser
mdb.declarative_analyser.date : declarative_analyser.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) mdb.declarative_analyser
mdb.declarative_analyser.date3 : declarative_analyser.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) mdb.declarative_analyser
mdb.declarative_analyser.optdate : declarative_analyser.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) mdb.declarative_analyser
mdb.declarative_analyser.trans_opt_date : declarative_analyser.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) mdb.declarative_analyser
mdb.declarative_analyser.c_date : declarative_analyser.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) mdb.declarative_analyser $(ERR_REDIRECT)
mdb.declarative_analyser.il_date : declarative_analyser.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only mdb.declarative_analyser $(ERR_REDIRECT)
mdb.declarative_analyser.java_date : declarative_analyser.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only mdb.declarative_analyser $(ERR_REDIRECT)
