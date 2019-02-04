

transform_hlds.ctgc.structure_sharing.optdate transform_hlds.ctgc.structure_sharing.trans_opt_date structure_sharing.err transform_hlds.ctgc.structure_sharing.c_date transform_hlds.ctgc.structure_sharing.s_date transform_hlds.ctgc.structure_sharing.pic_s_date transform_hlds.ctgc.structure_sharing.il_date transform_hlds.ctgc.structure_sharing.java_date : structure_sharing.m transform_hlds.ctgc.structure_sharing.int0 \
	transform_hlds.ctgc.int0 \
	transform_hlds.int0 \
	builtin.int \
	check_hlds.int \
	hlds.int \
	libs.int \
	ll_backend.int \
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
transform_hlds.ctgc.structure_sharing.mh transform_hlds.ctgc.structure_sharing.mih : transform_hlds.ctgc.structure_sharing.s
else
transform_hlds.ctgc.structure_sharing.mh transform_hlds.ctgc.structure_sharing.mih : transform_hlds.ctgc.structure_sharing.c
endif

ifeq ($(TARGET_ASM),yes)
transform_hlds.ctgc.structure_sharing.module_dep : transform_hlds.ctgc.structure_sharing.s
else
 ifeq ($(findstring il,$(GRADE)),il)
transform_hlds.ctgc.structure_sharing.module_dep : transform_hlds.ctgc.structure_sharing.il
  ifeq ($(findstring java,$(GRADE)),java)
transform_hlds.ctgc.structure_sharing.module_dep : jmercury/transform_hlds__ctgc__structure_sharing.java
  else
transform_hlds.ctgc.structure_sharing.module_dep : transform_hlds.ctgc.structure_sharing.c
  endif
 endif
endif

transform_hlds.ctgc.structure_sharing.date transform_hlds.ctgc.structure_sharing.date0 \
	transform_hlds.ctgc.date \
	transform_hlds.date : structure_sharing.m \
	transform_hlds.ctgc.int0 \
	transform_hlds.int0 \
	builtin.int3 \
	check_hlds.int3 \
	hlds.int3 \
	libs.int3 \
	ll_backend.int3 \
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

transform_hlds.ctgc.structure_sharing.date0 \
	transform_hlds.ctgc.date0 \
	transform_hlds.date0 : structure_sharing.m \
	builtin.int3 \
	check_hlds.int3 \
	hlds.int3 \
	libs.int3 \
	ll_backend.int3 \
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



transform_hlds.ctgc.structure_sharing.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



transform_hlds.ctgc.structure_sharing.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


transform_hlds.ctgc.structure_sharing.int0 : transform_hlds.ctgc.structure_sharing.date0
	@:
transform_hlds.ctgc.structure_sharing.int : transform_hlds.ctgc.structure_sharing.date
	@:
transform_hlds.ctgc.structure_sharing.int2 : transform_hlds.ctgc.structure_sharing.date
	@:
transform_hlds.ctgc.structure_sharing.int3 : transform_hlds.ctgc.structure_sharing.date3
	@:
transform_hlds.ctgc.structure_sharing.opt : transform_hlds.ctgc.structure_sharing.optdate
	@:
transform_hlds.ctgc.structure_sharing.trans_opt : transform_hlds.ctgc.structure_sharing.trans_opt_date
	@:

transform_hlds.ctgc.structure_sharing.date0 : structure_sharing.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) transform_hlds.ctgc.structure_sharing
transform_hlds.ctgc.structure_sharing.date : structure_sharing.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) transform_hlds.ctgc.structure_sharing
transform_hlds.ctgc.structure_sharing.date3 : structure_sharing.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) transform_hlds.ctgc.structure_sharing
transform_hlds.ctgc.structure_sharing.optdate : structure_sharing.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) transform_hlds.ctgc.structure_sharing
transform_hlds.ctgc.structure_sharing.trans_opt_date : structure_sharing.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) transform_hlds.ctgc.structure_sharing
transform_hlds.ctgc.structure_sharing.c_date : structure_sharing.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) transform_hlds.ctgc.structure_sharing $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
transform_hlds.ctgc.structure_sharing.s_date : structure_sharing.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only transform_hlds.ctgc.structure_sharing $(ERR_REDIRECT)
transform_hlds.ctgc.structure_sharing.pic_s_date : structure_sharing.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" transform_hlds.ctgc.structure_sharing $(ERR_REDIRECT)
endif # TARGET_ASM
transform_hlds.ctgc.structure_sharing.il_date : structure_sharing.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only transform_hlds.ctgc.structure_sharing $(ERR_REDIRECT)
transform_hlds.ctgc.structure_sharing.java_date : structure_sharing.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only transform_hlds.ctgc.structure_sharing $(ERR_REDIRECT)
