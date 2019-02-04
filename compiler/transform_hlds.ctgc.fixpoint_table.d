

transform_hlds.ctgc.fixpoint_table.optdate transform_hlds.ctgc.fixpoint_table.trans_opt_date ctgc.fixpoint_table.err transform_hlds.ctgc.fixpoint_table.c_date transform_hlds.ctgc.fixpoint_table.s_date transform_hlds.ctgc.fixpoint_table.pic_s_date transform_hlds.ctgc.fixpoint_table.il_date transform_hlds.ctgc.fixpoint_table.java_date : ctgc.fixpoint_table.m \
	transform_hlds.ctgc.int0 \
	transform_hlds.int0 \
	builtin.int \
	check_hlds.int \
	hlds.int \
	int.int \
	libs.int \
	list.int \
	map.int \
	mdbcomp.int \
	parse_tree.int \
	private_builtin.int \
	require.int \
	svmap.int \
	array.int2 \
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
	random.int2 \
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
transform_hlds.ctgc.fixpoint_table.mh transform_hlds.ctgc.fixpoint_table.mih : transform_hlds.ctgc.fixpoint_table.s
else
transform_hlds.ctgc.fixpoint_table.mh transform_hlds.ctgc.fixpoint_table.mih : transform_hlds.ctgc.fixpoint_table.c
endif

ifeq ($(TARGET_ASM),yes)
transform_hlds.ctgc.fixpoint_table.module_dep : transform_hlds.ctgc.fixpoint_table.s
else
 ifeq ($(findstring il,$(GRADE)),il)
transform_hlds.ctgc.fixpoint_table.module_dep : transform_hlds.ctgc.fixpoint_table.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
transform_hlds.ctgc.fixpoint_table.module_dep : jmercury/transform_hlds__ctgc__fixpoint_table.java
  else
transform_hlds.ctgc.fixpoint_table.module_dep : transform_hlds.ctgc.fixpoint_table.c
  endif
 endif
endif

transform_hlds.ctgc.fixpoint_table.date transform_hlds.ctgc.fixpoint_table.date0 \
	transform_hlds.ctgc.date \
	transform_hlds.date : ctgc.fixpoint_table.m \
	transform_hlds.ctgc.int0 \
	transform_hlds.int0 \
	builtin.int3 \
	check_hlds.int3 \
	hlds.int3 \
	int.int3 \
	libs.int3 \
	list.int3 \
	map.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	require.int3 \
	svmap.int3 \
	array.int3 \
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
	random.int3 \
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

transform_hlds.ctgc.fixpoint_table.date0 \
	transform_hlds.ctgc.date0 \
	transform_hlds.date0 : ctgc.fixpoint_table.m \
	builtin.int3 \
	check_hlds.int3 \
	hlds.int3 \
	int.int3 \
	libs.int3 \
	list.int3 \
	map.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	require.int3 \
	svmap.int3 \
	array.int3 \
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
	random.int3 \
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



transform_hlds.ctgc.fixpoint_table.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



transform_hlds.ctgc.fixpoint_table.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


transform_hlds.ctgc.fixpoint_table.int0 : transform_hlds.ctgc.fixpoint_table.date0
	@:
transform_hlds.ctgc.fixpoint_table.int : transform_hlds.ctgc.fixpoint_table.date
	@:
transform_hlds.ctgc.fixpoint_table.int2 : transform_hlds.ctgc.fixpoint_table.date
	@:
transform_hlds.ctgc.fixpoint_table.int3 : transform_hlds.ctgc.fixpoint_table.date3
	@:
transform_hlds.ctgc.fixpoint_table.opt : transform_hlds.ctgc.fixpoint_table.optdate
	@:
transform_hlds.ctgc.fixpoint_table.trans_opt : transform_hlds.ctgc.fixpoint_table.trans_opt_date
	@:

transform_hlds.ctgc.fixpoint_table.date0 : ctgc.fixpoint_table.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) transform_hlds.ctgc.fixpoint_table
transform_hlds.ctgc.fixpoint_table.date : ctgc.fixpoint_table.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) transform_hlds.ctgc.fixpoint_table
transform_hlds.ctgc.fixpoint_table.date3 : ctgc.fixpoint_table.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) transform_hlds.ctgc.fixpoint_table
transform_hlds.ctgc.fixpoint_table.optdate : ctgc.fixpoint_table.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) transform_hlds.ctgc.fixpoint_table
transform_hlds.ctgc.fixpoint_table.trans_opt_date : ctgc.fixpoint_table.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) transform_hlds.ctgc.fixpoint_table
transform_hlds.ctgc.fixpoint_table.c_date : ctgc.fixpoint_table.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) transform_hlds.ctgc.fixpoint_table $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
transform_hlds.ctgc.fixpoint_table.s_date : ctgc.fixpoint_table.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only transform_hlds.ctgc.fixpoint_table $(ERR_REDIRECT)
transform_hlds.ctgc.fixpoint_table.pic_s_date : ctgc.fixpoint_table.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" transform_hlds.ctgc.fixpoint_table $(ERR_REDIRECT)
endif # TARGET_ASM
transform_hlds.ctgc.fixpoint_table.il_date : ctgc.fixpoint_table.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only transform_hlds.ctgc.fixpoint_table $(ERR_REDIRECT)
transform_hlds.ctgc.fixpoint_table.java_date : ctgc.fixpoint_table.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only transform_hlds.ctgc.fixpoint_table $(ERR_REDIRECT)
