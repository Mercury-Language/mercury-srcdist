

mdb.util.optdate mdb.util.trans_opt_date util.err mdb.util.c_date mdb.util.s_date mdb.util.pic_s_date mdb.util.il_date mdb.util.java_date : util.m \
	mdb.int0 \
	bool.int \
	builtin.int \
	io.int \
	list.int \
	mdbcomp.int \
	private_builtin.int \
	require.int \
	mdbcomp.prim_data.int \
	assoc_list.int2 \
	bitmap.int2 \
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
	type_desc.int2 \
	univ.int2

ifeq ($(TARGET_ASM),yes)
mdb.util.mh mdb.util.mih : mdb.util.s
else
mdb.util.mh mdb.util.mih : mdb.util.c
endif

ifeq ($(TARGET_ASM),yes)
mdb.util.module_dep : mdb.util.s
else
 ifeq ($(findstring il,$(GRADE)),il)
mdb.util.module_dep : mdb.util.il
  ifeq ($(findstring java,$(GRADE)),java)
mdb.util.module_dep : mdb.util.java
  else
mdb.util.module_dep : mdb.util.c
  endif
 endif
endif

mdb.util.date mdb.util.date0 \
	mdb.date : util.m \
	mdb.int0 \
	bool.int3 \
	builtin.int3 \
	io.int3 \
	list.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	require.int3 \
	mdbcomp.prim_data.int3 \
	assoc_list.int3 \
	bitmap.int3 \
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
	type_desc.int3 \
	univ.int3

mdb.util.date0 \
	mdb.date0 : util.m \
	bool.int3 \
	builtin.int3 \
	io.int3 \
	list.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	require.int3 \
	mdbcomp.prim_data.int3 \
	assoc_list.int3 \
	bitmap.int3 \
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
	type_desc.int3 \
	univ.int3



mdb.util.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	mdb.mh \
	mdb.util.mh



mdb.util.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	mdb.mh \
	mdb.util.mh


mdb.util.int0 : mdb.util.date0
	@:
mdb.util.int : mdb.util.date
	@:
mdb.util.int2 : mdb.util.date
	@:
mdb.util.int3 : mdb.util.date3
	@:
mdb.util.opt : mdb.util.optdate
	@:
mdb.util.trans_opt : mdb.util.trans_opt_date
	@:

mdb.util.date0 : util.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) mdb.util
mdb.util.date : util.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) mdb.util
mdb.util.date3 : util.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) mdb.util
mdb.util.optdate : util.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) mdb.util
mdb.util.trans_opt_date : util.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) mdb.util
mdb.util.c_date : util.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) mdb.util $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
mdb.util.s_date : util.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only mdb.util $(ERR_REDIRECT)
mdb.util.pic_s_date : util.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" mdb.util $(ERR_REDIRECT)
endif # TARGET_ASM
mdb.util.il_date : util.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only mdb.util $(ERR_REDIRECT)
mdb.util.java_date : util.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only mdb.util $(ERR_REDIRECT)
