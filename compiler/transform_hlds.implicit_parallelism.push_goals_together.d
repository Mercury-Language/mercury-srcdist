

transform_hlds.implicit_parallelism.push_goals_together.optdate transform_hlds.implicit_parallelism.push_goals_together.trans_opt_date push_goals_together.err transform_hlds.implicit_parallelism.push_goals_together.c_date transform_hlds.implicit_parallelism.push_goals_together.s_date transform_hlds.implicit_parallelism.push_goals_together.pic_s_date transform_hlds.implicit_parallelism.push_goals_together.il_date transform_hlds.implicit_parallelism.push_goals_together.java_date : push_goals_together.m \
	transform_hlds.implicit_parallelism.int0 \
	transform_hlds.int0 \
	assoc_list.int \
	bool.int \
	builtin.int \
	check_hlds.int \
	hlds.int \
	int.int \
	io.int \
	libs.int \
	list.int \
	map.int \
	mdbcomp.int \
	pair.int \
	parse_tree.int \
	private_builtin.int \
	require.int \
	term.int \
	check_hlds.mode_util.int \
	hlds.goal_util.int \
	hlds.hlds_goal.int \
	hlds.hlds_module.int \
	hlds.hlds_out.int \
	hlds.hlds_pred.int \
	hlds.hlds_rtti.int \
	hlds.quantification.int \
	mdbcomp.feedback.int \
	mdbcomp.goal_path.int \
	parse_tree.prog_data.int \
	hlds.hlds_out.hlds_out_goal.int \
	hlds.hlds_out.hlds_out_util.int \
	mdbcomp.feedback.automatic_parallelism.int \
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
	maybe.int2 \
	mode_robdd.int2 \
	multi_map.int2 \
	ops.int2 \
	pretty_printer.int2 \
	queue.int2 \
	random.int2 \
	recompilation.int2 \
	robdd.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	sparse_bitset.int2 \
	stack.int2 \
	stream.int2 \
	string.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	unit.int2 \
	univ.int2 \
	varset.int2 \
	check_hlds.delay_info.int2 \
	check_hlds.mode_constraint_robdd.int2 \
	check_hlds.mode_errors.int2 \
	check_hlds.mode_info.int2 \
	check_hlds.unify_proc.int2 \
	hlds.hlds_args.int2 \
	hlds.hlds_clauses.int2 \
	hlds.hlds_data.int2 \
	hlds.hlds_llds.int2 \
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
	mdbcomp.prim_data.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2 \
	mode_robdd.tfeirn.int2 \
	parse_tree.error_util.int2 \
	parse_tree.mercury_to_mercury.int2 \
	parse_tree.module_qual.int2 \
	parse_tree.prog_foreign.int2 \
	parse_tree.prog_item.int2 \
	transform_hlds.term_constr_data.int2 \
	transform_hlds.term_constr_errors.int2 \
	transform_hlds.term_constr_main.int2 \
	transform_hlds.term_errors.int2 \
	transform_hlds.term_norm.int2 \
	transform_hlds.term_util.int2

ifeq ($(TARGET_ASM),yes)
transform_hlds.implicit_parallelism.push_goals_together.mh transform_hlds.implicit_parallelism.push_goals_together.mih : transform_hlds.implicit_parallelism.push_goals_together.s
else
transform_hlds.implicit_parallelism.push_goals_together.mh transform_hlds.implicit_parallelism.push_goals_together.mih : transform_hlds.implicit_parallelism.push_goals_together.c
endif

ifeq ($(TARGET_ASM),yes)
transform_hlds.implicit_parallelism.push_goals_together.module_dep : transform_hlds.implicit_parallelism.push_goals_together.s
else
 ifeq ($(findstring il,$(GRADE)),il)
transform_hlds.implicit_parallelism.push_goals_together.module_dep : transform_hlds.implicit_parallelism.push_goals_together.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
transform_hlds.implicit_parallelism.push_goals_together.module_dep : jmercury/transform_hlds__implicit_parallelism__push_goals_together.java
  else
transform_hlds.implicit_parallelism.push_goals_together.module_dep : transform_hlds.implicit_parallelism.push_goals_together.c
  endif
 endif
endif

transform_hlds.implicit_parallelism.push_goals_together.date transform_hlds.implicit_parallelism.push_goals_together.date0 \
	transform_hlds.implicit_parallelism.date \
	transform_hlds.date : push_goals_together.m \
	transform_hlds.implicit_parallelism.int0 \
	transform_hlds.int0 \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
	hlds.int3 \
	int.int3 \
	io.int3 \
	libs.int3 \
	list.int3 \
	map.int3 \
	mdbcomp.int3 \
	pair.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	require.int3 \
	term.int3 \
	check_hlds.mode_util.int3 \
	hlds.goal_util.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_out.int3 \
	hlds.hlds_pred.int3 \
	hlds.hlds_rtti.int3 \
	hlds.quantification.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.goal_path.int3 \
	parse_tree.prog_data.int3 \
	hlds.hlds_out.hlds_out_goal.int3 \
	hlds.hlds_out.hlds_out_util.int3 \
	mdbcomp.feedback.automatic_parallelism.int3 \
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
	maybe.int3 \
	mode_robdd.int3 \
	multi_map.int3 \
	ops.int3 \
	pretty_printer.int3 \
	queue.int3 \
	random.int3 \
	recompilation.int3 \
	robdd.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stack.int3 \
	stream.int3 \
	string.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	varset.int3 \
	check_hlds.delay_info.int3 \
	check_hlds.mode_constraint_robdd.int3 \
	check_hlds.mode_errors.int3 \
	check_hlds.mode_info.int3 \
	check_hlds.unify_proc.int3 \
	hlds.hlds_args.int3 \
	hlds.hlds_clauses.int3 \
	hlds.hlds_data.int3 \
	hlds.hlds_llds.int3 \
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
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.error_util.int3 \
	parse_tree.mercury_to_mercury.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_item.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3

transform_hlds.implicit_parallelism.push_goals_together.date0 \
	transform_hlds.implicit_parallelism.date0 \
	transform_hlds.date0 : push_goals_together.m \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
	hlds.int3 \
	int.int3 \
	io.int3 \
	libs.int3 \
	list.int3 \
	map.int3 \
	mdbcomp.int3 \
	pair.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	require.int3 \
	term.int3 \
	check_hlds.mode_util.int3 \
	hlds.goal_util.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_out.int3 \
	hlds.hlds_pred.int3 \
	hlds.hlds_rtti.int3 \
	hlds.quantification.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.goal_path.int3 \
	parse_tree.prog_data.int3 \
	hlds.hlds_out.hlds_out_goal.int3 \
	hlds.hlds_out.hlds_out_util.int3 \
	mdbcomp.feedback.automatic_parallelism.int3 \
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
	maybe.int3 \
	mode_robdd.int3 \
	multi_map.int3 \
	ops.int3 \
	pretty_printer.int3 \
	queue.int3 \
	random.int3 \
	recompilation.int3 \
	robdd.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stack.int3 \
	stream.int3 \
	string.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	varset.int3 \
	check_hlds.delay_info.int3 \
	check_hlds.mode_constraint_robdd.int3 \
	check_hlds.mode_errors.int3 \
	check_hlds.mode_info.int3 \
	check_hlds.unify_proc.int3 \
	hlds.hlds_args.int3 \
	hlds.hlds_clauses.int3 \
	hlds.hlds_data.int3 \
	hlds.hlds_llds.int3 \
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
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.error_util.int3 \
	parse_tree.mercury_to_mercury.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_item.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3



transform_hlds.implicit_parallelism.push_goals_together.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	array.mh \
	array.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	string.mh \
	io.mh \
	io.mh



transform_hlds.implicit_parallelism.push_goals_together.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	array.mh \
	array.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	string.mh \
	io.mh \
	io.mh


transform_hlds.implicit_parallelism.push_goals_together.int0 : transform_hlds.implicit_parallelism.push_goals_together.date0
	@:
transform_hlds.implicit_parallelism.push_goals_together.int : transform_hlds.implicit_parallelism.push_goals_together.date
	@:
transform_hlds.implicit_parallelism.push_goals_together.int2 : transform_hlds.implicit_parallelism.push_goals_together.date
	@:
transform_hlds.implicit_parallelism.push_goals_together.int3 : transform_hlds.implicit_parallelism.push_goals_together.date3
	@:
transform_hlds.implicit_parallelism.push_goals_together.opt : transform_hlds.implicit_parallelism.push_goals_together.optdate
	@:
transform_hlds.implicit_parallelism.push_goals_together.trans_opt : transform_hlds.implicit_parallelism.push_goals_together.trans_opt_date
	@:

transform_hlds.implicit_parallelism.push_goals_together.date0 : push_goals_together.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) transform_hlds.implicit_parallelism.push_goals_together
transform_hlds.implicit_parallelism.push_goals_together.date : push_goals_together.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) transform_hlds.implicit_parallelism.push_goals_together
transform_hlds.implicit_parallelism.push_goals_together.date3 : push_goals_together.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) transform_hlds.implicit_parallelism.push_goals_together
transform_hlds.implicit_parallelism.push_goals_together.optdate : push_goals_together.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) transform_hlds.implicit_parallelism.push_goals_together
transform_hlds.implicit_parallelism.push_goals_together.trans_opt_date : push_goals_together.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) transform_hlds.implicit_parallelism.push_goals_together
transform_hlds.implicit_parallelism.push_goals_together.c_date : push_goals_together.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) transform_hlds.implicit_parallelism.push_goals_together $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
transform_hlds.implicit_parallelism.push_goals_together.s_date : push_goals_together.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only transform_hlds.implicit_parallelism.push_goals_together $(ERR_REDIRECT)
transform_hlds.implicit_parallelism.push_goals_together.pic_s_date : push_goals_together.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" transform_hlds.implicit_parallelism.push_goals_together $(ERR_REDIRECT)
endif # TARGET_ASM
transform_hlds.implicit_parallelism.push_goals_together.il_date : push_goals_together.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only transform_hlds.implicit_parallelism.push_goals_together $(ERR_REDIRECT)
transform_hlds.implicit_parallelism.push_goals_together.java_date : push_goals_together.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only transform_hlds.implicit_parallelism.push_goals_together $(ERR_REDIRECT)
