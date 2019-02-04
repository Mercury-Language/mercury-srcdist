

check_hlds.mode_constraints.optdate check_hlds.mode_constraints.trans_opt_date mode_constraints.err check_hlds.mode_constraints.c_date check_hlds.mode_constraints.s_date check_hlds.mode_constraints.pic_s_date check_hlds.mode_constraints.il_date check_hlds.mode_constraints.java_date : mode_constraints.m \
	check_hlds.int0 \
	assoc_list.int \
	bool.int \
	builtin.int \
	hlds.int \
	io.int \
	libs.int \
	list.int \
	map.int \
	maybe.int \
	mdbcomp.int \
	mode_robdd.int \
	multi_map.int \
	pair.int \
	parse_tree.int \
	private_builtin.int \
	require.int \
	robdd.int \
	set.int \
	solutions.int \
	sparse_bitset.int \
	string.int \
	term.int \
	transform_hlds.int \
	varset.int \
	check_hlds.abstract_mode_constraints.int \
	check_hlds.build_mode_constraints.int \
	check_hlds.mode_constraint_robdd.int \
	check_hlds.mode_ordering.int \
	check_hlds.mode_util.int \
	check_hlds.ordering_mode_constraints.int \
	check_hlds.prop_mode_constraints.int \
	hlds.goal_path.int \
	hlds.hhf.int \
	hlds.hlds_clauses.int \
	hlds.hlds_goal.int \
	hlds.hlds_module.int \
	hlds.hlds_pred.int \
	hlds.hlds_rtti.int \
	hlds.inst_graph.int \
	hlds.passes_aux.int \
	hlds.quantification.int \
	libs.globals.int \
	libs.options.int \
	mdbcomp.goal_path.int \
	mode_robdd.tfeirn.int \
	parse_tree.file_names.int \
	parse_tree.prog_data.int \
	parse_tree.prog_mode.int \
	transform_hlds.dependency_graph.int \
	analysis.int2 \
	array.int2 \
	bag.int2 \
	bimap.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	digraph.int2 \
	enum.int2 \
	getopt_io.int2 \
	ops.int2 \
	pretty_printer.int2 \
	queue.int2 \
	random.int2 \
	recompilation.int2 \
	rtti_implementation.int2 \
	set_ordlist.int2 \
	stack.int2 \
	stream.int2 \
	time.int2 \
	tree234.int2 \
	tree_bitset.int2 \
	type_desc.int2 \
	unit.int2 \
	univ.int2 \
	check_hlds.delay_info.int2 \
	check_hlds.mode_errors.int2 \
	check_hlds.mode_info.int2 \
	check_hlds.unify_proc.int2 \
	hlds.hlds_args.int2 \
	hlds.hlds_data.int2 \
	hlds.hlds_llds.int2 \
	hlds.instmap.int2 \
	hlds.pred_table.int2 \
	hlds.special_pred.int2 \
	libs.file_util.int2 \
	libs.lp_rational.int2 \
	libs.polyhedron.int2 \
	libs.rat.int2 \
	libs.timestamp.int2 \
	libs.trace_params.int2 \
	mdbcomp.feedback.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2 \
	parse_tree.error_util.int2 \
	parse_tree.module_qual.int2 \
	parse_tree.prog_foreign.int2 \
	parse_tree.prog_item.int2 \
	parse_tree.set_of_var.int2 \
	transform_hlds.term_constr_data.int2 \
	transform_hlds.term_constr_errors.int2 \
	transform_hlds.term_constr_main.int2 \
	transform_hlds.term_errors.int2 \
	transform_hlds.term_norm.int2 \
	transform_hlds.term_util.int2 \
	mdbcomp.feedback.automatic_parallelism.int2

ifeq ($(TARGET_ASM),yes)
check_hlds.mode_constraints.mh check_hlds.mode_constraints.mih : check_hlds.mode_constraints.s
else
check_hlds.mode_constraints.mh check_hlds.mode_constraints.mih : check_hlds.mode_constraints.c
endif

ifeq ($(TARGET_ASM),yes)
check_hlds.mode_constraints.module_dep : check_hlds.mode_constraints.s
else
 ifeq ($(findstring il,$(GRADE)),il)
check_hlds.mode_constraints.module_dep : check_hlds.mode_constraints.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
check_hlds.mode_constraints.module_dep : jmercury/check_hlds__mode_constraints.java
  else
check_hlds.mode_constraints.module_dep : check_hlds.mode_constraints.c
  endif
 endif
endif

check_hlds.mode_constraints.date check_hlds.mode_constraints.date0 \
	check_hlds.date : mode_constraints.m \
	check_hlds.int0 \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	hlds.int3 \
	io.int3 \
	libs.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	mode_robdd.int3 \
	multi_map.int3 \
	pair.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	require.int3 \
	robdd.int3 \
	set.int3 \
	solutions.int3 \
	sparse_bitset.int3 \
	string.int3 \
	term.int3 \
	transform_hlds.int3 \
	varset.int3 \
	check_hlds.abstract_mode_constraints.int3 \
	check_hlds.build_mode_constraints.int3 \
	check_hlds.mode_constraint_robdd.int3 \
	check_hlds.mode_ordering.int3 \
	check_hlds.mode_util.int3 \
	check_hlds.ordering_mode_constraints.int3 \
	check_hlds.prop_mode_constraints.int3 \
	hlds.goal_path.int3 \
	hlds.hhf.int3 \
	hlds.hlds_clauses.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_pred.int3 \
	hlds.hlds_rtti.int3 \
	hlds.inst_graph.int3 \
	hlds.passes_aux.int3 \
	hlds.quantification.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	mdbcomp.goal_path.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.file_names.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_mode.int3 \
	transform_hlds.dependency_graph.int3 \
	analysis.int3 \
	array.int3 \
	bag.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
	ops.int3 \
	pretty_printer.int3 \
	queue.int3 \
	random.int3 \
	recompilation.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stack.int3 \
	stream.int3 \
	time.int3 \
	tree234.int3 \
	tree_bitset.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	check_hlds.delay_info.int3 \
	check_hlds.mode_errors.int3 \
	check_hlds.mode_info.int3 \
	check_hlds.unify_proc.int3 \
	hlds.hlds_args.int3 \
	hlds.hlds_data.int3 \
	hlds.hlds_llds.int3 \
	hlds.instmap.int3 \
	hlds.pred_table.int3 \
	hlds.special_pred.int3 \
	libs.file_util.int3 \
	libs.lp_rational.int3 \
	libs.polyhedron.int3 \
	libs.rat.int3 \
	libs.timestamp.int3 \
	libs.trace_params.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	parse_tree.error_util.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.set_of_var.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3 \
	mdbcomp.feedback.automatic_parallelism.int3

check_hlds.mode_constraints.date0 \
	check_hlds.date0 : mode_constraints.m \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	hlds.int3 \
	io.int3 \
	libs.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	mode_robdd.int3 \
	multi_map.int3 \
	pair.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	require.int3 \
	robdd.int3 \
	set.int3 \
	solutions.int3 \
	sparse_bitset.int3 \
	string.int3 \
	term.int3 \
	transform_hlds.int3 \
	varset.int3 \
	check_hlds.abstract_mode_constraints.int3 \
	check_hlds.build_mode_constraints.int3 \
	check_hlds.mode_constraint_robdd.int3 \
	check_hlds.mode_ordering.int3 \
	check_hlds.mode_util.int3 \
	check_hlds.ordering_mode_constraints.int3 \
	check_hlds.prop_mode_constraints.int3 \
	hlds.goal_path.int3 \
	hlds.hhf.int3 \
	hlds.hlds_clauses.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_pred.int3 \
	hlds.hlds_rtti.int3 \
	hlds.inst_graph.int3 \
	hlds.passes_aux.int3 \
	hlds.quantification.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	mdbcomp.goal_path.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.file_names.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_mode.int3 \
	transform_hlds.dependency_graph.int3 \
	analysis.int3 \
	array.int3 \
	bag.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
	ops.int3 \
	pretty_printer.int3 \
	queue.int3 \
	random.int3 \
	recompilation.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stack.int3 \
	stream.int3 \
	time.int3 \
	tree234.int3 \
	tree_bitset.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	check_hlds.delay_info.int3 \
	check_hlds.mode_errors.int3 \
	check_hlds.mode_info.int3 \
	check_hlds.unify_proc.int3 \
	hlds.hlds_args.int3 \
	hlds.hlds_data.int3 \
	hlds.hlds_llds.int3 \
	hlds.instmap.int3 \
	hlds.pred_table.int3 \
	hlds.special_pred.int3 \
	libs.file_util.int3 \
	libs.lp_rational.int3 \
	libs.polyhedron.int3 \
	libs.rat.int3 \
	libs.timestamp.int3 \
	libs.trace_params.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	parse_tree.error_util.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.set_of_var.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3 \
	mdbcomp.feedback.automatic_parallelism.int3



check_hlds.mode_constraints.$O :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



check_hlds.mode_constraints.pic_o :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


check_hlds.mode_constraints.int0 : check_hlds.mode_constraints.date0
	@:
check_hlds.mode_constraints.int : check_hlds.mode_constraints.date
	@:
check_hlds.mode_constraints.int2 : check_hlds.mode_constraints.date
	@:
check_hlds.mode_constraints.int3 : check_hlds.mode_constraints.date3
	@:
check_hlds.mode_constraints.opt : check_hlds.mode_constraints.optdate
	@:
check_hlds.mode_constraints.trans_opt : check_hlds.mode_constraints.trans_opt_date
	@:

check_hlds.mode_constraints.date0 : mode_constraints.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) check_hlds.mode_constraints
check_hlds.mode_constraints.date : mode_constraints.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) check_hlds.mode_constraints
check_hlds.mode_constraints.date3 : mode_constraints.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) check_hlds.mode_constraints
check_hlds.mode_constraints.optdate : mode_constraints.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) check_hlds.mode_constraints
check_hlds.mode_constraints.trans_opt_date : mode_constraints.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) check_hlds.mode_constraints
check_hlds.mode_constraints.c_date : mode_constraints.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) check_hlds.mode_constraints $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
check_hlds.mode_constraints.s_date : mode_constraints.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only check_hlds.mode_constraints $(ERR_REDIRECT)
check_hlds.mode_constraints.pic_s_date : mode_constraints.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" check_hlds.mode_constraints $(ERR_REDIRECT)
endif # TARGET_ASM
check_hlds.mode_constraints.il_date : mode_constraints.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only check_hlds.mode_constraints $(ERR_REDIRECT)
check_hlds.mode_constraints.java_date : mode_constraints.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only check_hlds.mode_constraints $(ERR_REDIRECT)
