

mdb.debugger_interface.optdate mdb.debugger_interface.trans_opt_date debugger_interface.err mdb.debugger_interface.c_date mdb.debugger_interface.s_date mdb.debugger_interface.pic_s_date mdb.debugger_interface.il_date mdb.debugger_interface.java_date : debugger_interface.m \
	mdb.int0 \
	builtin.int \
	io.int \
	list.int \
	mdbcomp.int \
	private_builtin.int \
	require.int \
	univ.int \
	mdb.interactive_query.int \
	mdb.util.int \
	mdbcomp.prim_data.int \
	mdbcomp.program_representation.int \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	map.int2 \
	maybe.int2 \
	ops.int2 \
	pair.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2

ifeq ($(TARGET_ASM),yes)
mdb.debugger_interface.mh mdb.debugger_interface.mih : mdb.debugger_interface.s
else
mdb.debugger_interface.mh mdb.debugger_interface.mih : mdb.debugger_interface.c
endif

ifeq ($(TARGET_ASM),yes)
mdb.debugger_interface.module_dep : mdb.debugger_interface.s
else
 ifeq ($(findstring il,$(GRADE)),il)
mdb.debugger_interface.module_dep : mdb.debugger_interface.il
  ifeq ($(findstring java,$(GRADE)),java)
mdb.debugger_interface.module_dep : mdb.debugger_interface.java
  else
mdb.debugger_interface.module_dep : mdb.debugger_interface.c
  endif
 endif
endif

mdb.debugger_interface.date mdb.debugger_interface.date0 \
	mdb.date : debugger_interface.m \
	mdb.int0 \
	builtin.int3 \
	io.int3 \
	list.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	require.int3 \
	univ.int3 \
	mdb.interactive_query.int3 \
	mdb.util.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3

mdb.debugger_interface.date0 \
	mdb.date0 : debugger_interface.m \
	builtin.int3 \
	io.int3 \
	list.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	require.int3 \
	univ.int3 \
	mdb.interactive_query.int3 \
	mdb.util.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3



mdb.debugger_interface.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	mdb.mh \
	mdb.debugger_interface.mh



mdb.debugger_interface.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	mdb.mh \
	mdb.debugger_interface.mh


mdb.debugger_interface.int0 : mdb.debugger_interface.date0
	@:
mdb.debugger_interface.int : mdb.debugger_interface.date
	@:
mdb.debugger_interface.int2 : mdb.debugger_interface.date
	@:
mdb.debugger_interface.int3 : mdb.debugger_interface.date3
	@:
mdb.debugger_interface.opt : mdb.debugger_interface.optdate
	@:
mdb.debugger_interface.trans_opt : mdb.debugger_interface.trans_opt_date
	@:

mdb.debugger_interface.date0 : debugger_interface.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) mdb.debugger_interface
mdb.debugger_interface.date : debugger_interface.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) mdb.debugger_interface
mdb.debugger_interface.date3 : debugger_interface.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) mdb.debugger_interface
mdb.debugger_interface.optdate : debugger_interface.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) mdb.debugger_interface
mdb.debugger_interface.trans_opt_date : debugger_interface.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) mdb.debugger_interface
mdb.debugger_interface.c_date : debugger_interface.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) mdb.debugger_interface $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
mdb.debugger_interface.s_date : debugger_interface.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only mdb.debugger_interface $(ERR_REDIRECT)
mdb.debugger_interface.pic_s_date : debugger_interface.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" mdb.debugger_interface $(ERR_REDIRECT)
endif # TARGET_ASM
mdb.debugger_interface.il_date : debugger_interface.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only mdb.debugger_interface $(ERR_REDIRECT)
mdb.debugger_interface.java_date : debugger_interface.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only mdb.debugger_interface $(ERR_REDIRECT)
