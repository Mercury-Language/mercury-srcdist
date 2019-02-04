

mdb.declarative_user.optdate mdb.declarative_user.trans_opt_date declarative_user.err mdb.declarative_user.c_date mdb.declarative_user.s_date mdb.declarative_user.pic_s_date mdb.declarative_user.il_date mdb.declarative_user.java_date : declarative_user.m \
	mdb.int0 \
	bool.int \
	builtin.int \
	char.int \
	deconstruct.int \
	exception.int \
	getopt.int \
	int.int \
	io.int \
	list.int \
	maybe.int \
	mdbcomp.int \
	private_builtin.int \
	string.int \
	svmap.int \
	univ.int \
	mdb.browse.int \
	mdb.browser_info.int \
	mdb.browser_term.int \
	mdb.declarative_debugger.int \
	mdb.declarative_execution.int \
	mdb.declarative_tree.int \
	mdb.help.int \
	mdb.io_action.int \
	mdb.parse.int \
	mdb.term_rep.int \
	mdb.util.int \
	mdbcomp.prim_data.int \
	mdbcomp.program_representation.int \
	mdbcomp.rtti_access.int \
	array.int2 \
	assoc_list.int2 \
	bimap.int2 \
	bitmap.int2 \
	construct.int2 \
	enum.int2 \
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
	unit.int2 \
	mdb.declarative_analyser.int2 \
	mdb.declarative_edt.int2 \
	mdb.declarative_oracle.int2 \
	mdbcomp.goal_path.int2 \
	mdbcomp.trace_counts.int2

ifeq ($(TARGET_ASM),yes)
mdb.declarative_user.mh mdb.declarative_user.mih : mdb.declarative_user.s
else
mdb.declarative_user.mh mdb.declarative_user.mih : mdb.declarative_user.c
endif

ifeq ($(TARGET_ASM),yes)
mdb.declarative_user.module_dep : mdb.declarative_user.s
else
 ifeq ($(findstring il,$(GRADE)),il)
mdb.declarative_user.module_dep : mdb.declarative_user.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
mdb.declarative_user.module_dep : jmercury/mdb__declarative_user.java
  else
mdb.declarative_user.module_dep : mdb.declarative_user.c
  endif
 endif
endif

mdb.declarative_user.date mdb.declarative_user.date0 \
	mdb.date : declarative_user.m \
	mdb.int0 \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	deconstruct.int3 \
	exception.int3 \
	getopt.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	string.int3 \
	svmap.int3 \
	univ.int3 \
	mdb.browse.int3 \
	mdb.browser_info.int3 \
	mdb.browser_term.int3 \
	mdb.declarative_debugger.int3 \
	mdb.declarative_execution.int3 \
	mdb.declarative_tree.int3 \
	mdb.help.int3 \
	mdb.io_action.int3 \
	mdb.parse.int3 \
	mdb.term_rep.int3 \
	mdb.util.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	construct.int3 \
	enum.int3 \
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
	unit.int3 \
	mdb.declarative_analyser.int3 \
	mdb.declarative_edt.int3 \
	mdb.declarative_oracle.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.trace_counts.int3

mdb.declarative_user.date0 \
	mdb.date0 : declarative_user.m \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	deconstruct.int3 \
	exception.int3 \
	getopt.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	string.int3 \
	svmap.int3 \
	univ.int3 \
	mdb.browse.int3 \
	mdb.browser_info.int3 \
	mdb.browser_term.int3 \
	mdb.declarative_debugger.int3 \
	mdb.declarative_execution.int3 \
	mdb.declarative_tree.int3 \
	mdb.help.int3 \
	mdb.io_action.int3 \
	mdb.parse.int3 \
	mdb.term_rep.int3 \
	mdb.util.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	construct.int3 \
	enum.int3 \
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
	unit.int3 \
	mdb.declarative_analyser.int3 \
	mdb.declarative_edt.int3 \
	mdb.declarative_oracle.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.trace_counts.int3



mdb.declarative_user.$O :  \
	array.mh \
	array.mh \
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
	string.mh \
	io.mh \
	io.mh \
	mdb.mh



mdb.declarative_user.pic_o :  \
	array.mh \
	array.mh \
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
	string.mh \
	io.mh \
	io.mh \
	mdb.mh


mdb.declarative_user.int0 : mdb.declarative_user.date0
	@:
mdb.declarative_user.int : mdb.declarative_user.date
	@:
mdb.declarative_user.int2 : mdb.declarative_user.date
	@:
mdb.declarative_user.int3 : mdb.declarative_user.date3
	@:
mdb.declarative_user.opt : mdb.declarative_user.optdate
	@:
mdb.declarative_user.trans_opt : mdb.declarative_user.trans_opt_date
	@:

mdb.declarative_user.date0 : declarative_user.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) mdb.declarative_user
mdb.declarative_user.date : declarative_user.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) mdb.declarative_user
mdb.declarative_user.date3 : declarative_user.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) mdb.declarative_user
mdb.declarative_user.optdate : declarative_user.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) mdb.declarative_user
mdb.declarative_user.trans_opt_date : declarative_user.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) mdb.declarative_user
mdb.declarative_user.c_date : declarative_user.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) mdb.declarative_user $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
mdb.declarative_user.s_date : declarative_user.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only mdb.declarative_user $(ERR_REDIRECT)
mdb.declarative_user.pic_s_date : declarative_user.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" mdb.declarative_user $(ERR_REDIRECT)
endif # TARGET_ASM
mdb.declarative_user.il_date : declarative_user.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only mdb.declarative_user $(ERR_REDIRECT)
mdb.declarative_user.java_date : declarative_user.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only mdb.declarative_user $(ERR_REDIRECT)
