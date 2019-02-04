

transform_hlds.unneeded_code.optdate transform_hlds.unneeded_code.trans_opt_date unneeded_code.err transform_hlds.unneeded_code.c_date transform_hlds.unneeded_code.s_date transform_hlds.unneeded_code.pic_s_date transform_hlds.unneeded_code.il_date transform_hlds.unneeded_code.java_date : unneeded_code.m \
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
	maybe.int \
	mdbcomp.int \
	pair.int \
	parse_tree.int \
	private_builtin.int \
	require.int \
	set.int \
	string.int \
	svmap.int \
	check_hlds.inst_match.int \
	check_hlds.mode_util.int \
	hlds.goal_form.int \
	hlds.goal_path.int \
	hlds.hlds_goal.int \
	hlds.hlds_module.int \
	hlds.hlds_out.int \
	hlds.hlds_pred.int \
	hlds.instmap.int \
	hlds.passes_aux.int \
	hlds.quantification.int \
	libs.globals.int \
	libs.options.int \
	mdbcomp.goal_path.int \
	parse_tree.prog_data.int \
	hlds.hlds_out.hlds_out_goal.int \
	hlds.hlds_out.hlds_out_util.int \
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
	term.int2 \
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
	hlds.hlds_rtti.int2 \
	hlds.inst_graph.int2 \
	hlds.pred_table.int2 \
	hlds.special_pred.int2 \
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
	transform_hlds.term_util.int2 \
	mdbcomp.feedback.automatic_parallelism.int2

ifeq ($(TARGET_ASM),yes)
transform_hlds.unneeded_code.mh transform_hlds.unneeded_code.mih : transform_hlds.unneeded_code.s
else
transform_hlds.unneeded_code.mh transform_hlds.unneeded_code.mih : transform_hlds.unneeded_code.c
endif

ifeq ($(TARGET_ASM),yes)
transform_hlds.unneeded_code.module_dep : transform_hlds.unneeded_code.s
else
 ifeq ($(findstring il,$(GRADE)),il)
transform_hlds.unneeded_code.module_dep : transform_hlds.unneeded_code.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
transform_hlds.unneeded_code.module_dep : jmercury/transform_hlds__unneeded_code.java
  else
transform_hlds.unneeded_code.module_dep : transform_hlds.unneeded_code.c
  endif
 endif
endif

transform_hlds.unneeded_code.date transform_hlds.unneeded_code.date0 \
	transform_hlds.date : unneeded_code.m \
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
	maybe.int3 \
	mdbcomp.int3 \
	pair.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	svmap.int3 \
	check_hlds.inst_match.int3 \
	check_hlds.mode_util.int3 \
	hlds.goal_form.int3 \
	hlds.goal_path.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_out.int3 \
	hlds.hlds_pred.int3 \
	hlds.instmap.int3 \
	hlds.passes_aux.int3 \
	hlds.quantification.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	mdbcomp.goal_path.int3 \
	parse_tree.prog_data.int3 \
	hlds.hlds_out.hlds_out_goal.int3 \
	hlds.hlds_out.hlds_out_util.int3 \
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
	term.int3 \
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
	hlds.hlds_rtti.int3 \
	hlds.inst_graph.int3 \
	hlds.pred_table.int3 \
	hlds.special_pred.int3 \
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
	transform_hlds.term_util.int3 \
	mdbcomp.feedback.automatic_parallelism.int3

transform_hlds.unneeded_code.date0 \
	transform_hlds.date0 : unneeded_code.m \
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
	maybe.int3 \
	mdbcomp.int3 \
	pair.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	svmap.int3 \
	check_hlds.inst_match.int3 \
	check_hlds.mode_util.int3 \
	hlds.goal_form.int3 \
	hlds.goal_path.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_out.int3 \
	hlds.hlds_pred.int3 \
	hlds.instmap.int3 \
	hlds.passes_aux.int3 \
	hlds.quantification.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	mdbcomp.goal_path.int3 \
	parse_tree.prog_data.int3 \
	hlds.hlds_out.hlds_out_goal.int3 \
	hlds.hlds_out.hlds_out_util.int3 \
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
	term.int3 \
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
	hlds.hlds_rtti.int3 \
	hlds.inst_graph.int3 \
	hlds.pred_table.int3 \
	hlds.special_pred.int3 \
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
	transform_hlds.term_util.int3 \
	mdbcomp.feedback.automatic_parallelism.int3



transform_hlds.unneeded_code.$O :  \
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



transform_hlds.unneeded_code.pic_o :  \
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


transform_hlds.unneeded_code.int0 : transform_hlds.unneeded_code.date0
	@:
transform_hlds.unneeded_code.int : transform_hlds.unneeded_code.date
	@:
transform_hlds.unneeded_code.int2 : transform_hlds.unneeded_code.date
	@:
transform_hlds.unneeded_code.int3 : transform_hlds.unneeded_code.date3
	@:
transform_hlds.unneeded_code.opt : transform_hlds.unneeded_code.optdate
	@:
transform_hlds.unneeded_code.trans_opt : transform_hlds.unneeded_code.trans_opt_date
	@:

transform_hlds.unneeded_code.date0 : unneeded_code.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) transform_hlds.unneeded_code
transform_hlds.unneeded_code.date : unneeded_code.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) transform_hlds.unneeded_code
transform_hlds.unneeded_code.date3 : unneeded_code.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) transform_hlds.unneeded_code
transform_hlds.unneeded_code.optdate : unneeded_code.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) transform_hlds.unneeded_code
transform_hlds.unneeded_code.trans_opt_date : unneeded_code.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) transform_hlds.unneeded_code
transform_hlds.unneeded_code.c_date : unneeded_code.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) transform_hlds.unneeded_code $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
transform_hlds.unneeded_code.s_date : unneeded_code.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only transform_hlds.unneeded_code $(ERR_REDIRECT)
transform_hlds.unneeded_code.pic_s_date : unneeded_code.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" transform_hlds.unneeded_code $(ERR_REDIRECT)
endif # TARGET_ASM
transform_hlds.unneeded_code.il_date : unneeded_code.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only transform_hlds.unneeded_code $(ERR_REDIRECT)
transform_hlds.unneeded_code.java_date : unneeded_code.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only transform_hlds.unneeded_code $(ERR_REDIRECT)
