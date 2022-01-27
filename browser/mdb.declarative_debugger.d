

mdb.declarative_debugger.optdate mdb.declarative_debugger.trans_opt_date declarative_debugger.err mdb.declarative_debugger.c_date mdb.declarative_debugger.s_date mdb.declarative_debugger.pic_s_date mdb.declarative_debugger.il_date mdb.declarative_debugger.java_date : declarative_debugger.m \
	mdb.int0 \
	bool.int \
	builtin.int \
	exception.int \
	int.int \
	io.int \
	list.int \
	maybe.int \
	mdbcomp.int \
	private_builtin.int \
	string.int \
	unit.int \
	univ.int \
	mdb.browser_info.int \
	mdb.declarative_analyser.int \
	mdb.declarative_edt.int \
	mdb.declarative_execution.int \
	mdb.declarative_oracle.int \
	mdb.declarative_tree.int \
	mdb.help.int \
	mdb.io_action.int \
	mdb.term_rep.int \
	mdb.util.int \
	mdbcomp.program_representation.int \
	mdbcomp.rtti_access.int \
	mdbcomp.sym_name.int \
	array.int2 \
	assoc_list.int2 \
	bimap.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	getopt.int2 \
	map.int2 \
	ops.int2 \
	pair.int2 \
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
	mdb.browser_term.int2 \
	mdb.declarative_user.int2 \
	mdb.parse.int2 \
	mdbcomp.goal_path.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.trace_counts.int2

mdb.declarative_debugger.pic_o mdb.declarative_debugger.$O : \
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
	exception.mih \
	getopt.mih \
	int.mih \
	io.mih \
	list.mih \
	map.mih \
	maybe.mih \
	mdb.mih \
	mdbcomp.mih \
	ops.mih \
	pair.mih \
	pretty_printer.mih \
	private_builtin.mih \
	random.mih \
	rtti_implementation.mih \
	set.mih \
	set_ordlist.mih \
	stm_builtin.mih \
	store.mih \
	stream.mih \
	string.mih \
	term.mih \
	time.mih \
	tree234.mih \
	type_desc.mih \
	unit.mih \
	univ.mih \
	mdb.browser_info.mih \
	mdb.browser_term.mih \
	mdb.declarative_analyser.mih \
	mdb.declarative_debugger.mih \
	mdb.declarative_edt.mih \
	mdb.declarative_execution.mih \
	mdb.declarative_oracle.mih \
	mdb.declarative_tree.mih \
	mdb.declarative_user.mih \
	mdb.help.mih \
	mdb.io_action.mih \
	mdb.parse.mih \
	mdb.term_rep.mih \
	mdb.util.mih \
	mdbcomp.goal_path.mih \
	mdbcomp.prim_data.mih \
	mdbcomp.program_representation.mih \
	mdbcomp.rtti_access.mih \
	mdbcomp.sym_name.mih \
	mdbcomp.trace_counts.mih

mdb.declarative_debugger.mh mdb.declarative_debugger.mih : mdb.declarative_debugger.c


ifeq ($(findstring il,$(GRADE)),il)
mdb.declarative_debugger.module_dep : mdb.declarative_debugger.il
else
 ifeq ($(findstring java,$(GRADE)),java)
mdb.declarative_debugger.module_dep : jmercury/mdb__declarative_debugger.java
 else
mdb.declarative_debugger.module_dep : mdb.declarative_debugger.c
 endif
endif


mdb.declarative_debugger.date mdb.declarative_debugger.date0 \
	mdb.date : declarative_debugger.m \
	mdb.int0 \
	bool.int3 \
	builtin.int3 \
	exception.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	string.int3 \
	unit.int3 \
	univ.int3 \
	mdb.browser_info.int3 \
	mdb.declarative_analyser.int3 \
	mdb.declarative_edt.int3 \
	mdb.declarative_execution.int3 \
	mdb.declarative_oracle.int3 \
	mdb.declarative_tree.int3 \
	mdb.help.int3 \
	mdb.io_action.int3 \
	mdb.term_rep.int3 \
	mdb.util.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.sym_name.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
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
	mdb.browser_term.int3 \
	mdb.declarative_user.int3 \
	mdb.parse.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.trace_counts.int3

mdb.declarative_debugger.date0 \
	mdb.date0 : declarative_debugger.m \
	bool.int3 \
	builtin.int3 \
	exception.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	string.int3 \
	unit.int3 \
	univ.int3 \
	mdb.browser_info.int3 \
	mdb.declarative_analyser.int3 \
	mdb.declarative_edt.int3 \
	mdb.declarative_execution.int3 \
	mdb.declarative_oracle.int3 \
	mdb.declarative_tree.int3 \
	mdb.help.int3 \
	mdb.io_action.int3 \
	mdb.term_rep.int3 \
	mdb.util.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.sym_name.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
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
	mdb.browser_term.int3 \
	mdb.declarative_user.int3 \
	mdb.parse.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.trace_counts.int3



mdb.declarative_debugger.$O :  \
	mdb.declarative_debugger.mh \
	mdb.mh \
	io.mh \
	io.mh \
	time.mh \
	string.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	bitmap.mh \
	bitmap.mh \
	time.mh \
	time.mh \
	array.mh \
	array.mh \
	stm_builtin.mh \
	stm_builtin.mh \
	store.mh \
	store.mh



mdb.declarative_debugger.pic_o :  \
	mdb.declarative_debugger.mh \
	mdb.mh \
	io.mh \
	io.mh \
	time.mh \
	string.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	bitmap.mh \
	bitmap.mh \
	time.mh \
	time.mh \
	array.mh \
	array.mh \
	stm_builtin.mh \
	stm_builtin.mh \
	store.mh \
	store.mh


mdb.declarative_debugger.int0 : mdb.declarative_debugger.date0
	@:
mdb.declarative_debugger.int : mdb.declarative_debugger.date
	@:
mdb.declarative_debugger.int2 : mdb.declarative_debugger.date
	@:
mdb.declarative_debugger.int3 : mdb.declarative_debugger.date3
	@:
mdb.declarative_debugger.opt : mdb.declarative_debugger.optdate
	@:
mdb.declarative_debugger.trans_opt : mdb.declarative_debugger.trans_opt_date
	@:

mdb.declarative_debugger.date0 : declarative_debugger.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) mdb.declarative_debugger
mdb.declarative_debugger.date : declarative_debugger.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) mdb.declarative_debugger
mdb.declarative_debugger.date3 : declarative_debugger.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) mdb.declarative_debugger
mdb.declarative_debugger.optdate : declarative_debugger.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) mdb.declarative_debugger
mdb.declarative_debugger.trans_opt_date : declarative_debugger.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) mdb.declarative_debugger
mdb.declarative_debugger.c_date : declarative_debugger.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) mdb.declarative_debugger $(ERR_REDIRECT)
mdb.declarative_debugger.il_date : declarative_debugger.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only mdb.declarative_debugger $(ERR_REDIRECT)
mdb.declarative_debugger.java_date : declarative_debugger.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only mdb.declarative_debugger $(ERR_REDIRECT)
