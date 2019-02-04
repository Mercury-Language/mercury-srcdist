

libs.timestamp.optdate libs.timestamp.trans_opt_date timestamp.err libs.timestamp.c_date libs.timestamp.s_date libs.timestamp.pic_s_date libs.timestamp.il_date libs.timestamp.java_date : timestamp.m \
	libs.int0 \
	builtin.int \
	int.int \
	maybe.int \
	private_builtin.int \
	string.int \
	time.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	io.int2 \
	list.int2 \
	map.int2 \
	ops.int2 \
	pair.int2 \
	random.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

ifeq ($(TARGET_ASM),yes)
libs.timestamp.mh libs.timestamp.mih : libs.timestamp.s
else
libs.timestamp.mh libs.timestamp.mih : libs.timestamp.c
endif

ifeq ($(TARGET_ASM),yes)
libs.timestamp.module_dep : libs.timestamp.s
else
 ifeq ($(findstring il,$(GRADE)),il)
libs.timestamp.module_dep : libs.timestamp.il
  ifeq ($(findstring java,$(GRADE)),java)
libs.timestamp.module_dep : libs.timestamp.java
  else
libs.timestamp.module_dep : libs.timestamp.c
  endif
 endif
endif

libs.timestamp.date libs.timestamp.date0 \
	libs.date : timestamp.m \
	libs.int0 \
	builtin.int3 \
	int.int3 \
	maybe.int3 \
	private_builtin.int3 \
	string.int3 \
	time.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

libs.timestamp.date0 \
	libs.date0 : timestamp.m \
	builtin.int3 \
	int.int3 \
	maybe.int3 \
	private_builtin.int3 \
	string.int3 \
	time.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



libs.timestamp.$O :  \
	array.mh \
	array.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	time.mh \
	time.mh \
	libs.timestamp.mh



libs.timestamp.pic_o :  \
	array.mh \
	array.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	time.mh \
	time.mh \
	libs.timestamp.mh


libs.timestamp.int0 : libs.timestamp.date0
	@:
libs.timestamp.int : libs.timestamp.date
	@:
libs.timestamp.int2 : libs.timestamp.date
	@:
libs.timestamp.int3 : libs.timestamp.date3
	@:
libs.timestamp.opt : libs.timestamp.optdate
	@:
libs.timestamp.trans_opt : libs.timestamp.trans_opt_date
	@:

libs.timestamp.date0 : timestamp.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) libs.timestamp
libs.timestamp.date : timestamp.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) libs.timestamp
libs.timestamp.date3 : timestamp.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) libs.timestamp
libs.timestamp.optdate : timestamp.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) libs.timestamp
libs.timestamp.trans_opt_date : timestamp.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) libs.timestamp
libs.timestamp.c_date : timestamp.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) libs.timestamp $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
libs.timestamp.s_date : timestamp.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only libs.timestamp $(ERR_REDIRECT)
libs.timestamp.pic_s_date : timestamp.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" libs.timestamp $(ERR_REDIRECT)
endif # TARGET_ASM
libs.timestamp.il_date : timestamp.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only libs.timestamp $(ERR_REDIRECT)
libs.timestamp.java_date : timestamp.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only libs.timestamp $(ERR_REDIRECT)
