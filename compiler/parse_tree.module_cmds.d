

parse_tree.module_cmds.optdate parse_tree.module_cmds.trans_opt_date module_cmds.err parse_tree.module_cmds.c_date parse_tree.module_cmds.java_date : module_cmds.m \
	parse_tree.int0 \
	bool.int \
	builtin.int \
	dir.int \
	getopt_io.int \
	int.int \
	io.int \
	libs.int \
	list.int \
	maybe.int \
	mdbcomp.int \
	private_builtin.int \
	require.int \
	set.int \
	string.int \
	libs.file_util.int \
	libs.globals.int \
	libs.handle_options.int \
	libs.options.int \
	libs.process_util.int \
	mdbcomp.sym_name.int \
	parse_tree.error_util.int \
	parse_tree.file_names.int \
	parse_tree.java_names.int \
	string.format.int \
	string.parse_util.int \
	array.int2 \
	assoc_list.int2 \
	bimap.int2 \
	bitmap.int2 \
	char.int2 \
	check_hlds.int2 \
	construct.int2 \
	cord.int2 \
	deconstruct.int2 \
	enum.int2 \
	hlds.int2 \
	integer.int2 \
	map.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	random.int2 \
	recompilation.int2 \
	rtti_implementation.int2 \
	set_ordlist.int2 \
	sparse_bitset.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	unit.int2 \
	univ.int2 \
	varset.int2 \
	libs.rat.int2 \
	libs.timestamp.int2 \
	libs.trace_params.int2 \
	mdbcomp.feedback.int2 \
	mdbcomp.goal_path.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2 \
	parse_tree.file_kind.int2 \
	parse_tree.prog_data.int2 \
	parse_tree.prog_item.int2 \
	parse_tree.set_of_var.int2 \
	mdbcomp.feedback.automatic_parallelism.int2

parse_tree.module_cmds.pic_o parse_tree.module_cmds.$O : \
	array.mih \
	assoc_list.mih \
	bimap.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
	char.mih \
	check_hlds.mih \
	construct.mih \
	cord.mih \
	deconstruct.mih \
	dir.mih \
	enum.mih \
	getopt_io.mih \
	hlds.mih \
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
	parse_tree.mih \
	pretty_printer.mih \
	private_builtin.mih \
	random.mih \
	recompilation.mih \
	require.mih \
	rtti_implementation.mih \
	set.mih \
	set_ordlist.mih \
	sparse_bitset.mih \
	stream.mih \
	string.mih \
	term.mih \
	time.mih \
	tree234.mih \
	type_desc.mih \
	unit.mih \
	univ.mih \
	varset.mih \
	libs.file_util.mih \
	libs.globals.mih \
	libs.handle_options.mih \
	libs.options.mih \
	libs.process_util.mih \
	libs.rat.mih \
	libs.timestamp.mih \
	libs.trace_params.mih \
	mdbcomp.feedback.mih \
	mdbcomp.goal_path.mih \
	mdbcomp.prim_data.mih \
	mdbcomp.program_representation.mih \
	mdbcomp.rtti_access.mih \
	mdbcomp.sym_name.mih \
	mdbcomp.trace_counts.mih \
	parse_tree.error_util.mih \
	parse_tree.file_kind.mih \
	parse_tree.file_names.mih \
	parse_tree.java_names.mih \
	parse_tree.prog_data.mih \
	parse_tree.prog_item.mih \
	parse_tree.set_of_var.mih \
	string.format.mih \
	string.parse_util.mih \
	mdbcomp.feedback.automatic_parallelism.mih

parse_tree.module_cmds.mh parse_tree.module_cmds.mih : parse_tree.module_cmds.c


ifeq ($(findstring java,$(GRADE)),java)
parse_tree.module_cmds.module_dep : jmercury/parse_tree__module_cmds.java
else
parse_tree.module_cmds.module_dep : parse_tree.module_cmds.c
endif


parse_tree.module_cmds.date parse_tree.module_cmds.date0 \
	parse_tree.date : module_cmds.m \
	parse_tree.int0 \
	bool.int3 \
	builtin.int3 \
	dir.int3 \
	getopt_io.int3 \
	int.int3 \
	io.int3 \
	libs.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	libs.file_util.int3 \
	libs.globals.int3 \
	libs.handle_options.int3 \
	libs.options.int3 \
	libs.process_util.int3 \
	mdbcomp.sym_name.int3 \
	parse_tree.error_util.int3 \
	parse_tree.file_names.int3 \
	parse_tree.java_names.int3 \
	string.format.int3 \
	string.parse_util.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	check_hlds.int3 \
	construct.int3 \
	cord.int3 \
	deconstruct.int3 \
	enum.int3 \
	hlds.int3 \
	integer.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	recompilation.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	varset.int3 \
	libs.rat.int3 \
	libs.timestamp.int3 \
	libs.trace_params.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	parse_tree.file_kind.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.set_of_var.int3 \
	mdbcomp.feedback.automatic_parallelism.int3

parse_tree.module_cmds.date0 \
	parse_tree.date0 : module_cmds.m \
	bool.int3 \
	builtin.int3 \
	dir.int3 \
	getopt_io.int3 \
	int.int3 \
	io.int3 \
	libs.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	libs.file_util.int3 \
	libs.globals.int3 \
	libs.handle_options.int3 \
	libs.options.int3 \
	libs.process_util.int3 \
	mdbcomp.sym_name.int3 \
	parse_tree.error_util.int3 \
	parse_tree.file_names.int3 \
	parse_tree.java_names.int3 \
	string.format.int3 \
	string.parse_util.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	check_hlds.int3 \
	construct.int3 \
	cord.int3 \
	deconstruct.int3 \
	enum.int3 \
	hlds.int3 \
	integer.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	recompilation.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	varset.int3 \
	libs.rat.int3 \
	libs.timestamp.int3 \
	libs.trace_params.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	parse_tree.file_kind.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.set_of_var.int3 \
	mdbcomp.feedback.automatic_parallelism.int3



parse_tree.module_cmds.$O :  \
	dir.mh \
	io.mh \
	string.mh \
	time.mh \
	libs.process_util.mh \
	mdbcomp.rtti_access.mh \
	parse_tree.module_cmds.mh



parse_tree.module_cmds.pic_o :  \
	dir.mh \
	io.mh \
	string.mh \
	time.mh \
	libs.process_util.mh \
	mdbcomp.rtti_access.mh \
	parse_tree.module_cmds.mh


parse_tree.module_cmds.int0 : parse_tree.module_cmds.date0
	@:
parse_tree.module_cmds.int : parse_tree.module_cmds.date
	@:
parse_tree.module_cmds.int2 : parse_tree.module_cmds.date
	@:
parse_tree.module_cmds.int3 : parse_tree.module_cmds.date3
	@:
parse_tree.module_cmds.opt : parse_tree.module_cmds.optdate
	@:
parse_tree.module_cmds.trans_opt : parse_tree.module_cmds.trans_opt_date
	@:

parse_tree.module_cmds.date0 : module_cmds.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) parse_tree.module_cmds
parse_tree.module_cmds.date : module_cmds.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) parse_tree.module_cmds
parse_tree.module_cmds.date3 : module_cmds.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) parse_tree.module_cmds
parse_tree.module_cmds.optdate : module_cmds.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) parse_tree.module_cmds
parse_tree.module_cmds.trans_opt_date : module_cmds.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) parse_tree.module_cmds
parse_tree.module_cmds.c_date : module_cmds.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) parse_tree.module_cmds $(ERR_REDIRECT)
parse_tree.module_cmds.java_date : module_cmds.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only parse_tree.module_cmds $(ERR_REDIRECT)
