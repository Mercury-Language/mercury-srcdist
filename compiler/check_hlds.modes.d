

check_hlds.modes.optdate check_hlds.modes.trans_opt_date modes.err check_hlds.modes.c_date check_hlds.modes.s_date check_hlds.modes.pic_s_date check_hlds.modes.il_date check_hlds.modes.java_date : modes.m \
	check_hlds.int0 \
	assoc_list.int \
	bag.int \
	bool.int \
	builtin.int \
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
	svmap.int \
	term.int \
	varset.int \
	check_hlds.clause_to_proc.int \
	check_hlds.delay_info.int \
	check_hlds.delay_partial_inst.int \
	check_hlds.inst_match.int \
	check_hlds.inst_util.int \
	check_hlds.mode_debug.int \
	check_hlds.mode_errors.int \
	check_hlds.mode_info.int \
	check_hlds.mode_util.int \
	check_hlds.modecheck_call.int \
	check_hlds.modecheck_unify.int \
	check_hlds.polymorphism.int \
	check_hlds.type_util.int \
	check_hlds.unify_proc.int \
	check_hlds.unique_modes.int \
	hlds.goal_util.int \
	hlds.hlds_clauses.int \
	hlds.hlds_data.int \
	hlds.hlds_goal.int \
	hlds.hlds_module.int \
	hlds.hlds_pred.int \
	hlds.instmap.int \
	hlds.passes_aux.int \
	hlds.pred_table.int \
	hlds.quantification.int \
	hlds.special_pred.int \
	libs.compiler_util.int \
	libs.file_util.int \
	libs.globals.int \
	libs.options.int \
	mdbcomp.prim_data.int \
	parse_tree.error_util.int \
	parse_tree.mercury_to_mercury.int \
	parse_tree.prog_data.int \
	parse_tree.prog_event.int \
	parse_tree.prog_mode.int \
	parse_tree.prog_out.int \
	parse_tree.prog_type.int \
	analysis.int2 \
	array.int2 \
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
	random.int2 \
	recompilation.int2 \
	robdd.int2 \
	set_ordlist.int2 \
	sparse_bitset.int2 \
	stack.int2 \
	stream.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	unit.int2 \
	univ.int2 \
	check_hlds.mode_constraint_robdd.int2 \
	hlds.hlds_args.int2 \
	hlds.hlds_llds.int2 \
	hlds.hlds_rtti.int2 \
	hlds.inst_graph.int2 \
	libs.lp_rational.int2 \
	libs.polyhedron.int2 \
	libs.rat.int2 \
	libs.timestamp.int2 \
	libs.trace_params.int2 \
	mdbcomp.feedback.int2 \
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
check_hlds.modes.mh check_hlds.modes.mih : check_hlds.modes.s
else
check_hlds.modes.mh check_hlds.modes.mih : check_hlds.modes.c
endif

ifeq ($(TARGET_ASM),yes)
check_hlds.modes.module_dep : check_hlds.modes.s
else
 ifeq ($(findstring il,$(GRADE)),il)
check_hlds.modes.module_dep : check_hlds.modes.il
  ifeq ($(findstring java,$(GRADE)),java)
check_hlds.modes.module_dep : mercury/check_hlds_/modes.java
  else
check_hlds.modes.module_dep : check_hlds.modes.c
  endif
 endif
endif

check_hlds.modes.date check_hlds.modes.date0 \
	check_hlds.date : modes.m \
	check_hlds.int0 \
	assoc_list.int3 \
	bag.int3 \
	bool.int3 \
	builtin.int3 \
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
	svmap.int3 \
	term.int3 \
	varset.int3 \
	check_hlds.clause_to_proc.int3 \
	check_hlds.delay_info.int3 \
	check_hlds.delay_partial_inst.int3 \
	check_hlds.inst_match.int3 \
	check_hlds.inst_util.int3 \
	check_hlds.mode_debug.int3 \
	check_hlds.mode_errors.int3 \
	check_hlds.mode_info.int3 \
	check_hlds.mode_util.int3 \
	check_hlds.modecheck_call.int3 \
	check_hlds.modecheck_unify.int3 \
	check_hlds.polymorphism.int3 \
	check_hlds.type_util.int3 \
	check_hlds.unify_proc.int3 \
	check_hlds.unique_modes.int3 \
	hlds.goal_util.int3 \
	hlds.hlds_clauses.int3 \
	hlds.hlds_data.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_pred.int3 \
	hlds.instmap.int3 \
	hlds.passes_aux.int3 \
	hlds.pred_table.int3 \
	hlds.quantification.int3 \
	hlds.special_pred.int3 \
	libs.compiler_util.int3 \
	libs.file_util.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.error_util.int3 \
	parse_tree.mercury_to_mercury.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_event.int3 \
	parse_tree.prog_mode.int3 \
	parse_tree.prog_out.int3 \
	parse_tree.prog_type.int3 \
	analysis.int3 \
	array.int3 \
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
	random.int3 \
	recompilation.int3 \
	robdd.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stack.int3 \
	stream.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	check_hlds.mode_constraint_robdd.int3 \
	hlds.hlds_args.int3 \
	hlds.hlds_llds.int3 \
	hlds.hlds_rtti.int3 \
	hlds.inst_graph.int3 \
	libs.lp_rational.int3 \
	libs.polyhedron.int3 \
	libs.rat.int3 \
	libs.timestamp.int3 \
	libs.trace_params.int3 \
	mdbcomp.feedback.int3 \
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

check_hlds.modes.date0 \
	check_hlds.date0 : modes.m \
	assoc_list.int3 \
	bag.int3 \
	bool.int3 \
	builtin.int3 \
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
	svmap.int3 \
	term.int3 \
	varset.int3 \
	check_hlds.clause_to_proc.int3 \
	check_hlds.delay_info.int3 \
	check_hlds.delay_partial_inst.int3 \
	check_hlds.inst_match.int3 \
	check_hlds.inst_util.int3 \
	check_hlds.mode_debug.int3 \
	check_hlds.mode_errors.int3 \
	check_hlds.mode_info.int3 \
	check_hlds.mode_util.int3 \
	check_hlds.modecheck_call.int3 \
	check_hlds.modecheck_unify.int3 \
	check_hlds.polymorphism.int3 \
	check_hlds.type_util.int3 \
	check_hlds.unify_proc.int3 \
	check_hlds.unique_modes.int3 \
	hlds.goal_util.int3 \
	hlds.hlds_clauses.int3 \
	hlds.hlds_data.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_pred.int3 \
	hlds.instmap.int3 \
	hlds.passes_aux.int3 \
	hlds.pred_table.int3 \
	hlds.quantification.int3 \
	hlds.special_pred.int3 \
	libs.compiler_util.int3 \
	libs.file_util.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.error_util.int3 \
	parse_tree.mercury_to_mercury.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_event.int3 \
	parse_tree.prog_mode.int3 \
	parse_tree.prog_out.int3 \
	parse_tree.prog_type.int3 \
	analysis.int3 \
	array.int3 \
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
	random.int3 \
	recompilation.int3 \
	robdd.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stack.int3 \
	stream.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	check_hlds.mode_constraint_robdd.int3 \
	hlds.hlds_args.int3 \
	hlds.hlds_llds.int3 \
	hlds.hlds_rtti.int3 \
	hlds.inst_graph.int3 \
	libs.lp_rational.int3 \
	libs.polyhedron.int3 \
	libs.rat.int3 \
	libs.timestamp.int3 \
	libs.trace_params.int3 \
	mdbcomp.feedback.int3 \
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



check_hlds.modes.$O :  \
	array.mh \
	array.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



check_hlds.modes.pic_o :  \
	array.mh \
	array.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


check_hlds.modes.int0 : check_hlds.modes.date0
	@:
check_hlds.modes.int : check_hlds.modes.date
	@:
check_hlds.modes.int2 : check_hlds.modes.date
	@:
check_hlds.modes.int3 : check_hlds.modes.date3
	@:
check_hlds.modes.opt : check_hlds.modes.optdate
	@:
check_hlds.modes.trans_opt : check_hlds.modes.trans_opt_date
	@:

check_hlds.modes.date0 : modes.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) check_hlds.modes
check_hlds.modes.date : modes.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) check_hlds.modes
check_hlds.modes.date3 : modes.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) check_hlds.modes
check_hlds.modes.optdate : modes.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) check_hlds.modes
check_hlds.modes.trans_opt_date : modes.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) check_hlds.modes
check_hlds.modes.c_date : modes.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) check_hlds.modes $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
check_hlds.modes.s_date : modes.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only check_hlds.modes $(ERR_REDIRECT)
check_hlds.modes.pic_s_date : modes.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" check_hlds.modes $(ERR_REDIRECT)
endif # TARGET_ASM
check_hlds.modes.il_date : modes.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only check_hlds.modes $(ERR_REDIRECT)
check_hlds.modes.java_date : modes.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only check_hlds.modes $(ERR_REDIRECT)
