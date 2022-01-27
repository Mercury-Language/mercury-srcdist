

parse_tree.prog_util.optdate parse_tree.prog_util.trans_opt_date prog_util.err parse_tree.prog_util.c_date parse_tree.prog_util.java_date : prog_util.m \
	parse_tree.int0 \
	bool.int \
	builtin.int \
	int.int \
	integer.int \
	libs.int \
	list.int \
	map.int \
	maybe.int \
	mdbcomp.int \
	pair.int \
	private_builtin.int \
	require.int \
	string.int \
	term.int \
	varset.int \
	mdbcomp.builtin_modules.int \
	mdbcomp.prim_data.int \
	mdbcomp.sym_name.int \
	parse_tree.mercury_to_mercury.int \
	parse_tree.prog_data.int \
	parse_tree.prog_item.int \
	parse_tree.prog_out.int \
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
	getopt_io.int2 \
	hlds.int2 \
	io.int2 \
	ops.int2 \
	pretty_printer.int2 \
	random.int2 \
	recompilation.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	sparse_bitset.int2 \
	stream.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	unit.int2 \
	univ.int2 \
	libs.globals.int2 \
	libs.op_mode.int2 \
	libs.options.int2 \
	libs.rat.int2 \
	libs.timestamp.int2 \
	libs.trace_params.int2 \
	mdbcomp.feedback.int2 \
	mdbcomp.goal_path.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2 \
	parse_tree.error_util.int2 \
	parse_tree.file_kind.int2 \
	parse_tree.parse_tree_out_info.int2 \
	parse_tree.parse_tree_out_term.int2 \
	parse_tree.set_of_var.int2 \
	mdbcomp.feedback.automatic_parallelism.int2

parse_tree.prog_util.pic_o parse_tree.prog_util.$O : \
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
	libs.globals.mih \
	libs.op_mode.mih \
	libs.options.mih \
	libs.rat.mih \
	libs.timestamp.mih \
	libs.trace_params.mih \
	mdbcomp.builtin_modules.mih \
	mdbcomp.feedback.mih \
	mdbcomp.goal_path.mih \
	mdbcomp.prim_data.mih \
	mdbcomp.program_representation.mih \
	mdbcomp.rtti_access.mih \
	mdbcomp.sym_name.mih \
	mdbcomp.trace_counts.mih \
	parse_tree.error_util.mih \
	parse_tree.file_kind.mih \
	parse_tree.mercury_to_mercury.mih \
	parse_tree.parse_tree_out_info.mih \
	parse_tree.parse_tree_out_term.mih \
	parse_tree.prog_data.mih \
	parse_tree.prog_item.mih \
	parse_tree.prog_out.mih \
	parse_tree.set_of_var.mih \
	string.format.mih \
	string.parse_util.mih \
	mdbcomp.feedback.automatic_parallelism.mih

parse_tree.prog_util.mh parse_tree.prog_util.mih : parse_tree.prog_util.c


ifeq ($(findstring java,$(GRADE)),java)
parse_tree.prog_util.module_dep : jmercury/parse_tree__prog_util.java
else
parse_tree.prog_util.module_dep : parse_tree.prog_util.c
endif


parse_tree.prog_util.date parse_tree.prog_util.date0 \
	parse_tree.date : prog_util.m \
	parse_tree.int0 \
	bool.int3 \
	builtin.int3 \
	int.int3 \
	integer.int3 \
	libs.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	term.int3 \
	varset.int3 \
	mdbcomp.builtin_modules.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.sym_name.int3 \
	parse_tree.mercury_to_mercury.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.prog_out.int3 \
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
	getopt_io.int3 \
	hlds.int3 \
	io.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	recompilation.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stream.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	libs.globals.int3 \
	libs.op_mode.int3 \
	libs.options.int3 \
	libs.rat.int3 \
	libs.timestamp.int3 \
	libs.trace_params.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	parse_tree.error_util.int3 \
	parse_tree.file_kind.int3 \
	parse_tree.parse_tree_out_info.int3 \
	parse_tree.parse_tree_out_term.int3 \
	parse_tree.set_of_var.int3 \
	mdbcomp.feedback.automatic_parallelism.int3

parse_tree.prog_util.date0 \
	parse_tree.date0 : prog_util.m \
	bool.int3 \
	builtin.int3 \
	int.int3 \
	integer.int3 \
	libs.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	term.int3 \
	varset.int3 \
	mdbcomp.builtin_modules.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.sym_name.int3 \
	parse_tree.mercury_to_mercury.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.prog_out.int3 \
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
	getopt_io.int3 \
	hlds.int3 \
	io.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	recompilation.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stream.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	libs.globals.int3 \
	libs.op_mode.int3 \
	libs.options.int3 \
	libs.rat.int3 \
	libs.timestamp.int3 \
	libs.trace_params.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	parse_tree.error_util.int3 \
	parse_tree.file_kind.int3 \
	parse_tree.parse_tree_out_info.int3 \
	parse_tree.parse_tree_out_term.int3 \
	parse_tree.set_of_var.int3 \
	mdbcomp.feedback.automatic_parallelism.int3



parse_tree.prog_util.$O :  \
	io.mh \
	string.mh \
	time.mh \
	mdbcomp.rtti_access.mh



parse_tree.prog_util.pic_o :  \
	io.mh \
	string.mh \
	time.mh \
	mdbcomp.rtti_access.mh


parse_tree.prog_util.int0 : parse_tree.prog_util.date0
	@:
parse_tree.prog_util.int : parse_tree.prog_util.date
	@:
parse_tree.prog_util.int2 : parse_tree.prog_util.date
	@:
parse_tree.prog_util.int3 : parse_tree.prog_util.date3
	@:
parse_tree.prog_util.opt : parse_tree.prog_util.optdate
	@:
parse_tree.prog_util.trans_opt : parse_tree.prog_util.trans_opt_date
	@:

parse_tree.prog_util.date0 : prog_util.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) parse_tree.prog_util
parse_tree.prog_util.date : prog_util.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) parse_tree.prog_util
parse_tree.prog_util.date3 : prog_util.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) parse_tree.prog_util
parse_tree.prog_util.optdate : prog_util.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) parse_tree.prog_util
parse_tree.prog_util.trans_opt_date : prog_util.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) parse_tree.prog_util
parse_tree.prog_util.c_date : prog_util.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) parse_tree.prog_util $(ERR_REDIRECT)
parse_tree.prog_util.java_date : prog_util.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only parse_tree.prog_util $(ERR_REDIRECT)
