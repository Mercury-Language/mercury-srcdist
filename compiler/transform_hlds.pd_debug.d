

transform_hlds.pd_debug.optdate transform_hlds.pd_debug.trans_opt_date pd_debug.err transform_hlds.pd_debug.c_date transform_hlds.pd_debug.s_date transform_hlds.pd_debug.pic_s_date transform_hlds.pd_debug.il_date transform_hlds.pd_debug.java_date : pd_debug.m \
	transform_hlds.int0 \
	bool.int \
	builtin.int \
	check_hlds.int \
	hlds.int \
	io.int \
	libs.int \
	list.int \
	mdbcomp.int \
	pair.int \
	parse_tree.int \
	private_builtin.int \
	set.int \
	string.int \
	hlds.goal_util.int \
	hlds.hlds_goal.int \
	hlds.hlds_module.int \
	hlds.hlds_out.int \
	hlds.hlds_pred.int \
	hlds.instmap.int \
	libs.globals.int \
	libs.options.int \
	parse_tree.mercury_to_mercury.int \
	parse_tree.prog_data.int \
	parse_tree.prog_out.int \
	transform_hlds.pd_info.int \
	hlds.hlds_out.hlds_out_goal.int \
	hlds.hlds_out.hlds_out_mode.int \
	hlds.hlds_out.hlds_out_util.int \
	analysis.int2 \
	array.int2 \
	assoc_list.int2 \
	bag.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	counter.int2 \
	deconstruct.int2 \
	digraph.int2 \
	enum.int2 \
	getopt_io.int2 \
	int.int2 \
	map.int2 \
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
	parse_tree.module_qual.int2 \
	parse_tree.prog_foreign.int2 \
	parse_tree.prog_item.int2 \
	transform_hlds.pd_term.int2 \
	transform_hlds.term_constr_data.int2 \
	transform_hlds.term_constr_errors.int2 \
	transform_hlds.term_constr_main.int2 \
	transform_hlds.term_errors.int2 \
	transform_hlds.term_norm.int2 \
	transform_hlds.term_util.int2

ifeq ($(TARGET_ASM),yes)
transform_hlds.pd_debug.mh transform_hlds.pd_debug.mih : transform_hlds.pd_debug.s
else
transform_hlds.pd_debug.mh transform_hlds.pd_debug.mih : transform_hlds.pd_debug.c
endif

ifeq ($(TARGET_ASM),yes)
transform_hlds.pd_debug.module_dep : transform_hlds.pd_debug.s
else
 ifeq ($(findstring il,$(GRADE)),il)
transform_hlds.pd_debug.module_dep : transform_hlds.pd_debug.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
transform_hlds.pd_debug.module_dep : jmercury/transform_hlds__pd_debug.java
  else
transform_hlds.pd_debug.module_dep : transform_hlds.pd_debug.c
  endif
 endif
endif

transform_hlds.pd_debug.date transform_hlds.pd_debug.date0 \
	transform_hlds.date : pd_debug.m \
	transform_hlds.int0 \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
	hlds.int3 \
	io.int3 \
	libs.int3 \
	list.int3 \
	mdbcomp.int3 \
	pair.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	set.int3 \
	string.int3 \
	hlds.goal_util.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_out.int3 \
	hlds.hlds_pred.int3 \
	hlds.instmap.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	parse_tree.mercury_to_mercury.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_out.int3 \
	transform_hlds.pd_info.int3 \
	hlds.hlds_out.hlds_out_goal.int3 \
	hlds.hlds_out.hlds_out_mode.int3 \
	hlds.hlds_out.hlds_out_util.int3 \
	analysis.int3 \
	array.int3 \
	assoc_list.int3 \
	bag.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	counter.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
	int.int3 \
	map.int3 \
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
	parse_tree.module_qual.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_item.int3 \
	transform_hlds.pd_term.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3

transform_hlds.pd_debug.date0 \
	transform_hlds.date0 : pd_debug.m \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
	hlds.int3 \
	io.int3 \
	libs.int3 \
	list.int3 \
	mdbcomp.int3 \
	pair.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	set.int3 \
	string.int3 \
	hlds.goal_util.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_out.int3 \
	hlds.hlds_pred.int3 \
	hlds.instmap.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	parse_tree.mercury_to_mercury.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_out.int3 \
	transform_hlds.pd_info.int3 \
	hlds.hlds_out.hlds_out_goal.int3 \
	hlds.hlds_out.hlds_out_mode.int3 \
	hlds.hlds_out.hlds_out_util.int3 \
	analysis.int3 \
	array.int3 \
	assoc_list.int3 \
	bag.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	counter.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
	int.int3 \
	map.int3 \
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
	parse_tree.module_qual.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_item.int3 \
	transform_hlds.pd_term.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3



transform_hlds.pd_debug.$O :  \
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



transform_hlds.pd_debug.pic_o :  \
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


transform_hlds.pd_debug.int0 : transform_hlds.pd_debug.date0
	@:
transform_hlds.pd_debug.int : transform_hlds.pd_debug.date
	@:
transform_hlds.pd_debug.int2 : transform_hlds.pd_debug.date
	@:
transform_hlds.pd_debug.int3 : transform_hlds.pd_debug.date3
	@:
transform_hlds.pd_debug.opt : transform_hlds.pd_debug.optdate
	@:
transform_hlds.pd_debug.trans_opt : transform_hlds.pd_debug.trans_opt_date
	@:

transform_hlds.pd_debug.date0 : pd_debug.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) transform_hlds.pd_debug
transform_hlds.pd_debug.date : pd_debug.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) transform_hlds.pd_debug
transform_hlds.pd_debug.date3 : pd_debug.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) transform_hlds.pd_debug
transform_hlds.pd_debug.optdate : pd_debug.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) transform_hlds.pd_debug
transform_hlds.pd_debug.trans_opt_date : pd_debug.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) transform_hlds.pd_debug
transform_hlds.pd_debug.c_date : pd_debug.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) transform_hlds.pd_debug $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
transform_hlds.pd_debug.s_date : pd_debug.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only transform_hlds.pd_debug $(ERR_REDIRECT)
transform_hlds.pd_debug.pic_s_date : pd_debug.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" transform_hlds.pd_debug $(ERR_REDIRECT)
endif # TARGET_ASM
transform_hlds.pd_debug.il_date : pd_debug.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only transform_hlds.pd_debug $(ERR_REDIRECT)
transform_hlds.pd_debug.java_date : pd_debug.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only transform_hlds.pd_debug $(ERR_REDIRECT)
