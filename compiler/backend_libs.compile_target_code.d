

backend_libs.compile_target_code.optdate backend_libs.compile_target_code.trans_opt_date compile_target_code.err backend_libs.compile_target_code.c_date backend_libs.compile_target_code.s_date backend_libs.compile_target_code.pic_s_date backend_libs.compile_target_code.il_date backend_libs.compile_target_code.java_date : compile_target_code.m \
	backend_libs.int0 \
	bool.int \
	builtin.int \
	cord.int \
	dir.int \
	getopt_io.int \
	io.int \
	libs.int \
	list.int \
	maybe.int \
	mdbcomp.int \
	parse_tree.int \
	private_builtin.int \
	require.int \
	stream.int \
	string.int \
	libs.file_util.int \
	libs.globals.int \
	libs.handle_options.int \
	libs.options.int \
	libs.trace_params.int \
	mdbcomp.sym_name.int \
	parse_tree.error_util.int \
	parse_tree.file_names.int \
	parse_tree.module_cmds.int \
	parse_tree.module_imports.int \
	parse_tree.prog_data.int \
	parse_tree.prog_foreign.int \
	parse_tree.write_deps_file.int \
	string.format.int \
	string.parse_util.int \
	analysis.int2 \
	array.int2 \
	assoc_list.int2 \
	bag.int2 \
	bimap.int2 \
	bitmap.int2 \
	char.int2 \
	check_hlds.int2 \
	construct.int2 \
	deconstruct.int2 \
	digraph.int2 \
	enum.int2 \
	hlds.int2 \
	integer.int2 \
	map.int2 \
	mode_robdd.int2 \
	multi_map.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	queue.int2 \
	random.int2 \
	recompilation.int2 \
	robdd.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	set_tree234.int2 \
	sparse_bitset.int2 \
	stack.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	tree_bitset.int2 \
	type_desc.int2 \
	unit.int2 \
	univ.int2 \
	varset.int2 \
	check_hlds.delay_info.int2 \
	check_hlds.mode_constraint_robdd.int2 \
	check_hlds.mode_errors.int2 \
	check_hlds.mode_info.int2 \
	check_hlds.unify_proc.int2 \
	hlds.const_struct.int2 \
	hlds.hlds_args.int2 \
	hlds.hlds_clauses.int2 \
	hlds.hlds_data.int2 \
	hlds.hlds_goal.int2 \
	hlds.hlds_llds.int2 \
	hlds.hlds_module.int2 \
	hlds.hlds_pred.int2 \
	hlds.hlds_rtti.int2 \
	hlds.inst_graph.int2 \
	hlds.instmap.int2 \
	hlds.pred_table.int2 \
	hlds.special_pred.int2 \
	libs.lp_rational.int2 \
	libs.polyhedron.int2 \
	libs.rat.int2 \
	libs.timestamp.int2 \
	mdbcomp.feedback.int2 \
	mdbcomp.goal_path.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2 \
	mode_robdd.tfeirn.int2 \
	parse_tree.deps_map.int2 \
	parse_tree.module_deps_graph.int2 \
	parse_tree.module_qual.int2 \
	parse_tree.prog_io_error.int2 \
	parse_tree.prog_item.int2 \
	parse_tree.set_of_var.int2 \
	transform_hlds.term_constr_data.int2 \
	transform_hlds.term_constr_errors.int2 \
	transform_hlds.term_constr_main.int2 \
	transform_hlds.term_errors.int2 \
	transform_hlds.term_norm.int2 \
	transform_hlds.term_util.int2 \
	mdbcomp.feedback.automatic_parallelism.int2

backend_libs.compile_target_code.pic_o backend_libs.compile_target_code.$O : \
	analysis.mih \
	array.mih \
	assoc_list.mih \
	backend_libs.mih \
	bag.mih \
	bimap.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
	char.mih \
	check_hlds.mih \
	construct.mih \
	cord.mih \
	deconstruct.mih \
	digraph.mih \
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
	mode_robdd.mih \
	multi_map.mih \
	ops.mih \
	pair.mih \
	parse_tree.mih \
	pretty_printer.mih \
	private_builtin.mih \
	queue.mih \
	random.mih \
	recompilation.mih \
	require.mih \
	robdd.mih \
	rtti_implementation.mih \
	set.mih \
	set_ordlist.mih \
	set_tree234.mih \
	sparse_bitset.mih \
	stack.mih \
	stream.mih \
	string.mih \
	term.mih \
	time.mih \
	tree234.mih \
	tree_bitset.mih \
	type_desc.mih \
	unit.mih \
	univ.mih \
	varset.mih \
	check_hlds.delay_info.mih \
	check_hlds.mode_constraint_robdd.mih \
	check_hlds.mode_errors.mih \
	check_hlds.mode_info.mih \
	check_hlds.unify_proc.mih \
	hlds.const_struct.mih \
	hlds.hlds_args.mih \
	hlds.hlds_clauses.mih \
	hlds.hlds_data.mih \
	hlds.hlds_goal.mih \
	hlds.hlds_llds.mih \
	hlds.hlds_module.mih \
	hlds.hlds_pred.mih \
	hlds.hlds_rtti.mih \
	hlds.inst_graph.mih \
	hlds.instmap.mih \
	hlds.pred_table.mih \
	hlds.special_pred.mih \
	libs.file_util.mih \
	libs.globals.mih \
	libs.handle_options.mih \
	libs.lp_rational.mih \
	libs.options.mih \
	libs.polyhedron.mih \
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
	mode_robdd.tfeirn.mih \
	parse_tree.deps_map.mih \
	parse_tree.error_util.mih \
	parse_tree.file_names.mih \
	parse_tree.module_cmds.mih \
	parse_tree.module_deps_graph.mih \
	parse_tree.module_imports.mih \
	parse_tree.module_qual.mih \
	parse_tree.prog_data.mih \
	parse_tree.prog_foreign.mih \
	parse_tree.prog_io_error.mih \
	parse_tree.prog_item.mih \
	parse_tree.set_of_var.mih \
	parse_tree.write_deps_file.mih \
	string.format.mih \
	string.parse_util.mih \
	transform_hlds.term_constr_data.mih \
	transform_hlds.term_constr_errors.mih \
	transform_hlds.term_constr_main.mih \
	transform_hlds.term_errors.mih \
	transform_hlds.term_norm.mih \
	transform_hlds.term_util.mih \
	mdbcomp.feedback.automatic_parallelism.mih

backend_libs.compile_target_code.mh backend_libs.compile_target_code.mih : backend_libs.compile_target_code.c


ifeq ($(findstring il,$(GRADE)),il)
backend_libs.compile_target_code.module_dep : backend_libs.compile_target_code.il
else
 ifeq ($(findstring java,$(GRADE)),java)
backend_libs.compile_target_code.module_dep : jmercury/backend_libs__compile_target_code.java
 else
backend_libs.compile_target_code.module_dep : backend_libs.compile_target_code.c
 endif
endif


backend_libs.compile_target_code.date backend_libs.compile_target_code.date0 \
	backend_libs.date : compile_target_code.m \
	backend_libs.int0 \
	bool.int3 \
	builtin.int3 \
	cord.int3 \
	dir.int3 \
	getopt_io.int3 \
	io.int3 \
	libs.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	require.int3 \
	stream.int3 \
	string.int3 \
	libs.file_util.int3 \
	libs.globals.int3 \
	libs.handle_options.int3 \
	libs.options.int3 \
	libs.trace_params.int3 \
	mdbcomp.sym_name.int3 \
	parse_tree.error_util.int3 \
	parse_tree.file_names.int3 \
	parse_tree.module_cmds.int3 \
	parse_tree.module_imports.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.write_deps_file.int3 \
	string.format.int3 \
	string.parse_util.int3 \
	analysis.int3 \
	array.int3 \
	assoc_list.int3 \
	bag.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	check_hlds.int3 \
	construct.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	hlds.int3 \
	integer.int3 \
	map.int3 \
	mode_robdd.int3 \
	multi_map.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	queue.int3 \
	random.int3 \
	recompilation.int3 \
	robdd.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	set_tree234.int3 \
	sparse_bitset.int3 \
	stack.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	tree_bitset.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	varset.int3 \
	check_hlds.delay_info.int3 \
	check_hlds.mode_constraint_robdd.int3 \
	check_hlds.mode_errors.int3 \
	check_hlds.mode_info.int3 \
	check_hlds.unify_proc.int3 \
	hlds.const_struct.int3 \
	hlds.hlds_args.int3 \
	hlds.hlds_clauses.int3 \
	hlds.hlds_data.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_llds.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_pred.int3 \
	hlds.hlds_rtti.int3 \
	hlds.inst_graph.int3 \
	hlds.instmap.int3 \
	hlds.pred_table.int3 \
	hlds.special_pred.int3 \
	libs.lp_rational.int3 \
	libs.polyhedron.int3 \
	libs.rat.int3 \
	libs.timestamp.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.deps_map.int3 \
	parse_tree.module_deps_graph.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_io_error.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.set_of_var.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3 \
	mdbcomp.feedback.automatic_parallelism.int3

backend_libs.compile_target_code.date0 \
	backend_libs.date0 : compile_target_code.m \
	bool.int3 \
	builtin.int3 \
	cord.int3 \
	dir.int3 \
	getopt_io.int3 \
	io.int3 \
	libs.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	require.int3 \
	stream.int3 \
	string.int3 \
	libs.file_util.int3 \
	libs.globals.int3 \
	libs.handle_options.int3 \
	libs.options.int3 \
	libs.trace_params.int3 \
	mdbcomp.sym_name.int3 \
	parse_tree.error_util.int3 \
	parse_tree.file_names.int3 \
	parse_tree.module_cmds.int3 \
	parse_tree.module_imports.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.write_deps_file.int3 \
	string.format.int3 \
	string.parse_util.int3 \
	analysis.int3 \
	array.int3 \
	assoc_list.int3 \
	bag.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	check_hlds.int3 \
	construct.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	hlds.int3 \
	integer.int3 \
	map.int3 \
	mode_robdd.int3 \
	multi_map.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	queue.int3 \
	random.int3 \
	recompilation.int3 \
	robdd.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	set_tree234.int3 \
	sparse_bitset.int3 \
	stack.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	tree_bitset.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	varset.int3 \
	check_hlds.delay_info.int3 \
	check_hlds.mode_constraint_robdd.int3 \
	check_hlds.mode_errors.int3 \
	check_hlds.mode_info.int3 \
	check_hlds.unify_proc.int3 \
	hlds.const_struct.int3 \
	hlds.hlds_args.int3 \
	hlds.hlds_clauses.int3 \
	hlds.hlds_data.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_llds.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_pred.int3 \
	hlds.hlds_rtti.int3 \
	hlds.inst_graph.int3 \
	hlds.instmap.int3 \
	hlds.pred_table.int3 \
	hlds.special_pred.int3 \
	libs.lp_rational.int3 \
	libs.polyhedron.int3 \
	libs.rat.int3 \
	libs.timestamp.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.deps_map.int3 \
	parse_tree.module_deps_graph.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_io_error.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.set_of_var.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3 \
	mdbcomp.feedback.automatic_parallelism.int3



backend_libs.compile_target_code.$O :  \
	io.mh \
	io.mh \
	time.mh \
	string.mh \
	dir.mh \
	dir.mh \
	bitmap.mh \
	bitmap.mh \
	time.mh \
	time.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh



backend_libs.compile_target_code.pic_o :  \
	io.mh \
	io.mh \
	time.mh \
	string.mh \
	dir.mh \
	dir.mh \
	bitmap.mh \
	bitmap.mh \
	time.mh \
	time.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh


backend_libs.compile_target_code.int0 : backend_libs.compile_target_code.date0
	@:
backend_libs.compile_target_code.int : backend_libs.compile_target_code.date
	@:
backend_libs.compile_target_code.int2 : backend_libs.compile_target_code.date
	@:
backend_libs.compile_target_code.int3 : backend_libs.compile_target_code.date3
	@:
backend_libs.compile_target_code.opt : backend_libs.compile_target_code.optdate
	@:
backend_libs.compile_target_code.trans_opt : backend_libs.compile_target_code.trans_opt_date
	@:

backend_libs.compile_target_code.date0 : compile_target_code.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) backend_libs.compile_target_code
backend_libs.compile_target_code.date : compile_target_code.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) backend_libs.compile_target_code
backend_libs.compile_target_code.date3 : compile_target_code.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) backend_libs.compile_target_code
backend_libs.compile_target_code.optdate : compile_target_code.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) backend_libs.compile_target_code
backend_libs.compile_target_code.trans_opt_date : compile_target_code.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) backend_libs.compile_target_code
backend_libs.compile_target_code.c_date : compile_target_code.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) backend_libs.compile_target_code $(ERR_REDIRECT)
backend_libs.compile_target_code.il_date : compile_target_code.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only backend_libs.compile_target_code $(ERR_REDIRECT)
backend_libs.compile_target_code.java_date : compile_target_code.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only backend_libs.compile_target_code $(ERR_REDIRECT)
