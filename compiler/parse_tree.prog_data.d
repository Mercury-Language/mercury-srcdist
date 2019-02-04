

parse_tree.prog_data.optdate parse_tree.prog_data.trans_opt_date prog_data.err parse_tree.prog_data.c_date parse_tree.prog_data.s_date parse_tree.prog_data.pic_s_date parse_tree.prog_data.il_date parse_tree.prog_data.java_date : prog_data.m \
	parse_tree.int0 \
	assoc_list.int \
	bool.int \
	builtin.int \
	char.int \
	library.int \
	libs.int \
	list.int \
	map.int \
	maybe.int \
	mdbcomp.int \
	pair.int \
	private_builtin.int \
	set.int \
	string.int \
	term.int \
	unit.int \
	varset.int \
	libs.compiler_util.int \
	libs.globals.int \
	libs.rat.int \
	mdbcomp.prim_data.int \
	parse_tree.prog_item.int \
	analysis.int2 \
	array.int2 \
	bag.int2 \
	bitmap.int2 \
	check_hlds.int2 \
	construct.int2 \
	deconstruct.int2 \
	digraph.int2 \
	enum.int2 \
	getopt_io.int2 \
	hlds.int2 \
	int.int2 \
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
	stream.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
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
	hlds.hlds_module.int2 \
	hlds.hlds_pred.int2 \
	hlds.hlds_rtti.int2 \
	hlds.inst_graph.int2 \
	hlds.instmap.int2 \
	hlds.pred_table.int2 \
	hlds.special_pred.int2 \
	libs.lp_rational.int2 \
	libs.options.int2 \
	libs.polyhedron.int2 \
	libs.timestamp.int2 \
	libs.trace_params.int2 \
	mdbcomp.feedback.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2 \
	mode_robdd.tfeirn.int2 \
	parse_tree.error_util.int2 \
	parse_tree.module_qual.int2 \
	parse_tree.prog_foreign.int2 \
	transform_hlds.term_constr_data.int2 \
	transform_hlds.term_constr_errors.int2 \
	transform_hlds.term_constr_main.int2 \
	transform_hlds.term_errors.int2 \
	transform_hlds.term_norm.int2 \
	transform_hlds.term_util.int2

ifeq ($(TARGET_ASM),yes)
parse_tree.prog_data.mh parse_tree.prog_data.mih : parse_tree.prog_data.s
else
parse_tree.prog_data.mh parse_tree.prog_data.mih : parse_tree.prog_data.c
endif

ifeq ($(TARGET_ASM),yes)
parse_tree.prog_data.module_dep : parse_tree.prog_data.s
else
 ifeq ($(findstring il,$(GRADE)),il)
parse_tree.prog_data.module_dep : parse_tree.prog_data.il
  ifeq ($(findstring java,$(GRADE)),java)
parse_tree.prog_data.module_dep : jmercury/parse_tree__prog_data.java
  else
parse_tree.prog_data.module_dep : parse_tree.prog_data.c
  endif
 endif
endif

parse_tree.prog_data.date parse_tree.prog_data.date0 \
	parse_tree.date : prog_data.m \
	parse_tree.int0 \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	library.int3 \
	libs.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	pair.int3 \
	private_builtin.int3 \
	set.int3 \
	string.int3 \
	term.int3 \
	unit.int3 \
	varset.int3 \
	libs.compiler_util.int3 \
	libs.globals.int3 \
	libs.rat.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.prog_item.int3 \
	analysis.int3 \
	array.int3 \
	bag.int3 \
	bitmap.int3 \
	check_hlds.int3 \
	construct.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
	hlds.int3 \
	int.int3 \
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
	stream.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
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
	hlds.hlds_module.int3 \
	hlds.hlds_pred.int3 \
	hlds.hlds_rtti.int3 \
	hlds.inst_graph.int3 \
	hlds.instmap.int3 \
	hlds.pred_table.int3 \
	hlds.special_pred.int3 \
	libs.lp_rational.int3 \
	libs.options.int3 \
	libs.polyhedron.int3 \
	libs.timestamp.int3 \
	libs.trace_params.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.error_util.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_foreign.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3

parse_tree.prog_data.date0 \
	parse_tree.date0 : prog_data.m \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	library.int3 \
	libs.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	pair.int3 \
	private_builtin.int3 \
	set.int3 \
	string.int3 \
	term.int3 \
	unit.int3 \
	varset.int3 \
	libs.compiler_util.int3 \
	libs.globals.int3 \
	libs.rat.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.prog_item.int3 \
	analysis.int3 \
	array.int3 \
	bag.int3 \
	bitmap.int3 \
	check_hlds.int3 \
	construct.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
	hlds.int3 \
	int.int3 \
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
	stream.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
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
	hlds.hlds_module.int3 \
	hlds.hlds_pred.int3 \
	hlds.hlds_rtti.int3 \
	hlds.inst_graph.int3 \
	hlds.instmap.int3 \
	hlds.pred_table.int3 \
	hlds.special_pred.int3 \
	libs.lp_rational.int3 \
	libs.options.int3 \
	libs.polyhedron.int3 \
	libs.timestamp.int3 \
	libs.trace_params.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.error_util.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_foreign.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3



parse_tree.prog_data.$O :  \
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



parse_tree.prog_data.pic_o :  \
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


parse_tree.prog_data.int0 : parse_tree.prog_data.date0
	@:
parse_tree.prog_data.int : parse_tree.prog_data.date
	@:
parse_tree.prog_data.int2 : parse_tree.prog_data.date
	@:
parse_tree.prog_data.int3 : parse_tree.prog_data.date3
	@:
parse_tree.prog_data.opt : parse_tree.prog_data.optdate
	@:
parse_tree.prog_data.trans_opt : parse_tree.prog_data.trans_opt_date
	@:

parse_tree.prog_data.date0 : prog_data.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) parse_tree.prog_data
parse_tree.prog_data.date : prog_data.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) parse_tree.prog_data
parse_tree.prog_data.date3 : prog_data.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) parse_tree.prog_data
parse_tree.prog_data.optdate : prog_data.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) parse_tree.prog_data
parse_tree.prog_data.trans_opt_date : prog_data.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) parse_tree.prog_data
parse_tree.prog_data.c_date : prog_data.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) parse_tree.prog_data $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
parse_tree.prog_data.s_date : prog_data.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only parse_tree.prog_data $(ERR_REDIRECT)
parse_tree.prog_data.pic_s_date : prog_data.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" parse_tree.prog_data $(ERR_REDIRECT)
endif # TARGET_ASM
parse_tree.prog_data.il_date : prog_data.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only parse_tree.prog_data $(ERR_REDIRECT)
parse_tree.prog_data.java_date : prog_data.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only parse_tree.prog_data $(ERR_REDIRECT)
