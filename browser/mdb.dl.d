

mdb.dl.optdate mdb.dl.trans_opt_date dl.err mdb.dl.c_date mdb.dl.s_date mdb.dl.pic_s_date mdb.dl.il_date mdb.dl.java_date : dl.m \
	mdb.int0 \
	builtin.int \
	int.int \
	io.int \
	list.int \
	mdbcomp.int \
	private_builtin.int \
	require.int \
	string.int \
	type_desc.int \
	mdb.name_mangle.int \
	array.int2 \
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
	pretty_printer.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	univ.int2

ifeq ($(TARGET_ASM),yes)
mdb.dl.mh mdb.dl.mih : mdb.dl.s
else
mdb.dl.mh mdb.dl.mih : mdb.dl.c
endif

ifeq ($(TARGET_ASM),yes)
mdb.dl.module_dep : mdb.dl.s
else
 ifeq ($(findstring il,$(GRADE)),il)
mdb.dl.module_dep : mdb.dl.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
mdb.dl.module_dep : jmercury/mdb__dl.java
  else
mdb.dl.module_dep : mdb.dl.c
  endif
 endif
endif

mdb.dl.date mdb.dl.date0 \
	mdb.date : dl.m \
	mdb.int0 \
	builtin.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	type_desc.int3 \
	mdb.name_mangle.int3 \
	array.int3 \
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
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	univ.int3

mdb.dl.date0 \
	mdb.date0 : dl.m \
	builtin.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	type_desc.int3 \
	mdb.name_mangle.int3 \
	array.int3 \
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
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	univ.int3



mdb.dl.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	mdb.mh \
	mdb.dl.mh



mdb.dl.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	mdb.mh \
	mdb.dl.mh


mdb.dl.int0 : mdb.dl.date0
	@:
mdb.dl.int : mdb.dl.date
	@:
mdb.dl.int2 : mdb.dl.date
	@:
mdb.dl.int3 : mdb.dl.date3
	@:
mdb.dl.opt : mdb.dl.optdate
	@:
mdb.dl.trans_opt : mdb.dl.trans_opt_date
	@:

mdb.dl.date0 : dl.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) mdb.dl
mdb.dl.date : dl.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) mdb.dl
mdb.dl.date3 : dl.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) mdb.dl
mdb.dl.optdate : dl.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) mdb.dl
mdb.dl.trans_opt_date : dl.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) mdb.dl
mdb.dl.c_date : dl.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) mdb.dl $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
mdb.dl.s_date : dl.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only mdb.dl $(ERR_REDIRECT)
mdb.dl.pic_s_date : dl.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" mdb.dl $(ERR_REDIRECT)
endif # TARGET_ASM
mdb.dl.il_date : dl.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only mdb.dl $(ERR_REDIRECT)
mdb.dl.java_date : dl.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only mdb.dl $(ERR_REDIRECT)
