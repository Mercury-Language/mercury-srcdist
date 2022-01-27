

transform_hlds.ctgc.optdate transform_hlds.ctgc.trans_opt_date ctgc.err transform_hlds.ctgc.c_date transform_hlds.ctgc.s_date transform_hlds.ctgc.pic_s_date transform_hlds.ctgc.il_date transform_hlds.ctgc.java_date : ctgc.m transform_hlds.ctgc.int0 \
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

transform_hlds.ctgc.mh transform_hlds.ctgc.mih : transform_hlds.ctgc.c


ifeq ($(findstring il,$(GRADE)),il)
transform_hlds.ctgc.module_dep : transform_hlds.ctgc.il
else
 ifeq ($(findstring java,$(GRADE)),java)
transform_hlds.ctgc.module_dep : jmercury/transform_hlds__ctgc.java
 else
transform_hlds.ctgc.module_dep : transform_hlds.ctgc.c
 endif
endif


transform_hlds.ctgc.date transform_hlds.ctgc.date0 \
	transform_hlds.date : ctgc.m \
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

transform_hlds.ctgc.date0 \
	transform_hlds.date0 : ctgc.m \
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



transform_hlds.ctgc.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh



transform_hlds.ctgc.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh


transform_hlds.ctgc.int0 : transform_hlds.ctgc.date0
	@:
transform_hlds.ctgc.int : transform_hlds.ctgc.date
	@:
transform_hlds.ctgc.int2 : transform_hlds.ctgc.date
	@:
transform_hlds.ctgc.int3 : transform_hlds.ctgc.date3
	@:
transform_hlds.ctgc.opt : transform_hlds.ctgc.optdate
	@:
transform_hlds.ctgc.trans_opt : transform_hlds.ctgc.trans_opt_date
	@:

transform_hlds.ctgc.date0 : ctgc.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) transform_hlds.ctgc
transform_hlds.ctgc.date : ctgc.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) transform_hlds.ctgc
transform_hlds.ctgc.date3 : ctgc.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) transform_hlds.ctgc
transform_hlds.ctgc.optdate : ctgc.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) transform_hlds.ctgc
transform_hlds.ctgc.trans_opt_date : ctgc.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) transform_hlds.ctgc
transform_hlds.ctgc.c_date : ctgc.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) transform_hlds.ctgc $(ERR_REDIRECT)
transform_hlds.ctgc.il_date : ctgc.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only transform_hlds.ctgc $(ERR_REDIRECT)
transform_hlds.ctgc.java_date : ctgc.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only transform_hlds.ctgc $(ERR_REDIRECT)
