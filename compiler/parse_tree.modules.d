

parse_tree.modules.optdate parse_tree.modules.trans_opt_date modules.err parse_tree.modules.c_date parse_tree.modules.s_date parse_tree.modules.pic_s_date parse_tree.modules.java_date : modules.m \
	parse_tree.int0 \
	bool.int \
	builtin.int \
	cord.int \
	dir.int \
	io.int \
	libs.int \
	list.int \
	map.int \
	maybe.int \
	mdbcomp.int \
	private_builtin.int \
	require.int \
	set.int \
	term.int \
	libs.file_util.int \
	libs.globals.int \
	libs.options.int \
	libs.timestamp.int \
	mdbcomp.sym_name.int \
	parse_tree.comp_unit_interface.int \
	parse_tree.error_util.int \
	parse_tree.file_kind.int \
	parse_tree.file_names.int \
	parse_tree.get_dependencies.int \
	parse_tree.module_imports.int \
	parse_tree.prog_data.int \
	parse_tree.prog_io.int \
	parse_tree.prog_io_error.int \
	parse_tree.prog_item.int \
	parse_tree.read_modules.int \
	array.int2 \
	assoc_list.int2 \
	bimap.int2 \
	bitmap.int2 \
	char.int2 \
	check_hlds.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	getopt_io.int2 \
	hlds.int2 \
	integer.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	random.int2 \
	recompilation.int2 \
	rtti_implementation.int2 \
	set_ordlist.int2 \
	sparse_bitset.int2 \
	stream.int2 \
	string.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	unit.int2 \
	univ.int2 \
	varset.int2 \
	libs.rat.int2 \
	libs.trace_params.int2 \
	mdbcomp.feedback.int2 \
	mdbcomp.goal_path.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2 \
	parse_tree.set_of_var.int2 \
	mdbcomp.feedback.automatic_parallelism.int2

parse_tree.modules.pic_o parse_tree.modules.$O : \
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
	libs.options.mih \
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
	parse_tree.comp_unit_interface.mih \
	parse_tree.error_util.mih \
	parse_tree.file_kind.mih \
	parse_tree.file_names.mih \
	parse_tree.get_dependencies.mih \
	parse_tree.module_imports.mih \
	parse_tree.prog_data.mih \
	parse_tree.prog_io.mih \
	parse_tree.prog_io_error.mih \
	parse_tree.prog_item.mih \
	parse_tree.read_modules.mih \
	parse_tree.set_of_var.mih \
	mdbcomp.feedback.automatic_parallelism.mih

parse_tree.modules.mh parse_tree.modules.mih : parse_tree.modules.c


ifeq ($(findstring java,$(GRADE)),java)
parse_tree.modules.module_dep : jmercury/parse_tree__modules.java
else
parse_tree.modules.module_dep : parse_tree.modules.c
endif


parse_tree.modules.date parse_tree.modules.date0 \
	parse_tree.date : modules.m \
	parse_tree.int0 \
	bool.int3 \
	builtin.int3 \
	cord.int3 \
	dir.int3 \
	io.int3 \
	libs.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	term.int3 \
	libs.file_util.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	libs.timestamp.int3 \
	mdbcomp.sym_name.int3 \
	parse_tree.comp_unit_interface.int3 \
	parse_tree.error_util.int3 \
	parse_tree.file_kind.int3 \
	parse_tree.file_names.int3 \
	parse_tree.get_dependencies.int3 \
	parse_tree.module_imports.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_io.int3 \
	parse_tree.prog_io_error.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.read_modules.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	check_hlds.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt_io.int3 \
	hlds.int3 \
	integer.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	recompilation.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stream.int3 \
	string.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	varset.int3 \
	libs.rat.int3 \
	libs.trace_params.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	parse_tree.set_of_var.int3 \
	mdbcomp.feedback.automatic_parallelism.int3

parse_tree.modules.date0 \
	parse_tree.date0 : modules.m \
	bool.int3 \
	builtin.int3 \
	cord.int3 \
	dir.int3 \
	io.int3 \
	libs.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	term.int3 \
	libs.file_util.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	libs.timestamp.int3 \
	mdbcomp.sym_name.int3 \
	parse_tree.comp_unit_interface.int3 \
	parse_tree.error_util.int3 \
	parse_tree.file_kind.int3 \
	parse_tree.file_names.int3 \
	parse_tree.get_dependencies.int3 \
	parse_tree.module_imports.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_io.int3 \
	parse_tree.prog_io_error.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.read_modules.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	check_hlds.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt_io.int3 \
	hlds.int3 \
	integer.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	recompilation.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stream.int3 \
	string.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	varset.int3 \
	libs.rat.int3 \
	libs.trace_params.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	parse_tree.set_of_var.int3 \
	mdbcomp.feedback.automatic_parallelism.int3



parse_tree.modules.$O :  \
	dir.mh \
	io.mh \
	string.mh \
	time.mh \
	mdbcomp.rtti_access.mh



parse_tree.modules.pic_o :  \
	dir.mh \
	io.mh \
	string.mh \
	time.mh \
	mdbcomp.rtti_access.mh


parse_tree.modules.int0 : parse_tree.modules.date0
	@:
parse_tree.modules.int : parse_tree.modules.date
	@:
parse_tree.modules.int2 : parse_tree.modules.date
	@:
parse_tree.modules.int3 : parse_tree.modules.date3
	@:
parse_tree.modules.opt : parse_tree.modules.optdate
	@:
parse_tree.modules.trans_opt : parse_tree.modules.trans_opt_date
	@:

parse_tree.modules.date0 : modules.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) parse_tree.modules
parse_tree.modules.date : modules.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) parse_tree.modules
parse_tree.modules.date3 : modules.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) parse_tree.modules
parse_tree.modules.optdate : modules.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) parse_tree.modules
parse_tree.modules.trans_opt_date : modules.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) parse_tree.modules
parse_tree.modules.c_date : modules.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) parse_tree.modules $(ERR_REDIRECT)
parse_tree.modules.java_date : modules.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only parse_tree.modules $(ERR_REDIRECT)
