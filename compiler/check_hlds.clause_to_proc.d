

check_hlds.clause_to_proc.optdate check_hlds.clause_to_proc.trans_opt_date clause_to_proc.err check_hlds.clause_to_proc.c_date check_hlds.clause_to_proc.s_date check_hlds.clause_to_proc.pic_s_date check_hlds.clause_to_proc.il_date check_hlds.clause_to_proc.java_date : clause_to_proc.m \
	check_hlds.int0 \
	assoc_list.int \
	builtin.int \
	hlds.int \
	int.int \
	list.int \
	map.int \
	maybe.int \
	mdbcomp.int \
	pair.int \
	parse_tree.int \
	private_builtin.int \
	require.int \
	set.int \
	string.int \
	term.int \
	varset.int \
	check_hlds.mode_util.int \
	hlds.goal_util.int \
	hlds.hlds_args.int \
	hlds.hlds_clauses.int \
	hlds.hlds_goal.int \
	hlds.hlds_module.int \
	hlds.hlds_pred.int \
	hlds.hlds_rtti.int \
	hlds.make_hlds.int \
	hlds.pred_table.int \
	mdbcomp.prim_data.int \
	parse_tree.error_util.int \
	parse_tree.prog_data.int \
	parse_tree.prog_mode.int \
	parse_tree.prog_type_subst.int \
	analysis.int2 \
	array.int2 \
	bag.int2 \
	bimap.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	digraph.int2 \
	enum.int2 \
	getopt_io.int2 \
	io.int2 \
	libs.int2 \
	mode_robdd.int2 \
	multi_map.int2 \
	ops.int2 \
	pretty_printer.int2 \
	queue.int2 \
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
	check_hlds.delay_info.int2 \
	check_hlds.mode_constraint_robdd.int2 \
	check_hlds.mode_errors.int2 \
	check_hlds.mode_info.int2 \
	check_hlds.unify_proc.int2 \
	hlds.hlds_data.int2 \
	hlds.hlds_llds.int2 \
	hlds.inst_graph.int2 \
	hlds.instmap.int2 \
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
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2 \
	mode_robdd.tfeirn.int2 \
	parse_tree.equiv_type.int2 \
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
	hlds.make_hlds.qual_info.int2 \
	mdbcomp.feedback.automatic_parallelism.int2

ifeq ($(TARGET_ASM),yes)
check_hlds.clause_to_proc.mh check_hlds.clause_to_proc.mih : check_hlds.clause_to_proc.s
else
check_hlds.clause_to_proc.mh check_hlds.clause_to_proc.mih : check_hlds.clause_to_proc.c
endif

ifeq ($(TARGET_ASM),yes)
check_hlds.clause_to_proc.module_dep : check_hlds.clause_to_proc.s
else
 ifeq ($(findstring il,$(GRADE)),il)
check_hlds.clause_to_proc.module_dep : check_hlds.clause_to_proc.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
check_hlds.clause_to_proc.module_dep : jmercury/check_hlds__clause_to_proc.java
  else
check_hlds.clause_to_proc.module_dep : check_hlds.clause_to_proc.c
  endif
 endif
endif

check_hlds.clause_to_proc.date check_hlds.clause_to_proc.date0 \
	check_hlds.date : clause_to_proc.m \
	check_hlds.int0 \
	assoc_list.int3 \
	builtin.int3 \
	hlds.int3 \
	int.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	pair.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	term.int3 \
	varset.int3 \
	check_hlds.mode_util.int3 \
	hlds.goal_util.int3 \
	hlds.hlds_args.int3 \
	hlds.hlds_clauses.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_pred.int3 \
	hlds.hlds_rtti.int3 \
	hlds.make_hlds.int3 \
	hlds.pred_table.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.error_util.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_mode.int3 \
	parse_tree.prog_type_subst.int3 \
	analysis.int3 \
	array.int3 \
	bag.int3 \
	bimap.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
	io.int3 \
	libs.int3 \
	mode_robdd.int3 \
	multi_map.int3 \
	ops.int3 \
	pretty_printer.int3 \
	queue.int3 \
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
	check_hlds.delay_info.int3 \
	check_hlds.mode_constraint_robdd.int3 \
	check_hlds.mode_errors.int3 \
	check_hlds.mode_info.int3 \
	check_hlds.unify_proc.int3 \
	hlds.hlds_data.int3 \
	hlds.hlds_llds.int3 \
	hlds.inst_graph.int3 \
	hlds.instmap.int3 \
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
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.equiv_type.int3 \
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
	hlds.make_hlds.qual_info.int3 \
	mdbcomp.feedback.automatic_parallelism.int3

check_hlds.clause_to_proc.date0 \
	check_hlds.date0 : clause_to_proc.m \
	assoc_list.int3 \
	builtin.int3 \
	hlds.int3 \
	int.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	pair.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	term.int3 \
	varset.int3 \
	check_hlds.mode_util.int3 \
	hlds.goal_util.int3 \
	hlds.hlds_args.int3 \
	hlds.hlds_clauses.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_pred.int3 \
	hlds.hlds_rtti.int3 \
	hlds.make_hlds.int3 \
	hlds.pred_table.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.error_util.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_mode.int3 \
	parse_tree.prog_type_subst.int3 \
	analysis.int3 \
	array.int3 \
	bag.int3 \
	bimap.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
	io.int3 \
	libs.int3 \
	mode_robdd.int3 \
	multi_map.int3 \
	ops.int3 \
	pretty_printer.int3 \
	queue.int3 \
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
	check_hlds.delay_info.int3 \
	check_hlds.mode_constraint_robdd.int3 \
	check_hlds.mode_errors.int3 \
	check_hlds.mode_info.int3 \
	check_hlds.unify_proc.int3 \
	hlds.hlds_data.int3 \
	hlds.hlds_llds.int3 \
	hlds.inst_graph.int3 \
	hlds.instmap.int3 \
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
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.equiv_type.int3 \
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
	hlds.make_hlds.qual_info.int3 \
	mdbcomp.feedback.automatic_parallelism.int3



check_hlds.clause_to_proc.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	string.mh \
	io.mh \
	io.mh



check_hlds.clause_to_proc.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	string.mh \
	io.mh \
	io.mh


check_hlds.clause_to_proc.int0 : check_hlds.clause_to_proc.date0
	@:
check_hlds.clause_to_proc.int : check_hlds.clause_to_proc.date
	@:
check_hlds.clause_to_proc.int2 : check_hlds.clause_to_proc.date
	@:
check_hlds.clause_to_proc.int3 : check_hlds.clause_to_proc.date3
	@:
check_hlds.clause_to_proc.opt : check_hlds.clause_to_proc.optdate
	@:
check_hlds.clause_to_proc.trans_opt : check_hlds.clause_to_proc.trans_opt_date
	@:

check_hlds.clause_to_proc.date0 : clause_to_proc.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) check_hlds.clause_to_proc
check_hlds.clause_to_proc.date : clause_to_proc.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) check_hlds.clause_to_proc
check_hlds.clause_to_proc.date3 : clause_to_proc.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) check_hlds.clause_to_proc
check_hlds.clause_to_proc.optdate : clause_to_proc.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) check_hlds.clause_to_proc
check_hlds.clause_to_proc.trans_opt_date : clause_to_proc.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) check_hlds.clause_to_proc
check_hlds.clause_to_proc.c_date : clause_to_proc.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) check_hlds.clause_to_proc $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
check_hlds.clause_to_proc.s_date : clause_to_proc.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only check_hlds.clause_to_proc $(ERR_REDIRECT)
check_hlds.clause_to_proc.pic_s_date : clause_to_proc.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" check_hlds.clause_to_proc $(ERR_REDIRECT)
endif # TARGET_ASM
check_hlds.clause_to_proc.il_date : clause_to_proc.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only check_hlds.clause_to_proc $(ERR_REDIRECT)
check_hlds.clause_to_proc.java_date : clause_to_proc.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only check_hlds.clause_to_proc $(ERR_REDIRECT)
