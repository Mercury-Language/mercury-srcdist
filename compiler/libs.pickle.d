

libs.pickle.optdate libs.pickle.trans_opt_date pickle.err libs.pickle.c_date libs.pickle.s_date libs.pickle.pic_s_date libs.pickle.il_date libs.pickle.java_date : pickle.m \
	libs.int0 \
	bitmap.int \
	bool.int \
	builtin.int \
	char.int \
	construct.int \
	deconstruct.int \
	exception.int \
	int.int \
	io.int \
	list.int \
	map.int \
	private_builtin.int \
	string.int \
	type_desc.int \
	univ.int \
	libs.compiler_util.int \
	analysis.int2 \
	array.int2 \
	assoc_list.int2 \
	bag.int2 \
	check_hlds.int2 \
	digraph.int2 \
	enum.int2 \
	getopt_io.int2 \
	hlds.int2 \
	maybe.int2 \
	mdbcomp.int2 \
	mode_robdd.int2 \
	multi_map.int2 \
	ops.int2 \
	pair.int2 \
	parse_tree.int2 \
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
	stm_builtin.int2 \
	store.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	unit.int2 \
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
	mdbcomp.prim_data.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2 \
	mode_robdd.tfeirn.int2 \
	parse_tree.error_util.int2 \
	parse_tree.module_qual.int2 \
	parse_tree.prog_data.int2 \
	parse_tree.prog_foreign.int2 \
	parse_tree.prog_item.int2 \
	transform_hlds.term_constr_data.int2 \
	transform_hlds.term_constr_errors.int2 \
	transform_hlds.term_constr_main.int2 \
	transform_hlds.term_errors.int2 \
	transform_hlds.term_norm.int2 \
	transform_hlds.term_util.int2

ifeq ($(TARGET_ASM),yes)
libs.pickle.mh libs.pickle.mih : libs.pickle.s
else
libs.pickle.mh libs.pickle.mih : libs.pickle.c
endif

ifeq ($(TARGET_ASM),yes)
libs.pickle.module_dep : libs.pickle.s
else
 ifeq ($(findstring il,$(GRADE)),il)
libs.pickle.module_dep : libs.pickle.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
libs.pickle.module_dep : jmercury/libs__pickle.java
  else
libs.pickle.module_dep : libs.pickle.c
  endif
 endif
endif

libs.pickle.date libs.pickle.date0 \
	libs.date : pickle.m \
	libs.int0 \
	bitmap.int3 \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	exception.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	private_builtin.int3 \
	string.int3 \
	type_desc.int3 \
	univ.int3 \
	libs.compiler_util.int3 \
	analysis.int3 \
	array.int3 \
	assoc_list.int3 \
	bag.int3 \
	check_hlds.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
	hlds.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	mode_robdd.int3 \
	multi_map.int3 \
	ops.int3 \
	pair.int3 \
	parse_tree.int3 \
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
	stm_builtin.int3 \
	store.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	unit.int3 \
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
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.error_util.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_item.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3

libs.pickle.date0 \
	libs.date0 : pickle.m \
	bitmap.int3 \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	exception.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	private_builtin.int3 \
	string.int3 \
	type_desc.int3 \
	univ.int3 \
	libs.compiler_util.int3 \
	analysis.int3 \
	array.int3 \
	assoc_list.int3 \
	bag.int3 \
	check_hlds.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
	hlds.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	mode_robdd.int3 \
	multi_map.int3 \
	ops.int3 \
	pair.int3 \
	parse_tree.int3 \
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
	stm_builtin.int3 \
	store.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	unit.int3 \
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
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.error_util.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_item.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3



libs.pickle.$O :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	store.mh \
	store.mh \
	stm_builtin.mh \
	stm_builtin.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	libs.pickle.mh



libs.pickle.pic_o :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	store.mh \
	store.mh \
	stm_builtin.mh \
	stm_builtin.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	libs.pickle.mh


libs.pickle.int0 : libs.pickle.date0
	@:
libs.pickle.int : libs.pickle.date
	@:
libs.pickle.int2 : libs.pickle.date
	@:
libs.pickle.int3 : libs.pickle.date3
	@:
libs.pickle.opt : libs.pickle.optdate
	@:
libs.pickle.trans_opt : libs.pickle.trans_opt_date
	@:

libs.pickle.date0 : pickle.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) libs.pickle
libs.pickle.date : pickle.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) libs.pickle
libs.pickle.date3 : pickle.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) libs.pickle
libs.pickle.optdate : pickle.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) libs.pickle
libs.pickle.trans_opt_date : pickle.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) libs.pickle
libs.pickle.c_date : pickle.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) libs.pickle $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
libs.pickle.s_date : pickle.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only libs.pickle $(ERR_REDIRECT)
libs.pickle.pic_s_date : pickle.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" libs.pickle $(ERR_REDIRECT)
endif # TARGET_ASM
libs.pickle.il_date : pickle.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only libs.pickle $(ERR_REDIRECT)
libs.pickle.java_date : pickle.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only libs.pickle $(ERR_REDIRECT)
