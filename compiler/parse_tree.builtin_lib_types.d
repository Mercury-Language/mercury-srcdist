

parse_tree.builtin_lib_types.optdate parse_tree.builtin_lib_types.trans_opt_date builtin_lib_types.err parse_tree.builtin_lib_types.c_date parse_tree.builtin_lib_types.s_date parse_tree.builtin_lib_types.pic_s_date parse_tree.builtin_lib_types.il_date parse_tree.builtin_lib_types.java_date : builtin_lib_types.m \
	parse_tree.int0 \
	builtin.int \
	libs.int \
	list.int \
	map.int \
	mdbcomp.int \
	private_builtin.int \
	mdbcomp.prim_data.int \
	parse_tree.prog_data.int \
	analysis.int2 \
	array.int2 \
	assoc_list.int2 \
	bag.int2 \
	bimap.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	check_hlds.int2 \
	construct.int2 \
	deconstruct.int2 \
	digraph.int2 \
	enum.int2 \
	getopt_io.int2 \
	hlds.int2 \
	io.int2 \
	maybe.int2 \
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
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	unit.int2 \
	univ.int2 \
	varset.int2 \
	check_hlds.delay_info.int2 \
	check_hlds.mode_constraint_robdd.int2 \
	check_hlds.mode_errors.int2 \
	check_hlds.mode_info.int2 \
	check_hlds.unify_proc.int2 \
	hlds.hlds_args.int2 \
	hlds.hlds_clauses.int2 \
	hlds.hlds_data.int2 \
	hlds.hlds_goal.int2 \
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
parse_tree.builtin_lib_types.mh parse_tree.builtin_lib_types.mih : parse_tree.builtin_lib_types.s
else
parse_tree.builtin_lib_types.mh parse_tree.builtin_lib_types.mih : parse_tree.builtin_lib_types.c
endif

ifeq ($(TARGET_ASM),yes)
parse_tree.builtin_lib_types.module_dep : parse_tree.builtin_lib_types.s
else
 ifeq ($(findstring il,$(GRADE)),il)
parse_tree.builtin_lib_types.module_dep : parse_tree.builtin_lib_types.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
parse_tree.builtin_lib_types.module_dep : jmercury/parse_tree__builtin_lib_types.java
  else
parse_tree.builtin_lib_types.module_dep : parse_tree.builtin_lib_types.c
  endif
 endif
endif

parse_tree.builtin_lib_types.date parse_tree.builtin_lib_types.date0 \
	parse_tree.date : builtin_lib_types.m \
	parse_tree.int0 \
	builtin.int3 \
	libs.int3 \
	list.int3 \
	map.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.prog_data.int3 \
	analysis.int3 \
	array.int3 \
	assoc_list.int3 \
	bag.int3 \
	bimap.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	check_hlds.int3 \
	construct.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
	hlds.int3 \
	io.int3 \
	maybe.int3 \
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
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	varset.int3 \
	check_hlds.delay_info.int3 \
	check_hlds.mode_constraint_robdd.int3 \
	check_hlds.mode_errors.int3 \
	check_hlds.mode_info.int3 \
	check_hlds.unify_proc.int3 \
	hlds.hlds_args.int3 \
	hlds.hlds_clauses.int3 \
	hlds.hlds_data.int3 \
	hlds.hlds_goal.int3 \
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

parse_tree.builtin_lib_types.date0 \
	parse_tree.date0 : builtin_lib_types.m \
	builtin.int3 \
	libs.int3 \
	list.int3 \
	map.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.prog_data.int3 \
	analysis.int3 \
	array.int3 \
	assoc_list.int3 \
	bag.int3 \
	bimap.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	check_hlds.int3 \
	construct.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
	hlds.int3 \
	io.int3 \
	maybe.int3 \
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
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	varset.int3 \
	check_hlds.delay_info.int3 \
	check_hlds.mode_constraint_robdd.int3 \
	check_hlds.mode_errors.int3 \
	check_hlds.mode_info.int3 \
	check_hlds.unify_proc.int3 \
	hlds.hlds_args.int3 \
	hlds.hlds_clauses.int3 \
	hlds.hlds_data.int3 \
	hlds.hlds_goal.int3 \
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



parse_tree.builtin_lib_types.$O :  \
	array.mh \
	array.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



parse_tree.builtin_lib_types.pic_o :  \
	array.mh \
	array.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


parse_tree.builtin_lib_types.int0 : parse_tree.builtin_lib_types.date0
	@:
parse_tree.builtin_lib_types.int : parse_tree.builtin_lib_types.date
	@:
parse_tree.builtin_lib_types.int2 : parse_tree.builtin_lib_types.date
	@:
parse_tree.builtin_lib_types.int3 : parse_tree.builtin_lib_types.date3
	@:
parse_tree.builtin_lib_types.opt : parse_tree.builtin_lib_types.optdate
	@:
parse_tree.builtin_lib_types.trans_opt : parse_tree.builtin_lib_types.trans_opt_date
	@:

parse_tree.builtin_lib_types.date0 : builtin_lib_types.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) parse_tree.builtin_lib_types
parse_tree.builtin_lib_types.date : builtin_lib_types.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) parse_tree.builtin_lib_types
parse_tree.builtin_lib_types.date3 : builtin_lib_types.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) parse_tree.builtin_lib_types
parse_tree.builtin_lib_types.optdate : builtin_lib_types.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) parse_tree.builtin_lib_types
parse_tree.builtin_lib_types.trans_opt_date : builtin_lib_types.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) parse_tree.builtin_lib_types
parse_tree.builtin_lib_types.c_date : builtin_lib_types.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) parse_tree.builtin_lib_types $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
parse_tree.builtin_lib_types.s_date : builtin_lib_types.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only parse_tree.builtin_lib_types $(ERR_REDIRECT)
parse_tree.builtin_lib_types.pic_s_date : builtin_lib_types.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" parse_tree.builtin_lib_types $(ERR_REDIRECT)
endif # TARGET_ASM
parse_tree.builtin_lib_types.il_date : builtin_lib_types.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only parse_tree.builtin_lib_types $(ERR_REDIRECT)
parse_tree.builtin_lib_types.java_date : builtin_lib_types.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only parse_tree.builtin_lib_types $(ERR_REDIRECT)
