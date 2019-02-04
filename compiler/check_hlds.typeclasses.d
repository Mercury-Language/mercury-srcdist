

check_hlds.typeclasses.optdate check_hlds.typeclasses.trans_opt_date typeclasses.err check_hlds.typeclasses.c_date check_hlds.typeclasses.s_date check_hlds.typeclasses.pic_s_date check_hlds.typeclasses.il_date check_hlds.typeclasses.java_date : typeclasses.m \
	check_hlds.int0 \
	bool.int \
	builtin.int \
	hlds.int \
	int.int \
	list.int \
	map.int \
	parse_tree.int \
	private_builtin.int \
	set.int \
	term.int \
	varset.int \
	check_hlds.type_util.int \
	check_hlds.typecheck_errors.int \
	check_hlds.typecheck_info.int \
	hlds.hlds_data.int \
	hlds.hlds_module.int \
	hlds.hlds_pred.int \
	parse_tree.prog_data.int \
	parse_tree.prog_type.int \
	parse_tree.prog_type_subst.int \
	analysis.int2 \
	array.int2 \
	assoc_list.int2 \
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
	libs.int2 \
	maybe.int2 \
	mdbcomp.int2 \
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
	time.int2 \
	tree234.int2 \
	tree_bitset.int2 \
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
	hlds.hlds_goal.int2 \
	hlds.hlds_llds.int2 \
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
	parse_tree.set_of_var.int2 \
	transform_hlds.term_constr_data.int2 \
	transform_hlds.term_constr_errors.int2 \
	transform_hlds.term_constr_main.int2 \
	transform_hlds.term_errors.int2 \
	transform_hlds.term_norm.int2 \
	transform_hlds.term_util.int2 \
	mdbcomp.feedback.automatic_parallelism.int2

ifeq ($(TARGET_ASM),yes)
check_hlds.typeclasses.mh check_hlds.typeclasses.mih : check_hlds.typeclasses.s
else
check_hlds.typeclasses.mh check_hlds.typeclasses.mih : check_hlds.typeclasses.c
endif

ifeq ($(TARGET_ASM),yes)
check_hlds.typeclasses.module_dep : check_hlds.typeclasses.s
else
 ifeq ($(findstring il,$(GRADE)),il)
check_hlds.typeclasses.module_dep : check_hlds.typeclasses.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
check_hlds.typeclasses.module_dep : jmercury/check_hlds__typeclasses.java
  else
check_hlds.typeclasses.module_dep : check_hlds.typeclasses.c
  endif
 endif
endif

check_hlds.typeclasses.date check_hlds.typeclasses.date0 \
	check_hlds.date : typeclasses.m \
	check_hlds.int0 \
	bool.int3 \
	builtin.int3 \
	hlds.int3 \
	int.int3 \
	list.int3 \
	map.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	set.int3 \
	term.int3 \
	varset.int3 \
	check_hlds.type_util.int3 \
	check_hlds.typecheck_errors.int3 \
	check_hlds.typecheck_info.int3 \
	hlds.hlds_data.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_pred.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_type.int3 \
	parse_tree.prog_type_subst.int3 \
	analysis.int3 \
	array.int3 \
	assoc_list.int3 \
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
	libs.int3 \
	maybe.int3 \
	mdbcomp.int3 \
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
	time.int3 \
	tree234.int3 \
	tree_bitset.int3 \
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
	hlds.hlds_goal.int3 \
	hlds.hlds_llds.int3 \
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
	parse_tree.set_of_var.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3 \
	mdbcomp.feedback.automatic_parallelism.int3

check_hlds.typeclasses.date0 \
	check_hlds.date0 : typeclasses.m \
	bool.int3 \
	builtin.int3 \
	hlds.int3 \
	int.int3 \
	list.int3 \
	map.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	set.int3 \
	term.int3 \
	varset.int3 \
	check_hlds.type_util.int3 \
	check_hlds.typecheck_errors.int3 \
	check_hlds.typecheck_info.int3 \
	hlds.hlds_data.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_pred.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_type.int3 \
	parse_tree.prog_type_subst.int3 \
	analysis.int3 \
	array.int3 \
	assoc_list.int3 \
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
	libs.int3 \
	maybe.int3 \
	mdbcomp.int3 \
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
	time.int3 \
	tree234.int3 \
	tree_bitset.int3 \
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
	hlds.hlds_goal.int3 \
	hlds.hlds_llds.int3 \
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
	parse_tree.set_of_var.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3 \
	mdbcomp.feedback.automatic_parallelism.int3



check_hlds.typeclasses.$O :  \
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



check_hlds.typeclasses.pic_o :  \
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


check_hlds.typeclasses.int0 : check_hlds.typeclasses.date0
	@:
check_hlds.typeclasses.int : check_hlds.typeclasses.date
	@:
check_hlds.typeclasses.int2 : check_hlds.typeclasses.date
	@:
check_hlds.typeclasses.int3 : check_hlds.typeclasses.date3
	@:
check_hlds.typeclasses.opt : check_hlds.typeclasses.optdate
	@:
check_hlds.typeclasses.trans_opt : check_hlds.typeclasses.trans_opt_date
	@:

check_hlds.typeclasses.date0 : typeclasses.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) check_hlds.typeclasses
check_hlds.typeclasses.date : typeclasses.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) check_hlds.typeclasses
check_hlds.typeclasses.date3 : typeclasses.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) check_hlds.typeclasses
check_hlds.typeclasses.optdate : typeclasses.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) check_hlds.typeclasses
check_hlds.typeclasses.trans_opt_date : typeclasses.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) check_hlds.typeclasses
check_hlds.typeclasses.c_date : typeclasses.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) check_hlds.typeclasses $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
check_hlds.typeclasses.s_date : typeclasses.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only check_hlds.typeclasses $(ERR_REDIRECT)
check_hlds.typeclasses.pic_s_date : typeclasses.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" check_hlds.typeclasses $(ERR_REDIRECT)
endif # TARGET_ASM
check_hlds.typeclasses.il_date : typeclasses.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only check_hlds.typeclasses $(ERR_REDIRECT)
check_hlds.typeclasses.java_date : typeclasses.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only check_hlds.typeclasses $(ERR_REDIRECT)
