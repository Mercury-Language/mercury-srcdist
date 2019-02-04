

ll_backend.commit_gen.optdate ll_backend.commit_gen.trans_opt_date commit_gen.err ll_backend.commit_gen.c_date ll_backend.commit_gen.s_date ll_backend.commit_gen.pic_s_date ll_backend.commit_gen.il_date ll_backend.commit_gen.java_date : commit_gen.m \
	ll_backend.int0 \
	backend_libs.int \
	builtin.int \
	check_hlds.int \
	cord.int \
	hlds.int \
	libs.int \
	maybe.int \
	mdbcomp.int \
	parse_tree.int \
	private_builtin.int \
	require.int \
	set.int \
	hlds.code_model.int \
	hlds.hlds_goal.int \
	ll_backend.code_gen.int \
	ll_backend.code_info.int \
	ll_backend.llds.int \
	parse_tree.prog_data.int \
	analysis.int2 \
	array.int2 \
	assoc_list.int2 \
	bag.int2 \
	bimap.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	counter.int2 \
	deconstruct.int2 \
	digraph.int2 \
	enum.int2 \
	getopt_io.int2 \
	io.int2 \
	list.int2 \
	map.int2 \
	mode_robdd.int2 \
	multi_map.int2 \
	ops.int2 \
	pair.int2 \
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
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	unit.int2 \
	univ.int2 \
	varset.int2 \
	backend_libs.builtin_ops.int2 \
	backend_libs.rtti.int2 \
	check_hlds.delay_info.int2 \
	check_hlds.mode_constraint_robdd.int2 \
	check_hlds.mode_errors.int2 \
	check_hlds.mode_info.int2 \
	check_hlds.type_util.int2 \
	check_hlds.unify_proc.int2 \
	hlds.hlds_args.int2 \
	hlds.hlds_clauses.int2 \
	hlds.hlds_data.int2 \
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
	ll_backend.continuation_info.int2 \
	ll_backend.global_data.int2 \
	ll_backend.layout.int2 \
	ll_backend.trace_gen.int2 \
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
	parse_tree.prog_type.int2 \
	transform_hlds.term_constr_data.int2 \
	transform_hlds.term_constr_errors.int2 \
	transform_hlds.term_constr_main.int2 \
	transform_hlds.term_errors.int2 \
	transform_hlds.term_norm.int2 \
	transform_hlds.term_util.int2 \
	mdbcomp.feedback.automatic_parallelism.int2

ifeq ($(TARGET_ASM),yes)
ll_backend.commit_gen.mh ll_backend.commit_gen.mih : ll_backend.commit_gen.s
else
ll_backend.commit_gen.mh ll_backend.commit_gen.mih : ll_backend.commit_gen.c
endif

ifeq ($(TARGET_ASM),yes)
ll_backend.commit_gen.module_dep : ll_backend.commit_gen.s
else
 ifeq ($(findstring il,$(GRADE)),il)
ll_backend.commit_gen.module_dep : ll_backend.commit_gen.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
ll_backend.commit_gen.module_dep : jmercury/ll_backend__commit_gen.java
  else
ll_backend.commit_gen.module_dep : ll_backend.commit_gen.c
  endif
 endif
endif

ll_backend.commit_gen.date ll_backend.commit_gen.date0 \
	ll_backend.date : commit_gen.m \
	ll_backend.int0 \
	backend_libs.int3 \
	builtin.int3 \
	check_hlds.int3 \
	cord.int3 \
	hlds.int3 \
	libs.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	hlds.code_model.int3 \
	hlds.hlds_goal.int3 \
	ll_backend.code_gen.int3 \
	ll_backend.code_info.int3 \
	ll_backend.llds.int3 \
	parse_tree.prog_data.int3 \
	analysis.int3 \
	array.int3 \
	assoc_list.int3 \
	bag.int3 \
	bimap.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	counter.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	mode_robdd.int3 \
	multi_map.int3 \
	ops.int3 \
	pair.int3 \
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
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	varset.int3 \
	backend_libs.builtin_ops.int3 \
	backend_libs.rtti.int3 \
	check_hlds.delay_info.int3 \
	check_hlds.mode_constraint_robdd.int3 \
	check_hlds.mode_errors.int3 \
	check_hlds.mode_info.int3 \
	check_hlds.type_util.int3 \
	check_hlds.unify_proc.int3 \
	hlds.hlds_args.int3 \
	hlds.hlds_clauses.int3 \
	hlds.hlds_data.int3 \
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
	ll_backend.continuation_info.int3 \
	ll_backend.global_data.int3 \
	ll_backend.layout.int3 \
	ll_backend.trace_gen.int3 \
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
	parse_tree.prog_type.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3 \
	mdbcomp.feedback.automatic_parallelism.int3

ll_backend.commit_gen.date0 \
	ll_backend.date0 : commit_gen.m \
	backend_libs.int3 \
	builtin.int3 \
	check_hlds.int3 \
	cord.int3 \
	hlds.int3 \
	libs.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	hlds.code_model.int3 \
	hlds.hlds_goal.int3 \
	ll_backend.code_gen.int3 \
	ll_backend.code_info.int3 \
	ll_backend.llds.int3 \
	parse_tree.prog_data.int3 \
	analysis.int3 \
	array.int3 \
	assoc_list.int3 \
	bag.int3 \
	bimap.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	counter.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	mode_robdd.int3 \
	multi_map.int3 \
	ops.int3 \
	pair.int3 \
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
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	varset.int3 \
	backend_libs.builtin_ops.int3 \
	backend_libs.rtti.int3 \
	check_hlds.delay_info.int3 \
	check_hlds.mode_constraint_robdd.int3 \
	check_hlds.mode_errors.int3 \
	check_hlds.mode_info.int3 \
	check_hlds.type_util.int3 \
	check_hlds.unify_proc.int3 \
	hlds.hlds_args.int3 \
	hlds.hlds_clauses.int3 \
	hlds.hlds_data.int3 \
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
	ll_backend.continuation_info.int3 \
	ll_backend.global_data.int3 \
	ll_backend.layout.int3 \
	ll_backend.trace_gen.int3 \
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
	parse_tree.prog_type.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3 \
	mdbcomp.feedback.automatic_parallelism.int3



ll_backend.commit_gen.$O :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	array.mh \
	array.mh \
	string.mh \
	io.mh \
	io.mh



ll_backend.commit_gen.pic_o :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	array.mh \
	array.mh \
	string.mh \
	io.mh \
	io.mh


ll_backend.commit_gen.int0 : ll_backend.commit_gen.date0
	@:
ll_backend.commit_gen.int : ll_backend.commit_gen.date
	@:
ll_backend.commit_gen.int2 : ll_backend.commit_gen.date
	@:
ll_backend.commit_gen.int3 : ll_backend.commit_gen.date3
	@:
ll_backend.commit_gen.opt : ll_backend.commit_gen.optdate
	@:
ll_backend.commit_gen.trans_opt : ll_backend.commit_gen.trans_opt_date
	@:

ll_backend.commit_gen.date0 : commit_gen.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) ll_backend.commit_gen
ll_backend.commit_gen.date : commit_gen.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) ll_backend.commit_gen
ll_backend.commit_gen.date3 : commit_gen.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) ll_backend.commit_gen
ll_backend.commit_gen.optdate : commit_gen.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) ll_backend.commit_gen
ll_backend.commit_gen.trans_opt_date : commit_gen.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) ll_backend.commit_gen
ll_backend.commit_gen.c_date : commit_gen.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) ll_backend.commit_gen $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
ll_backend.commit_gen.s_date : commit_gen.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only ll_backend.commit_gen $(ERR_REDIRECT)
ll_backend.commit_gen.pic_s_date : commit_gen.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" ll_backend.commit_gen $(ERR_REDIRECT)
endif # TARGET_ASM
ll_backend.commit_gen.il_date : commit_gen.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only ll_backend.commit_gen $(ERR_REDIRECT)
ll_backend.commit_gen.java_date : commit_gen.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only ll_backend.commit_gen $(ERR_REDIRECT)
