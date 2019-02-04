

mdbcomp.feedback.optdate mdbcomp.feedback.trans_opt_date feedback.err mdbcomp.feedback.c_date mdbcomp.feedback.s_date mdbcomp.feedback.pic_s_date mdbcomp.feedback.il_date mdbcomp.feedback.java_date : feedback.m \
	mdbcomp.int0 \
	assoc_list.int \
	builtin.int \
	exception.int \
	float.int \
	int.int \
	io.int \
	list.int \
	map.int \
	maybe.int \
	private_builtin.int \
	require.int \
	string.int \
	svmap.int \
	unit.int \
	univ.int \
	mdbcomp.program_representation.int \
	array.int2 \
	bitmap.int2 \
	bool.int2 \
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
	stm_builtin.int2 \
	store.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2

ifeq ($(TARGET_ASM),yes)
mdbcomp.feedback.mh mdbcomp.feedback.mih : mdbcomp.feedback.s
else
mdbcomp.feedback.mh mdbcomp.feedback.mih : mdbcomp.feedback.c
endif

ifeq ($(TARGET_ASM),yes)
mdbcomp.feedback.module_dep : mdbcomp.feedback.s
else
 ifeq ($(findstring il,$(GRADE)),il)
mdbcomp.feedback.module_dep : mdbcomp.feedback.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
mdbcomp.feedback.module_dep : jmercury/mdbcomp__feedback.java
  else
mdbcomp.feedback.module_dep : mdbcomp.feedback.c
  endif
 endif
endif

mdbcomp.feedback.date mdbcomp.feedback.date0 \
	mdbcomp.date : feedback.m \
	mdbcomp.int0 \
	assoc_list.int3 \
	builtin.int3 \
	exception.int3 \
	float.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	svmap.int3 \
	unit.int3 \
	univ.int3 \
	mdbcomp.program_representation.int3 \
	array.int3 \
	bitmap.int3 \
	bool.int3 \
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
	stm_builtin.int3 \
	store.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3

mdbcomp.feedback.date0 \
	mdbcomp.date0 : feedback.m \
	assoc_list.int3 \
	builtin.int3 \
	exception.int3 \
	float.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	svmap.int3 \
	unit.int3 \
	univ.int3 \
	mdbcomp.program_representation.int3 \
	array.int3 \
	bitmap.int3 \
	bool.int3 \
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
	stm_builtin.int3 \
	store.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3



mdbcomp.feedback.$O :  \
	stm_builtin.mh \
	stm_builtin.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	array.mh \
	array.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh \
	string.mh \
	io.mh \
	io.mh \
	mdbcomp.mh



mdbcomp.feedback.pic_o :  \
	stm_builtin.mh \
	stm_builtin.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	array.mh \
	array.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh \
	string.mh \
	io.mh \
	io.mh \
	mdbcomp.mh


mdbcomp.feedback.int0 : mdbcomp.feedback.date0
	@:
mdbcomp.feedback.int : mdbcomp.feedback.date
	@:
mdbcomp.feedback.int2 : mdbcomp.feedback.date
	@:
mdbcomp.feedback.int3 : mdbcomp.feedback.date3
	@:
mdbcomp.feedback.opt : mdbcomp.feedback.optdate
	@:
mdbcomp.feedback.trans_opt : mdbcomp.feedback.trans_opt_date
	@:

mdbcomp.feedback.date0 : feedback.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) feedback.m
mdbcomp.feedback.date : feedback.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) feedback.m
mdbcomp.feedback.date3 : feedback.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) feedback.m
mdbcomp.feedback.optdate : feedback.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) feedback.m
mdbcomp.feedback.trans_opt_date : feedback.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) feedback.m
mdbcomp.feedback.c_date : feedback.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) feedback.m $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
mdbcomp.feedback.s_date : feedback.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only feedback.m $(ERR_REDIRECT)
mdbcomp.feedback.pic_s_date : feedback.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" feedback.m $(ERR_REDIRECT)
endif # TARGET_ASM
mdbcomp.feedback.il_date : feedback.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only feedback.m $(ERR_REDIRECT)
mdbcomp.feedback.java_date : feedback.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only feedback.m $(ERR_REDIRECT)
