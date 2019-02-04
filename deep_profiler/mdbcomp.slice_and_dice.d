

mdbcomp.slice_and_dice.optdate mdbcomp.slice_and_dice.trans_opt_date slice_and_dice.err mdbcomp.slice_and_dice.c_date mdbcomp.slice_and_dice.s_date mdbcomp.slice_and_dice.pic_s_date mdbcomp.slice_and_dice.il_date mdbcomp.slice_and_dice.java_date : slice_and_dice.m \
	mdbcomp.int0 \
	builtin.int \
	float.int \
	int.int \
	io.int \
	list.int \
	map.int \
	maybe.int \
	pair.int \
	private_builtin.int \
	require.int \
	set.int \
	string.int \
	svmap.int \
	mdbcomp.prim_data.int \
	mdbcomp.program_representation.int \
	mdbcomp.rtti_access.int \
	mdbcomp.trace_counts.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	ops.int2 \
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
	univ.int2

ifeq ($(TARGET_ASM),yes)
mdbcomp.slice_and_dice.mh mdbcomp.slice_and_dice.mih : mdbcomp.slice_and_dice.s
else
mdbcomp.slice_and_dice.mh mdbcomp.slice_and_dice.mih : mdbcomp.slice_and_dice.c
endif

ifeq ($(TARGET_ASM),yes)
mdbcomp.slice_and_dice.module_dep : mdbcomp.slice_and_dice.s
else
 ifeq ($(findstring il,$(GRADE)),il)
mdbcomp.slice_and_dice.module_dep : mdbcomp.slice_and_dice.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
mdbcomp.slice_and_dice.module_dep : jmercury/mdbcomp__slice_and_dice.java
  else
mdbcomp.slice_and_dice.module_dep : mdbcomp.slice_and_dice.c
  endif
 endif
endif

mdbcomp.slice_and_dice.date mdbcomp.slice_and_dice.date0 \
	mdbcomp.date : slice_and_dice.m \
	mdbcomp.int0 \
	builtin.int3 \
	float.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	svmap.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	ops.int3 \
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
	univ.int3

mdbcomp.slice_and_dice.date0 \
	mdbcomp.date0 : slice_and_dice.m \
	builtin.int3 \
	float.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	svmap.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	ops.int3 \
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
	univ.int3



mdbcomp.slice_and_dice.$O :  \
	array.mh \
	array.mh \
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
	mdbcomp.mh \
	mdbcomp.slice_and_dice.mh



mdbcomp.slice_and_dice.pic_o :  \
	array.mh \
	array.mh \
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
	mdbcomp.mh \
	mdbcomp.slice_and_dice.mh


mdbcomp.slice_and_dice.int0 : mdbcomp.slice_and_dice.date0
	@:
mdbcomp.slice_and_dice.int : mdbcomp.slice_and_dice.date
	@:
mdbcomp.slice_and_dice.int2 : mdbcomp.slice_and_dice.date
	@:
mdbcomp.slice_and_dice.int3 : mdbcomp.slice_and_dice.date3
	@:
mdbcomp.slice_and_dice.opt : mdbcomp.slice_and_dice.optdate
	@:
mdbcomp.slice_and_dice.trans_opt : mdbcomp.slice_and_dice.trans_opt_date
	@:

mdbcomp.slice_and_dice.date0 : slice_and_dice.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) slice_and_dice.m
mdbcomp.slice_and_dice.date : slice_and_dice.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) slice_and_dice.m
mdbcomp.slice_and_dice.date3 : slice_and_dice.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) slice_and_dice.m
mdbcomp.slice_and_dice.optdate : slice_and_dice.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) slice_and_dice.m
mdbcomp.slice_and_dice.trans_opt_date : slice_and_dice.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) slice_and_dice.m
mdbcomp.slice_and_dice.c_date : slice_and_dice.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) slice_and_dice.m $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
mdbcomp.slice_and_dice.s_date : slice_and_dice.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only slice_and_dice.m $(ERR_REDIRECT)
mdbcomp.slice_and_dice.pic_s_date : slice_and_dice.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" slice_and_dice.m $(ERR_REDIRECT)
endif # TARGET_ASM
mdbcomp.slice_and_dice.il_date : slice_and_dice.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only slice_and_dice.m $(ERR_REDIRECT)
mdbcomp.slice_and_dice.java_date : slice_and_dice.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only slice_and_dice.m $(ERR_REDIRECT)
