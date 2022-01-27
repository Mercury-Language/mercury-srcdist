

transform_hlds.smm_fixpoint_table.optdate transform_hlds.smm_fixpoint_table.trans_opt_date smm_fixpoint_table.err transform_hlds.smm_fixpoint_table.c_date transform_hlds.smm_fixpoint_table.s_date transform_hlds.smm_fixpoint_table.pic_s_date transform_hlds.smm_fixpoint_table.il_date transform_hlds.smm_fixpoint_table.java_date : smm_fixpoint_table.m \
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

transform_hlds.smm_fixpoint_table.pic_o transform_hlds.smm_fixpoint_table.$O : \
	assoc_list.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
	char.mih \
	check_hlds.mih \
	construct.mih \
	deconstruct.mih \
	enum.mih \
	hlds.mih \
	io.mih \
	libs.mih \
	list.mih \
	map.mih \
	maybe.mih \
	mdbcomp.mih \
	ops.mih \
	pair.mih \
	parse_tree.mih \
	pretty_printer.mih \
	private_builtin.mih \
	rtti_implementation.mih \
	set.mih \
	set_ordlist.mih \
	stream.mih \
	string.mih \
	term.mih \
	time.mih \
	transform_hlds.mih \
	tree234.mih \
	type_desc.mih \
	univ.mih

transform_hlds.smm_fixpoint_table.mh transform_hlds.smm_fixpoint_table.mih : transform_hlds.smm_fixpoint_table.c


ifeq ($(findstring il,$(GRADE)),il)
transform_hlds.smm_fixpoint_table.module_dep : transform_hlds.smm_fixpoint_table.il
else
 ifeq ($(findstring java,$(GRADE)),java)
transform_hlds.smm_fixpoint_table.module_dep : jmercury/transform_hlds__smm_fixpoint_table.java
 else
transform_hlds.smm_fixpoint_table.module_dep : transform_hlds.smm_fixpoint_table.c
 endif
endif


transform_hlds.smm_fixpoint_table.date transform_hlds.smm_fixpoint_table.date0 \
	transform_hlds.date : smm_fixpoint_table.m \
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

transform_hlds.smm_fixpoint_table.date0 \
	transform_hlds.date0 : smm_fixpoint_table.m \
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



transform_hlds.smm_fixpoint_table.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh



transform_hlds.smm_fixpoint_table.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh


transform_hlds.smm_fixpoint_table.int0 : transform_hlds.smm_fixpoint_table.date0
	@:
transform_hlds.smm_fixpoint_table.int : transform_hlds.smm_fixpoint_table.date
	@:
transform_hlds.smm_fixpoint_table.int2 : transform_hlds.smm_fixpoint_table.date
	@:
transform_hlds.smm_fixpoint_table.int3 : transform_hlds.smm_fixpoint_table.date3
	@:
transform_hlds.smm_fixpoint_table.opt : transform_hlds.smm_fixpoint_table.optdate
	@:
transform_hlds.smm_fixpoint_table.trans_opt : transform_hlds.smm_fixpoint_table.trans_opt_date
	@:

transform_hlds.smm_fixpoint_table.date0 : smm_fixpoint_table.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) transform_hlds.smm_fixpoint_table
transform_hlds.smm_fixpoint_table.date : smm_fixpoint_table.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) transform_hlds.smm_fixpoint_table
transform_hlds.smm_fixpoint_table.date3 : smm_fixpoint_table.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) transform_hlds.smm_fixpoint_table
transform_hlds.smm_fixpoint_table.optdate : smm_fixpoint_table.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) transform_hlds.smm_fixpoint_table
transform_hlds.smm_fixpoint_table.trans_opt_date : smm_fixpoint_table.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) transform_hlds.smm_fixpoint_table
transform_hlds.smm_fixpoint_table.c_date : smm_fixpoint_table.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) transform_hlds.smm_fixpoint_table $(ERR_REDIRECT)
transform_hlds.smm_fixpoint_table.il_date : smm_fixpoint_table.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only transform_hlds.smm_fixpoint_table $(ERR_REDIRECT)
transform_hlds.smm_fixpoint_table.java_date : smm_fixpoint_table.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only transform_hlds.smm_fixpoint_table $(ERR_REDIRECT)
