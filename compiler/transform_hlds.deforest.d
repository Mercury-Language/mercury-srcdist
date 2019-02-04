

transform_hlds.deforest.optdate transform_hlds.deforest.trans_opt_date deforest.err transform_hlds.deforest.c_date transform_hlds.deforest.s_date transform_hlds.deforest.pic_s_date transform_hlds.deforest.il_date transform_hlds.deforest.java_date : deforest.m \
	transform_hlds.int0 \
	assoc_list.int \
	bool.int \
	builtin.int \
	check_hlds.int \
	getopt_io.int \
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
	set.int \
	string.int \
	term.int \
	univ.int \
	varset.int \
	check_hlds.det_analysis.int \
	check_hlds.det_report.int \
	check_hlds.inst_match.int \
	check_hlds.mode_util.int \
	check_hlds.modes.int \
	check_hlds.simplify.int \
	hlds.goal_util.int \
	hlds.hlds_goal.int \
	hlds.hlds_module.int \
	hlds.hlds_pred.int \
	hlds.instmap.int \
	hlds.passes_aux.int \
	hlds.quantification.int \
	libs.compiler_util.int \
	libs.globals.int \
	libs.options.int \
	mdbcomp.prim_data.int \
	parse_tree.error_util.int \
	parse_tree.prog_data.int \
	parse_tree.prog_type_subst.int \
	parse_tree.prog_util.int \
	transform_hlds.dependency_graph.int \
	transform_hlds.inlining.int \
	transform_hlds.pd_cost.int \
	transform_hlds.pd_debug.int \
	transform_hlds.pd_info.int \
	transform_hlds.pd_term.int \
	transform_hlds.pd_util.int \
	analysis.int2 \
	array.int2 \
	bag.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	counter.int2 \
	deconstruct.int2 \
	enum.int2 \
	mode_robdd.int2 \
	multi_map.int2 \
	ops.int2 \
	pretty_printer.int2 \
	random.int2 \
	recompilation.int2 \
	relation.int2 \
	robdd.int2 \
	set_ordlist.int2 \
	sparse_bitset.int2 \
	stack.int2 \
	stream.int2 \
	table_builtin.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	unit.int2 \
	check_hlds.common.int2 \
	check_hlds.delay_info.int2 \
	check_hlds.det_util.int2 \
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
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2 \
	mode_robdd.tfeirn.int2 \
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
transform_hlds.deforest.mh transform_hlds.deforest.mih : transform_hlds.deforest.s
else
transform_hlds.deforest.mh transform_hlds.deforest.mih : transform_hlds.deforest.c
endif

ifeq ($(TARGET_ASM),yes)
transform_hlds.deforest.module_dep : transform_hlds.deforest.s
else
 ifeq ($(findstring il,$(GRADE)),il)
transform_hlds.deforest.module_dep : transform_hlds.deforest.il
  ifeq ($(findstring java,$(GRADE)),java)
transform_hlds.deforest.module_dep : transform_hlds.deforest.java
  else
transform_hlds.deforest.module_dep : transform_hlds.deforest.c
  endif
 endif
endif

transform_hlds.deforest.date transform_hlds.deforest.date0 \
	transform_hlds.date : deforest.m \
	transform_hlds.int0 \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
	getopt_io.int3 \
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
	set.int3 \
	string.int3 \
	term.int3 \
	univ.int3 \
	varset.int3 \
	check_hlds.det_analysis.int3 \
	check_hlds.det_report.int3 \
	check_hlds.inst_match.int3 \
	check_hlds.mode_util.int3 \
	check_hlds.modes.int3 \
	check_hlds.simplify.int3 \
	hlds.goal_util.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_pred.int3 \
	hlds.instmap.int3 \
	hlds.passes_aux.int3 \
	hlds.quantification.int3 \
	libs.compiler_util.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.error_util.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_type_subst.int3 \
	parse_tree.prog_util.int3 \
	transform_hlds.dependency_graph.int3 \
	transform_hlds.inlining.int3 \
	transform_hlds.pd_cost.int3 \
	transform_hlds.pd_debug.int3 \
	transform_hlds.pd_info.int3 \
	transform_hlds.pd_term.int3 \
	transform_hlds.pd_util.int3 \
	analysis.int3 \
	array.int3 \
	bag.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	counter.int3 \
	deconstruct.int3 \
	enum.int3 \
	mode_robdd.int3 \
	multi_map.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	recompilation.int3 \
	relation.int3 \
	robdd.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stack.int3 \
	stream.int3 \
	table_builtin.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	check_hlds.common.int3 \
	check_hlds.delay_info.int3 \
	check_hlds.det_util.int3 \
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
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_item.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3

transform_hlds.deforest.date0 \
	transform_hlds.date0 : deforest.m \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
	getopt_io.int3 \
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
	set.int3 \
	string.int3 \
	term.int3 \
	univ.int3 \
	varset.int3 \
	check_hlds.det_analysis.int3 \
	check_hlds.det_report.int3 \
	check_hlds.inst_match.int3 \
	check_hlds.mode_util.int3 \
	check_hlds.modes.int3 \
	check_hlds.simplify.int3 \
	hlds.goal_util.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_pred.int3 \
	hlds.instmap.int3 \
	hlds.passes_aux.int3 \
	hlds.quantification.int3 \
	libs.compiler_util.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.error_util.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_type_subst.int3 \
	parse_tree.prog_util.int3 \
	transform_hlds.dependency_graph.int3 \
	transform_hlds.inlining.int3 \
	transform_hlds.pd_cost.int3 \
	transform_hlds.pd_debug.int3 \
	transform_hlds.pd_info.int3 \
	transform_hlds.pd_term.int3 \
	transform_hlds.pd_util.int3 \
	analysis.int3 \
	array.int3 \
	bag.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	counter.int3 \
	deconstruct.int3 \
	enum.int3 \
	mode_robdd.int3 \
	multi_map.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	recompilation.int3 \
	relation.int3 \
	robdd.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stack.int3 \
	stream.int3 \
	table_builtin.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	check_hlds.common.int3 \
	check_hlds.delay_info.int3 \
	check_hlds.det_util.int3 \
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
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_item.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3



transform_hlds.deforest.$O :  \
	array.mh \
	array.mh \
	table_builtin.mh \
	table_builtin.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



transform_hlds.deforest.pic_o :  \
	array.mh \
	array.mh \
	table_builtin.mh \
	table_builtin.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


transform_hlds.deforest.int0 : transform_hlds.deforest.date0
	@:
transform_hlds.deforest.int : transform_hlds.deforest.date
	@:
transform_hlds.deforest.int2 : transform_hlds.deforest.date
	@:
transform_hlds.deforest.int3 : transform_hlds.deforest.date3
	@:
transform_hlds.deforest.opt : transform_hlds.deforest.optdate
	@:
transform_hlds.deforest.trans_opt : transform_hlds.deforest.trans_opt_date
	@:

transform_hlds.deforest.date0 : deforest.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) transform_hlds.deforest
transform_hlds.deforest.date : deforest.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) transform_hlds.deforest
transform_hlds.deforest.date3 : deforest.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) transform_hlds.deforest
transform_hlds.deforest.optdate : deforest.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) transform_hlds.deforest
transform_hlds.deforest.trans_opt_date : deforest.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) transform_hlds.deforest
transform_hlds.deforest.c_date : deforest.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) transform_hlds.deforest $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
transform_hlds.deforest.s_date : deforest.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only transform_hlds.deforest $(ERR_REDIRECT)
transform_hlds.deforest.pic_s_date : deforest.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" transform_hlds.deforest $(ERR_REDIRECT)
endif # TARGET_ASM
transform_hlds.deforest.il_date : deforest.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only transform_hlds.deforest $(ERR_REDIRECT)
transform_hlds.deforest.java_date : deforest.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only transform_hlds.deforest $(ERR_REDIRECT)
