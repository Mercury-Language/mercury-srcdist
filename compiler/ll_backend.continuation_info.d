

ll_backend.continuation_info.optdate ll_backend.continuation_info.trans_opt_date continuation_info.err ll_backend.continuation_info.c_date ll_backend.continuation_info.s_date ll_backend.continuation_info.pic_s_date ll_backend.continuation_info.il_date ll_backend.continuation_info.java_date : continuation_info.m \
	ll_backend.int0 \
	assoc_list.int \
	backend_libs.int \
	bool.int \
	builtin.int \
	check_hlds.int \
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
	solutions.int \
	string.int \
	svmap.int \
	svset.int \
	term.int \
	varset.int \
	check_hlds.inst_match.int \
	check_hlds.type_util.int \
	hlds.hlds_goal.int \
	hlds.hlds_llds.int \
	hlds.hlds_module.int \
	hlds.hlds_pred.int \
	hlds.hlds_rtti.int \
	hlds.instmap.int \
	libs.globals.int \
	libs.options.int \
	libs.trace_params.int \
	ll_backend.code_util.int \
	ll_backend.global_data.int \
	ll_backend.layout.int \
	ll_backend.llds.int \
	ll_backend.trace_gen.int \
	mdbcomp.goal_path.int \
	mdbcomp.prim_data.int \
	parse_tree.prog_data.int \
	parse_tree.prog_type.int \
	analysis.int2 \
	array.int2 \
	bag.int2 \
	bimap.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	cord.int2 \
	counter.int2 \
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
	backend_libs.builtin_ops.int2 \
	backend_libs.rtti.int2 \
	check_hlds.delay_info.int2 \
	check_hlds.mode_constraint_robdd.int2 \
	check_hlds.mode_errors.int2 \
	check_hlds.mode_info.int2 \
	check_hlds.unify_proc.int2 \
	hlds.code_model.int2 \
	hlds.hlds_args.int2 \
	hlds.hlds_clauses.int2 \
	hlds.hlds_data.int2 \
	hlds.inst_graph.int2 \
	hlds.pred_table.int2 \
	hlds.special_pred.int2 \
	libs.lp_rational.int2 \
	libs.polyhedron.int2 \
	libs.rat.int2 \
	libs.timestamp.int2 \
	ll_backend.code_info.int2 \
	mdbcomp.feedback.int2 \
	mdbcomp.program_representation.int2 \
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
	transform_hlds.term_util.int2 \
	mdbcomp.feedback.automatic_parallelism.int2

ifeq ($(TARGET_ASM),yes)
ll_backend.continuation_info.mh ll_backend.continuation_info.mih : ll_backend.continuation_info.s
else
ll_backend.continuation_info.mh ll_backend.continuation_info.mih : ll_backend.continuation_info.c
endif

ifeq ($(TARGET_ASM),yes)
ll_backend.continuation_info.module_dep : ll_backend.continuation_info.s
else
 ifeq ($(findstring il,$(GRADE)),il)
ll_backend.continuation_info.module_dep : ll_backend.continuation_info.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
ll_backend.continuation_info.module_dep : jmercury/ll_backend__continuation_info.java
  else
ll_backend.continuation_info.module_dep : ll_backend.continuation_info.c
  endif
 endif
endif

ll_backend.continuation_info.date ll_backend.continuation_info.date0 \
	ll_backend.date : continuation_info.m \
	ll_backend.int0 \
	assoc_list.int3 \
	backend_libs.int3 \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
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
	solutions.int3 \
	string.int3 \
	svmap.int3 \
	svset.int3 \
	term.int3 \
	varset.int3 \
	check_hlds.inst_match.int3 \
	check_hlds.type_util.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_llds.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_pred.int3 \
	hlds.hlds_rtti.int3 \
	hlds.instmap.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	libs.trace_params.int3 \
	ll_backend.code_util.int3 \
	ll_backend.global_data.int3 \
	ll_backend.layout.int3 \
	ll_backend.llds.int3 \
	ll_backend.trace_gen.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_type.int3 \
	analysis.int3 \
	array.int3 \
	bag.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	cord.int3 \
	counter.int3 \
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
	backend_libs.builtin_ops.int3 \
	backend_libs.rtti.int3 \
	check_hlds.delay_info.int3 \
	check_hlds.mode_constraint_robdd.int3 \
	check_hlds.mode_errors.int3 \
	check_hlds.mode_info.int3 \
	check_hlds.unify_proc.int3 \
	hlds.code_model.int3 \
	hlds.hlds_args.int3 \
	hlds.hlds_clauses.int3 \
	hlds.hlds_data.int3 \
	hlds.inst_graph.int3 \
	hlds.pred_table.int3 \
	hlds.special_pred.int3 \
	libs.lp_rational.int3 \
	libs.polyhedron.int3 \
	libs.rat.int3 \
	libs.timestamp.int3 \
	ll_backend.code_info.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.program_representation.int3 \
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
	transform_hlds.term_util.int3 \
	mdbcomp.feedback.automatic_parallelism.int3

ll_backend.continuation_info.date0 \
	ll_backend.date0 : continuation_info.m \
	assoc_list.int3 \
	backend_libs.int3 \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
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
	solutions.int3 \
	string.int3 \
	svmap.int3 \
	svset.int3 \
	term.int3 \
	varset.int3 \
	check_hlds.inst_match.int3 \
	check_hlds.type_util.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_llds.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_pred.int3 \
	hlds.hlds_rtti.int3 \
	hlds.instmap.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	libs.trace_params.int3 \
	ll_backend.code_util.int3 \
	ll_backend.global_data.int3 \
	ll_backend.layout.int3 \
	ll_backend.llds.int3 \
	ll_backend.trace_gen.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_type.int3 \
	analysis.int3 \
	array.int3 \
	bag.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	cord.int3 \
	counter.int3 \
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
	backend_libs.builtin_ops.int3 \
	backend_libs.rtti.int3 \
	check_hlds.delay_info.int3 \
	check_hlds.mode_constraint_robdd.int3 \
	check_hlds.mode_errors.int3 \
	check_hlds.mode_info.int3 \
	check_hlds.unify_proc.int3 \
	hlds.code_model.int3 \
	hlds.hlds_args.int3 \
	hlds.hlds_clauses.int3 \
	hlds.hlds_data.int3 \
	hlds.inst_graph.int3 \
	hlds.pred_table.int3 \
	hlds.special_pred.int3 \
	libs.lp_rational.int3 \
	libs.polyhedron.int3 \
	libs.rat.int3 \
	libs.timestamp.int3 \
	ll_backend.code_info.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.program_representation.int3 \
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
	transform_hlds.term_util.int3 \
	mdbcomp.feedback.automatic_parallelism.int3



ll_backend.continuation_info.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	string.mh \
	io.mh \
	io.mh \
	array.mh \
	array.mh



ll_backend.continuation_info.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	string.mh \
	io.mh \
	io.mh \
	array.mh \
	array.mh


ll_backend.continuation_info.int0 : ll_backend.continuation_info.date0
	@:
ll_backend.continuation_info.int : ll_backend.continuation_info.date
	@:
ll_backend.continuation_info.int2 : ll_backend.continuation_info.date
	@:
ll_backend.continuation_info.int3 : ll_backend.continuation_info.date3
	@:
ll_backend.continuation_info.opt : ll_backend.continuation_info.optdate
	@:
ll_backend.continuation_info.trans_opt : ll_backend.continuation_info.trans_opt_date
	@:

ll_backend.continuation_info.date0 : continuation_info.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) ll_backend.continuation_info
ll_backend.continuation_info.date : continuation_info.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) ll_backend.continuation_info
ll_backend.continuation_info.date3 : continuation_info.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) ll_backend.continuation_info
ll_backend.continuation_info.optdate : continuation_info.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) ll_backend.continuation_info
ll_backend.continuation_info.trans_opt_date : continuation_info.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) ll_backend.continuation_info
ll_backend.continuation_info.c_date : continuation_info.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) ll_backend.continuation_info $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
ll_backend.continuation_info.s_date : continuation_info.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only ll_backend.continuation_info $(ERR_REDIRECT)
ll_backend.continuation_info.pic_s_date : continuation_info.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" ll_backend.continuation_info $(ERR_REDIRECT)
endif # TARGET_ASM
ll_backend.continuation_info.il_date : continuation_info.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only ll_backend.continuation_info $(ERR_REDIRECT)
ll_backend.continuation_info.java_date : continuation_info.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only ll_backend.continuation_info $(ERR_REDIRECT)
