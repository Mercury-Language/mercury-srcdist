

hlds.make_hlds.add_class.optdate hlds.make_hlds.add_class.trans_opt_date add_class.err hlds.make_hlds.add_class.c_date hlds.make_hlds.add_class.s_date hlds.make_hlds.add_class.pic_s_date hlds.make_hlds.add_class.il_date hlds.make_hlds.add_class.java_date : add_class.m \
	hlds.make_hlds.int0 \
	hlds.int0 \
	bool.int \
	builtin.int \
	check_hlds.int \
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
	solutions.int \
	string.int \
	term.int \
	transform_hlds.int \
	varset.int \
	check_hlds.clause_to_proc.int \
	hlds.hlds_args.int \
	hlds.hlds_clauses.int \
	hlds.hlds_data.int \
	hlds.hlds_goal.int \
	hlds.hlds_module.int \
	hlds.hlds_pred.int \
	hlds.hlds_rtti.int \
	hlds.pred_table.int \
	libs.compiler_util.int \
	mdbcomp.prim_data.int \
	parse_tree.equiv_type.int \
	parse_tree.error_util.int \
	parse_tree.module_qual.int \
	parse_tree.prog_data.int \
	parse_tree.prog_item.int \
	parse_tree.prog_type.int \
	parse_tree.prog_type_subst.int \
	parse_tree.prog_util.int \
	hlds.make_hlds.add_clause.int \
	hlds.make_hlds.add_pred.int \
	hlds.make_hlds.add_special_pred.int \
	hlds.make_hlds.add_type.int \
	hlds.make_hlds.make_hlds_error.int \
	hlds.make_hlds.make_hlds_passes.int \
	hlds.make_hlds.make_hlds_warn.int \
	hlds.make_hlds.qual_info.int \
	hlds.make_hlds.state_var.int \
	analysis.int2 \
	array.int2 \
	assoc_list.int2 \
	bag.int2 \
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
	random.int2 \
	recompilation.int2 \
	robdd.int2 \
	set_ordlist.int2 \
	sparse_bitset.int2 \
	stack.int2 \
	stream.int2 \
	table_builtin.int2 \
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
	hlds.hlds_llds.int2 \
	hlds.inst_graph.int2 \
	hlds.instmap.int2 \
	hlds.quantification.int2 \
	hlds.special_pred.int2 \
	libs.globals.int2 \
	libs.lp_rational.int2 \
	libs.options.int2 \
	libs.polyhedron.int2 \
	libs.rat.int2 \
	libs.timestamp.int2 \
	libs.trace_params.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2 \
	mode_robdd.tfeirn.int2 \
	parse_tree.prog_foreign.int2 \
	transform_hlds.term_constr_data.int2 \
	transform_hlds.term_constr_errors.int2 \
	transform_hlds.term_constr_main.int2 \
	transform_hlds.term_errors.int2 \
	transform_hlds.term_norm.int2 \
	transform_hlds.term_util.int2

ifeq ($(TARGET_ASM),yes)
hlds.make_hlds.add_class.mh hlds.make_hlds.add_class.mih : hlds.make_hlds.add_class.s
else
hlds.make_hlds.add_class.mh hlds.make_hlds.add_class.mih : hlds.make_hlds.add_class.c
endif

ifeq ($(TARGET_ASM),yes)
hlds.make_hlds.add_class.module_dep : hlds.make_hlds.add_class.s
else
 ifeq ($(findstring il,$(GRADE)),il)
hlds.make_hlds.add_class.module_dep : hlds.make_hlds.add_class.il
  ifeq ($(findstring java,$(GRADE)),java)
hlds.make_hlds.add_class.module_dep : hlds.make_hlds.add_class.java
  else
hlds.make_hlds.add_class.module_dep : hlds.make_hlds.add_class.c
  endif
 endif
endif

hlds.make_hlds.add_class.date hlds.make_hlds.add_class.date0 \
	hlds.make_hlds.date \
	hlds.date : add_class.m \
	hlds.make_hlds.int0 \
	hlds.int0 \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
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
	solutions.int3 \
	string.int3 \
	term.int3 \
	transform_hlds.int3 \
	varset.int3 \
	check_hlds.clause_to_proc.int3 \
	hlds.hlds_args.int3 \
	hlds.hlds_clauses.int3 \
	hlds.hlds_data.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_pred.int3 \
	hlds.hlds_rtti.int3 \
	hlds.pred_table.int3 \
	libs.compiler_util.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.equiv_type.int3 \
	parse_tree.error_util.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.prog_type.int3 \
	parse_tree.prog_type_subst.int3 \
	parse_tree.prog_util.int3 \
	hlds.make_hlds.add_clause.int3 \
	hlds.make_hlds.add_pred.int3 \
	hlds.make_hlds.add_special_pred.int3 \
	hlds.make_hlds.add_type.int3 \
	hlds.make_hlds.make_hlds_error.int3 \
	hlds.make_hlds.make_hlds_passes.int3 \
	hlds.make_hlds.make_hlds_warn.int3 \
	hlds.make_hlds.qual_info.int3 \
	hlds.make_hlds.state_var.int3 \
	analysis.int3 \
	array.int3 \
	assoc_list.int3 \
	bag.int3 \
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
	random.int3 \
	recompilation.int3 \
	robdd.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stack.int3 \
	stream.int3 \
	table_builtin.int3 \
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
	hlds.hlds_llds.int3 \
	hlds.inst_graph.int3 \
	hlds.instmap.int3 \
	hlds.quantification.int3 \
	hlds.special_pred.int3 \
	libs.globals.int3 \
	libs.lp_rational.int3 \
	libs.options.int3 \
	libs.polyhedron.int3 \
	libs.rat.int3 \
	libs.timestamp.int3 \
	libs.trace_params.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.prog_foreign.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3

hlds.make_hlds.add_class.date0 \
	hlds.make_hlds.date0 \
	hlds.date0 : add_class.m \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
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
	solutions.int3 \
	string.int3 \
	term.int3 \
	transform_hlds.int3 \
	varset.int3 \
	check_hlds.clause_to_proc.int3 \
	hlds.hlds_args.int3 \
	hlds.hlds_clauses.int3 \
	hlds.hlds_data.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_pred.int3 \
	hlds.hlds_rtti.int3 \
	hlds.pred_table.int3 \
	libs.compiler_util.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.equiv_type.int3 \
	parse_tree.error_util.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.prog_type.int3 \
	parse_tree.prog_type_subst.int3 \
	parse_tree.prog_util.int3 \
	hlds.make_hlds.add_clause.int3 \
	hlds.make_hlds.add_pred.int3 \
	hlds.make_hlds.add_special_pred.int3 \
	hlds.make_hlds.add_type.int3 \
	hlds.make_hlds.make_hlds_error.int3 \
	hlds.make_hlds.make_hlds_passes.int3 \
	hlds.make_hlds.make_hlds_warn.int3 \
	hlds.make_hlds.qual_info.int3 \
	hlds.make_hlds.state_var.int3 \
	analysis.int3 \
	array.int3 \
	assoc_list.int3 \
	bag.int3 \
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
	random.int3 \
	recompilation.int3 \
	robdd.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stack.int3 \
	stream.int3 \
	table_builtin.int3 \
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
	hlds.hlds_llds.int3 \
	hlds.inst_graph.int3 \
	hlds.instmap.int3 \
	hlds.quantification.int3 \
	hlds.special_pred.int3 \
	libs.globals.int3 \
	libs.lp_rational.int3 \
	libs.options.int3 \
	libs.polyhedron.int3 \
	libs.rat.int3 \
	libs.timestamp.int3 \
	libs.trace_params.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.prog_foreign.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3



hlds.make_hlds.add_class.$O :  \
	array.mh \
	array.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	table_builtin.mh \
	table_builtin.mh \
	string.mh \
	io.mh \
	io.mh



hlds.make_hlds.add_class.pic_o :  \
	array.mh \
	array.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	table_builtin.mh \
	table_builtin.mh \
	string.mh \
	io.mh \
	io.mh


hlds.make_hlds.add_class.int0 : hlds.make_hlds.add_class.date0
	@:
hlds.make_hlds.add_class.int : hlds.make_hlds.add_class.date
	@:
hlds.make_hlds.add_class.int2 : hlds.make_hlds.add_class.date
	@:
hlds.make_hlds.add_class.int3 : hlds.make_hlds.add_class.date3
	@:
hlds.make_hlds.add_class.opt : hlds.make_hlds.add_class.optdate
	@:
hlds.make_hlds.add_class.trans_opt : hlds.make_hlds.add_class.trans_opt_date
	@:

hlds.make_hlds.add_class.date0 : add_class.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) hlds.make_hlds.add_class
hlds.make_hlds.add_class.date : add_class.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) hlds.make_hlds.add_class
hlds.make_hlds.add_class.date3 : add_class.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) hlds.make_hlds.add_class
hlds.make_hlds.add_class.optdate : add_class.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) hlds.make_hlds.add_class
hlds.make_hlds.add_class.trans_opt_date : add_class.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) hlds.make_hlds.add_class
hlds.make_hlds.add_class.c_date : add_class.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) hlds.make_hlds.add_class $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
hlds.make_hlds.add_class.s_date : add_class.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only hlds.make_hlds.add_class $(ERR_REDIRECT)
hlds.make_hlds.add_class.pic_s_date : add_class.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" hlds.make_hlds.add_class $(ERR_REDIRECT)
endif # TARGET_ASM
hlds.make_hlds.add_class.il_date : add_class.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only hlds.make_hlds.add_class $(ERR_REDIRECT)
hlds.make_hlds.add_class.java_date : add_class.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only hlds.make_hlds.add_class $(ERR_REDIRECT)
