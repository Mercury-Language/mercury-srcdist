

ml_backend.ml_gen_info.optdate ml_backend.ml_gen_info.trans_opt_date ml_gen_info.err ml_backend.ml_gen_info.c_date ml_backend.ml_gen_info.s_date ml_backend.ml_gen_info.pic_s_date ml_backend.ml_gen_info.il_date ml_backend.ml_gen_info.java_date : ml_gen_info.m \
	ml_backend.int0 \
	backend_libs.int \
	bool.int \
	builtin.int \
	check_hlds.int \
	counter.int \
	hlds.int \
	int.int \
	libs.int \
	list.int \
	map.int \
	maybe.int \
	mdbcomp.int \
	parse_tree.int \
	private_builtin.int \
	set.int \
	stack.int \
	string.int \
	check_hlds.mode_util.int \
	hlds.hlds_module.int \
	hlds.hlds_pred.int \
	libs.globals.int \
	libs.options.int \
	ml_backend.ml_global_data.int \
	ml_backend.mlds.int \
	parse_tree.prog_data.int \
	analysis.int2 \
	array.int2 \
	assoc_list.int2 \
	bag.int2 \
	bimap.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	cord.int2 \
	deconstruct.int2 \
	digraph.int2 \
	enum.int2 \
	getopt_io.int2 \
	io.int2 \
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
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	unit.int2 \
	univ.int2 \
	varset.int2 \
	backend_libs.builtin_ops.int2 \
	backend_libs.foreign.int2 \
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
	hlds.hlds_goal.int2 \
	hlds.hlds_llds.int2 \
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
ml_backend.ml_gen_info.mh ml_backend.ml_gen_info.mih : ml_backend.ml_gen_info.s
else
ml_backend.ml_gen_info.mh ml_backend.ml_gen_info.mih : ml_backend.ml_gen_info.c
endif

ifeq ($(TARGET_ASM),yes)
ml_backend.ml_gen_info.module_dep : ml_backend.ml_gen_info.s
else
 ifeq ($(findstring il,$(GRADE)),il)
ml_backend.ml_gen_info.module_dep : ml_backend.ml_gen_info.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
ml_backend.ml_gen_info.module_dep : jmercury/ml_backend__ml_gen_info.java
  else
ml_backend.ml_gen_info.module_dep : ml_backend.ml_gen_info.c
  endif
 endif
endif

ml_backend.ml_gen_info.date ml_backend.ml_gen_info.date0 \
	ml_backend.date : ml_gen_info.m \
	ml_backend.int0 \
	backend_libs.int3 \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
	counter.int3 \
	hlds.int3 \
	int.int3 \
	libs.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	set.int3 \
	stack.int3 \
	string.int3 \
	check_hlds.mode_util.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_pred.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	ml_backend.ml_global_data.int3 \
	ml_backend.mlds.int3 \
	parse_tree.prog_data.int3 \
	analysis.int3 \
	array.int3 \
	assoc_list.int3 \
	bag.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	cord.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
	io.int3 \
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
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	varset.int3 \
	backend_libs.builtin_ops.int3 \
	backend_libs.foreign.int3 \
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
	hlds.hlds_goal.int3 \
	hlds.hlds_llds.int3 \
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

ml_backend.ml_gen_info.date0 \
	ml_backend.date0 : ml_gen_info.m \
	backend_libs.int3 \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
	counter.int3 \
	hlds.int3 \
	int.int3 \
	libs.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	set.int3 \
	stack.int3 \
	string.int3 \
	check_hlds.mode_util.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_pred.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	ml_backend.ml_global_data.int3 \
	ml_backend.mlds.int3 \
	parse_tree.prog_data.int3 \
	analysis.int3 \
	array.int3 \
	assoc_list.int3 \
	bag.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	cord.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
	io.int3 \
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
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	varset.int3 \
	backend_libs.builtin_ops.int3 \
	backend_libs.foreign.int3 \
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
	hlds.hlds_goal.int3 \
	hlds.hlds_llds.int3 \
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



ml_backend.ml_gen_info.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	string.mh \
	io.mh \
	io.mh



ml_backend.ml_gen_info.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	string.mh \
	io.mh \
	io.mh


ml_backend.ml_gen_info.int0 : ml_backend.ml_gen_info.date0
	@:
ml_backend.ml_gen_info.int : ml_backend.ml_gen_info.date
	@:
ml_backend.ml_gen_info.int2 : ml_backend.ml_gen_info.date
	@:
ml_backend.ml_gen_info.int3 : ml_backend.ml_gen_info.date3
	@:
ml_backend.ml_gen_info.opt : ml_backend.ml_gen_info.optdate
	@:
ml_backend.ml_gen_info.trans_opt : ml_backend.ml_gen_info.trans_opt_date
	@:

ml_backend.ml_gen_info.date0 : ml_gen_info.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) ml_backend.ml_gen_info
ml_backend.ml_gen_info.date : ml_gen_info.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) ml_backend.ml_gen_info
ml_backend.ml_gen_info.date3 : ml_gen_info.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) ml_backend.ml_gen_info
ml_backend.ml_gen_info.optdate : ml_gen_info.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) ml_backend.ml_gen_info
ml_backend.ml_gen_info.trans_opt_date : ml_gen_info.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) ml_backend.ml_gen_info
ml_backend.ml_gen_info.c_date : ml_gen_info.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) ml_backend.ml_gen_info $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
ml_backend.ml_gen_info.s_date : ml_gen_info.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only ml_backend.ml_gen_info $(ERR_REDIRECT)
ml_backend.ml_gen_info.pic_s_date : ml_gen_info.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" ml_backend.ml_gen_info $(ERR_REDIRECT)
endif # TARGET_ASM
ml_backend.ml_gen_info.il_date : ml_gen_info.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only ml_backend.ml_gen_info $(ERR_REDIRECT)
ml_backend.ml_gen_info.java_date : ml_gen_info.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only ml_backend.ml_gen_info $(ERR_REDIRECT)
