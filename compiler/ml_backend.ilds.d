

ml_backend.ilds.optdate ml_backend.ilds.trans_opt_date ilds.err ml_backend.ilds.c_date ml_backend.ilds.s_date ml_backend.ilds.pic_s_date ml_backend.ilds.il_date ml_backend.ilds.java_date : ilds.m \
	ml_backend.int0 \
	assoc_list.int \
	backend_libs.int \
	bool.int \
	builtin.int \
	check_hlds.int \
	hlds.int \
	int.int \
	libs.int \
	list.int \
	maybe.int \
	mdbcomp.int \
	parse_tree.int \
	private_builtin.int \
	require.int \
	array.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	io.int2 \
	map.int2 \
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

ml_backend.ilds.pic_o ml_backend.ilds.$O : \
	array.mih \
	assoc_list.mih \
	backend_libs.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
	char.mih \
	check_hlds.mih \
	construct.mih \
	deconstruct.mih \
	enum.mih \
	hlds.mih \
	int.mih \
	io.mih \
	libs.mih \
	list.mih \
	map.mih \
	maybe.mih \
	mdbcomp.mih \
	ml_backend.mih \
	ops.mih \
	pair.mih \
	parse_tree.mih \
	pretty_printer.mih \
	private_builtin.mih \
	random.mih \
	require.mih \
	rtti_implementation.mih \
	set.mih \
	set_ordlist.mih \
	stream.mih \
	string.mih \
	term.mih \
	time.mih \
	tree234.mih \
	type_desc.mih \
	univ.mih

ml_backend.ilds.mh ml_backend.ilds.mih : ml_backend.ilds.c


ifeq ($(findstring il,$(GRADE)),il)
ml_backend.ilds.module_dep : ml_backend.ilds.il
else
 ifeq ($(findstring java,$(GRADE)),java)
ml_backend.ilds.module_dep : jmercury/ml_backend__ilds.java
 else
ml_backend.ilds.module_dep : ml_backend.ilds.c
 endif
endif


ml_backend.ilds.date ml_backend.ilds.date0 \
	ml_backend.date : ilds.m \
	ml_backend.int0 \
	assoc_list.int3 \
	backend_libs.int3 \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
	hlds.int3 \
	int.int3 \
	libs.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	require.int3 \
	array.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	map.int3 \
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

ml_backend.ilds.date0 \
	ml_backend.date0 : ilds.m \
	assoc_list.int3 \
	backend_libs.int3 \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
	hlds.int3 \
	int.int3 \
	libs.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	require.int3 \
	array.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	map.int3 \
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



ml_backend.ilds.$O :  \
	io.mh \
	io.mh \
	time.mh \
	string.mh \
	bitmap.mh \
	bitmap.mh \
	time.mh \
	time.mh \
	array.mh \
	array.mh



ml_backend.ilds.pic_o :  \
	io.mh \
	io.mh \
	time.mh \
	string.mh \
	bitmap.mh \
	bitmap.mh \
	time.mh \
	time.mh \
	array.mh \
	array.mh


ml_backend.ilds.int0 : ml_backend.ilds.date0
	@:
ml_backend.ilds.int : ml_backend.ilds.date
	@:
ml_backend.ilds.int2 : ml_backend.ilds.date
	@:
ml_backend.ilds.int3 : ml_backend.ilds.date3
	@:
ml_backend.ilds.opt : ml_backend.ilds.optdate
	@:
ml_backend.ilds.trans_opt : ml_backend.ilds.trans_opt_date
	@:

ml_backend.ilds.date0 : ilds.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) ml_backend.ilds
ml_backend.ilds.date : ilds.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) ml_backend.ilds
ml_backend.ilds.date3 : ilds.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) ml_backend.ilds
ml_backend.ilds.optdate : ilds.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) ml_backend.ilds
ml_backend.ilds.trans_opt_date : ilds.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) ml_backend.ilds
ml_backend.ilds.c_date : ilds.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) ml_backend.ilds $(ERR_REDIRECT)
ml_backend.ilds.il_date : ilds.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only ml_backend.ilds $(ERR_REDIRECT)
ml_backend.ilds.java_date : ilds.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only ml_backend.ilds $(ERR_REDIRECT)
