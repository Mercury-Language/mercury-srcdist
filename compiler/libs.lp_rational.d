

libs.lp_rational.optdate libs.lp_rational.trans_opt_date lp_rational.err libs.lp_rational.c_date libs.lp_rational.s_date libs.lp_rational.pic_s_date libs.lp_rational.il_date libs.lp_rational.java_date : lp_rational.m \
	libs.int0 \
	assoc_list.int \
	bool.int \
	builtin.int \
	int.int \
	io.int \
	list.int \
	map.int \
	maybe.int \
	pair.int \
	private_builtin.int \
	set.int \
	solutions.int \
	string.int \
	svmap.int \
	svset.int \
	term.int \
	varset.int \
	libs.compiler_util.int \
	libs.rat.int \
	array.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	ops.int2 \
	pretty_printer.int2 \
	random.int2 \
	set_ordlist.int2 \
	stream.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

ifeq ($(TARGET_ASM),yes)
libs.lp_rational.mh libs.lp_rational.mih : libs.lp_rational.s
else
libs.lp_rational.mh libs.lp_rational.mih : libs.lp_rational.c
endif

ifeq ($(TARGET_ASM),yes)
libs.lp_rational.module_dep : libs.lp_rational.s
else
 ifeq ($(findstring il,$(GRADE)),il)
libs.lp_rational.module_dep : libs.lp_rational.il
  ifeq ($(findstring java,$(GRADE)),java)
libs.lp_rational.module_dep : mercury/libs_/lp_rational.java
  else
libs.lp_rational.module_dep : libs.lp_rational.c
  endif
 endif
endif

libs.lp_rational.date libs.lp_rational.date0 \
	libs.date : lp_rational.m \
	libs.int0 \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	pair.int3 \
	private_builtin.int3 \
	set.int3 \
	solutions.int3 \
	string.int3 \
	svmap.int3 \
	svset.int3 \
	term.int3 \
	varset.int3 \
	libs.compiler_util.int3 \
	libs.rat.int3 \
	array.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	set_ordlist.int3 \
	stream.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

libs.lp_rational.date0 \
	libs.date0 : lp_rational.m \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	pair.int3 \
	private_builtin.int3 \
	set.int3 \
	solutions.int3 \
	string.int3 \
	svmap.int3 \
	svset.int3 \
	term.int3 \
	varset.int3 \
	libs.compiler_util.int3 \
	libs.rat.int3 \
	array.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	set_ordlist.int3 \
	stream.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



libs.lp_rational.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



libs.lp_rational.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


libs.lp_rational.int0 : libs.lp_rational.date0
	@:
libs.lp_rational.int : libs.lp_rational.date
	@:
libs.lp_rational.int2 : libs.lp_rational.date
	@:
libs.lp_rational.int3 : libs.lp_rational.date3
	@:
libs.lp_rational.opt : libs.lp_rational.optdate
	@:
libs.lp_rational.trans_opt : libs.lp_rational.trans_opt_date
	@:

libs.lp_rational.date0 : lp_rational.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) libs.lp_rational
libs.lp_rational.date : lp_rational.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) libs.lp_rational
libs.lp_rational.date3 : lp_rational.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) libs.lp_rational
libs.lp_rational.optdate : lp_rational.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) libs.lp_rational
libs.lp_rational.trans_opt_date : lp_rational.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) libs.lp_rational
libs.lp_rational.c_date : lp_rational.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) libs.lp_rational $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
libs.lp_rational.s_date : lp_rational.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only libs.lp_rational $(ERR_REDIRECT)
libs.lp_rational.pic_s_date : lp_rational.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" libs.lp_rational $(ERR_REDIRECT)
endif # TARGET_ASM
libs.lp_rational.il_date : lp_rational.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only libs.lp_rational $(ERR_REDIRECT)
libs.lp_rational.java_date : lp_rational.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only libs.lp_rational $(ERR_REDIRECT)
