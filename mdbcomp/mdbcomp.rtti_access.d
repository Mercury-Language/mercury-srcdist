

mdbcomp.rtti_access.optdate mdbcomp.rtti_access.trans_opt_date rtti_access.err mdbcomp.rtti_access.c_date mdbcomp.rtti_access.s_date mdbcomp.rtti_access.pic_s_date mdbcomp.rtti_access.il_date mdbcomp.rtti_access.java_date : rtti_access.m \
	mdbcomp.int0 \
	builtin.int \
	char.int \
	int.int \
	list.int \
	maybe.int \
	private_builtin.int \
	require.int \
	string.int \
	mdbcomp.prim_data.int \
	mdbcomp.program_representation.int \
	mdbcomp.trace_counts.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	io.int2 \
	map.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	random.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	unit.int2 \
	univ.int2

ifeq ($(TARGET_ASM),yes)
mdbcomp.rtti_access.mh mdbcomp.rtti_access.mih : mdbcomp.rtti_access.s
else
mdbcomp.rtti_access.mh mdbcomp.rtti_access.mih : mdbcomp.rtti_access.c
endif

ifeq ($(TARGET_ASM),yes)
mdbcomp.rtti_access.module_dep : mdbcomp.rtti_access.s
else
 ifeq ($(findstring il,$(GRADE)),il)
mdbcomp.rtti_access.module_dep : mdbcomp.rtti_access.il
  ifeq ($(findstring java,$(GRADE)),java)
mdbcomp.rtti_access.module_dep : mercury/mdbcomp_/rtti_access.java
  else
mdbcomp.rtti_access.module_dep : mdbcomp.rtti_access.c
  endif
 endif
endif

mdbcomp.rtti_access.date mdbcomp.rtti_access.date0 \
	mdbcomp.date : rtti_access.m \
	mdbcomp.int0 \
	builtin.int3 \
	char.int3 \
	int.int3 \
	list.int3 \
	maybe.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.trace_counts.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3

mdbcomp.rtti_access.date0 \
	mdbcomp.date0 : rtti_access.m \
	builtin.int3 \
	char.int3 \
	int.int3 \
	list.int3 \
	maybe.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.trace_counts.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3



mdbcomp.rtti_access.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.mh \
	mdbcomp.rtti_access.mh



mdbcomp.rtti_access.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.mh \
	mdbcomp.rtti_access.mh


mdbcomp.rtti_access.int0 : mdbcomp.rtti_access.date0
	@:
mdbcomp.rtti_access.int : mdbcomp.rtti_access.date
	@:
mdbcomp.rtti_access.int2 : mdbcomp.rtti_access.date
	@:
mdbcomp.rtti_access.int3 : mdbcomp.rtti_access.date3
	@:
mdbcomp.rtti_access.opt : mdbcomp.rtti_access.optdate
	@:
mdbcomp.rtti_access.trans_opt : mdbcomp.rtti_access.trans_opt_date
	@:

mdbcomp.rtti_access.date0 : rtti_access.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) mdbcomp.rtti_access
mdbcomp.rtti_access.date : rtti_access.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) mdbcomp.rtti_access
mdbcomp.rtti_access.date3 : rtti_access.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) mdbcomp.rtti_access
mdbcomp.rtti_access.optdate : rtti_access.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) mdbcomp.rtti_access
mdbcomp.rtti_access.trans_opt_date : rtti_access.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) mdbcomp.rtti_access
mdbcomp.rtti_access.c_date : rtti_access.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) mdbcomp.rtti_access $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
mdbcomp.rtti_access.s_date : rtti_access.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only mdbcomp.rtti_access $(ERR_REDIRECT)
mdbcomp.rtti_access.pic_s_date : rtti_access.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" mdbcomp.rtti_access $(ERR_REDIRECT)
endif # TARGET_ASM
mdbcomp.rtti_access.il_date : rtti_access.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only mdbcomp.rtti_access $(ERR_REDIRECT)
mdbcomp.rtti_access.java_date : rtti_access.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only mdbcomp.rtti_access $(ERR_REDIRECT)
