

libs.atsort.optdate libs.atsort.trans_opt_date atsort.err libs.atsort.c_date libs.atsort.s_date libs.atsort.pic_s_date libs.atsort.il_date libs.atsort.java_date : atsort.m \
	libs.int0 \
	builtin.int \
	list.int \
	map.int \
	private_builtin.int \
	libs.compiler_util.int \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	io.int2 \
	maybe.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
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
libs.atsort.mh libs.atsort.mih : libs.atsort.s
else
libs.atsort.mh libs.atsort.mih : libs.atsort.c
endif

ifeq ($(TARGET_ASM),yes)
libs.atsort.module_dep : libs.atsort.s
else
 ifeq ($(findstring il,$(GRADE)),il)
libs.atsort.module_dep : libs.atsort.il
  ifeq ($(findstring java,$(GRADE)),java)
libs.atsort.module_dep : mercury/libs_/atsort.java
  else
libs.atsort.module_dep : libs.atsort.c
  endif
 endif
endif

libs.atsort.date libs.atsort.date0 \
	libs.date : atsort.m \
	libs.int0 \
	builtin.int3 \
	list.int3 \
	map.int3 \
	private_builtin.int3 \
	libs.compiler_util.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

libs.atsort.date0 \
	libs.date0 : atsort.m \
	builtin.int3 \
	list.int3 \
	map.int3 \
	private_builtin.int3 \
	libs.compiler_util.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



libs.atsort.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



libs.atsort.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


libs.atsort.int0 : libs.atsort.date0
	@:
libs.atsort.int : libs.atsort.date
	@:
libs.atsort.int2 : libs.atsort.date
	@:
libs.atsort.int3 : libs.atsort.date3
	@:
libs.atsort.opt : libs.atsort.optdate
	@:
libs.atsort.trans_opt : libs.atsort.trans_opt_date
	@:

libs.atsort.date0 : atsort.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) libs.atsort
libs.atsort.date : atsort.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) libs.atsort
libs.atsort.date3 : atsort.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) libs.atsort
libs.atsort.optdate : atsort.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) libs.atsort
libs.atsort.trans_opt_date : atsort.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) libs.atsort
libs.atsort.c_date : atsort.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) libs.atsort $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
libs.atsort.s_date : atsort.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only libs.atsort $(ERR_REDIRECT)
libs.atsort.pic_s_date : atsort.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" libs.atsort $(ERR_REDIRECT)
endif # TARGET_ASM
libs.atsort.il_date : atsort.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only libs.atsort $(ERR_REDIRECT)
libs.atsort.java_date : atsort.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only libs.atsort $(ERR_REDIRECT)
