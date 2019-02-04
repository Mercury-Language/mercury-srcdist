

mdbcomp.program_representation.optdate mdbcomp.program_representation.trans_opt_date program_representation.err mdbcomp.program_representation.c_date mdbcomp.program_representation.s_date mdbcomp.program_representation.pic_s_date mdbcomp.program_representation.il_date mdbcomp.program_representation.java_date : program_representation.m \
	mdbcomp.int0 \
	bool.int \
	builtin.int \
	int.int \
	io.int \
	list.int \
	map.int \
	maybe.int \
	private_builtin.int \
	require.int \
	string.int \
	type_desc.int \
	unit.int \
	mdbcomp.goal_path.int \
	mdbcomp.prim_data.int \
	mdbcomp.rtti_access.int \
	array.int2 \
	assoc_list.int2 \
	bimap.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
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
	univ.int2 \
	mdbcomp.trace_counts.int2

ifeq ($(TARGET_ASM),yes)
mdbcomp.program_representation.mh mdbcomp.program_representation.mih : mdbcomp.program_representation.s
else
mdbcomp.program_representation.mh mdbcomp.program_representation.mih : mdbcomp.program_representation.c
endif

ifeq ($(TARGET_ASM),yes)
mdbcomp.program_representation.module_dep : mdbcomp.program_representation.s
else
 ifeq ($(findstring il,$(GRADE)),il)
mdbcomp.program_representation.module_dep : mdbcomp.program_representation.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
mdbcomp.program_representation.module_dep : jmercury/mdbcomp__program_representation.java
  else
mdbcomp.program_representation.module_dep : mdbcomp.program_representation.c
  endif
 endif
endif

mdbcomp.program_representation.date mdbcomp.program_representation.date0 \
	mdbcomp.date : program_representation.m \
	mdbcomp.int0 \
	bool.int3 \
	builtin.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	type_desc.int3 \
	unit.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.rtti_access.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
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
	univ.int3 \
	mdbcomp.trace_counts.int3

mdbcomp.program_representation.date0 \
	mdbcomp.date0 : program_representation.m \
	bool.int3 \
	builtin.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	type_desc.int3 \
	unit.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.rtti_access.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
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
	univ.int3 \
	mdbcomp.trace_counts.int3



mdbcomp.program_representation.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	mdbcomp.mh \
	mdbcomp.program_representation.mh



mdbcomp.program_representation.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	mdbcomp.mh \
	mdbcomp.program_representation.mh


mdbcomp.program_representation.int0 : mdbcomp.program_representation.date0
	@:
mdbcomp.program_representation.int : mdbcomp.program_representation.date
	@:
mdbcomp.program_representation.int2 : mdbcomp.program_representation.date
	@:
mdbcomp.program_representation.int3 : mdbcomp.program_representation.date3
	@:
mdbcomp.program_representation.opt : mdbcomp.program_representation.optdate
	@:
mdbcomp.program_representation.trans_opt : mdbcomp.program_representation.trans_opt_date
	@:

mdbcomp.program_representation.date0 : program_representation.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) mdbcomp.program_representation
mdbcomp.program_representation.date : program_representation.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) mdbcomp.program_representation
mdbcomp.program_representation.date3 : program_representation.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) mdbcomp.program_representation
mdbcomp.program_representation.optdate : program_representation.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) mdbcomp.program_representation
mdbcomp.program_representation.trans_opt_date : program_representation.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) mdbcomp.program_representation
mdbcomp.program_representation.c_date : program_representation.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) mdbcomp.program_representation $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
mdbcomp.program_representation.s_date : program_representation.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only mdbcomp.program_representation $(ERR_REDIRECT)
mdbcomp.program_representation.pic_s_date : program_representation.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" mdbcomp.program_representation $(ERR_REDIRECT)
endif # TARGET_ASM
mdbcomp.program_representation.il_date : program_representation.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only mdbcomp.program_representation $(ERR_REDIRECT)
mdbcomp.program_representation.java_date : program_representation.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only mdbcomp.program_representation $(ERR_REDIRECT)
