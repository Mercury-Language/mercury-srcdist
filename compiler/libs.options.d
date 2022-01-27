

libs.options.optdate libs.options.trans_opt_date options.err libs.options.c_date libs.options.s_date libs.options.pic_s_date libs.options.il_date libs.options.java_date : options.m \
	libs.int0 \
	assoc_list.int \
	bool.int \
	builtin.int \
	char.int \
	dir.int \
	getopt_io.int \
	int.int \
	io.int \
	list.int \
	map.int \
	maybe.int \
	pair.int \
	private_builtin.int \
	require.int \
	set.int \
	string.int \
	libs.handle_options.int \
	array.int2 \
	bimap.int2 \
	bitmap.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	integer.int2 \
	mdbcomp.int2 \
	ops.int2 \
	pretty_printer.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	unit.int2 \
	univ.int2 \
	libs.globals.int2 \
	libs.trace_params.int2 \
	mdbcomp.feedback.int2 \
	mdbcomp.goal_path.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.sym_name.int2 \
	mdbcomp.trace_counts.int2 \
	mdbcomp.feedback.automatic_parallelism.int2

libs.options.pic_o libs.options.$O : \
	array.mih \
	assoc_list.mih \
	bimap.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
	char.mih \
	construct.mih \
	deconstruct.mih \
	dir.mih \
	enum.mih \
	getopt_io.mih \
	int.mih \
	integer.mih \
	io.mih \
	libs.mih \
	list.mih \
	map.mih \
	maybe.mih \
	mdbcomp.mih \
	ops.mih \
	pair.mih \
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
	unit.mih \
	univ.mih \
	libs.globals.mih \
	libs.handle_options.mih \
	libs.options.mih \
	libs.trace_params.mih \
	mdbcomp.feedback.mih \
	mdbcomp.goal_path.mih \
	mdbcomp.prim_data.mih \
	mdbcomp.program_representation.mih \
	mdbcomp.rtti_access.mih \
	mdbcomp.sym_name.mih \
	mdbcomp.trace_counts.mih \
	mdbcomp.feedback.automatic_parallelism.mih

libs.options.mh libs.options.mih : libs.options.c


ifeq ($(findstring il,$(GRADE)),il)
libs.options.module_dep : libs.options.il
else
 ifeq ($(findstring java,$(GRADE)),java)
libs.options.module_dep : jmercury/libs__options.java
 else
libs.options.module_dep : libs.options.c
 endif
endif


libs.options.date libs.options.date0 \
	libs.date : options.m \
	libs.int0 \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	dir.int3 \
	getopt_io.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	libs.handle_options.int3 \
	array.int3 \
	bimap.int3 \
	bitmap.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	integer.int3 \
	mdbcomp.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	libs.globals.int3 \
	libs.trace_params.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.sym_name.int3 \
	mdbcomp.trace_counts.int3 \
	mdbcomp.feedback.automatic_parallelism.int3

libs.options.date0 \
	libs.date0 : options.m \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	dir.int3 \
	getopt_io.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	libs.handle_options.int3 \
	array.int3 \
	bimap.int3 \
	bitmap.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	integer.int3 \
	mdbcomp.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	libs.globals.int3 \
	libs.trace_params.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.sym_name.int3 \
	mdbcomp.trace_counts.int3 \
	mdbcomp.feedback.automatic_parallelism.int3



libs.options.$O :  \
	io.mh \
	io.mh \
	time.mh \
	string.mh \
	dir.mh \
	dir.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh



libs.options.pic_o :  \
	io.mh \
	io.mh \
	time.mh \
	string.mh \
	dir.mh \
	dir.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh


libs.options.int0 : libs.options.date0
	@:
libs.options.int : libs.options.date
	@:
libs.options.int2 : libs.options.date
	@:
libs.options.int3 : libs.options.date3
	@:
libs.options.opt : libs.options.optdate
	@:
libs.options.trans_opt : libs.options.trans_opt_date
	@:

libs.options.date0 : options.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) libs.options
libs.options.date : options.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) libs.options
libs.options.date3 : options.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) libs.options
libs.options.optdate : options.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) libs.options
libs.options.trans_opt_date : options.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) libs.options
libs.options.c_date : options.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) libs.options $(ERR_REDIRECT)
libs.options.il_date : options.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only libs.options $(ERR_REDIRECT)
libs.options.java_date : options.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only libs.options $(ERR_REDIRECT)
