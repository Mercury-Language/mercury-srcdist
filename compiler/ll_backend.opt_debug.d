

ll_backend.opt_debug.optdate ll_backend.opt_debug.trans_opt_date opt_debug.err ll_backend.opt_debug.c_date ll_backend.opt_debug.s_date ll_backend.opt_debug.pic_s_date ll_backend.opt_debug.il_date ll_backend.opt_debug.java_date : opt_debug.m \
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
	set.int \
	string.int \
	term.int \
	backend_libs.builtin_ops.int \
	backend_libs.c_util.int \
	backend_libs.proc_label.int \
	backend_libs.rtti.int \
	check_hlds.type_util.int \
	hlds.code_model.int \
	hlds.hlds_data.int \
	hlds.hlds_llds.int \
	hlds.hlds_pred.int \
	hlds.hlds_rtti.int \
	hlds.special_pred.int \
	ll_backend.layout.int \
	ll_backend.livemap.int \
	ll_backend.llds.int \
	ll_backend.llds_out.int \
	mdbcomp.prim_data.int \
	parse_tree.prog_data.int \
	parse_tree.prog_foreign.int \
	ll_backend.llds_out.llds_out_code_addr.int \
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
	varset.int2 \
	check_hlds.delay_info.int2 \
	check_hlds.mode_constraint_robdd.int2 \
	check_hlds.mode_errors.int2 \
	check_hlds.mode_info.int2 \
	check_hlds.unify_proc.int2 \
	hlds.const_struct.int2 \
	hlds.hlds_args.int2 \
	hlds.hlds_clauses.int2 \
	hlds.hlds_goal.int2 \
	hlds.hlds_module.int2 \
	hlds.inst_graph.int2 \
	hlds.instmap.int2 \
	hlds.pred_table.int2 \
	libs.globals.int2 \
	libs.lp_rational.int2 \
	libs.options.int2 \
	libs.polyhedron.int2 \
	libs.rat.int2 \
	libs.timestamp.int2 \
	libs.trace_params.int2 \
	mdbcomp.feedback.int2 \
	mdbcomp.goal_path.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2 \
	mode_robdd.tfeirn.int2 \
	parse_tree.error_util.int2 \
	parse_tree.module_qual.int2 \
	parse_tree.prog_item.int2 \
	parse_tree.prog_type.int2 \
	parse_tree.set_of_var.int2 \
	transform_hlds.term_constr_data.int2 \
	transform_hlds.term_constr_errors.int2 \
	transform_hlds.term_constr_main.int2 \
	transform_hlds.term_errors.int2 \
	transform_hlds.term_norm.int2 \
	transform_hlds.term_util.int2 \
	ll_backend.llds_out.llds_out_util.int2 \
	mdbcomp.feedback.automatic_parallelism.int2

ifeq ($(TARGET_ASM),yes)
ll_backend.opt_debug.mh ll_backend.opt_debug.mih : ll_backend.opt_debug.s
else
ll_backend.opt_debug.mh ll_backend.opt_debug.mih : ll_backend.opt_debug.c
endif

ifeq ($(TARGET_ASM),yes)
ll_backend.opt_debug.module_dep : ll_backend.opt_debug.s
else
 ifeq ($(findstring il,$(GRADE)),il)
ll_backend.opt_debug.module_dep : ll_backend.opt_debug.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
ll_backend.opt_debug.module_dep : jmercury/ll_backend__opt_debug.java
  else
ll_backend.opt_debug.module_dep : ll_backend.opt_debug.c
  endif
 endif
endif

ll_backend.opt_debug.date ll_backend.opt_debug.date0 \
	ll_backend.date : opt_debug.m \
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
	set.int3 \
	string.int3 \
	term.int3 \
	backend_libs.builtin_ops.int3 \
	backend_libs.c_util.int3 \
	backend_libs.proc_label.int3 \
	backend_libs.rtti.int3 \
	check_hlds.type_util.int3 \
	hlds.code_model.int3 \
	hlds.hlds_data.int3 \
	hlds.hlds_llds.int3 \
	hlds.hlds_pred.int3 \
	hlds.hlds_rtti.int3 \
	hlds.special_pred.int3 \
	ll_backend.layout.int3 \
	ll_backend.livemap.int3 \
	ll_backend.llds.int3 \
	ll_backend.llds_out.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_foreign.int3 \
	ll_backend.llds_out.llds_out_code_addr.int3 \
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
	varset.int3 \
	check_hlds.delay_info.int3 \
	check_hlds.mode_constraint_robdd.int3 \
	check_hlds.mode_errors.int3 \
	check_hlds.mode_info.int3 \
	check_hlds.unify_proc.int3 \
	hlds.const_struct.int3 \
	hlds.hlds_args.int3 \
	hlds.hlds_clauses.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_module.int3 \
	hlds.inst_graph.int3 \
	hlds.instmap.int3 \
	hlds.pred_table.int3 \
	libs.globals.int3 \
	libs.lp_rational.int3 \
	libs.options.int3 \
	libs.polyhedron.int3 \
	libs.rat.int3 \
	libs.timestamp.int3 \
	libs.trace_params.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.error_util.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.prog_type.int3 \
	parse_tree.set_of_var.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3 \
	ll_backend.llds_out.llds_out_util.int3 \
	mdbcomp.feedback.automatic_parallelism.int3

ll_backend.opt_debug.date0 \
	ll_backend.date0 : opt_debug.m \
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
	set.int3 \
	string.int3 \
	term.int3 \
	backend_libs.builtin_ops.int3 \
	backend_libs.c_util.int3 \
	backend_libs.proc_label.int3 \
	backend_libs.rtti.int3 \
	check_hlds.type_util.int3 \
	hlds.code_model.int3 \
	hlds.hlds_data.int3 \
	hlds.hlds_llds.int3 \
	hlds.hlds_pred.int3 \
	hlds.hlds_rtti.int3 \
	hlds.special_pred.int3 \
	ll_backend.layout.int3 \
	ll_backend.livemap.int3 \
	ll_backend.llds.int3 \
	ll_backend.llds_out.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_foreign.int3 \
	ll_backend.llds_out.llds_out_code_addr.int3 \
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
	varset.int3 \
	check_hlds.delay_info.int3 \
	check_hlds.mode_constraint_robdd.int3 \
	check_hlds.mode_errors.int3 \
	check_hlds.mode_info.int3 \
	check_hlds.unify_proc.int3 \
	hlds.const_struct.int3 \
	hlds.hlds_args.int3 \
	hlds.hlds_clauses.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_module.int3 \
	hlds.inst_graph.int3 \
	hlds.instmap.int3 \
	hlds.pred_table.int3 \
	libs.globals.int3 \
	libs.lp_rational.int3 \
	libs.options.int3 \
	libs.polyhedron.int3 \
	libs.rat.int3 \
	libs.timestamp.int3 \
	libs.trace_params.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.error_util.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.prog_type.int3 \
	parse_tree.set_of_var.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3 \
	ll_backend.llds_out.llds_out_util.int3 \
	mdbcomp.feedback.automatic_parallelism.int3



ll_backend.opt_debug.$O :  \
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



ll_backend.opt_debug.pic_o :  \
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


ll_backend.opt_debug.int0 : ll_backend.opt_debug.date0
	@:
ll_backend.opt_debug.int : ll_backend.opt_debug.date
	@:
ll_backend.opt_debug.int2 : ll_backend.opt_debug.date
	@:
ll_backend.opt_debug.int3 : ll_backend.opt_debug.date3
	@:
ll_backend.opt_debug.opt : ll_backend.opt_debug.optdate
	@:
ll_backend.opt_debug.trans_opt : ll_backend.opt_debug.trans_opt_date
	@:

ll_backend.opt_debug.date0 : opt_debug.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) ll_backend.opt_debug
ll_backend.opt_debug.date : opt_debug.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) ll_backend.opt_debug
ll_backend.opt_debug.date3 : opt_debug.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) ll_backend.opt_debug
ll_backend.opt_debug.optdate : opt_debug.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) ll_backend.opt_debug
ll_backend.opt_debug.trans_opt_date : opt_debug.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) ll_backend.opt_debug
ll_backend.opt_debug.c_date : opt_debug.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) ll_backend.opt_debug $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
ll_backend.opt_debug.s_date : opt_debug.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only ll_backend.opt_debug $(ERR_REDIRECT)
ll_backend.opt_debug.pic_s_date : opt_debug.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" ll_backend.opt_debug $(ERR_REDIRECT)
endif # TARGET_ASM
ll_backend.opt_debug.il_date : opt_debug.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only ll_backend.opt_debug $(ERR_REDIRECT)
ll_backend.opt_debug.java_date : opt_debug.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only ll_backend.opt_debug $(ERR_REDIRECT)
