

mdb.help.optdate mdb.help.trans_opt_date help.err mdb.help.c_date mdb.help.s_date mdb.help.pic_s_date mdb.help.il_date mdb.help.java_date : help.m \
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
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	univ.int2

ifeq ($(TARGET_ASM),yes)
mdb.help.mh mdb.help.mih : mdb.help.s
else
mdb.help.mh mdb.help.mih : mdb.help.c
endif

ifeq ($(TARGET_ASM),yes)
mdb.help.module_dep : mdb.help.s
else
 ifeq ($(findstring il,$(GRADE)),il)
mdb.help.module_dep : mdb.help.il
  ifeq ($(findstring java,$(GRADE)),java)
mdb.help.module_dep : mercury/mdb_/help.java
  else
mdb.help.module_dep : mdb.help.c
  endif
 endif
endif

mdb.help.date mdb.help.date0 \
	mdb.date : help.m \
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
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	univ.int3

mdb.help.date0 \
	mdb.date0 : help.m \
	builtin.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	type_desc.int3 \
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
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	univ.int3



mdb.help.$O :  \
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
	mdb.help.mh



mdb.help.pic_o :  \
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
	mdb.help.mh


mdb.help.int0 : mdb.help.date0
	@:
mdb.help.int : mdb.help.date
	@:
mdb.help.int2 : mdb.help.date
	@:
mdb.help.int3 : mdb.help.date3
	@:
mdb.help.opt : mdb.help.optdate
	@:
mdb.help.trans_opt : mdb.help.trans_opt_date
	@:

mdb.help.date0 : help.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) mdb.help
mdb.help.date : help.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) mdb.help
mdb.help.date3 : help.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) mdb.help
mdb.help.optdate : help.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) mdb.help
mdb.help.trans_opt_date : help.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) mdb.help
mdb.help.c_date : help.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) mdb.help $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
mdb.help.s_date : help.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only mdb.help $(ERR_REDIRECT)
mdb.help.pic_s_date : help.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" mdb.help $(ERR_REDIRECT)
endif # TARGET_ASM
mdb.help.il_date : help.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only mdb.help $(ERR_REDIRECT)
mdb.help.java_date : help.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only mdb.help $(ERR_REDIRECT)
