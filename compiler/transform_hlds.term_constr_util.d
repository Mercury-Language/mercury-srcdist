

transform_hlds.term_constr_util.optdate transform_hlds.term_constr_util.trans_opt_date term_constr_util.err transform_hlds.term_constr_util.c_date transform_hlds.term_constr_util.s_date transform_hlds.term_constr_util.pic_s_date transform_hlds.term_constr_util.il_date transform_hlds.term_constr_util.java_date : term_constr_util.m \
	transform_hlds.int0 \
	bool.int \
	builtin.int \
	check_hlds.int \
	hlds.int \
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
	std_util.int \
	string.int \
	svmap.int \
	svvarset.int \
	term.int \
	varset.int \
	check_hlds.type_util.int \
	hlds.hlds_module.int \
	hlds.hlds_out.int \
	hlds.hlds_pred.int \
	libs.lp_rational.int \
	libs.polyhedron.int \
	libs.rat.int \
	parse_tree.prog_data.int \
	transform_hlds.term_constr_data.int \
	transform_hlds.term_constr_errors.int \
	transform_hlds.term_constr_main.int \
	transform_hlds.term_norm.int \
	hlds.hlds_out.hlds_out_util.int \
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
	hlds.hlds_rtti.int2 \
	hlds.inst_graph.int2 \
	hlds.instmap.int2 \
	hlds.pred_table.int2 \
	hlds.special_pred.int2 \
	libs.globals.int2 \
	libs.options.int2 \
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
	parse_tree.mercury_to_mercury.int2 \
	parse_tree.module_qual.int2 \
	parse_tree.prog_foreign.int2 \
	parse_tree.prog_item.int2 \
	parse_tree.prog_type.int2 \
	transform_hlds.term_errors.int2 \
	transform_hlds.term_util.int2 \
	mdbcomp.feedback.automatic_parallelism.int2

ifeq ($(TARGET_ASM),yes)
transform_hlds.term_constr_util.mh transform_hlds.term_constr_util.mih : transform_hlds.term_constr_util.s
else
transform_hlds.term_constr_util.mh transform_hlds.term_constr_util.mih : transform_hlds.term_constr_util.c
endif

ifeq ($(TARGET_ASM),yes)
transform_hlds.term_constr_util.module_dep : transform_hlds.term_constr_util.s
else
 ifeq ($(findstring il,$(GRADE)),il)
transform_hlds.term_constr_util.module_dep : transform_hlds.term_constr_util.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
transform_hlds.term_constr_util.module_dep : jmercury/transform_hlds__term_constr_util.java
  else
transform_hlds.term_constr_util.module_dep : transform_hlds.term_constr_util.c
  endif
 endif
endif

transform_hlds.term_constr_util.date transform_hlds.term_constr_util.date0 \
	transform_hlds.date : term_constr_util.m \
	transform_hlds.int0 \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
	hlds.int3 \
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
	std_util.int3 \
	string.int3 \
	svmap.int3 \
	svvarset.int3 \
	term.int3 \
	varset.int3 \
	check_hlds.type_util.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_out.int3 \
	hlds.hlds_pred.int3 \
	libs.lp_rational.int3 \
	libs.polyhedron.int3 \
	libs.rat.int3 \
	parse_tree.prog_data.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_norm.int3 \
	hlds.hlds_out.hlds_out_util.int3 \
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
	hlds.hlds_rtti.int3 \
	hlds.inst_graph.int3 \
	hlds.instmap.int3 \
	hlds.pred_table.int3 \
	hlds.special_pred.int3 \
	libs.globals.int3 \
	libs.options.int3 \
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
	parse_tree.mercury_to_mercury.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.prog_type.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_util.int3 \
	mdbcomp.feedback.automatic_parallelism.int3

transform_hlds.term_constr_util.date0 \
	transform_hlds.date0 : term_constr_util.m \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
	hlds.int3 \
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
	std_util.int3 \
	string.int3 \
	svmap.int3 \
	svvarset.int3 \
	term.int3 \
	varset.int3 \
	check_hlds.type_util.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_out.int3 \
	hlds.hlds_pred.int3 \
	libs.lp_rational.int3 \
	libs.polyhedron.int3 \
	libs.rat.int3 \
	parse_tree.prog_data.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_norm.int3 \
	hlds.hlds_out.hlds_out_util.int3 \
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
	hlds.hlds_rtti.int3 \
	hlds.inst_graph.int3 \
	hlds.instmap.int3 \
	hlds.pred_table.int3 \
	hlds.special_pred.int3 \
	libs.globals.int3 \
	libs.options.int3 \
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
	parse_tree.mercury_to_mercury.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.prog_type.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_util.int3 \
	mdbcomp.feedback.automatic_parallelism.int3



transform_hlds.term_constr_util.$O :  \
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



transform_hlds.term_constr_util.pic_o :  \
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


transform_hlds.term_constr_util.int0 : transform_hlds.term_constr_util.date0
	@:
transform_hlds.term_constr_util.int : transform_hlds.term_constr_util.date
	@:
transform_hlds.term_constr_util.int2 : transform_hlds.term_constr_util.date
	@:
transform_hlds.term_constr_util.int3 : transform_hlds.term_constr_util.date3
	@:
transform_hlds.term_constr_util.opt : transform_hlds.term_constr_util.optdate
	@:
transform_hlds.term_constr_util.trans_opt : transform_hlds.term_constr_util.trans_opt_date
	@:

transform_hlds.term_constr_util.date0 : term_constr_util.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) transform_hlds.term_constr_util
transform_hlds.term_constr_util.date : term_constr_util.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) transform_hlds.term_constr_util
transform_hlds.term_constr_util.date3 : term_constr_util.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) transform_hlds.term_constr_util
transform_hlds.term_constr_util.optdate : term_constr_util.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) transform_hlds.term_constr_util
transform_hlds.term_constr_util.trans_opt_date : term_constr_util.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) transform_hlds.term_constr_util
transform_hlds.term_constr_util.c_date : term_constr_util.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) transform_hlds.term_constr_util $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
transform_hlds.term_constr_util.s_date : term_constr_util.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only transform_hlds.term_constr_util $(ERR_REDIRECT)
transform_hlds.term_constr_util.pic_s_date : term_constr_util.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" transform_hlds.term_constr_util $(ERR_REDIRECT)
endif # TARGET_ASM
transform_hlds.term_constr_util.il_date : term_constr_util.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only transform_hlds.term_constr_util $(ERR_REDIRECT)
transform_hlds.term_constr_util.java_date : term_constr_util.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only transform_hlds.term_constr_util $(ERR_REDIRECT)
