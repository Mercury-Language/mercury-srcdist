

ll_backend.stack_opt.optdate ll_backend.stack_opt.trans_opt_date stack_opt.err ll_backend.stack_opt.c_date ll_backend.stack_opt.s_date ll_backend.stack_opt.pic_s_date ll_backend.stack_opt.il_date ll_backend.stack_opt.java_date : stack_opt.m \
	ll_backend.int0 \
	backend_libs.int \
	bool.int \
	builtin.int \
	check_hlds.int \
	counter.int \
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
	svmap.int \
	svset.int \
	term.int \
	backend_libs.interval.int \
	backend_libs.matching.int \
	check_hlds.goal_path.int \
	check_hlds.mode_util.int \
	check_hlds.simplify.int \
	hlds.arg_info.int \
	hlds.hlds_data.int \
	hlds.hlds_goal.int \
	hlds.hlds_llds.int \
	hlds.hlds_module.int \
	hlds.hlds_out.int \
	hlds.hlds_pred.int \
	hlds.quantification.int \
	libs.compiler_util.int \
	libs.globals.int \
	libs.options.int \
	ll_backend.live_vars.int \
	ll_backend.liveness.int \
	ll_backend.store_alloc.int \
	mdbcomp.program_representation.int \
	parse_tree.mercury_to_mercury.int \
	parse_tree.prog_data.int \
	parse_tree.prog_type.int \
	analysis.int2 \
	array.int2 \
	assoc_list.int2 \
	bag.int2 \
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
	string.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	unit.int2 \
	univ.int2 \
	varset.int2 \
	check_hlds.common.int2 \
	check_hlds.delay_info.int2 \
	check_hlds.det_util.int2 \
	check_hlds.mode_constraint_robdd.int2 \
	check_hlds.mode_errors.int2 \
	check_hlds.mode_info.int2 \
	check_hlds.unify_proc.int2 \
	hlds.code_model.int2 \
	hlds.hlds_args.int2 \
	hlds.hlds_clauses.int2 \
	hlds.hlds_rtti.int2 \
	hlds.inst_graph.int2 \
	hlds.instmap.int2 \
	hlds.pred_table.int2 \
	hlds.special_pred.int2 \
	libs.lp_rational.int2 \
	libs.polyhedron.int2 \
	libs.rat.int2 \
	libs.timestamp.int2 \
	libs.trace_params.int2 \
	mdbcomp.feedback.int2 \
	mdbcomp.prim_data.int2 \
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
	transform_hlds.term_util.int2

ifeq ($(TARGET_ASM),yes)
ll_backend.stack_opt.mh ll_backend.stack_opt.mih : ll_backend.stack_opt.s
else
ll_backend.stack_opt.mh ll_backend.stack_opt.mih : ll_backend.stack_opt.c
endif

ifeq ($(TARGET_ASM),yes)
ll_backend.stack_opt.module_dep : ll_backend.stack_opt.s
else
 ifeq ($(findstring il,$(GRADE)),il)
ll_backend.stack_opt.module_dep : ll_backend.stack_opt.il
  ifeq ($(findstring java,$(GRADE)),java)
ll_backend.stack_opt.module_dep : jmercury/ll_backend__stack_opt.java
  else
ll_backend.stack_opt.module_dep : ll_backend.stack_opt.c
  endif
 endif
endif

ll_backend.stack_opt.date ll_backend.stack_opt.date0 \
	ll_backend.date : stack_opt.m \
	ll_backend.int0 \
	backend_libs.int3 \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
	counter.int3 \
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
	svmap.int3 \
	svset.int3 \
	term.int3 \
	backend_libs.interval.int3 \
	backend_libs.matching.int3 \
	check_hlds.goal_path.int3 \
	check_hlds.mode_util.int3 \
	check_hlds.simplify.int3 \
	hlds.arg_info.int3 \
	hlds.hlds_data.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_llds.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_out.int3 \
	hlds.hlds_pred.int3 \
	hlds.quantification.int3 \
	libs.compiler_util.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	ll_backend.live_vars.int3 \
	ll_backend.liveness.int3 \
	ll_backend.store_alloc.int3 \
	mdbcomp.program_representation.int3 \
	parse_tree.mercury_to_mercury.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_type.int3 \
	analysis.int3 \
	array.int3 \
	assoc_list.int3 \
	bag.int3 \
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
	string.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	varset.int3 \
	check_hlds.common.int3 \
	check_hlds.delay_info.int3 \
	check_hlds.det_util.int3 \
	check_hlds.mode_constraint_robdd.int3 \
	check_hlds.mode_errors.int3 \
	check_hlds.mode_info.int3 \
	check_hlds.unify_proc.int3 \
	hlds.code_model.int3 \
	hlds.hlds_args.int3 \
	hlds.hlds_clauses.int3 \
	hlds.hlds_rtti.int3 \
	hlds.inst_graph.int3 \
	hlds.instmap.int3 \
	hlds.pred_table.int3 \
	hlds.special_pred.int3 \
	libs.lp_rational.int3 \
	libs.polyhedron.int3 \
	libs.rat.int3 \
	libs.timestamp.int3 \
	libs.trace_params.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.prim_data.int3 \
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
	transform_hlds.term_util.int3

ll_backend.stack_opt.date0 \
	ll_backend.date0 : stack_opt.m \
	backend_libs.int3 \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
	counter.int3 \
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
	svmap.int3 \
	svset.int3 \
	term.int3 \
	backend_libs.interval.int3 \
	backend_libs.matching.int3 \
	check_hlds.goal_path.int3 \
	check_hlds.mode_util.int3 \
	check_hlds.simplify.int3 \
	hlds.arg_info.int3 \
	hlds.hlds_data.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_llds.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_out.int3 \
	hlds.hlds_pred.int3 \
	hlds.quantification.int3 \
	libs.compiler_util.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	ll_backend.live_vars.int3 \
	ll_backend.liveness.int3 \
	ll_backend.store_alloc.int3 \
	mdbcomp.program_representation.int3 \
	parse_tree.mercury_to_mercury.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_type.int3 \
	analysis.int3 \
	array.int3 \
	assoc_list.int3 \
	bag.int3 \
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
	string.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	varset.int3 \
	check_hlds.common.int3 \
	check_hlds.delay_info.int3 \
	check_hlds.det_util.int3 \
	check_hlds.mode_constraint_robdd.int3 \
	check_hlds.mode_errors.int3 \
	check_hlds.mode_info.int3 \
	check_hlds.unify_proc.int3 \
	hlds.code_model.int3 \
	hlds.hlds_args.int3 \
	hlds.hlds_clauses.int3 \
	hlds.hlds_rtti.int3 \
	hlds.inst_graph.int3 \
	hlds.instmap.int3 \
	hlds.pred_table.int3 \
	hlds.special_pred.int3 \
	libs.lp_rational.int3 \
	libs.polyhedron.int3 \
	libs.rat.int3 \
	libs.timestamp.int3 \
	libs.trace_params.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.prim_data.int3 \
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
	transform_hlds.term_util.int3



ll_backend.stack_opt.$O :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh \
	string.mh \
	io.mh \
	io.mh



ll_backend.stack_opt.pic_o :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh \
	string.mh \
	io.mh \
	io.mh


ll_backend.stack_opt.int0 : ll_backend.stack_opt.date0
	@:
ll_backend.stack_opt.int : ll_backend.stack_opt.date
	@:
ll_backend.stack_opt.int2 : ll_backend.stack_opt.date
	@:
ll_backend.stack_opt.int3 : ll_backend.stack_opt.date3
	@:
ll_backend.stack_opt.opt : ll_backend.stack_opt.optdate
	@:
ll_backend.stack_opt.trans_opt : ll_backend.stack_opt.trans_opt_date
	@:

ll_backend.stack_opt.date0 : stack_opt.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) ll_backend.stack_opt
ll_backend.stack_opt.date : stack_opt.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) ll_backend.stack_opt
ll_backend.stack_opt.date3 : stack_opt.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) ll_backend.stack_opt
ll_backend.stack_opt.optdate : stack_opt.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) ll_backend.stack_opt
ll_backend.stack_opt.trans_opt_date : stack_opt.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) ll_backend.stack_opt
ll_backend.stack_opt.c_date : stack_opt.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) ll_backend.stack_opt $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
ll_backend.stack_opt.s_date : stack_opt.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only ll_backend.stack_opt $(ERR_REDIRECT)
ll_backend.stack_opt.pic_s_date : stack_opt.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" ll_backend.stack_opt $(ERR_REDIRECT)
endif # TARGET_ASM
ll_backend.stack_opt.il_date : stack_opt.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only ll_backend.stack_opt $(ERR_REDIRECT)
ll_backend.stack_opt.java_date : stack_opt.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only ll_backend.stack_opt $(ERR_REDIRECT)
