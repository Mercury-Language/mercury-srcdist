

mdb.term_rep.optdate mdb.term_rep.trans_opt_date term_rep.err mdb.term_rep.c_date mdb.term_rep.s_date mdb.term_rep.pic_s_date mdb.term_rep.il_date mdb.term_rep.java_date : term_rep.m \
	mdb.int0 \
	builtin.int \
	construct.int \
	deconstruct.int \
	exception.int \
	int.int \
	list.int \
	maybe.int \
	mdbcomp.int \
	private_builtin.int \
	type_desc.int \
	univ.int \
	mdb.declarative_debugger.int \
	mdbcomp.program_representation.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	enum.int2 \
	getopt.int2 \
	io.int2 \
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
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	unit.int2 \
	mdb.browser_info.int2 \
	mdb.browser_term.int2 \
	mdb.declarative_analyser.int2 \
	mdb.declarative_edt.int2 \
	mdb.declarative_execution.int2 \
	mdb.declarative_oracle.int2 \
	mdb.declarative_tree.int2 \
	mdb.declarative_user.int2 \
	mdb.help.int2 \
	mdb.io_action.int2 \
	mdb.parse.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2

ifeq ($(TARGET_ASM),yes)
mdb.term_rep.mh mdb.term_rep.mih : mdb.term_rep.s
else
mdb.term_rep.mh mdb.term_rep.mih : mdb.term_rep.c
endif

ifeq ($(TARGET_ASM),yes)
mdb.term_rep.module_dep : mdb.term_rep.s
else
 ifeq ($(findstring il,$(GRADE)),il)
mdb.term_rep.module_dep : mdb.term_rep.il
  ifeq ($(findstring java,$(GRADE)),java)
mdb.term_rep.module_dep : jmercury/mdb__term_rep.java
  else
mdb.term_rep.module_dep : mdb.term_rep.c
  endif
 endif
endif

mdb.term_rep.date mdb.term_rep.date0 \
	mdb.date : term_rep.m \
	mdb.int0 \
	builtin.int3 \
	construct.int3 \
	deconstruct.int3 \
	exception.int3 \
	int.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	type_desc.int3 \
	univ.int3 \
	mdb.declarative_debugger.int3 \
	mdbcomp.program_representation.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	enum.int3 \
	getopt.int3 \
	io.int3 \
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
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	unit.int3 \
	mdb.browser_info.int3 \
	mdb.browser_term.int3 \
	mdb.declarative_analyser.int3 \
	mdb.declarative_edt.int3 \
	mdb.declarative_execution.int3 \
	mdb.declarative_oracle.int3 \
	mdb.declarative_tree.int3 \
	mdb.declarative_user.int3 \
	mdb.help.int3 \
	mdb.io_action.int3 \
	mdb.parse.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3

mdb.term_rep.date0 \
	mdb.date0 : term_rep.m \
	builtin.int3 \
	construct.int3 \
	deconstruct.int3 \
	exception.int3 \
	int.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	type_desc.int3 \
	univ.int3 \
	mdb.declarative_debugger.int3 \
	mdbcomp.program_representation.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	enum.int3 \
	getopt.int3 \
	io.int3 \
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
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	unit.int3 \
	mdb.browser_info.int3 \
	mdb.browser_term.int3 \
	mdb.declarative_analyser.int3 \
	mdb.declarative_edt.int3 \
	mdb.declarative_execution.int3 \
	mdb.declarative_oracle.int3 \
	mdb.declarative_tree.int3 \
	mdb.declarative_user.int3 \
	mdb.help.int3 \
	mdb.io_action.int3 \
	mdb.parse.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3



mdb.term_rep.$O :  \
	array.mh \
	array.mh \
	stm_builtin.mh \
	stm_builtin.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	string.mh \
	io.mh \
	io.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh \
	mdb.mh



mdb.term_rep.pic_o :  \
	array.mh \
	array.mh \
	stm_builtin.mh \
	stm_builtin.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	string.mh \
	io.mh \
	io.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh \
	mdb.mh


mdb.term_rep.int0 : mdb.term_rep.date0
	@:
mdb.term_rep.int : mdb.term_rep.date
	@:
mdb.term_rep.int2 : mdb.term_rep.date
	@:
mdb.term_rep.int3 : mdb.term_rep.date3
	@:
mdb.term_rep.opt : mdb.term_rep.optdate
	@:
mdb.term_rep.trans_opt : mdb.term_rep.trans_opt_date
	@:

mdb.term_rep.date0 : term_rep.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) mdb.term_rep
mdb.term_rep.date : term_rep.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) mdb.term_rep
mdb.term_rep.date3 : term_rep.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) mdb.term_rep
mdb.term_rep.optdate : term_rep.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) mdb.term_rep
mdb.term_rep.trans_opt_date : term_rep.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) mdb.term_rep
mdb.term_rep.c_date : term_rep.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) mdb.term_rep $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
mdb.term_rep.s_date : term_rep.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only mdb.term_rep $(ERR_REDIRECT)
mdb.term_rep.pic_s_date : term_rep.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" mdb.term_rep $(ERR_REDIRECT)
endif # TARGET_ASM
mdb.term_rep.il_date : term_rep.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only mdb.term_rep $(ERR_REDIRECT)
mdb.term_rep.java_date : term_rep.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only mdb.term_rep $(ERR_REDIRECT)
