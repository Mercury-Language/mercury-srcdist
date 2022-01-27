

parse_tree.parse_tree_out.optdate parse_tree.parse_tree_out.trans_opt_date parse_tree_out.err parse_tree.parse_tree_out.c_date parse_tree.parse_tree_out.java_date : parse_tree_out.m \
	parse_tree.int0 \
	bool.int \
	builtin.int \
	char.int \
	cord.int \
	io.int \
	libs.int \
	list.int \
	map.int \
	maybe.int \
	mdbcomp.int \
	ops.int \
	private_builtin.int \
	recompilation.int \
	require.int \
	set.int \
	string.int \
	term.int \
	varset.int \
	libs.globals.int \
	libs.options.int \
	mdbcomp.prim_data.int \
	mdbcomp.sym_name.int \
	parse_tree.file_kind.int \
	parse_tree.mercury_to_mercury.int \
	parse_tree.parse_tree_out_clause.int \
	parse_tree.parse_tree_out_info.int \
	parse_tree.parse_tree_out_inst.int \
	parse_tree.parse_tree_out_pragma.int \
	parse_tree.parse_tree_out_pred_decl.int \
	parse_tree.parse_tree_out_term.int \
	parse_tree.prog_data.int \
	parse_tree.prog_io_inst_mode_name.int \
	parse_tree.prog_item.int \
	parse_tree.prog_out.int \
	parse_tree.prog_util.int \
	recompilation.version.int \
	array.int2 \
	assoc_list.int2 \
	bimap.int2 \
	bitmap.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	getopt_io.int2 \
	integer.int2 \
	pair.int2 \
	pretty_printer.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set_ordlist.int2 \
	sparse_bitset.int2 \
	stream.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	unit.int2 \
	univ.int2 \
	libs.compiler_util.int2 \
	libs.op_mode.int2 \
	libs.rat.int2 \
	libs.timestamp.int2 \
	libs.trace_params.int2 \
	mdbcomp.feedback.int2 \
	mdbcomp.goal_path.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2 \
	parse_tree.error_util.int2 \
	parse_tree.maybe_error.int2 \
	parse_tree.set_of_var.int2 \
	mdbcomp.feedback.automatic_parallelism.int2

parse_tree.parse_tree_out.pic_o parse_tree.parse_tree_out.$O : \
	array.mih \
	assoc_list.mih \
	bimap.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
	char.mih \
	construct.mih \
	cord.mih \
	deconstruct.mih \
	enum.mih \
	getopt_io.mih \
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
	libs.compiler_util.mih \
	libs.globals.mih \
	libs.op_mode.mih \
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
	parse_tree.error_util.mih \
	parse_tree.file_kind.mih \
	parse_tree.maybe_error.mih \
	parse_tree.mercury_to_mercury.mih \
	parse_tree.parse_tree_out_clause.mih \
	parse_tree.parse_tree_out_info.mih \
	parse_tree.parse_tree_out_inst.mih \
	parse_tree.parse_tree_out_pragma.mih \
	parse_tree.parse_tree_out_pred_decl.mih \
	parse_tree.parse_tree_out_term.mih \
	parse_tree.prog_data.mih \
	parse_tree.prog_io_inst_mode_name.mih \
	parse_tree.prog_item.mih \
	parse_tree.prog_out.mih \
	parse_tree.prog_util.mih \
	parse_tree.set_of_var.mih \
	recompilation.version.mih \
	mdbcomp.feedback.automatic_parallelism.mih

parse_tree.parse_tree_out.mh parse_tree.parse_tree_out.mih : parse_tree.parse_tree_out.c


ifeq ($(findstring java,$(GRADE)),java)
parse_tree.parse_tree_out.module_dep : jmercury/parse_tree__parse_tree_out.java
else
parse_tree.parse_tree_out.module_dep : parse_tree.parse_tree_out.c
endif


parse_tree.parse_tree_out.date parse_tree.parse_tree_out.date0 \
	parse_tree.date : parse_tree_out.m \
	parse_tree.int0 \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	cord.int3 \
	io.int3 \
	libs.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	ops.int3 \
	private_builtin.int3 \
	recompilation.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	term.int3 \
	varset.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.sym_name.int3 \
	parse_tree.file_kind.int3 \
	parse_tree.mercury_to_mercury.int3 \
	parse_tree.parse_tree_out_clause.int3 \
	parse_tree.parse_tree_out_info.int3 \
	parse_tree.parse_tree_out_inst.int3 \
	parse_tree.parse_tree_out_pragma.int3 \
	parse_tree.parse_tree_out_pred_decl.int3 \
	parse_tree.parse_tree_out_term.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_io_inst_mode_name.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.prog_out.int3 \
	parse_tree.prog_util.int3 \
	recompilation.version.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt_io.int3 \
	integer.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stream.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	libs.compiler_util.int3 \
	libs.op_mode.int3 \
	libs.rat.int3 \
	libs.timestamp.int3 \
	libs.trace_params.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	parse_tree.error_util.int3 \
	parse_tree.maybe_error.int3 \
	parse_tree.set_of_var.int3 \
	mdbcomp.feedback.automatic_parallelism.int3

parse_tree.parse_tree_out.date0 \
	parse_tree.date0 : parse_tree_out.m \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	cord.int3 \
	io.int3 \
	libs.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	ops.int3 \
	private_builtin.int3 \
	recompilation.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	term.int3 \
	varset.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.sym_name.int3 \
	parse_tree.file_kind.int3 \
	parse_tree.mercury_to_mercury.int3 \
	parse_tree.parse_tree_out_clause.int3 \
	parse_tree.parse_tree_out_info.int3 \
	parse_tree.parse_tree_out_inst.int3 \
	parse_tree.parse_tree_out_pragma.int3 \
	parse_tree.parse_tree_out_pred_decl.int3 \
	parse_tree.parse_tree_out_term.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_io_inst_mode_name.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.prog_out.int3 \
	parse_tree.prog_util.int3 \
	recompilation.version.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt_io.int3 \
	integer.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stream.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	libs.compiler_util.int3 \
	libs.op_mode.int3 \
	libs.rat.int3 \
	libs.timestamp.int3 \
	libs.trace_params.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	parse_tree.error_util.int3 \
	parse_tree.maybe_error.int3 \
	parse_tree.set_of_var.int3 \
	mdbcomp.feedback.automatic_parallelism.int3



parse_tree.parse_tree_out.$O :  \
	io.mh \
	string.mh \
	time.mh \
	mdbcomp.rtti_access.mh



parse_tree.parse_tree_out.pic_o :  \
	io.mh \
	string.mh \
	time.mh \
	mdbcomp.rtti_access.mh


parse_tree.parse_tree_out.int0 : parse_tree.parse_tree_out.date0
	@:
parse_tree.parse_tree_out.int : parse_tree.parse_tree_out.date
	@:
parse_tree.parse_tree_out.int2 : parse_tree.parse_tree_out.date
	@:
parse_tree.parse_tree_out.int3 : parse_tree.parse_tree_out.date3
	@:
parse_tree.parse_tree_out.opt : parse_tree.parse_tree_out.optdate
	@:
parse_tree.parse_tree_out.trans_opt : parse_tree.parse_tree_out.trans_opt_date
	@:

parse_tree.parse_tree_out.date0 : parse_tree_out.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) parse_tree.parse_tree_out
parse_tree.parse_tree_out.date : parse_tree_out.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) parse_tree.parse_tree_out
parse_tree.parse_tree_out.date3 : parse_tree_out.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) parse_tree.parse_tree_out
parse_tree.parse_tree_out.optdate : parse_tree_out.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) parse_tree.parse_tree_out
parse_tree.parse_tree_out.trans_opt_date : parse_tree_out.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) parse_tree.parse_tree_out
parse_tree.parse_tree_out.c_date : parse_tree_out.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) parse_tree.parse_tree_out $(ERR_REDIRECT)
parse_tree.parse_tree_out.java_date : parse_tree_out.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only parse_tree.parse_tree_out $(ERR_REDIRECT)
