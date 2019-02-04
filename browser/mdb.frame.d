

mdb.frame.optdate mdb.frame.trans_opt_date frame.err mdb.frame.c_date mdb.frame.s_date mdb.frame.pic_s_date mdb.frame.il_date mdb.frame.java_date : frame.m \
	mdb.int0 \
	assoc_list.int \
	builtin.int \
	int.int \
	list.int \
	mdbcomp.int \
	pair.int \
	private_builtin.int \
	string.int \
	mdb.util.int \
	array.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	io.int2 \
	map.int2 \
	maybe.int2 \
	ops.int2 \
	random.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2 \
	mdbcomp.prim_data.int2

ifeq ($(TARGET_ASM),yes)
mdb.frame.mh mdb.frame.mih : mdb.frame.s
else
mdb.frame.mh mdb.frame.mih : mdb.frame.c
endif

ifeq ($(TARGET_ASM),yes)
mdb.frame.module_dep : mdb.frame.s
else
 ifeq ($(findstring il,$(GRADE)),il)
mdb.frame.module_dep : mdb.frame.il
  ifeq ($(findstring java,$(GRADE)),java)
mdb.frame.module_dep : mdb.frame.java
  else
mdb.frame.module_dep : mdb.frame.c
  endif
 endif
endif

mdb.frame.date mdb.frame.date0 \
	mdb.date : frame.m \
	mdb.int0 \
	assoc_list.int3 \
	builtin.int3 \
	int.int3 \
	list.int3 \
	mdbcomp.int3 \
	pair.int3 \
	private_builtin.int3 \
	string.int3 \
	mdb.util.int3 \
	array.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3 \
	mdbcomp.prim_data.int3

mdb.frame.date0 \
	mdb.date0 : frame.m \
	assoc_list.int3 \
	builtin.int3 \
	int.int3 \
	list.int3 \
	mdbcomp.int3 \
	pair.int3 \
	private_builtin.int3 \
	string.int3 \
	mdb.util.int3 \
	array.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3 \
	mdbcomp.prim_data.int3



mdb.frame.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	mdb.mh



mdb.frame.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	mdb.mh


mdb.frame.int0 : mdb.frame.date0
	@:
mdb.frame.int : mdb.frame.date
	@:
mdb.frame.int2 : mdb.frame.date
	@:
mdb.frame.int3 : mdb.frame.date3
	@:
mdb.frame.opt : mdb.frame.optdate
	@:
mdb.frame.trans_opt : mdb.frame.trans_opt_date
	@:

mdb.frame.date0 : frame.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) mdb.frame
mdb.frame.date : frame.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) mdb.frame
mdb.frame.date3 : frame.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) mdb.frame
mdb.frame.optdate : frame.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) mdb.frame
mdb.frame.trans_opt_date : frame.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) mdb.frame
mdb.frame.c_date : frame.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) mdb.frame $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
mdb.frame.s_date : frame.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only mdb.frame $(ERR_REDIRECT)
mdb.frame.pic_s_date : frame.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" mdb.frame $(ERR_REDIRECT)
endif # TARGET_ASM
mdb.frame.il_date : frame.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only mdb.frame $(ERR_REDIRECT)
mdb.frame.java_date : frame.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only mdb.frame $(ERR_REDIRECT)
