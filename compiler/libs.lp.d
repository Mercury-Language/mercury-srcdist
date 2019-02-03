

libs.lp.optdate libs.lp.trans_opt_date lp.err libs.lp.c_date libs.lp.s_date libs.lp.pic_s_date libs.lp.il_date libs.lp.java_date : lp.m \
	libs.int0 \
	bool.int \
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
	solutions.int \
	string.int \
	term.int \
	varset.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
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
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

ifeq ($(TARGET_ASM),yes)
libs.lp.mh libs.lp.mih : libs.lp.s
else
libs.lp.mh libs.lp.mih : libs.lp.c
endif

ifeq ($(TARGET_ASM),yes)
libs.lp.module_dep : libs.lp.s
else
 ifeq ($(findstring il,$(GRADE)),il)
libs.lp.module_dep : libs.lp.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
libs.lp.module_dep : jmercury/libs__lp.java
  else
libs.lp.module_dep : libs.lp.c
  endif
 endif
endif

libs.lp.date libs.lp.date0 \
	libs.date : lp.m \
	libs.int0 \
	bool.int3 \
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
	solutions.int3 \
	string.int3 \
	term.int3 \
	varset.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
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
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

libs.lp.date0 \
	libs.date0 : lp.m \
	bool.int3 \
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
	solutions.int3 \
	string.int3 \
	term.int3 \
	varset.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
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
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



libs.lp.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh



libs.lp.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh


libs.lp.int0 : libs.lp.date0
	@:
libs.lp.int : libs.lp.date
	@:
libs.lp.int2 : libs.lp.date
	@:
libs.lp.int3 : libs.lp.date3
	@:
libs.lp.opt : libs.lp.optdate
	@:
libs.lp.trans_opt : libs.lp.trans_opt_date
	@:

libs.lp.date0 : lp.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) libs.lp
libs.lp.date : lp.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) libs.lp
libs.lp.date3 : lp.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) libs.lp
libs.lp.optdate : lp.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) libs.lp
libs.lp.trans_opt_date : lp.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) libs.lp
libs.lp.c_date : lp.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) libs.lp $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
libs.lp.s_date : lp.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only libs.lp $(ERR_REDIRECT)
libs.lp.pic_s_date : lp.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" libs.lp $(ERR_REDIRECT)
endif # TARGET_ASM
libs.lp.il_date : lp.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only libs.lp $(ERR_REDIRECT)
libs.lp.java_date : lp.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only libs.lp $(ERR_REDIRECT)
