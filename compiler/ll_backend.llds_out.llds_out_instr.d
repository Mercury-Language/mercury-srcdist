

ll_backend.llds_out.llds_out_instr.optdate ll_backend.llds_out.llds_out_instr.trans_opt_date llds_out_instr.err ll_backend.llds_out.llds_out_instr.c_date ll_backend.llds_out.llds_out_instr.s_date ll_backend.llds_out.llds_out_instr.pic_s_date ll_backend.llds_out.llds_out_instr.il_date ll_backend.llds_out.llds_out_instr.java_date : llds_out_instr.m \
	ll_backend.llds_out.int0 \
	ll_backend.int0 \
	assoc_list.int \
	backend_libs.int \
	bool.int \
	builtin.int \
	char.int \
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
	set_tree234.int \
	string.int \
	term.int \
	varset.int \
	backend_libs.c_util.int \
	backend_libs.export.int \
	backend_libs.name_mangle.int \
	check_hlds.type_util.int \
	hlds.hlds_data.int \
	hlds.hlds_pred.int \
	ll_backend.layout.int \
	ll_backend.layout_out.int \
	ll_backend.llds.int \
	ll_backend.pragma_c_gen.int \
	mdbcomp.prim_data.int \
	parse_tree.mercury_to_mercury.int \
	parse_tree.prog_data.int \
	parse_tree.prog_type.int \
	ll_backend.llds_out.llds_out_code_addr.int \
	ll_backend.llds_out.llds_out_data.int \
	ll_backend.llds_out.llds_out_util.int \
	analysis.int2 \
	array.int2 \
	bag.int2 \
	bimap.int2 \
	bitmap.int2 \
	construct.int2 \
	cord.int2 \
	counter.int2 \
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
	hlds.hlds_goal.int2 \
	hlds.hlds_llds.int2 \
	hlds.hlds_module.int2 \
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
ll_backend.llds_out.llds_out_instr.mh ll_backend.llds_out.llds_out_instr.mih : ll_backend.llds_out.llds_out_instr.s
else
ll_backend.llds_out.llds_out_instr.mh ll_backend.llds_out.llds_out_instr.mih : ll_backend.llds_out.llds_out_instr.c
endif

ifeq ($(TARGET_ASM),yes)
ll_backend.llds_out.llds_out_instr.module_dep : ll_backend.llds_out.llds_out_instr.s
else
 ifeq ($(findstring il,$(GRADE)),il)
ll_backend.llds_out.llds_out_instr.module_dep : ll_backend.llds_out.llds_out_instr.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
ll_backend.llds_out.llds_out_instr.module_dep : jmercury/ll_backend__llds_out__llds_out_instr.java
  else
ll_backend.llds_out.llds_out_instr.module_dep : ll_backend.llds_out.llds_out_instr.c
  endif
 endif
endif

ll_backend.llds_out.llds_out_instr.date ll_backend.llds_out.llds_out_instr.date0 \
	ll_backend.llds_out.date \
	ll_backend.date : llds_out_instr.m \
	ll_backend.llds_out.int0 \
	ll_backend.int0 \
	assoc_list.int3 \
	backend_libs.int3 \
	bool.int3 \
	builtin.int3 \
	char.int3 \
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
	set_tree234.int3 \
	string.int3 \
	term.int3 \
	varset.int3 \
	backend_libs.c_util.int3 \
	backend_libs.export.int3 \
	backend_libs.name_mangle.int3 \
	check_hlds.type_util.int3 \
	hlds.hlds_data.int3 \
	hlds.hlds_pred.int3 \
	ll_backend.layout.int3 \
	ll_backend.layout_out.int3 \
	ll_backend.llds.int3 \
	ll_backend.pragma_c_gen.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.mercury_to_mercury.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_type.int3 \
	ll_backend.llds_out.llds_out_code_addr.int3 \
	ll_backend.llds_out.llds_out_data.int3 \
	ll_backend.llds_out.llds_out_util.int3 \
	analysis.int3 \
	array.int3 \
	bag.int3 \
	bimap.int3 \
	bitmap.int3 \
	construct.int3 \
	cord.int3 \
	counter.int3 \
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
	hlds.hlds_goal.int3 \
	hlds.hlds_llds.int3 \
	hlds.hlds_module.int3 \
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

ll_backend.llds_out.llds_out_instr.date0 \
	ll_backend.llds_out.date0 \
	ll_backend.date0 : llds_out_instr.m \
	assoc_list.int3 \
	backend_libs.int3 \
	bool.int3 \
	builtin.int3 \
	char.int3 \
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
	set_tree234.int3 \
	string.int3 \
	term.int3 \
	varset.int3 \
	backend_libs.c_util.int3 \
	backend_libs.export.int3 \
	backend_libs.name_mangle.int3 \
	check_hlds.type_util.int3 \
	hlds.hlds_data.int3 \
	hlds.hlds_pred.int3 \
	ll_backend.layout.int3 \
	ll_backend.layout_out.int3 \
	ll_backend.llds.int3 \
	ll_backend.pragma_c_gen.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.mercury_to_mercury.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_type.int3 \
	ll_backend.llds_out.llds_out_code_addr.int3 \
	ll_backend.llds_out.llds_out_data.int3 \
	ll_backend.llds_out.llds_out_util.int3 \
	analysis.int3 \
	array.int3 \
	bag.int3 \
	bimap.int3 \
	bitmap.int3 \
	construct.int3 \
	cord.int3 \
	counter.int3 \
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
	hlds.hlds_goal.int3 \
	hlds.hlds_llds.int3 \
	hlds.hlds_module.int3 \
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



ll_backend.llds_out.llds_out_instr.$O :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



ll_backend.llds_out.llds_out_instr.pic_o :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


ll_backend.llds_out.llds_out_instr.int0 : ll_backend.llds_out.llds_out_instr.date0
	@:
ll_backend.llds_out.llds_out_instr.int : ll_backend.llds_out.llds_out_instr.date
	@:
ll_backend.llds_out.llds_out_instr.int2 : ll_backend.llds_out.llds_out_instr.date
	@:
ll_backend.llds_out.llds_out_instr.int3 : ll_backend.llds_out.llds_out_instr.date3
	@:
ll_backend.llds_out.llds_out_instr.opt : ll_backend.llds_out.llds_out_instr.optdate
	@:
ll_backend.llds_out.llds_out_instr.trans_opt : ll_backend.llds_out.llds_out_instr.trans_opt_date
	@:

ll_backend.llds_out.llds_out_instr.date0 : llds_out_instr.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) ll_backend.llds_out.llds_out_instr
ll_backend.llds_out.llds_out_instr.date : llds_out_instr.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) ll_backend.llds_out.llds_out_instr
ll_backend.llds_out.llds_out_instr.date3 : llds_out_instr.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) ll_backend.llds_out.llds_out_instr
ll_backend.llds_out.llds_out_instr.optdate : llds_out_instr.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) ll_backend.llds_out.llds_out_instr
ll_backend.llds_out.llds_out_instr.trans_opt_date : llds_out_instr.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) ll_backend.llds_out.llds_out_instr
ll_backend.llds_out.llds_out_instr.c_date : llds_out_instr.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) ll_backend.llds_out.llds_out_instr $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
ll_backend.llds_out.llds_out_instr.s_date : llds_out_instr.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only ll_backend.llds_out.llds_out_instr $(ERR_REDIRECT)
ll_backend.llds_out.llds_out_instr.pic_s_date : llds_out_instr.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" ll_backend.llds_out.llds_out_instr $(ERR_REDIRECT)
endif # TARGET_ASM
ll_backend.llds_out.llds_out_instr.il_date : llds_out_instr.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only ll_backend.llds_out.llds_out_instr $(ERR_REDIRECT)
ll_backend.llds_out.llds_out_instr.java_date : llds_out_instr.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only ll_backend.llds_out.llds_out_instr $(ERR_REDIRECT)
