

backend_libs.matching.optdate backend_libs.matching.trans_opt_date matching.err backend_libs.matching.c_date backend_libs.matching.s_date backend_libs.matching.pic_s_date backend_libs.matching.il_date backend_libs.matching.java_date : matching.m \
	backend_libs.int0 \
	assoc_list.int \
	bool.int \
	builtin.int \
	int.int \
	io.int \
	list.int \
	map.int \
	maybe.int \
	pair.int \
	parse_tree.int \
	private_builtin.int \
	queue.int \
	require.int \
	set.int \
	string.int \
	term.int \
	parse_tree.prog_data.int \
	parse_tree.set_of_var.int \
	analysis.int2 \
	array.int2 \
	bag.int2 \
	bimap.int2 \
	bitmap.int2 \
	char.int2 \
	check_hlds.int2 \
	construct.int2 \
	deconstruct.int2 \
	digraph.int2 \
	enum.int2 \
	getopt_io.int2 \
	hlds.int2 \
	libs.int2 \
	mdbcomp.int2 \
	mode_robdd.int2 \
	multi_map.int2 \
	ops.int2 \
	pretty_printer.int2 \
	random.int2 \
	recompilation.int2 \
	robdd.int2 \
	rtti_implementation.int2 \
	set_ordlist.int2 \
	sparse_bitset.int2 \
	stack.int2 \
	stream.int2 \
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
	libs.globals.int2 \
	libs.lp_rational.int2 \
	libs.options.int2 \
	libs.polyhedron.int2 \
	libs.rat.int2 \
	libs.timestamp.int2 \
	libs.trace_params.int2 \
	mdbcomp.feedback.int2 \
	mdbcomp.goal_path.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2 \
	mode_robdd.tfeirn.int2 \
	parse_tree.error_util.int2 \
	parse_tree.module_qual.int2 \
	parse_tree.prog_foreign.int2 \
	parse_tree.prog_item.int2 \
	transform_hlds.term_constr_data.int2 \
	transform_hlds.term_constr_errors.int2 \
	transform_hlds.term_constr_main.int2 \
	transform_hlds.term_errors.int2 \
	transform_hlds.term_norm.int2 \
	transform_hlds.term_util.int2 \
	mdbcomp.feedback.automatic_parallelism.int2

backend_libs.matching.mh backend_libs.matching.mih : backend_libs.matching.c


ifeq ($(findstring il,$(GRADE)),il)
backend_libs.matching.module_dep : backend_libs.matching.il
else
 ifeq ($(findstring java,$(GRADE)),java)
backend_libs.matching.module_dep : jmercury/backend_libs__matching.java
 else
backend_libs.matching.module_dep : backend_libs.matching.c
 endif
endif


backend_libs.matching.date backend_libs.matching.date0 \
	backend_libs.date : matching.m \
	backend_libs.int0 \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	pair.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	queue.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	term.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.set_of_var.int3 \
	analysis.int3 \
	array.int3 \
	bag.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	check_hlds.int3 \
	construct.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
	hlds.int3 \
	libs.int3 \
	mdbcomp.int3 \
	mode_robdd.int3 \
	multi_map.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	recompilation.int3 \
	robdd.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stack.int3 \
	stream.int3 \
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
	libs.globals.int3 \
	libs.lp_rational.int3 \
	libs.options.int3 \
	libs.polyhedron.int3 \
	libs.rat.int3 \
	libs.timestamp.int3 \
	libs.trace_params.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.error_util.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_item.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3 \
	mdbcomp.feedback.automatic_parallelism.int3

backend_libs.matching.date0 \
	backend_libs.date0 : matching.m \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	pair.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	queue.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	term.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.set_of_var.int3 \
	analysis.int3 \
	array.int3 \
	bag.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	check_hlds.int3 \
	construct.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
	hlds.int3 \
	libs.int3 \
	mdbcomp.int3 \
	mode_robdd.int3 \
	multi_map.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	recompilation.int3 \
	robdd.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stack.int3 \
	stream.int3 \
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
	libs.globals.int3 \
	libs.lp_rational.int3 \
	libs.options.int3 \
	libs.polyhedron.int3 \
	libs.rat.int3 \
	libs.timestamp.int3 \
	libs.trace_params.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.error_util.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_item.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3 \
	mdbcomp.feedback.automatic_parallelism.int3



backend_libs.matching.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	array.mh \
	array.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh



backend_libs.matching.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	array.mh \
	array.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh


backend_libs.matching.int0 : backend_libs.matching.date0
	@:
backend_libs.matching.int : backend_libs.matching.date
	@:
backend_libs.matching.int2 : backend_libs.matching.date
	@:
backend_libs.matching.int3 : backend_libs.matching.date3
	@:
backend_libs.matching.opt : backend_libs.matching.optdate
	@:
backend_libs.matching.trans_opt : backend_libs.matching.trans_opt_date
	@:

backend_libs.matching.date0 : matching.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) backend_libs.matching
backend_libs.matching.date : matching.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) backend_libs.matching
backend_libs.matching.date3 : matching.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) backend_libs.matching
backend_libs.matching.optdate : matching.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) backend_libs.matching
backend_libs.matching.trans_opt_date : matching.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) backend_libs.matching
backend_libs.matching.c_date : matching.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) backend_libs.matching $(ERR_REDIRECT)
backend_libs.matching.il_date : matching.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only backend_libs.matching $(ERR_REDIRECT)
backend_libs.matching.java_date : matching.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only backend_libs.matching $(ERR_REDIRECT)
