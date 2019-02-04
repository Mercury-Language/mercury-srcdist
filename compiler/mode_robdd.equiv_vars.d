

mode_robdd.equiv_vars.optdate mode_robdd.equiv_vars.trans_opt_date mode_robdd.equiv_vars.err mode_robdd.equiv_vars.c_date mode_robdd.equiv_vars.s_date mode_robdd.equiv_vars.pic_s_date mode_robdd.equiv_vars.il_date mode_robdd.equiv_vars.java_date : mode_robdd.equiv_vars.m \
	mode_robdd.int0 \
	bool.int \
	builtin.int \
	check_hlds.int \
	list.int \
	map.int \
	pair.int \
	private_builtin.int \
	require.int \
	robdd.int \
	set.int \
	solutions.int \
	sparse_bitset.int \
	term.int \
	check_hlds.mode_constraint_robdd.int \
	mode_robdd.tfeirn.int \
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
	hlds.int2 \
	int.int2 \
	io.int2 \
	libs.int2 \
	maybe.int2 \
	mdbcomp.int2 \
	multi_map.int2 \
	ops.int2 \
	parse_tree.int2 \
	pretty_printer.int2 \
	queue.int2 \
	random.int2 \
	recompilation.int2 \
	rtti_implementation.int2 \
	set_ordlist.int2 \
	stack.int2 \
	stream.int2 \
	string.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	unit.int2 \
	univ.int2 \
	varset.int2 \
	check_hlds.delay_info.int2 \
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
mode_robdd.equiv_vars.mh mode_robdd.equiv_vars.mih : mode_robdd.equiv_vars.s
else
mode_robdd.equiv_vars.mh mode_robdd.equiv_vars.mih : mode_robdd.equiv_vars.c
endif

ifeq ($(TARGET_ASM),yes)
mode_robdd.equiv_vars.module_dep : mode_robdd.equiv_vars.s
else
 ifeq ($(findstring il,$(GRADE)),il)
mode_robdd.equiv_vars.module_dep : mode_robdd.equiv_vars.il
  ifeq ($(findstring java,$(GRADE)),java)
mode_robdd.equiv_vars.module_dep : jmercury/mode_robdd__equiv_vars.java
  else
mode_robdd.equiv_vars.module_dep : mode_robdd.equiv_vars.c
  endif
 endif
endif

mode_robdd.equiv_vars.date mode_robdd.equiv_vars.date0 \
	mode_robdd.date : mode_robdd.equiv_vars.m \
	mode_robdd.int0 \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
	list.int3 \
	map.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	robdd.int3 \
	set.int3 \
	solutions.int3 \
	sparse_bitset.int3 \
	term.int3 \
	check_hlds.mode_constraint_robdd.int3 \
	mode_robdd.tfeirn.int3 \
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
	hlds.int3 \
	int.int3 \
	io.int3 \
	libs.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	multi_map.int3 \
	ops.int3 \
	parse_tree.int3 \
	pretty_printer.int3 \
	queue.int3 \
	random.int3 \
	recompilation.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stack.int3 \
	stream.int3 \
	string.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	varset.int3 \
	check_hlds.delay_info.int3 \
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

mode_robdd.equiv_vars.date0 \
	mode_robdd.date0 : mode_robdd.equiv_vars.m \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
	list.int3 \
	map.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	robdd.int3 \
	set.int3 \
	solutions.int3 \
	sparse_bitset.int3 \
	term.int3 \
	check_hlds.mode_constraint_robdd.int3 \
	mode_robdd.tfeirn.int3 \
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
	hlds.int3 \
	int.int3 \
	io.int3 \
	libs.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	multi_map.int3 \
	ops.int3 \
	parse_tree.int3 \
	pretty_printer.int3 \
	queue.int3 \
	random.int3 \
	recompilation.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stack.int3 \
	stream.int3 \
	string.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	varset.int3 \
	check_hlds.delay_info.int3 \
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



mode_robdd.equiv_vars.$O :  \
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



mode_robdd.equiv_vars.pic_o :  \
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


mode_robdd.equiv_vars.int0 : mode_robdd.equiv_vars.date0
	@:
mode_robdd.equiv_vars.int : mode_robdd.equiv_vars.date
	@:
mode_robdd.equiv_vars.int2 : mode_robdd.equiv_vars.date
	@:
mode_robdd.equiv_vars.int3 : mode_robdd.equiv_vars.date3
	@:
mode_robdd.equiv_vars.opt : mode_robdd.equiv_vars.optdate
	@:
mode_robdd.equiv_vars.trans_opt : mode_robdd.equiv_vars.trans_opt_date
	@:
