

recompilation.check.optdate recompilation.check.trans_opt_date recompilation.check.err recompilation.check.c_date recompilation.check.s_date recompilation.check.pic_s_date recompilation.check.il_date recompilation.check.java_date : recompilation.check.m \
	recompilation.int0 \
	assoc_list.int \
	bool.int \
	builtin.int \
	check_hlds.int \
	exception.int \
	hlds.int \
	int.int \
	io.int \
	libs.int \
	list.int \
	map.int \
	maybe.int \
	mdbcomp.int \
	pair.int \
	parse_tree.int \
	parser.int \
	private_builtin.int \
	require.int \
	set.int \
	string.int \
	term.int \
	term_io.int \
	time.int \
	univ.int \
	hlds.hlds_data.int \
	hlds.hlds_pred.int \
	hlds.passes_aux.int \
	libs.file_util.int \
	libs.globals.int \
	libs.options.int \
	libs.timestamp.int \
	mdbcomp.prim_data.int \
	parse_tree.error_util.int \
	parse_tree.file_names.int \
	parse_tree.module_cmds.int \
	parse_tree.module_imports.int \
	parse_tree.modules.int \
	parse_tree.prog_data.int \
	parse_tree.prog_io.int \
	parse_tree.prog_io_sym_name.int \
	parse_tree.prog_io_util.int \
	parse_tree.prog_item.int \
	parse_tree.prog_out.int \
	parse_tree.prog_util.int \
	parse_tree.read_modules.int \
	recompilation.usage.int \
	recompilation.version.int \
	analysis.int2 \
	array.int2 \
	bag.int2 \
	bimap.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	cord.int2 \
	deconstruct.int2 \
	digraph.int2 \
	enum.int2 \
	getopt_io.int2 \
	lexer.int2 \
	mode_robdd.int2 \
	multi_map.int2 \
	ops.int2 \
	pretty_printer.int2 \
	queue.int2 \
	random.int2 \
	robdd.int2 \
	rtti_implementation.int2 \
	set_ordlist.int2 \
	sparse_bitset.int2 \
	stack.int2 \
	stm_builtin.int2 \
	store.int2 \
	stream.int2 \
	tree234.int2 \
	type_desc.int2 \
	unit.int2 \
	varset.int2 \
	check_hlds.delay_info.int2 \
	check_hlds.mode_constraint_robdd.int2 \
	check_hlds.mode_errors.int2 \
	check_hlds.mode_info.int2 \
	check_hlds.unify_proc.int2 \
	hlds.hlds_args.int2 \
	hlds.hlds_clauses.int2 \
	hlds.hlds_goal.int2 \
	hlds.hlds_llds.int2 \
	hlds.hlds_module.int2 \
	hlds.hlds_rtti.int2 \
	hlds.inst_graph.int2 \
	hlds.instmap.int2 \
	hlds.pred_table.int2 \
	hlds.special_pred.int2 \
	libs.lp_rational.int2 \
	libs.polyhedron.int2 \
	libs.rat.int2 \
	libs.trace_params.int2 \
	mdbcomp.feedback.int2 \
	mdbcomp.goal_path.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2 \
	mode_robdd.tfeirn.int2 \
	parse_tree.module_qual.int2 \
	parse_tree.prog_foreign.int2 \
	transform_hlds.term_constr_data.int2 \
	transform_hlds.term_constr_errors.int2 \
	transform_hlds.term_constr_main.int2 \
	transform_hlds.term_errors.int2 \
	transform_hlds.term_norm.int2 \
	transform_hlds.term_util.int2 \
	mdbcomp.feedback.automatic_parallelism.int2

ifeq ($(TARGET_ASM),yes)
recompilation.check.mh recompilation.check.mih : recompilation.check.s
else
recompilation.check.mh recompilation.check.mih : recompilation.check.c
endif

ifeq ($(TARGET_ASM),yes)
recompilation.check.module_dep : recompilation.check.s
else
 ifeq ($(findstring il,$(GRADE)),il)
recompilation.check.module_dep : recompilation.check.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
recompilation.check.module_dep : jmercury/recompilation__check.java
  else
recompilation.check.module_dep : recompilation.check.c
  endif
 endif
endif

recompilation.check.date recompilation.check.date0 \
	recompilation.date : recompilation.check.m \
	recompilation.int0 \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
	exception.int3 \
	hlds.int3 \
	int.int3 \
	io.int3 \
	libs.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	pair.int3 \
	parse_tree.int3 \
	parser.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	term.int3 \
	term_io.int3 \
	time.int3 \
	univ.int3 \
	hlds.hlds_data.int3 \
	hlds.hlds_pred.int3 \
	hlds.passes_aux.int3 \
	libs.file_util.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	libs.timestamp.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.error_util.int3 \
	parse_tree.file_names.int3 \
	parse_tree.module_cmds.int3 \
	parse_tree.module_imports.int3 \
	parse_tree.modules.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_io.int3 \
	parse_tree.prog_io_sym_name.int3 \
	parse_tree.prog_io_util.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.prog_out.int3 \
	parse_tree.prog_util.int3 \
	parse_tree.read_modules.int3 \
	recompilation.usage.int3 \
	recompilation.version.int3 \
	analysis.int3 \
	array.int3 \
	bag.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	cord.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
	lexer.int3 \
	mode_robdd.int3 \
	multi_map.int3 \
	ops.int3 \
	pretty_printer.int3 \
	queue.int3 \
	random.int3 \
	robdd.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stack.int3 \
	stm_builtin.int3 \
	store.int3 \
	stream.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	varset.int3 \
	check_hlds.delay_info.int3 \
	check_hlds.mode_constraint_robdd.int3 \
	check_hlds.mode_errors.int3 \
	check_hlds.mode_info.int3 \
	check_hlds.unify_proc.int3 \
	hlds.hlds_args.int3 \
	hlds.hlds_clauses.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_llds.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_rtti.int3 \
	hlds.inst_graph.int3 \
	hlds.instmap.int3 \
	hlds.pred_table.int3 \
	hlds.special_pred.int3 \
	libs.lp_rational.int3 \
	libs.polyhedron.int3 \
	libs.rat.int3 \
	libs.trace_params.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_foreign.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3 \
	mdbcomp.feedback.automatic_parallelism.int3

recompilation.check.date0 \
	recompilation.date0 : recompilation.check.m \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
	exception.int3 \
	hlds.int3 \
	int.int3 \
	io.int3 \
	libs.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	pair.int3 \
	parse_tree.int3 \
	parser.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	term.int3 \
	term_io.int3 \
	time.int3 \
	univ.int3 \
	hlds.hlds_data.int3 \
	hlds.hlds_pred.int3 \
	hlds.passes_aux.int3 \
	libs.file_util.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	libs.timestamp.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.error_util.int3 \
	parse_tree.file_names.int3 \
	parse_tree.module_cmds.int3 \
	parse_tree.module_imports.int3 \
	parse_tree.modules.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_io.int3 \
	parse_tree.prog_io_sym_name.int3 \
	parse_tree.prog_io_util.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.prog_out.int3 \
	parse_tree.prog_util.int3 \
	parse_tree.read_modules.int3 \
	recompilation.usage.int3 \
	recompilation.version.int3 \
	analysis.int3 \
	array.int3 \
	bag.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	cord.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
	lexer.int3 \
	mode_robdd.int3 \
	multi_map.int3 \
	ops.int3 \
	pretty_printer.int3 \
	queue.int3 \
	random.int3 \
	robdd.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stack.int3 \
	stm_builtin.int3 \
	store.int3 \
	stream.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	varset.int3 \
	check_hlds.delay_info.int3 \
	check_hlds.mode_constraint_robdd.int3 \
	check_hlds.mode_errors.int3 \
	check_hlds.mode_info.int3 \
	check_hlds.unify_proc.int3 \
	hlds.hlds_args.int3 \
	hlds.hlds_clauses.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_llds.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_rtti.int3 \
	hlds.inst_graph.int3 \
	hlds.instmap.int3 \
	hlds.pred_table.int3 \
	hlds.special_pred.int3 \
	libs.lp_rational.int3 \
	libs.polyhedron.int3 \
	libs.rat.int3 \
	libs.trace_params.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_foreign.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3 \
	mdbcomp.feedback.automatic_parallelism.int3



recompilation.check.$O :  \
	store.mh \
	store.mh \
	stm_builtin.mh \
	stm_builtin.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	bitmap.mh \
	bitmap.mh \
	time.mh \
	time.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh



recompilation.check.pic_o :  \
	store.mh \
	store.mh \
	stm_builtin.mh \
	stm_builtin.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	bitmap.mh \
	bitmap.mh \
	time.mh \
	time.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh


recompilation.check.int0 : recompilation.check.date0
	@:
recompilation.check.int : recompilation.check.date
	@:
recompilation.check.int2 : recompilation.check.date
	@:
recompilation.check.int3 : recompilation.check.date3
	@:
recompilation.check.opt : recompilation.check.optdate
	@:
recompilation.check.trans_opt : recompilation.check.trans_opt_date
	@:
