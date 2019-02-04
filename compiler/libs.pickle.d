

libs.pickle.optdate libs.pickle.trans_opt_date pickle.err libs.pickle.c_date libs.pickle.s_date libs.pickle.pic_s_date libs.pickle.il_date libs.pickle.java_date : pickle.m \
	libs.int0 \
	bitmap.int \
	bool.int \
	builtin.int \
	char.int \
	construct.int \
	deconstruct.int \
	exception.int \
	int.int \
	io.int \
	list.int \
	map.int \
	private_builtin.int \
	string.int \
	type_desc.int \
	univ.int \
	libs.compiler_util.int \
	array.int2 \
	assoc_list.int2 \
	enum.int2 \
	maybe.int2 \
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
	tree234.int2

ifeq ($(TARGET_ASM),yes)
libs.pickle.mh libs.pickle.mih : libs.pickle.s
else
libs.pickle.mh libs.pickle.mih : libs.pickle.c
endif

ifeq ($(TARGET_ASM),yes)
libs.pickle.module_dep : libs.pickle.s
else
 ifeq ($(findstring il,$(GRADE)),il)
libs.pickle.module_dep : libs.pickle.il
  ifeq ($(findstring java,$(GRADE)),java)
libs.pickle.module_dep : jmercury/libs__pickle.java
  else
libs.pickle.module_dep : libs.pickle.c
  endif
 endif
endif

libs.pickle.date libs.pickle.date0 \
	libs.date : pickle.m \
	libs.int0 \
	bitmap.int3 \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	exception.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	private_builtin.int3 \
	string.int3 \
	type_desc.int3 \
	univ.int3 \
	libs.compiler_util.int3 \
	array.int3 \
	assoc_list.int3 \
	enum.int3 \
	maybe.int3 \
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
	tree234.int3

libs.pickle.date0 \
	libs.date0 : pickle.m \
	bitmap.int3 \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	exception.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	private_builtin.int3 \
	string.int3 \
	type_desc.int3 \
	univ.int3 \
	libs.compiler_util.int3 \
	array.int3 \
	assoc_list.int3 \
	enum.int3 \
	maybe.int3 \
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
	tree234.int3



libs.pickle.$O :  \
	array.mh \
	array.mh \
	stm_builtin.mh \
	stm_builtin.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	libs.pickle.mh



libs.pickle.pic_o :  \
	array.mh \
	array.mh \
	stm_builtin.mh \
	stm_builtin.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	libs.pickle.mh


libs.pickle.int0 : libs.pickle.date0
	@:
libs.pickle.int : libs.pickle.date
	@:
libs.pickle.int2 : libs.pickle.date
	@:
libs.pickle.int3 : libs.pickle.date3
	@:
libs.pickle.opt : libs.pickle.optdate
	@:
libs.pickle.trans_opt : libs.pickle.trans_opt_date
	@:

libs.pickle.date0 : pickle.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) libs.pickle
libs.pickle.date : pickle.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) libs.pickle
libs.pickle.date3 : pickle.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) libs.pickle
libs.pickle.optdate : pickle.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) libs.pickle
libs.pickle.trans_opt_date : pickle.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) libs.pickle
libs.pickle.c_date : pickle.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) libs.pickle $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
libs.pickle.s_date : pickle.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only libs.pickle $(ERR_REDIRECT)
libs.pickle.pic_s_date : pickle.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" libs.pickle $(ERR_REDIRECT)
endif # TARGET_ASM
libs.pickle.il_date : pickle.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only libs.pickle $(ERR_REDIRECT)
libs.pickle.java_date : pickle.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only libs.pickle $(ERR_REDIRECT)
