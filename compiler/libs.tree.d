

libs.tree.optdate libs.tree.trans_opt_date tree.err libs.tree.c_date libs.tree.s_date libs.tree.pic_s_date libs.tree.il_date libs.tree.java_date : tree.m \
	libs.int0 \
	bool.int \
	builtin.int \
	list.int \
	private_builtin.int \
	assoc_list.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	io.int2 \
	map.int2 \
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
libs.tree.mh libs.tree.mih : libs.tree.s
else
libs.tree.mh libs.tree.mih : libs.tree.c
endif

ifeq ($(TARGET_ASM),yes)
libs.tree.module_dep : libs.tree.s
else
 ifeq ($(findstring il,$(GRADE)),il)
libs.tree.module_dep : libs.tree.il
  ifeq ($(findstring java,$(GRADE)),java)
libs.tree.module_dep : libs.tree.java
  else
libs.tree.module_dep : libs.tree.c
  endif
 endif
endif

libs.tree.date libs.tree.date0 \
	libs.date : tree.m \
	libs.int0 \
	bool.int3 \
	builtin.int3 \
	list.int3 \
	private_builtin.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	map.int3 \
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

libs.tree.date0 \
	libs.date0 : tree.m \
	bool.int3 \
	builtin.int3 \
	list.int3 \
	private_builtin.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	map.int3 \
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



libs.tree.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



libs.tree.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


libs.tree.int0 : libs.tree.date0
	@:
libs.tree.int : libs.tree.date
	@:
libs.tree.int2 : libs.tree.date
	@:
libs.tree.int3 : libs.tree.date3
	@:
libs.tree.opt : libs.tree.optdate
	@:
libs.tree.trans_opt : libs.tree.trans_opt_date
	@:

libs.tree.date0 : tree.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) libs.tree
libs.tree.date : tree.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) libs.tree
libs.tree.date3 : tree.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) libs.tree
libs.tree.optdate : tree.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) libs.tree
libs.tree.trans_opt_date : tree.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) libs.tree
libs.tree.c_date : tree.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) libs.tree $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
libs.tree.s_date : tree.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only libs.tree $(ERR_REDIRECT)
libs.tree.pic_s_date : tree.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" libs.tree $(ERR_REDIRECT)
endif # TARGET_ASM
libs.tree.il_date : tree.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only libs.tree $(ERR_REDIRECT)
libs.tree.java_date : tree.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only libs.tree $(ERR_REDIRECT)
