

transform_hlds.tupling.optdate transform_hlds.tupling.trans_opt_date tupling.err transform_hlds.tupling.c_date transform_hlds.tupling.s_date transform_hlds.tupling.pic_s_date transform_hlds.tupling.il_date transform_hlds.tupling.java_date : tupling.m \
	transform_hlds.int0 \
	assoc_list.int \
	backend_libs.int \
	bool.int \
	builtin.int \
	check_hlds.int \
	cord.int \
	counter.int \
	digraph.int \
	float.int \
	hlds.int \
	int.int \
	io.int \
	libs.int \
	list.int \
	ll_backend.int \
	map.int \
	maybe.int \
	mdbcomp.int \
	multi_map.int \
	pair.int \
	parse_tree.int \
	private_builtin.int \
	set.int \
	string.int \
	svmap.int \
	svvarset.int \
	term.int \
	unit.int \
	varset.int \
	backend_libs.interval.int \
	check_hlds.goal_path.int \
	check_hlds.mode_util.int \
	hlds.arg_info.int \
	hlds.goal_util.int \
	hlds.hlds_goal.int \
	hlds.hlds_llds.int \
	hlds.hlds_module.int \
	hlds.hlds_out.int \
	hlds.hlds_pred.int \
	hlds.hlds_rtti.int \
	hlds.quantification.int \
	libs.compiler_util.int \
	libs.globals.int \
	libs.options.int \
	ll_backend.call_gen.int \
	ll_backend.live_vars.int \
	ll_backend.liveness.int \
	mdbcomp.prim_data.int \
	mdbcomp.program_representation.int \
	mdbcomp.trace_counts.int \
	parse_tree.prog_data.int \
	parse_tree.prog_mode.int \
	parse_tree.prog_type.int \
	parse_tree.prog_util.int \
	transform_hlds.dependency_graph.int \
	analysis.int2 \
	array.int2 \
	bag.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	getopt_io.int2 \
	mode_robdd.int2 \
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
	univ.int2 \
	backend_libs.builtin_ops.int2 \
	backend_libs.rtti.int2 \
	check_hlds.delay_info.int2 \
	check_hlds.mode_constraint_robdd.int2 \
	check_hlds.mode_errors.int2 \
	check_hlds.mode_info.int2 \
	check_hlds.type_util.int2 \
	check_hlds.unify_proc.int2 \
	hlds.code_model.int2 \
	hlds.hlds_args.int2 \
	hlds.hlds_clauses.int2 \
	hlds.hlds_data.int2 \
	hlds.inst_graph.int2 \
	hlds.instmap.int2 \
	hlds.pred_table.int2 \
	hlds.special_pred.int2 \
	libs.lp_rational.int2 \
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
	mdbcomp.rtti_access.int2 \
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
transform_hlds.tupling.mh transform_hlds.tupling.mih : transform_hlds.tupling.s
else
transform_hlds.tupling.mh transform_hlds.tupling.mih : transform_hlds.tupling.c
endif

ifeq ($(TARGET_ASM),yes)
transform_hlds.tupling.module_dep : transform_hlds.tupling.s
else
 ifeq ($(findstring il,$(GRADE)),il)
transform_hlds.tupling.module_dep : transform_hlds.tupling.il
  ifeq ($(findstring java,$(GRADE)),java)
transform_hlds.tupling.module_dep : jmercury/transform_hlds__tupling.java
  else
transform_hlds.tupling.module_dep : transform_hlds.tupling.c
  endif
 endif
endif

transform_hlds.tupling.date transform_hlds.tupling.date0 \
	transform_hlds.date : tupling.m \
	transform_hlds.int0 \
	assoc_list.int3 \
	backend_libs.int3 \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
	cord.int3 \
	counter.int3 \
	digraph.int3 \
	float.int3 \
	hlds.int3 \
	int.int3 \
	io.int3 \
	libs.int3 \
	list.int3 \
	ll_backend.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	multi_map.int3 \
	pair.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	set.int3 \
	string.int3 \
	svmap.int3 \
	svvarset.int3 \
	term.int3 \
	unit.int3 \
	varset.int3 \
	backend_libs.interval.int3 \
	check_hlds.goal_path.int3 \
	check_hlds.mode_util.int3 \
	hlds.arg_info.int3 \
	hlds.goal_util.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_llds.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_out.int3 \
	hlds.hlds_pred.int3 \
	hlds.hlds_rtti.int3 \
	hlds.quantification.int3 \
	libs.compiler_util.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	ll_backend.call_gen.int3 \
	ll_backend.live_vars.int3 \
	ll_backend.liveness.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.trace_counts.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_mode.int3 \
	parse_tree.prog_type.int3 \
	parse_tree.prog_util.int3 \
	transform_hlds.dependency_graph.int3 \
	analysis.int3 \
	array.int3 \
	bag.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt_io.int3 \
	mode_robdd.int3 \
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
	univ.int3 \
	backend_libs.builtin_ops.int3 \
	backend_libs.rtti.int3 \
	check_hlds.delay_info.int3 \
	check_hlds.mode_constraint_robdd.int3 \
	check_hlds.mode_errors.int3 \
	check_hlds.mode_info.int3 \
	check_hlds.type_util.int3 \
	check_hlds.unify_proc.int3 \
	hlds.code_model.int3 \
	hlds.hlds_args.int3 \
	hlds.hlds_clauses.int3 \
	hlds.hlds_data.int3 \
	hlds.inst_graph.int3 \
	hlds.instmap.int3 \
	hlds.pred_table.int3 \
	hlds.special_pred.int3 \
	libs.lp_rational.int3 \
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
	mdbcomp.rtti_access.int3 \
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

transform_hlds.tupling.date0 \
	transform_hlds.date0 : tupling.m \
	assoc_list.int3 \
	backend_libs.int3 \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
	cord.int3 \
	counter.int3 \
	digraph.int3 \
	float.int3 \
	hlds.int3 \
	int.int3 \
	io.int3 \
	libs.int3 \
	list.int3 \
	ll_backend.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	multi_map.int3 \
	pair.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	set.int3 \
	string.int3 \
	svmap.int3 \
	svvarset.int3 \
	term.int3 \
	unit.int3 \
	varset.int3 \
	backend_libs.interval.int3 \
	check_hlds.goal_path.int3 \
	check_hlds.mode_util.int3 \
	hlds.arg_info.int3 \
	hlds.goal_util.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_llds.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_out.int3 \
	hlds.hlds_pred.int3 \
	hlds.hlds_rtti.int3 \
	hlds.quantification.int3 \
	libs.compiler_util.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	ll_backend.call_gen.int3 \
	ll_backend.live_vars.int3 \
	ll_backend.liveness.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.trace_counts.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_mode.int3 \
	parse_tree.prog_type.int3 \
	parse_tree.prog_util.int3 \
	transform_hlds.dependency_graph.int3 \
	analysis.int3 \
	array.int3 \
	bag.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt_io.int3 \
	mode_robdd.int3 \
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
	univ.int3 \
	backend_libs.builtin_ops.int3 \
	backend_libs.rtti.int3 \
	check_hlds.delay_info.int3 \
	check_hlds.mode_constraint_robdd.int3 \
	check_hlds.mode_errors.int3 \
	check_hlds.mode_info.int3 \
	check_hlds.type_util.int3 \
	check_hlds.unify_proc.int3 \
	hlds.code_model.int3 \
	hlds.hlds_args.int3 \
	hlds.hlds_clauses.int3 \
	hlds.hlds_data.int3 \
	hlds.inst_graph.int3 \
	hlds.instmap.int3 \
	hlds.pred_table.int3 \
	hlds.special_pred.int3 \
	libs.lp_rational.int3 \
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
	mdbcomp.rtti_access.int3 \
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



transform_hlds.tupling.$O :  \
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



transform_hlds.tupling.pic_o :  \
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


transform_hlds.tupling.int0 : transform_hlds.tupling.date0
	@:
transform_hlds.tupling.int : transform_hlds.tupling.date
	@:
transform_hlds.tupling.int2 : transform_hlds.tupling.date
	@:
transform_hlds.tupling.int3 : transform_hlds.tupling.date3
	@:
transform_hlds.tupling.opt : transform_hlds.tupling.optdate
	@:
transform_hlds.tupling.trans_opt : transform_hlds.tupling.trans_opt_date
	@:

transform_hlds.tupling.date0 : tupling.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) transform_hlds.tupling
transform_hlds.tupling.date : tupling.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) transform_hlds.tupling
transform_hlds.tupling.date3 : tupling.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) transform_hlds.tupling
transform_hlds.tupling.optdate : tupling.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) transform_hlds.tupling
transform_hlds.tupling.trans_opt_date : tupling.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) transform_hlds.tupling
transform_hlds.tupling.c_date : tupling.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) transform_hlds.tupling $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
transform_hlds.tupling.s_date : tupling.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only transform_hlds.tupling $(ERR_REDIRECT)
transform_hlds.tupling.pic_s_date : tupling.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" transform_hlds.tupling $(ERR_REDIRECT)
endif # TARGET_ASM
transform_hlds.tupling.il_date : tupling.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only transform_hlds.tupling $(ERR_REDIRECT)
transform_hlds.tupling.java_date : tupling.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only transform_hlds.tupling $(ERR_REDIRECT)
