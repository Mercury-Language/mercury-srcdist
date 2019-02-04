

bytecode_backend.bytecode_gen.optdate bytecode_backend.bytecode_gen.trans_opt_date bytecode_gen.err bytecode_backend.bytecode_gen.c_date bytecode_backend.bytecode_gen.s_date bytecode_backend.bytecode_gen.pic_s_date bytecode_backend.bytecode_gen.il_date bytecode_backend.bytecode_gen.java_date : bytecode_gen.m \
	bytecode_backend.int0 \
	assoc_list.int \
	backend_libs.int \
	builtin.int \
	check_hlds.int \
	cord.int \
	counter.int \
	deconstruct.int \
	hlds.int \
	int.int \
	io.int \
	list.int \
	ll_backend.int \
	map.int \
	mdbcomp.int \
	pair.int \
	parse_tree.int \
	private_builtin.int \
	require.int \
	set.int \
	string.int \
	term.int \
	varset.int \
	backend_libs.builtin_ops.int \
	bytecode_backend.bytecode.int \
	check_hlds.mode_util.int \
	check_hlds.type_util.int \
	hlds.arg_info.int \
	hlds.code_model.int \
	hlds.goal_util.int \
	hlds.hlds_code_util.int \
	hlds.hlds_data.int \
	hlds.hlds_goal.int \
	hlds.hlds_llds.int \
	hlds.hlds_module.int \
	hlds.hlds_pred.int \
	hlds.passes_aux.int \
	ll_backend.call_gen.int \
	mdbcomp.prim_data.int \
	parse_tree.prog_data.int \
	parse_tree.prog_type.int \
	parse_tree.set_of_var.int \
	analysis.int2 \
	array.int2 \
	bag.int2 \
	bimap.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	digraph.int2 \
	enum.int2 \
	getopt_io.int2 \
	libs.int2 \
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
	set_tree234.int2 \
	sparse_bitset.int2 \
	stack.int2 \
	stream.int2 \
	time.int2 \
	tree234.int2 \
	tree_bitset.int2 \
	type_desc.int2 \
	unit.int2 \
	univ.int2 \
	backend_libs.rtti.int2 \
	check_hlds.delay_info.int2 \
	check_hlds.mode_constraint_robdd.int2 \
	check_hlds.mode_errors.int2 \
	check_hlds.mode_info.int2 \
	check_hlds.unify_proc.int2 \
	hlds.hlds_args.int2 \
	hlds.hlds_clauses.int2 \
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
	ll_backend.code_info.int2 \
	ll_backend.continuation_info.int2 \
	ll_backend.global_data.int2 \
	ll_backend.layout.int2 \
	ll_backend.llds.int2 \
	ll_backend.trace_gen.int2 \
	mdbcomp.feedback.int2 \
	mdbcomp.goal_path.int2 \
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
bytecode_backend.bytecode_gen.mh bytecode_backend.bytecode_gen.mih : bytecode_backend.bytecode_gen.s
else
bytecode_backend.bytecode_gen.mh bytecode_backend.bytecode_gen.mih : bytecode_backend.bytecode_gen.c
endif

ifeq ($(TARGET_ASM),yes)
bytecode_backend.bytecode_gen.module_dep : bytecode_backend.bytecode_gen.s
else
 ifeq ($(findstring il,$(GRADE)),il)
bytecode_backend.bytecode_gen.module_dep : bytecode_backend.bytecode_gen.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
bytecode_backend.bytecode_gen.module_dep : jmercury/bytecode_backend__bytecode_gen.java
  else
bytecode_backend.bytecode_gen.module_dep : bytecode_backend.bytecode_gen.c
  endif
 endif
endif

bytecode_backend.bytecode_gen.date bytecode_backend.bytecode_gen.date0 \
	bytecode_backend.date : bytecode_gen.m \
	bytecode_backend.int0 \
	assoc_list.int3 \
	backend_libs.int3 \
	builtin.int3 \
	check_hlds.int3 \
	cord.int3 \
	counter.int3 \
	deconstruct.int3 \
	hlds.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	ll_backend.int3 \
	map.int3 \
	mdbcomp.int3 \
	pair.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	term.int3 \
	varset.int3 \
	backend_libs.builtin_ops.int3 \
	bytecode_backend.bytecode.int3 \
	check_hlds.mode_util.int3 \
	check_hlds.type_util.int3 \
	hlds.arg_info.int3 \
	hlds.code_model.int3 \
	hlds.goal_util.int3 \
	hlds.hlds_code_util.int3 \
	hlds.hlds_data.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_llds.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_pred.int3 \
	hlds.passes_aux.int3 \
	ll_backend.call_gen.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_type.int3 \
	parse_tree.set_of_var.int3 \
	analysis.int3 \
	array.int3 \
	bag.int3 \
	bimap.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
	libs.int3 \
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
	set_tree234.int3 \
	sparse_bitset.int3 \
	stack.int3 \
	stream.int3 \
	time.int3 \
	tree234.int3 \
	tree_bitset.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	backend_libs.rtti.int3 \
	check_hlds.delay_info.int3 \
	check_hlds.mode_constraint_robdd.int3 \
	check_hlds.mode_errors.int3 \
	check_hlds.mode_info.int3 \
	check_hlds.unify_proc.int3 \
	hlds.hlds_args.int3 \
	hlds.hlds_clauses.int3 \
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
	ll_backend.code_info.int3 \
	ll_backend.continuation_info.int3 \
	ll_backend.global_data.int3 \
	ll_backend.layout.int3 \
	ll_backend.llds.int3 \
	ll_backend.trace_gen.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.goal_path.int3 \
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

bytecode_backend.bytecode_gen.date0 \
	bytecode_backend.date0 : bytecode_gen.m \
	assoc_list.int3 \
	backend_libs.int3 \
	builtin.int3 \
	check_hlds.int3 \
	cord.int3 \
	counter.int3 \
	deconstruct.int3 \
	hlds.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	ll_backend.int3 \
	map.int3 \
	mdbcomp.int3 \
	pair.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	term.int3 \
	varset.int3 \
	backend_libs.builtin_ops.int3 \
	bytecode_backend.bytecode.int3 \
	check_hlds.mode_util.int3 \
	check_hlds.type_util.int3 \
	hlds.arg_info.int3 \
	hlds.code_model.int3 \
	hlds.goal_util.int3 \
	hlds.hlds_code_util.int3 \
	hlds.hlds_data.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_llds.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_pred.int3 \
	hlds.passes_aux.int3 \
	ll_backend.call_gen.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_type.int3 \
	parse_tree.set_of_var.int3 \
	analysis.int3 \
	array.int3 \
	bag.int3 \
	bimap.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
	libs.int3 \
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
	set_tree234.int3 \
	sparse_bitset.int3 \
	stack.int3 \
	stream.int3 \
	time.int3 \
	tree234.int3 \
	tree_bitset.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	backend_libs.rtti.int3 \
	check_hlds.delay_info.int3 \
	check_hlds.mode_constraint_robdd.int3 \
	check_hlds.mode_errors.int3 \
	check_hlds.mode_info.int3 \
	check_hlds.unify_proc.int3 \
	hlds.hlds_args.int3 \
	hlds.hlds_clauses.int3 \
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
	ll_backend.code_info.int3 \
	ll_backend.continuation_info.int3 \
	ll_backend.global_data.int3 \
	ll_backend.layout.int3 \
	ll_backend.llds.int3 \
	ll_backend.trace_gen.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.goal_path.int3 \
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



bytecode_backend.bytecode_gen.$O :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh



bytecode_backend.bytecode_gen.pic_o :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh


bytecode_backend.bytecode_gen.int0 : bytecode_backend.bytecode_gen.date0
	@:
bytecode_backend.bytecode_gen.int : bytecode_backend.bytecode_gen.date
	@:
bytecode_backend.bytecode_gen.int2 : bytecode_backend.bytecode_gen.date
	@:
bytecode_backend.bytecode_gen.int3 : bytecode_backend.bytecode_gen.date3
	@:
bytecode_backend.bytecode_gen.opt : bytecode_backend.bytecode_gen.optdate
	@:
bytecode_backend.bytecode_gen.trans_opt : bytecode_backend.bytecode_gen.trans_opt_date
	@:

bytecode_backend.bytecode_gen.date0 : bytecode_gen.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) bytecode_backend.bytecode_gen
bytecode_backend.bytecode_gen.date : bytecode_gen.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) bytecode_backend.bytecode_gen
bytecode_backend.bytecode_gen.date3 : bytecode_gen.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) bytecode_backend.bytecode_gen
bytecode_backend.bytecode_gen.optdate : bytecode_gen.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) bytecode_backend.bytecode_gen
bytecode_backend.bytecode_gen.trans_opt_date : bytecode_gen.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) bytecode_backend.bytecode_gen
bytecode_backend.bytecode_gen.c_date : bytecode_gen.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) bytecode_backend.bytecode_gen $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
bytecode_backend.bytecode_gen.s_date : bytecode_gen.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only bytecode_backend.bytecode_gen $(ERR_REDIRECT)
bytecode_backend.bytecode_gen.pic_s_date : bytecode_gen.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" bytecode_backend.bytecode_gen $(ERR_REDIRECT)
endif # TARGET_ASM
bytecode_backend.bytecode_gen.il_date : bytecode_gen.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only bytecode_backend.bytecode_gen $(ERR_REDIRECT)
bytecode_backend.bytecode_gen.java_date : bytecode_gen.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only bytecode_backend.bytecode_gen $(ERR_REDIRECT)
