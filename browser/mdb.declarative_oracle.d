

mdb.declarative_oracle.optdate mdb.declarative_oracle.trans_opt_date declarative_oracle.err mdb.declarative_oracle.c_date mdb.declarative_oracle.s_date mdb.declarative_oracle.pic_s_date mdb.declarative_oracle.il_date mdb.declarative_oracle.java_date : declarative_oracle.m \
	mdb.int0 \
	bimap.int \
	bool.int \
	builtin.int \
	counter.int \
	int.int \
	io.int \
	library.int \
	list.int \
	map.int \
	mdbcomp.int \
	private_builtin.int \
	set.int \
	string.int \
	svmap.int \
	mdb.browser_info.int \
	mdb.declarative_debugger.int \
	mdb.declarative_execution.int \
	mdb.declarative_user.int \
	mdb.help.int \
	mdbcomp.prim_data.int \
	mdbcomp.rtti_access.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	getopt.int2 \
	maybe.int2 \
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
	unit.int2 \
	univ.int2 \
	mdb.browser_term.int2 \
	mdb.declarative_analyser.int2 \
	mdb.declarative_edt.int2 \
	mdb.declarative_tree.int2 \
	mdb.io_action.int2 \
	mdb.parse.int2 \
	mdb.term_rep.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.trace_counts.int2

ifeq ($(TARGET_ASM),yes)
mdb.declarative_oracle.mh mdb.declarative_oracle.mih : mdb.declarative_oracle.s
else
mdb.declarative_oracle.mh mdb.declarative_oracle.mih : mdb.declarative_oracle.c
endif

ifeq ($(TARGET_ASM),yes)
mdb.declarative_oracle.module_dep : mdb.declarative_oracle.s
else
 ifeq ($(findstring il,$(GRADE)),il)
mdb.declarative_oracle.module_dep : mdb.declarative_oracle.il
  ifeq ($(findstring java,$(GRADE)),java)
mdb.declarative_oracle.module_dep : jmercury/mdb__declarative_oracle.java
  else
mdb.declarative_oracle.module_dep : mdb.declarative_oracle.c
  endif
 endif
endif

mdb.declarative_oracle.date mdb.declarative_oracle.date0 \
	mdb.date : declarative_oracle.m \
	mdb.int0 \
	bimap.int3 \
	bool.int3 \
	builtin.int3 \
	counter.int3 \
	int.int3 \
	io.int3 \
	library.int3 \
	list.int3 \
	map.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	set.int3 \
	string.int3 \
	svmap.int3 \
	mdb.browser_info.int3 \
	mdb.declarative_debugger.int3 \
	mdb.declarative_execution.int3 \
	mdb.declarative_user.int3 \
	mdb.help.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.rtti_access.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt.int3 \
	maybe.int3 \
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
	unit.int3 \
	univ.int3 \
	mdb.browser_term.int3 \
	mdb.declarative_analyser.int3 \
	mdb.declarative_edt.int3 \
	mdb.declarative_tree.int3 \
	mdb.io_action.int3 \
	mdb.parse.int3 \
	mdb.term_rep.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.trace_counts.int3

mdb.declarative_oracle.date0 \
	mdb.date0 : declarative_oracle.m \
	bimap.int3 \
	bool.int3 \
	builtin.int3 \
	counter.int3 \
	int.int3 \
	io.int3 \
	library.int3 \
	list.int3 \
	map.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	set.int3 \
	string.int3 \
	svmap.int3 \
	mdb.browser_info.int3 \
	mdb.declarative_debugger.int3 \
	mdb.declarative_execution.int3 \
	mdb.declarative_user.int3 \
	mdb.help.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.rtti_access.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt.int3 \
	maybe.int3 \
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
	unit.int3 \
	univ.int3 \
	mdb.browser_term.int3 \
	mdb.declarative_analyser.int3 \
	mdb.declarative_edt.int3 \
	mdb.declarative_tree.int3 \
	mdb.io_action.int3 \
	mdb.parse.int3 \
	mdb.term_rep.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.trace_counts.int3



mdb.declarative_oracle.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	string.mh \
	io.mh \
	io.mh \
	mdb.mh



mdb.declarative_oracle.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	string.mh \
	io.mh \
	io.mh \
	mdb.mh


mdb.declarative_oracle.int0 : mdb.declarative_oracle.date0
	@:
mdb.declarative_oracle.int : mdb.declarative_oracle.date
	@:
mdb.declarative_oracle.int2 : mdb.declarative_oracle.date
	@:
mdb.declarative_oracle.int3 : mdb.declarative_oracle.date3
	@:
mdb.declarative_oracle.opt : mdb.declarative_oracle.optdate
	@:
mdb.declarative_oracle.trans_opt : mdb.declarative_oracle.trans_opt_date
	@:

mdb.declarative_oracle.date0 : declarative_oracle.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) mdb.declarative_oracle
mdb.declarative_oracle.date : declarative_oracle.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) mdb.declarative_oracle
mdb.declarative_oracle.date3 : declarative_oracle.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) mdb.declarative_oracle
mdb.declarative_oracle.optdate : declarative_oracle.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) mdb.declarative_oracle
mdb.declarative_oracle.trans_opt_date : declarative_oracle.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) mdb.declarative_oracle
mdb.declarative_oracle.c_date : declarative_oracle.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) mdb.declarative_oracle $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
mdb.declarative_oracle.s_date : declarative_oracle.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only mdb.declarative_oracle $(ERR_REDIRECT)
mdb.declarative_oracle.pic_s_date : declarative_oracle.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" mdb.declarative_oracle $(ERR_REDIRECT)
endif # TARGET_ASM
mdb.declarative_oracle.il_date : declarative_oracle.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only mdb.declarative_oracle $(ERR_REDIRECT)
mdb.declarative_oracle.java_date : declarative_oracle.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only mdb.declarative_oracle $(ERR_REDIRECT)
