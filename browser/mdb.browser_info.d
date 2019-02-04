

mdb.browser_info.optdate mdb.browser_info.trans_opt_date browser_info.err mdb.browser_info.c_date mdb.browser_info.s_date mdb.browser_info.pic_s_date mdb.browser_info.il_date mdb.browser_info.java_date : browser_info.m \
	mdb.int0 \
	bool.int \
	builtin.int \
	deconstruct.int \
	getopt.int \
	io.int \
	list.int \
	maybe.int \
	mdbcomp.int \
	private_builtin.int \
	require.int \
	stream.int \
	string.int \
	type_desc.int \
	univ.int \
	mdb.browser_term.int \
	mdb.parse.int \
	mdb.term_rep.int \
	mdbcomp.program_representation.int \
	assoc_list.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	enum.int2 \
	map.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	set.int2 \
	set_ordlist.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2

ifeq ($(TARGET_ASM),yes)
mdb.browser_info.mh mdb.browser_info.mih : mdb.browser_info.s
else
mdb.browser_info.mh mdb.browser_info.mih : mdb.browser_info.c
endif

ifeq ($(TARGET_ASM),yes)
mdb.browser_info.module_dep : mdb.browser_info.s
else
 ifeq ($(findstring il,$(GRADE)),il)
mdb.browser_info.module_dep : mdb.browser_info.il
  ifeq ($(findstring java,$(GRADE)),java)
mdb.browser_info.module_dep : mdb.browser_info.java
  else
mdb.browser_info.module_dep : mdb.browser_info.c
  endif
 endif
endif

mdb.browser_info.date mdb.browser_info.date0 \
	mdb.date : browser_info.m \
	mdb.int0 \
	bool.int3 \
	builtin.int3 \
	deconstruct.int3 \
	getopt.int3 \
	io.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	require.int3 \
	stream.int3 \
	string.int3 \
	type_desc.int3 \
	univ.int3 \
	mdb.browser_term.int3 \
	mdb.parse.int3 \
	mdb.term_rep.int3 \
	mdbcomp.program_representation.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	enum.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	set.int3 \
	set_ordlist.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3

mdb.browser_info.date0 \
	mdb.date0 : browser_info.m \
	bool.int3 \
	builtin.int3 \
	deconstruct.int3 \
	getopt.int3 \
	io.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	require.int3 \
	stream.int3 \
	string.int3 \
	type_desc.int3 \
	univ.int3 \
	mdb.browser_term.int3 \
	mdb.parse.int3 \
	mdb.term_rep.int3 \
	mdbcomp.program_representation.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	enum.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	set.int3 \
	set_ordlist.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3



mdb.browser_info.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	string.mh \
	io.mh \
	io.mh \
	mdb.mh \
	mdb.browser_info.mh



mdb.browser_info.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	string.mh \
	io.mh \
	io.mh \
	mdb.mh \
	mdb.browser_info.mh


mdb.browser_info.int0 : mdb.browser_info.date0
	@:
mdb.browser_info.int : mdb.browser_info.date
	@:
mdb.browser_info.int2 : mdb.browser_info.date
	@:
mdb.browser_info.int3 : mdb.browser_info.date3
	@:
mdb.browser_info.opt : mdb.browser_info.optdate
	@:
mdb.browser_info.trans_opt : mdb.browser_info.trans_opt_date
	@:

mdb.browser_info.date0 : browser_info.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) mdb.browser_info
mdb.browser_info.date : browser_info.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) mdb.browser_info
mdb.browser_info.date3 : browser_info.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) mdb.browser_info
mdb.browser_info.optdate : browser_info.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) mdb.browser_info
mdb.browser_info.trans_opt_date : browser_info.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) mdb.browser_info
mdb.browser_info.c_date : browser_info.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) mdb.browser_info $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
mdb.browser_info.s_date : browser_info.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only mdb.browser_info $(ERR_REDIRECT)
mdb.browser_info.pic_s_date : browser_info.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" mdb.browser_info $(ERR_REDIRECT)
endif # TARGET_ASM
mdb.browser_info.il_date : browser_info.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only mdb.browser_info $(ERR_REDIRECT)
mdb.browser_info.java_date : browser_info.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only mdb.browser_info $(ERR_REDIRECT)
