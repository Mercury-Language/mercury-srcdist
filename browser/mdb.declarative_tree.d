

mdb.declarative_tree.optdate mdb.declarative_tree.trans_opt_date declarative_tree.err mdb.declarative_tree.c_date mdb.declarative_tree.s_date mdb.declarative_tree.pic_s_date mdb.declarative_tree.il_date mdb.declarative_tree.java_date : declarative_tree.m \
	mdb.int0 \
	assoc_list.int \
	bool.int \
	builtin.int \
	cord.int \
	deconstruct.int \
	exception.int \
	int.int \
	list.int \
	maybe.int \
	mdbcomp.int \
	pair.int \
	private_builtin.int \
	string.int \
	unit.int \
	univ.int \
	mdb.declarative_debugger.int \
	mdb.declarative_edt.int \
	mdb.declarative_execution.int \
	mdb.io_action.int \
	mdb.term_rep.int \
	mdbcomp.prim_data.int \
	mdbcomp.program_representation.int \
	mdbcomp.rtti_access.int \
	array.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	enum.int2 \
	getopt.int2 \
	io.int2 \
	map.int2 \
	ops.int2 \
	pretty_printer.int2 \
	random.int2 \
	set.int2 \
	set_ordlist.int2 \
	stm_builtin.int2 \
	store.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	mdb.browser_info.int2 \
	mdb.browser_term.int2 \
	mdb.declarative_analyser.int2 \
	mdb.declarative_oracle.int2 \
	mdb.declarative_user.int2 \
	mdb.help.int2 \
	mdb.parse.int2 \
	mdbcomp.trace_counts.int2

ifeq ($(TARGET_ASM),yes)
mdb.declarative_tree.mh mdb.declarative_tree.mih : mdb.declarative_tree.s
else
mdb.declarative_tree.mh mdb.declarative_tree.mih : mdb.declarative_tree.c
endif

ifeq ($(TARGET_ASM),yes)
mdb.declarative_tree.module_dep : mdb.declarative_tree.s
else
 ifeq ($(findstring il,$(GRADE)),il)
mdb.declarative_tree.module_dep : mdb.declarative_tree.il
  ifeq ($(findstring java,$(GRADE)),java)
mdb.declarative_tree.module_dep : mdb.declarative_tree.java
  else
mdb.declarative_tree.module_dep : mdb.declarative_tree.c
  endif
 endif
endif

mdb.declarative_tree.date mdb.declarative_tree.date0 \
	mdb.date : declarative_tree.m \
	mdb.int0 \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	cord.int3 \
	deconstruct.int3 \
	exception.int3 \
	int.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	pair.int3 \
	private_builtin.int3 \
	string.int3 \
	unit.int3 \
	univ.int3 \
	mdb.declarative_debugger.int3 \
	mdb.declarative_edt.int3 \
	mdb.declarative_execution.int3 \
	mdb.io_action.int3 \
	mdb.term_rep.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	array.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	enum.int3 \
	getopt.int3 \
	io.int3 \
	map.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	stm_builtin.int3 \
	store.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	mdb.browser_info.int3 \
	mdb.browser_term.int3 \
	mdb.declarative_analyser.int3 \
	mdb.declarative_oracle.int3 \
	mdb.declarative_user.int3 \
	mdb.help.int3 \
	mdb.parse.int3 \
	mdbcomp.trace_counts.int3

mdb.declarative_tree.date0 \
	mdb.date0 : declarative_tree.m \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	cord.int3 \
	deconstruct.int3 \
	exception.int3 \
	int.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	pair.int3 \
	private_builtin.int3 \
	string.int3 \
	unit.int3 \
	univ.int3 \
	mdb.declarative_debugger.int3 \
	mdb.declarative_edt.int3 \
	mdb.declarative_execution.int3 \
	mdb.io_action.int3 \
	mdb.term_rep.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	array.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	enum.int3 \
	getopt.int3 \
	io.int3 \
	map.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	stm_builtin.int3 \
	store.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	mdb.browser_info.int3 \
	mdb.browser_term.int3 \
	mdb.declarative_analyser.int3 \
	mdb.declarative_oracle.int3 \
	mdb.declarative_user.int3 \
	mdb.help.int3 \
	mdb.parse.int3 \
	mdbcomp.trace_counts.int3



mdb.declarative_tree.$O :  \
	array.mh \
	array.mh \
	stm_builtin.mh \
	stm_builtin.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh \
	mdb.mh \
	mdb.declarative_tree.mh



mdb.declarative_tree.pic_o :  \
	array.mh \
	array.mh \
	stm_builtin.mh \
	stm_builtin.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh \
	mdb.mh \
	mdb.declarative_tree.mh


mdb.declarative_tree.int0 : mdb.declarative_tree.date0
	@:
mdb.declarative_tree.int : mdb.declarative_tree.date
	@:
mdb.declarative_tree.int2 : mdb.declarative_tree.date
	@:
mdb.declarative_tree.int3 : mdb.declarative_tree.date3
	@:
mdb.declarative_tree.opt : mdb.declarative_tree.optdate
	@:
mdb.declarative_tree.trans_opt : mdb.declarative_tree.trans_opt_date
	@:

mdb.declarative_tree.date0 : declarative_tree.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) mdb.declarative_tree
mdb.declarative_tree.date : declarative_tree.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) mdb.declarative_tree
mdb.declarative_tree.date3 : declarative_tree.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) mdb.declarative_tree
mdb.declarative_tree.optdate : declarative_tree.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) mdb.declarative_tree
mdb.declarative_tree.trans_opt_date : declarative_tree.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) mdb.declarative_tree
mdb.declarative_tree.c_date : declarative_tree.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) mdb.declarative_tree $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
mdb.declarative_tree.s_date : declarative_tree.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only mdb.declarative_tree $(ERR_REDIRECT)
mdb.declarative_tree.pic_s_date : declarative_tree.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" mdb.declarative_tree $(ERR_REDIRECT)
endif # TARGET_ASM
mdb.declarative_tree.il_date : declarative_tree.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only mdb.declarative_tree $(ERR_REDIRECT)
mdb.declarative_tree.java_date : declarative_tree.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only mdb.declarative_tree $(ERR_REDIRECT)
