

transform_hlds.ctgc.structure_sharing.domain.optdate transform_hlds.ctgc.structure_sharing.domain.trans_opt_date structure_sharing.domain.err transform_hlds.ctgc.structure_sharing.domain.c_date transform_hlds.ctgc.structure_sharing.domain.s_date transform_hlds.ctgc.structure_sharing.domain.pic_s_date transform_hlds.ctgc.structure_sharing.domain.il_date transform_hlds.ctgc.structure_sharing.domain.java_date : structure_sharing.domain.m \
	transform_hlds.ctgc.structure_sharing.int0 \
	transform_hlds.ctgc.int0 \
	transform_hlds.int0 \
	analysis.int \
	assoc_list.int \
	bool.int \
	builtin.int \
	check_hlds.int \
	exception.int \
	hlds.int \
	int.int \
	libs.int \
	list.int \
	ll_backend.int \
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
	univ.int \
	varset.int \
	check_hlds.inst_match.int \
	check_hlds.mode_util.int \
	hlds.hlds_goal.int \
	hlds.hlds_llds.int \
	hlds.hlds_module.int \
	hlds.hlds_pred.int \
	parse_tree.prog_ctgc.int \
	parse_tree.prog_data.int \
	parse_tree.prog_out.int \
	parse_tree.prog_type.int \
	transform_hlds.ctgc.datastruct.int \
	transform_hlds.ctgc.selector.int \
	transform_hlds.ctgc.util.int \
	array.int2 \
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
	stm_builtin.int2 \
	store.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	unit.int2 \
	check_hlds.delay_info.int2 \
	check_hlds.mode_constraint_robdd.int2 \
	check_hlds.mode_errors.int2 \
	check_hlds.mode_info.int2 \
	check_hlds.unify_proc.int2 \
	hlds.hlds_args.int2 \
	hlds.hlds_clauses.int2 \
	hlds.hlds_data.int2 \
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
	transform_hlds.term_constr_data.int2 \
	transform_hlds.term_constr_errors.int2 \
	transform_hlds.term_constr_main.int2 \
	transform_hlds.term_errors.int2 \
	transform_hlds.term_norm.int2 \
	transform_hlds.term_util.int2 \
	mdbcomp.feedback.automatic_parallelism.int2

ifeq ($(TARGET_ASM),yes)
transform_hlds.ctgc.structure_sharing.domain.mh transform_hlds.ctgc.structure_sharing.domain.mih : transform_hlds.ctgc.structure_sharing.domain.s
else
transform_hlds.ctgc.structure_sharing.domain.mh transform_hlds.ctgc.structure_sharing.domain.mih : transform_hlds.ctgc.structure_sharing.domain.c
endif

ifeq ($(TARGET_ASM),yes)
transform_hlds.ctgc.structure_sharing.domain.module_dep : transform_hlds.ctgc.structure_sharing.domain.s
else
 ifeq ($(findstring il,$(GRADE)),il)
transform_hlds.ctgc.structure_sharing.domain.module_dep : transform_hlds.ctgc.structure_sharing.domain.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
transform_hlds.ctgc.structure_sharing.domain.module_dep : jmercury/transform_hlds__ctgc__structure_sharing__domain.java
  else
transform_hlds.ctgc.structure_sharing.domain.module_dep : transform_hlds.ctgc.structure_sharing.domain.c
  endif
 endif
endif

transform_hlds.ctgc.structure_sharing.domain.date transform_hlds.ctgc.structure_sharing.domain.date0 \
	transform_hlds.ctgc.structure_sharing.date \
	transform_hlds.ctgc.date \
	transform_hlds.date : structure_sharing.domain.m \
	transform_hlds.ctgc.structure_sharing.int0 \
	transform_hlds.ctgc.int0 \
	transform_hlds.int0 \
	analysis.int3 \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
	exception.int3 \
	hlds.int3 \
	int.int3 \
	libs.int3 \
	list.int3 \
	ll_backend.int3 \
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
	univ.int3 \
	varset.int3 \
	check_hlds.inst_match.int3 \
	check_hlds.mode_util.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_llds.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_pred.int3 \
	parse_tree.prog_ctgc.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_out.int3 \
	parse_tree.prog_type.int3 \
	transform_hlds.ctgc.datastruct.int3 \
	transform_hlds.ctgc.selector.int3 \
	transform_hlds.ctgc.util.int3 \
	array.int3 \
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
	stm_builtin.int3 \
	store.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	check_hlds.delay_info.int3 \
	check_hlds.mode_constraint_robdd.int3 \
	check_hlds.mode_errors.int3 \
	check_hlds.mode_info.int3 \
	check_hlds.unify_proc.int3 \
	hlds.hlds_args.int3 \
	hlds.hlds_clauses.int3 \
	hlds.hlds_data.int3 \
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
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3 \
	mdbcomp.feedback.automatic_parallelism.int3

transform_hlds.ctgc.structure_sharing.domain.date0 \
	transform_hlds.ctgc.structure_sharing.date0 \
	transform_hlds.ctgc.date0 \
	transform_hlds.date0 : structure_sharing.domain.m \
	analysis.int3 \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
	exception.int3 \
	hlds.int3 \
	int.int3 \
	libs.int3 \
	list.int3 \
	ll_backend.int3 \
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
	univ.int3 \
	varset.int3 \
	check_hlds.inst_match.int3 \
	check_hlds.mode_util.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_llds.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_pred.int3 \
	parse_tree.prog_ctgc.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_out.int3 \
	parse_tree.prog_type.int3 \
	transform_hlds.ctgc.datastruct.int3 \
	transform_hlds.ctgc.selector.int3 \
	transform_hlds.ctgc.util.int3 \
	array.int3 \
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
	stm_builtin.int3 \
	store.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	check_hlds.delay_info.int3 \
	check_hlds.mode_constraint_robdd.int3 \
	check_hlds.mode_errors.int3 \
	check_hlds.mode_info.int3 \
	check_hlds.unify_proc.int3 \
	hlds.hlds_args.int3 \
	hlds.hlds_clauses.int3 \
	hlds.hlds_data.int3 \
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
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3 \
	mdbcomp.feedback.automatic_parallelism.int3



transform_hlds.ctgc.structure_sharing.domain.$O :  \
	store.mh \
	store.mh \
	stm_builtin.mh \
	stm_builtin.mh \
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



transform_hlds.ctgc.structure_sharing.domain.pic_o :  \
	store.mh \
	store.mh \
	stm_builtin.mh \
	stm_builtin.mh \
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


transform_hlds.ctgc.structure_sharing.domain.int0 : transform_hlds.ctgc.structure_sharing.domain.date0
	@:
transform_hlds.ctgc.structure_sharing.domain.int : transform_hlds.ctgc.structure_sharing.domain.date
	@:
transform_hlds.ctgc.structure_sharing.domain.int2 : transform_hlds.ctgc.structure_sharing.domain.date
	@:
transform_hlds.ctgc.structure_sharing.domain.int3 : transform_hlds.ctgc.structure_sharing.domain.date3
	@:
transform_hlds.ctgc.structure_sharing.domain.opt : transform_hlds.ctgc.structure_sharing.domain.optdate
	@:
transform_hlds.ctgc.structure_sharing.domain.trans_opt : transform_hlds.ctgc.structure_sharing.domain.trans_opt_date
	@:

transform_hlds.ctgc.structure_sharing.domain.date0 : structure_sharing.domain.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) transform_hlds.ctgc.structure_sharing.domain
transform_hlds.ctgc.structure_sharing.domain.date : structure_sharing.domain.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) transform_hlds.ctgc.structure_sharing.domain
transform_hlds.ctgc.structure_sharing.domain.date3 : structure_sharing.domain.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) transform_hlds.ctgc.structure_sharing.domain
transform_hlds.ctgc.structure_sharing.domain.optdate : structure_sharing.domain.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) transform_hlds.ctgc.structure_sharing.domain
transform_hlds.ctgc.structure_sharing.domain.trans_opt_date : structure_sharing.domain.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) transform_hlds.ctgc.structure_sharing.domain
transform_hlds.ctgc.structure_sharing.domain.c_date : structure_sharing.domain.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) transform_hlds.ctgc.structure_sharing.domain $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
transform_hlds.ctgc.structure_sharing.domain.s_date : structure_sharing.domain.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only transform_hlds.ctgc.structure_sharing.domain $(ERR_REDIRECT)
transform_hlds.ctgc.structure_sharing.domain.pic_s_date : structure_sharing.domain.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" transform_hlds.ctgc.structure_sharing.domain $(ERR_REDIRECT)
endif # TARGET_ASM
transform_hlds.ctgc.structure_sharing.domain.il_date : structure_sharing.domain.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only transform_hlds.ctgc.structure_sharing.domain $(ERR_REDIRECT)
transform_hlds.ctgc.structure_sharing.domain.java_date : structure_sharing.domain.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only transform_hlds.ctgc.structure_sharing.domain $(ERR_REDIRECT)
