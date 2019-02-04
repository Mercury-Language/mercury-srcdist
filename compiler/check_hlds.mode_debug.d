

check_hlds.mode_debug.optdate check_hlds.mode_debug.trans_opt_date mode_debug.err check_hlds.mode_debug.c_date check_hlds.mode_debug.s_date check_hlds.mode_debug.pic_s_date check_hlds.mode_debug.il_date check_hlds.mode_debug.java_date : mode_debug.m \
	check_hlds.int0 \
	assoc_list.int \
	bool.int \
	builtin.int \
	hlds.int \
	io.int \
	libs.int \
	list.int \
	maybe.int \
	pair.int \
	parse_tree.int \
	private_builtin.int \
	term.int \
	varset.int \
	check_hlds.mode_info.int \
	hlds.instmap.int \
	libs.file_util.int \
	parse_tree.mercury_to_mercury.int \
	parse_tree.prog_data.int \
	analysis.int2 \
	array.int2 \
	bag.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	digraph.int2 \
	enum.int2 \
	getopt_io.int2 \
	int.int2 \
	map.int2 \
	mdbcomp.int2 \
	mode_robdd.int2 \
	multi_map.int2 \
	ops.int2 \
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
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	unit.int2 \
	univ.int2 \
	check_hlds.delay_info.int2 \
	check_hlds.mode_constraint_robdd.int2 \
	check_hlds.mode_errors.int2 \
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
	parse_tree.prog_foreign.int2 \
	parse_tree.prog_item.int2 \
	transform_hlds.term_constr_data.int2 \
	transform_hlds.term_constr_errors.int2 \
	transform_hlds.term_constr_main.int2 \
	transform_hlds.term_errors.int2 \
	transform_hlds.term_norm.int2 \
	transform_hlds.term_util.int2

ifeq ($(TARGET_ASM),yes)
check_hlds.mode_debug.mh check_hlds.mode_debug.mih : check_hlds.mode_debug.s
else
check_hlds.mode_debug.mh check_hlds.mode_debug.mih : check_hlds.mode_debug.c
endif

ifeq ($(TARGET_ASM),yes)
check_hlds.mode_debug.module_dep : check_hlds.mode_debug.s
else
 ifeq ($(findstring il,$(GRADE)),il)
check_hlds.mode_debug.module_dep : check_hlds.mode_debug.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
check_hlds.mode_debug.module_dep : jmercury/check_hlds__mode_debug.java
  else
check_hlds.mode_debug.module_dep : check_hlds.mode_debug.c
  endif
 endif
endif

check_hlds.mode_debug.date check_hlds.mode_debug.date0 \
	check_hlds.date : mode_debug.m \
	check_hlds.int0 \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	hlds.int3 \
	io.int3 \
	libs.int3 \
	list.int3 \
	maybe.int3 \
	pair.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	term.int3 \
	varset.int3 \
	check_hlds.mode_info.int3 \
	hlds.instmap.int3 \
	libs.file_util.int3 \
	parse_tree.mercury_to_mercury.int3 \
	parse_tree.prog_data.int3 \
	analysis.int3 \
	array.int3 \
	bag.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
	int.int3 \
	map.int3 \
	mdbcomp.int3 \
	mode_robdd.int3 \
	multi_map.int3 \
	ops.int3 \
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
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	check_hlds.delay_info.int3 \
	check_hlds.mode_constraint_robdd.int3 \
	check_hlds.mode_errors.int3 \
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
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_item.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3

check_hlds.mode_debug.date0 \
	check_hlds.date0 : mode_debug.m \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	hlds.int3 \
	io.int3 \
	libs.int3 \
	list.int3 \
	maybe.int3 \
	pair.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	term.int3 \
	varset.int3 \
	check_hlds.mode_info.int3 \
	hlds.instmap.int3 \
	libs.file_util.int3 \
	parse_tree.mercury_to_mercury.int3 \
	parse_tree.prog_data.int3 \
	analysis.int3 \
	array.int3 \
	bag.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
	int.int3 \
	map.int3 \
	mdbcomp.int3 \
	mode_robdd.int3 \
	multi_map.int3 \
	ops.int3 \
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
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	check_hlds.delay_info.int3 \
	check_hlds.mode_constraint_robdd.int3 \
	check_hlds.mode_errors.int3 \
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
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_item.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3



check_hlds.mode_debug.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	array.mh \
	array.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	string.mh \
	io.mh \
	io.mh \
	check_hlds.mode_debug.mh



check_hlds.mode_debug.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	array.mh \
	array.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	string.mh \
	io.mh \
	io.mh \
	check_hlds.mode_debug.mh


check_hlds.mode_debug.int0 : check_hlds.mode_debug.date0
	@:
check_hlds.mode_debug.int : check_hlds.mode_debug.date
	@:
check_hlds.mode_debug.int2 : check_hlds.mode_debug.date
	@:
check_hlds.mode_debug.int3 : check_hlds.mode_debug.date3
	@:
check_hlds.mode_debug.opt : check_hlds.mode_debug.optdate
	@:
check_hlds.mode_debug.trans_opt : check_hlds.mode_debug.trans_opt_date
	@:

check_hlds.mode_debug.date0 : mode_debug.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) check_hlds.mode_debug
check_hlds.mode_debug.date : mode_debug.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) check_hlds.mode_debug
check_hlds.mode_debug.date3 : mode_debug.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) check_hlds.mode_debug
check_hlds.mode_debug.optdate : mode_debug.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) check_hlds.mode_debug
check_hlds.mode_debug.trans_opt_date : mode_debug.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) check_hlds.mode_debug
check_hlds.mode_debug.c_date : mode_debug.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) check_hlds.mode_debug $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
check_hlds.mode_debug.s_date : mode_debug.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only check_hlds.mode_debug $(ERR_REDIRECT)
check_hlds.mode_debug.pic_s_date : mode_debug.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" check_hlds.mode_debug $(ERR_REDIRECT)
endif # TARGET_ASM
check_hlds.mode_debug.il_date : mode_debug.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only check_hlds.mode_debug $(ERR_REDIRECT)
check_hlds.mode_debug.java_date : mode_debug.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only check_hlds.mode_debug $(ERR_REDIRECT)
