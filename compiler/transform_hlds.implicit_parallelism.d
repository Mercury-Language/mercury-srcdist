

transform_hlds.implicit_parallelism.optdate transform_hlds.implicit_parallelism.trans_opt_date implicit_parallelism.err transform_hlds.implicit_parallelism.c_date transform_hlds.implicit_parallelism.s_date transform_hlds.implicit_parallelism.pic_s_date transform_hlds.implicit_parallelism.il_date transform_hlds.implicit_parallelism.java_date : implicit_parallelism.m transform_hlds.implicit_parallelism.int0 \
	transform_hlds.int0 \
	builtin.int \
	check_hlds.int \
	hlds.int \
	libs.int \
	mdbcomp.int \
	parse_tree.int \
	private_builtin.int \
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
	maybe.int2 \
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
transform_hlds.implicit_parallelism.mh transform_hlds.implicit_parallelism.mih : transform_hlds.implicit_parallelism.s
else
transform_hlds.implicit_parallelism.mh transform_hlds.implicit_parallelism.mih : transform_hlds.implicit_parallelism.c
endif

ifeq ($(TARGET_ASM),yes)
transform_hlds.implicit_parallelism.module_dep : transform_hlds.implicit_parallelism.s
else
 ifeq ($(findstring il,$(GRADE)),il)
transform_hlds.implicit_parallelism.module_dep : transform_hlds.implicit_parallelism.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
transform_hlds.implicit_parallelism.module_dep : jmercury/transform_hlds__implicit_parallelism.java
  else
transform_hlds.implicit_parallelism.module_dep : transform_hlds.implicit_parallelism.c
  endif
 endif
endif

transform_hlds.implicit_parallelism.date transform_hlds.implicit_parallelism.date0 \
	transform_hlds.date : implicit_parallelism.m \
	transform_hlds.int0 \
	builtin.int3 \
	check_hlds.int3 \
	hlds.int3 \
	libs.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
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
	maybe.int3 \
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

transform_hlds.implicit_parallelism.date0 \
	transform_hlds.date0 : implicit_parallelism.m \
	builtin.int3 \
	check_hlds.int3 \
	hlds.int3 \
	libs.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
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
	maybe.int3 \
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



transform_hlds.implicit_parallelism.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh



transform_hlds.implicit_parallelism.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh


transform_hlds.implicit_parallelism.int0 : transform_hlds.implicit_parallelism.date0
	@:
transform_hlds.implicit_parallelism.int : transform_hlds.implicit_parallelism.date
	@:
transform_hlds.implicit_parallelism.int2 : transform_hlds.implicit_parallelism.date
	@:
transform_hlds.implicit_parallelism.int3 : transform_hlds.implicit_parallelism.date3
	@:
transform_hlds.implicit_parallelism.opt : transform_hlds.implicit_parallelism.optdate
	@:
transform_hlds.implicit_parallelism.trans_opt : transform_hlds.implicit_parallelism.trans_opt_date
	@:

transform_hlds.implicit_parallelism.date0 : implicit_parallelism.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) transform_hlds.implicit_parallelism
transform_hlds.implicit_parallelism.date : implicit_parallelism.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) transform_hlds.implicit_parallelism
transform_hlds.implicit_parallelism.date3 : implicit_parallelism.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) transform_hlds.implicit_parallelism
transform_hlds.implicit_parallelism.optdate : implicit_parallelism.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) transform_hlds.implicit_parallelism
transform_hlds.implicit_parallelism.trans_opt_date : implicit_parallelism.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) transform_hlds.implicit_parallelism
transform_hlds.implicit_parallelism.c_date : implicit_parallelism.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) transform_hlds.implicit_parallelism $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
transform_hlds.implicit_parallelism.s_date : implicit_parallelism.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only transform_hlds.implicit_parallelism $(ERR_REDIRECT)
transform_hlds.implicit_parallelism.pic_s_date : implicit_parallelism.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" transform_hlds.implicit_parallelism $(ERR_REDIRECT)
endif # TARGET_ASM
transform_hlds.implicit_parallelism.il_date : implicit_parallelism.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only transform_hlds.implicit_parallelism $(ERR_REDIRECT)
transform_hlds.implicit_parallelism.java_date : implicit_parallelism.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only transform_hlds.implicit_parallelism $(ERR_REDIRECT)
