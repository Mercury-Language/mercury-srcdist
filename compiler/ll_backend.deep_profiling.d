

ll_backend.deep_profiling.optdate ll_backend.deep_profiling.trans_opt_date deep_profiling.err ll_backend.deep_profiling.c_date ll_backend.deep_profiling.s_date ll_backend.deep_profiling.pic_s_date ll_backend.deep_profiling.il_date ll_backend.deep_profiling.java_date : deep_profiling.m \
	ll_backend.int0 \
	assoc_list.int \
	backend_libs.int \
	bool.int \
	builtin.int \
	check_hlds.int \
	cord.int \
	counter.int \
	hlds.int \
	int.int \
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
	svvarset.int \
	term.int \
	transform_hlds.int \
	varset.int \
	check_hlds.mode_util.int \
	hlds.code_model.int \
	hlds.goal_path.int \
	hlds.goal_util.int \
	hlds.hlds_goal.int \
	hlds.hlds_module.int \
	hlds.hlds_out.int \
	hlds.hlds_pred.int \
	hlds.hlds_rtti.int \
	hlds.instmap.int \
	hlds.pred_table.int \
	libs.file_util.int \
	libs.globals.int \
	libs.options.int \
	ll_backend.coverage_profiling.int \
	mdbcomp.goal_path.int \
	mdbcomp.prim_data.int \
	parse_tree.builtin_lib_types.int \
	parse_tree.prog_data.int \
	parse_tree.prog_type.int \
	transform_hlds.dead_proc_elim.int \
	transform_hlds.dependency_graph.int \
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
	io.int2 \
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
	type_desc.int2 \
	unit.int2 \
	univ.int2 \
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
	hlds.special_pred.int2 \
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
ll_backend.deep_profiling.mh ll_backend.deep_profiling.mih : ll_backend.deep_profiling.s
else
ll_backend.deep_profiling.mh ll_backend.deep_profiling.mih : ll_backend.deep_profiling.c
endif

ifeq ($(TARGET_ASM),yes)
ll_backend.deep_profiling.module_dep : ll_backend.deep_profiling.s
else
 ifeq ($(findstring il,$(GRADE)),il)
ll_backend.deep_profiling.module_dep : ll_backend.deep_profiling.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
ll_backend.deep_profiling.module_dep : jmercury/ll_backend__deep_profiling.java
  else
ll_backend.deep_profiling.module_dep : ll_backend.deep_profiling.c
  endif
 endif
endif

ll_backend.deep_profiling.date ll_backend.deep_profiling.date0 \
	ll_backend.date : deep_profiling.m \
	ll_backend.int0 \
	assoc_list.int3 \
	backend_libs.int3 \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
	cord.int3 \
	counter.int3 \
	hlds.int3 \
	int.int3 \
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
	svvarset.int3 \
	term.int3 \
	transform_hlds.int3 \
	varset.int3 \
	check_hlds.mode_util.int3 \
	hlds.code_model.int3 \
	hlds.goal_path.int3 \
	hlds.goal_util.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_out.int3 \
	hlds.hlds_pred.int3 \
	hlds.hlds_rtti.int3 \
	hlds.instmap.int3 \
	hlds.pred_table.int3 \
	libs.file_util.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	ll_backend.coverage_profiling.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.builtin_lib_types.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_type.int3 \
	transform_hlds.dead_proc_elim.int3 \
	transform_hlds.dependency_graph.int3 \
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
	io.int3 \
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
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
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
	hlds.special_pred.int3 \
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

ll_backend.deep_profiling.date0 \
	ll_backend.date0 : deep_profiling.m \
	assoc_list.int3 \
	backend_libs.int3 \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
	cord.int3 \
	counter.int3 \
	hlds.int3 \
	int.int3 \
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
	svvarset.int3 \
	term.int3 \
	transform_hlds.int3 \
	varset.int3 \
	check_hlds.mode_util.int3 \
	hlds.code_model.int3 \
	hlds.goal_path.int3 \
	hlds.goal_util.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_out.int3 \
	hlds.hlds_pred.int3 \
	hlds.hlds_rtti.int3 \
	hlds.instmap.int3 \
	hlds.pred_table.int3 \
	libs.file_util.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	ll_backend.coverage_profiling.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.builtin_lib_types.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_type.int3 \
	transform_hlds.dead_proc_elim.int3 \
	transform_hlds.dependency_graph.int3 \
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
	io.int3 \
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
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
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
	hlds.special_pred.int3 \
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



ll_backend.deep_profiling.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	string.mh \
	io.mh \
	io.mh



ll_backend.deep_profiling.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	string.mh \
	io.mh \
	io.mh


ll_backend.deep_profiling.int0 : ll_backend.deep_profiling.date0
	@:
ll_backend.deep_profiling.int : ll_backend.deep_profiling.date
	@:
ll_backend.deep_profiling.int2 : ll_backend.deep_profiling.date
	@:
ll_backend.deep_profiling.int3 : ll_backend.deep_profiling.date3
	@:
ll_backend.deep_profiling.opt : ll_backend.deep_profiling.optdate
	@:
ll_backend.deep_profiling.trans_opt : ll_backend.deep_profiling.trans_opt_date
	@:

ll_backend.deep_profiling.date0 : deep_profiling.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) ll_backend.deep_profiling
ll_backend.deep_profiling.date : deep_profiling.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) ll_backend.deep_profiling
ll_backend.deep_profiling.date3 : deep_profiling.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) ll_backend.deep_profiling
ll_backend.deep_profiling.optdate : deep_profiling.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) ll_backend.deep_profiling
ll_backend.deep_profiling.trans_opt_date : deep_profiling.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) ll_backend.deep_profiling
ll_backend.deep_profiling.c_date : deep_profiling.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) ll_backend.deep_profiling $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
ll_backend.deep_profiling.s_date : deep_profiling.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only ll_backend.deep_profiling $(ERR_REDIRECT)
ll_backend.deep_profiling.pic_s_date : deep_profiling.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" ll_backend.deep_profiling $(ERR_REDIRECT)
endif # TARGET_ASM
ll_backend.deep_profiling.il_date : deep_profiling.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only ll_backend.deep_profiling $(ERR_REDIRECT)
ll_backend.deep_profiling.java_date : deep_profiling.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only ll_backend.deep_profiling $(ERR_REDIRECT)
