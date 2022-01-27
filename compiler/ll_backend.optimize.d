

ll_backend.optimize.optdate ll_backend.optimize.trans_opt_date optimize.err ll_backend.optimize.c_date ll_backend.optimize.s_date ll_backend.optimize.pic_s_date ll_backend.optimize.il_date ll_backend.optimize.java_date : optimize.m \
	ll_backend.int0 \
	backend_libs.int \
	bool.int \
	builtin.int \
	char.int \
	check_hlds.int \
	counter.int \
	dir.int \
	hlds.int \
	int.int \
	io.int \
	libs.int \
	list.int \
	map.int \
	maybe.int \
	mdbcomp.int \
	parse_tree.int \
	private_builtin.int \
	require.int \
	set_tree234.int \
	string.int \
	hlds.code_model.int \
	hlds.hlds_pred.int \
	libs.file_util.int \
	libs.globals.int \
	libs.options.int \
	ll_backend.continuation_info.int \
	ll_backend.delay_slot.int \
	ll_backend.dupelim.int \
	ll_backend.frameopt.int \
	ll_backend.global_data.int \
	ll_backend.jumpopt.int \
	ll_backend.labelopt.int \
	ll_backend.llds.int \
	ll_backend.opt_debug.int \
	ll_backend.opt_util.int \
	ll_backend.peephole.int \
	ll_backend.reassign.int \
	ll_backend.stdlabel.int \
	ll_backend.use_local_vars.int \
	ll_backend.wrap_blocks.int \
	mdbcomp.prim_data.int \
	analysis.int2 \
	array.int2 \
	assoc_list.int2 \
	bag.int2 \
	bimap.int2 \
	bitmap.int2 \
	construct.int2 \
	cord.int2 \
	deconstruct.int2 \
	digraph.int2 \
	enum.int2 \
	getopt_io.int2 \
	integer.int2 \
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
	set.int2 \
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
	backend_libs.builtin_ops.int2 \
	backend_libs.rtti.int2 \
	check_hlds.delay_info.int2 \
	check_hlds.mode_constraint_robdd.int2 \
	check_hlds.mode_errors.int2 \
	check_hlds.mode_info.int2 \
	check_hlds.type_util.int2 \
	check_hlds.unify_proc.int2 \
	hlds.const_struct.int2 \
	hlds.goal_form.int2 \
	hlds.hlds_args.int2 \
	hlds.hlds_clauses.int2 \
	hlds.hlds_data.int2 \
	hlds.hlds_goal.int2 \
	hlds.hlds_llds.int2 \
	hlds.hlds_module.int2 \
	hlds.hlds_rtti.int2 \
	hlds.inst_graph.int2 \
	hlds.instmap.int2 \
	hlds.pred_table.int2 \
	hlds.special_pred.int2 \
	hlds.status.int2 \
	hlds.vartypes.int2 \
	libs.lp_rational.int2 \
	libs.polyhedron.int2 \
	libs.rat.int2 \
	libs.timestamp.int2 \
	libs.trace_params.int2 \
	ll_backend.code_info.int2 \
	ll_backend.code_loc_dep.int2 \
	ll_backend.layout.int2 \
	ll_backend.livemap.int2 \
	ll_backend.trace_gen.int2 \
	mdbcomp.feedback.int2 \
	mdbcomp.goal_path.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.sym_name.int2 \
	mdbcomp.trace_counts.int2 \
	mode_robdd.tfeirn.int2 \
	parse_tree.error_util.int2 \
	parse_tree.file_kind.int2 \
	parse_tree.module_qual.int2 \
	parse_tree.prog_data.int2 \
	parse_tree.prog_foreign.int2 \
	parse_tree.prog_item.int2 \
	parse_tree.prog_rename.int2 \
	parse_tree.prog_type.int2 \
	parse_tree.set_of_var.int2 \
	transform_hlds.term_constr_data.int2 \
	transform_hlds.term_constr_errors.int2 \
	transform_hlds.term_constr_main_types.int2 \
	transform_hlds.term_errors.int2 \
	transform_hlds.term_norm.int2 \
	transform_hlds.term_util.int2 \
	mdbcomp.feedback.automatic_parallelism.int2

ll_backend.optimize.pic_o ll_backend.optimize.$O : \
	analysis.mih \
	array.mih \
	assoc_list.mih \
	backend_libs.mih \
	bag.mih \
	bimap.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
	char.mih \
	check_hlds.mih \
	construct.mih \
	cord.mih \
	counter.mih \
	deconstruct.mih \
	digraph.mih \
	dir.mih \
	enum.mih \
	getopt_io.mih \
	hlds.mih \
	int.mih \
	integer.mih \
	io.mih \
	libs.mih \
	list.mih \
	ll_backend.mih \
	map.mih \
	maybe.mih \
	mdbcomp.mih \
	mode_robdd.mih \
	multi_map.mih \
	ops.mih \
	pair.mih \
	parse_tree.mih \
	pretty_printer.mih \
	private_builtin.mih \
	queue.mih \
	random.mih \
	recompilation.mih \
	require.mih \
	robdd.mih \
	rtti_implementation.mih \
	set.mih \
	set_ordlist.mih \
	set_tree234.mih \
	sparse_bitset.mih \
	stack.mih \
	stream.mih \
	string.mih \
	term.mih \
	time.mih \
	tree234.mih \
	type_desc.mih \
	unit.mih \
	univ.mih \
	varset.mih \
	backend_libs.builtin_ops.mih \
	backend_libs.rtti.mih \
	check_hlds.delay_info.mih \
	check_hlds.mode_constraint_robdd.mih \
	check_hlds.mode_errors.mih \
	check_hlds.mode_info.mih \
	check_hlds.type_util.mih \
	check_hlds.unify_proc.mih \
	hlds.code_model.mih \
	hlds.const_struct.mih \
	hlds.goal_form.mih \
	hlds.hlds_args.mih \
	hlds.hlds_clauses.mih \
	hlds.hlds_data.mih \
	hlds.hlds_goal.mih \
	hlds.hlds_llds.mih \
	hlds.hlds_module.mih \
	hlds.hlds_pred.mih \
	hlds.hlds_rtti.mih \
	hlds.inst_graph.mih \
	hlds.instmap.mih \
	hlds.pred_table.mih \
	hlds.special_pred.mih \
	hlds.status.mih \
	hlds.vartypes.mih \
	libs.file_util.mih \
	libs.globals.mih \
	libs.lp_rational.mih \
	libs.options.mih \
	libs.polyhedron.mih \
	libs.rat.mih \
	libs.timestamp.mih \
	libs.trace_params.mih \
	ll_backend.code_info.mih \
	ll_backend.code_loc_dep.mih \
	ll_backend.continuation_info.mih \
	ll_backend.delay_slot.mih \
	ll_backend.dupelim.mih \
	ll_backend.frameopt.mih \
	ll_backend.global_data.mih \
	ll_backend.jumpopt.mih \
	ll_backend.labelopt.mih \
	ll_backend.layout.mih \
	ll_backend.livemap.mih \
	ll_backend.llds.mih \
	ll_backend.opt_debug.mih \
	ll_backend.opt_util.mih \
	ll_backend.peephole.mih \
	ll_backend.reassign.mih \
	ll_backend.stdlabel.mih \
	ll_backend.trace_gen.mih \
	ll_backend.use_local_vars.mih \
	ll_backend.wrap_blocks.mih \
	mdbcomp.feedback.mih \
	mdbcomp.goal_path.mih \
	mdbcomp.prim_data.mih \
	mdbcomp.program_representation.mih \
	mdbcomp.rtti_access.mih \
	mdbcomp.sym_name.mih \
	mdbcomp.trace_counts.mih \
	mode_robdd.tfeirn.mih \
	parse_tree.error_util.mih \
	parse_tree.file_kind.mih \
	parse_tree.module_qual.mih \
	parse_tree.prog_data.mih \
	parse_tree.prog_foreign.mih \
	parse_tree.prog_item.mih \
	parse_tree.prog_rename.mih \
	parse_tree.prog_type.mih \
	parse_tree.set_of_var.mih \
	transform_hlds.term_constr_data.mih \
	transform_hlds.term_constr_errors.mih \
	transform_hlds.term_constr_main_types.mih \
	transform_hlds.term_errors.mih \
	transform_hlds.term_norm.mih \
	transform_hlds.term_util.mih \
	mdbcomp.feedback.automatic_parallelism.mih

ll_backend.optimize.mh ll_backend.optimize.mih : ll_backend.optimize.c


ifeq ($(findstring il,$(GRADE)),il)
ll_backend.optimize.module_dep : ll_backend.optimize.il
else
 ifeq ($(findstring java,$(GRADE)),java)
ll_backend.optimize.module_dep : jmercury/ll_backend__optimize.java
 else
ll_backend.optimize.module_dep : ll_backend.optimize.c
 endif
endif


ll_backend.optimize.date ll_backend.optimize.date0 \
	ll_backend.date : optimize.m \
	ll_backend.int0 \
	backend_libs.int3 \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	check_hlds.int3 \
	counter.int3 \
	dir.int3 \
	hlds.int3 \
	int.int3 \
	io.int3 \
	libs.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	require.int3 \
	set_tree234.int3 \
	string.int3 \
	hlds.code_model.int3 \
	hlds.hlds_pred.int3 \
	libs.file_util.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	ll_backend.continuation_info.int3 \
	ll_backend.delay_slot.int3 \
	ll_backend.dupelim.int3 \
	ll_backend.frameopt.int3 \
	ll_backend.global_data.int3 \
	ll_backend.jumpopt.int3 \
	ll_backend.labelopt.int3 \
	ll_backend.llds.int3 \
	ll_backend.opt_debug.int3 \
	ll_backend.opt_util.int3 \
	ll_backend.peephole.int3 \
	ll_backend.reassign.int3 \
	ll_backend.stdlabel.int3 \
	ll_backend.use_local_vars.int3 \
	ll_backend.wrap_blocks.int3 \
	mdbcomp.prim_data.int3 \
	analysis.int3 \
	array.int3 \
	assoc_list.int3 \
	bag.int3 \
	bimap.int3 \
	bitmap.int3 \
	construct.int3 \
	cord.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
	integer.int3 \
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
	set.int3 \
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
	backend_libs.builtin_ops.int3 \
	backend_libs.rtti.int3 \
	check_hlds.delay_info.int3 \
	check_hlds.mode_constraint_robdd.int3 \
	check_hlds.mode_errors.int3 \
	check_hlds.mode_info.int3 \
	check_hlds.type_util.int3 \
	check_hlds.unify_proc.int3 \
	hlds.const_struct.int3 \
	hlds.goal_form.int3 \
	hlds.hlds_args.int3 \
	hlds.hlds_clauses.int3 \
	hlds.hlds_data.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_llds.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_rtti.int3 \
	hlds.inst_graph.int3 \
	hlds.instmap.int3 \
	hlds.pred_table.int3 \
	hlds.special_pred.int3 \
	hlds.status.int3 \
	hlds.vartypes.int3 \
	libs.lp_rational.int3 \
	libs.polyhedron.int3 \
	libs.rat.int3 \
	libs.timestamp.int3 \
	libs.trace_params.int3 \
	ll_backend.code_info.int3 \
	ll_backend.code_loc_dep.int3 \
	ll_backend.layout.int3 \
	ll_backend.livemap.int3 \
	ll_backend.trace_gen.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.sym_name.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.error_util.int3 \
	parse_tree.file_kind.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.prog_rename.int3 \
	parse_tree.prog_type.int3 \
	parse_tree.set_of_var.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main_types.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3 \
	mdbcomp.feedback.automatic_parallelism.int3

ll_backend.optimize.date0 \
	ll_backend.date0 : optimize.m \
	backend_libs.int3 \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	check_hlds.int3 \
	counter.int3 \
	dir.int3 \
	hlds.int3 \
	int.int3 \
	io.int3 \
	libs.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	require.int3 \
	set_tree234.int3 \
	string.int3 \
	hlds.code_model.int3 \
	hlds.hlds_pred.int3 \
	libs.file_util.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	ll_backend.continuation_info.int3 \
	ll_backend.delay_slot.int3 \
	ll_backend.dupelim.int3 \
	ll_backend.frameopt.int3 \
	ll_backend.global_data.int3 \
	ll_backend.jumpopt.int3 \
	ll_backend.labelopt.int3 \
	ll_backend.llds.int3 \
	ll_backend.opt_debug.int3 \
	ll_backend.opt_util.int3 \
	ll_backend.peephole.int3 \
	ll_backend.reassign.int3 \
	ll_backend.stdlabel.int3 \
	ll_backend.use_local_vars.int3 \
	ll_backend.wrap_blocks.int3 \
	mdbcomp.prim_data.int3 \
	analysis.int3 \
	array.int3 \
	assoc_list.int3 \
	bag.int3 \
	bimap.int3 \
	bitmap.int3 \
	construct.int3 \
	cord.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
	integer.int3 \
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
	set.int3 \
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
	backend_libs.builtin_ops.int3 \
	backend_libs.rtti.int3 \
	check_hlds.delay_info.int3 \
	check_hlds.mode_constraint_robdd.int3 \
	check_hlds.mode_errors.int3 \
	check_hlds.mode_info.int3 \
	check_hlds.type_util.int3 \
	check_hlds.unify_proc.int3 \
	hlds.const_struct.int3 \
	hlds.goal_form.int3 \
	hlds.hlds_args.int3 \
	hlds.hlds_clauses.int3 \
	hlds.hlds_data.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_llds.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_rtti.int3 \
	hlds.inst_graph.int3 \
	hlds.instmap.int3 \
	hlds.pred_table.int3 \
	hlds.special_pred.int3 \
	hlds.status.int3 \
	hlds.vartypes.int3 \
	libs.lp_rational.int3 \
	libs.polyhedron.int3 \
	libs.rat.int3 \
	libs.timestamp.int3 \
	libs.trace_params.int3 \
	ll_backend.code_info.int3 \
	ll_backend.code_loc_dep.int3 \
	ll_backend.layout.int3 \
	ll_backend.livemap.int3 \
	ll_backend.trace_gen.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.sym_name.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.error_util.int3 \
	parse_tree.file_kind.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.prog_rename.int3 \
	parse_tree.prog_type.int3 \
	parse_tree.set_of_var.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main_types.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3 \
	mdbcomp.feedback.automatic_parallelism.int3



ll_backend.optimize.$O :  \
	dir.mh \
	io.mh \
	string.mh \
	time.mh \
	mdbcomp.rtti_access.mh



ll_backend.optimize.pic_o :  \
	dir.mh \
	io.mh \
	string.mh \
	time.mh \
	mdbcomp.rtti_access.mh


ll_backend.optimize.int0 : ll_backend.optimize.date0
	@:
ll_backend.optimize.int : ll_backend.optimize.date
	@:
ll_backend.optimize.int2 : ll_backend.optimize.date
	@:
ll_backend.optimize.int3 : ll_backend.optimize.date3
	@:
ll_backend.optimize.opt : ll_backend.optimize.optdate
	@:
ll_backend.optimize.trans_opt : ll_backend.optimize.trans_opt_date
	@:

ll_backend.optimize.date0 : optimize.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) ll_backend.optimize
ll_backend.optimize.date : optimize.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) ll_backend.optimize
ll_backend.optimize.date3 : optimize.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) ll_backend.optimize
ll_backend.optimize.optdate : optimize.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) ll_backend.optimize
ll_backend.optimize.trans_opt_date : optimize.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) ll_backend.optimize
ll_backend.optimize.c_date : optimize.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) ll_backend.optimize $(ERR_REDIRECT)
ll_backend.optimize.il_date : optimize.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only ll_backend.optimize $(ERR_REDIRECT)
ll_backend.optimize.java_date : optimize.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only ll_backend.optimize $(ERR_REDIRECT)
