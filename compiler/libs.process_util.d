

libs.process_util.optdate libs.process_util.trans_opt_date process_util.err libs.process_util.c_date libs.process_util.s_date libs.process_util.pic_s_date libs.process_util.il_date libs.process_util.java_date : process_util.m \
	libs.int0 \
	bool.int \
	builtin.int \
	io.int \
	maybe.int \
	private_builtin.int \
	require.int \
	assoc_list.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	list.int2 \
	map.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	rtti_implementation.int2 \
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
libs.process_util.mh libs.process_util.mih : libs.process_util.s
else
libs.process_util.mh libs.process_util.mih : libs.process_util.c
endif

ifeq ($(TARGET_ASM),yes)
libs.process_util.module_dep : libs.process_util.s
else
 ifeq ($(findstring il,$(GRADE)),il)
libs.process_util.module_dep : libs.process_util.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
libs.process_util.module_dep : jmercury/libs__process_util.java
  else
libs.process_util.module_dep : libs.process_util.c
  endif
 endif
endif

libs.process_util.date libs.process_util.date0 \
	libs.date : process_util.m \
	libs.int0 \
	bool.int3 \
	builtin.int3 \
	io.int3 \
	maybe.int3 \
	private_builtin.int3 \
	require.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	list.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

libs.process_util.date0 \
	libs.date0 : process_util.m \
	bool.int3 \
	builtin.int3 \
	io.int3 \
	maybe.int3 \
	private_builtin.int3 \
	require.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	list.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



libs.process_util.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	libs.process_util.mh



libs.process_util.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	libs.process_util.mh


libs.process_util.int0 : libs.process_util.date0
	@:
libs.process_util.int : libs.process_util.date
	@:
libs.process_util.int2 : libs.process_util.date
	@:
libs.process_util.int3 : libs.process_util.date3
	@:
libs.process_util.opt : libs.process_util.optdate
	@:
libs.process_util.trans_opt : libs.process_util.trans_opt_date
	@:

libs.process_util.date0 : process_util.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) libs.process_util
libs.process_util.date : process_util.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) libs.process_util
libs.process_util.date3 : process_util.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) libs.process_util
libs.process_util.optdate : process_util.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) libs.process_util
libs.process_util.trans_opt_date : process_util.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) libs.process_util
libs.process_util.c_date : process_util.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) libs.process_util $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
libs.process_util.s_date : process_util.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only libs.process_util $(ERR_REDIRECT)
libs.process_util.pic_s_date : process_util.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" libs.process_util $(ERR_REDIRECT)
endif # TARGET_ASM
libs.process_util.il_date : process_util.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only libs.process_util $(ERR_REDIRECT)
libs.process_util.java_date : process_util.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only libs.process_util $(ERR_REDIRECT)
