

mdb.diff.optdate mdb.diff.trans_opt_date diff.err mdb.diff.c_date mdb.diff.s_date mdb.diff.pic_s_date mdb.diff.il_date mdb.diff.java_date : diff.m \
	mdb.int0 \
	builtin.int \
	deconstruct.int \
	int.int \
	io.int \
	list.int \
	mdbcomp.int \
	private_builtin.int \
	require.int \
	string.int \
	univ.int \
	mdbcomp.program_representation.int \
	array.int2 \
	assoc_list.int2 \
	bimap.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	enum.int2 \
	map.int2 \
	maybe.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	unit.int2 \
	mdbcomp.goal_path.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2

ifeq ($(TARGET_ASM),yes)
mdb.diff.mh mdb.diff.mih : mdb.diff.s
else
mdb.diff.mh mdb.diff.mih : mdb.diff.c
endif

ifeq ($(TARGET_ASM),yes)
mdb.diff.module_dep : mdb.diff.s
else
 ifeq ($(findstring il,$(GRADE)),il)
mdb.diff.module_dep : mdb.diff.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
mdb.diff.module_dep : jmercury/mdb__diff.java
  else
mdb.diff.module_dep : mdb.diff.c
  endif
 endif
endif

mdb.diff.date mdb.diff.date0 \
	mdb.date : diff.m \
	mdb.int0 \
	builtin.int3 \
	deconstruct.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	univ.int3 \
	mdbcomp.program_representation.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	enum.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3

mdb.diff.date0 \
	mdb.date0 : diff.m \
	builtin.int3 \
	deconstruct.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	univ.int3 \
	mdbcomp.program_representation.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	enum.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3



mdb.diff.$O :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	mdb.mh \
	mdb.diff.mh



mdb.diff.pic_o :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	mdb.mh \
	mdb.diff.mh


mdb.diff.int0 : mdb.diff.date0
	@:
mdb.diff.int : mdb.diff.date
	@:
mdb.diff.int2 : mdb.diff.date
	@:
mdb.diff.int3 : mdb.diff.date3
	@:
mdb.diff.opt : mdb.diff.optdate
	@:
mdb.diff.trans_opt : mdb.diff.trans_opt_date
	@:

mdb.diff.date0 : diff.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) mdb.diff
mdb.diff.date : diff.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) mdb.diff
mdb.diff.date3 : diff.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) mdb.diff
mdb.diff.optdate : diff.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) mdb.diff
mdb.diff.trans_opt_date : diff.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) mdb.diff
mdb.diff.c_date : diff.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) mdb.diff $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
mdb.diff.s_date : diff.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only mdb.diff $(ERR_REDIRECT)
mdb.diff.pic_s_date : diff.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" mdb.diff $(ERR_REDIRECT)
endif # TARGET_ASM
mdb.diff.il_date : diff.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only mdb.diff $(ERR_REDIRECT)
mdb.diff.java_date : diff.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only mdb.diff $(ERR_REDIRECT)
