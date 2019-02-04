

recompilation.usage.optdate recompilation.usage.trans_opt_date recompilation.usage.err recompilation.usage.c_date recompilation.usage.s_date recompilation.usage.pic_s_date recompilation.usage.il_date recompilation.usage.java_date : recompilation.usage.m \
	recompilation.int0 \
	assoc_list.int \
	bool.int \
	builtin.int \
	check_hlds.int \
	hlds.int \
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
	queue.int \
	set.int \
	solutions.int \
	string.int \
	svmap.int \
	term.int \
	time.int \
	hlds.hlds_data.int \
	hlds.hlds_module.int \
	hlds.hlds_pred.int \
	hlds.passes_aux.int \
	hlds.pred_table.int \
	libs.compiler_util.int \
	libs.globals.int \
	libs.options.int \
	libs.timestamp.int \
	mdbcomp.prim_data.int \
	parse_tree.mercury_to_mercury.int \
	parse_tree.modules.int \
	parse_tree.prog_data.int \
	parse_tree.prog_item.int \
	parse_tree.prog_out.int \
	parse_tree.prog_type.int \
	parse_tree.prog_util.int \
	recompilation.version.int \
	analysis.int2 \
	array.int2 \
	bag.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	getopt_io.int2 \
	mode_robdd.int2 \
	multi_map.int2 \
	ops.int2 \
	random.int2 \
	relation.int2 \
	robdd.int2 \
	set_ordlist.int2 \
	sparse_bitset.int2 \
	stack.int2 \
	stream.int2 \
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
	hlds.hlds_goal.int2 \
	hlds.hlds_llds.int2 \
	hlds.hlds_rtti.int2 \
	hlds.inst_graph.int2 \
	hlds.instmap.int2 \
	hlds.special_pred.int2 \
	libs.lp_rational.int2 \
	libs.polyhedron.int2 \
	libs.rat.int2 \
	libs.trace_params.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2 \
	mode_robdd.tfeirn.int2 \
	parse_tree.error_util.int2 \
	parse_tree.module_qual.int2 \
	parse_tree.prog_foreign.int2 \
	parse_tree.prog_io.int2 \
	parse_tree.prog_io_util.int2 \
	transform_hlds.term_constr_data.int2 \
	transform_hlds.term_constr_errors.int2 \
	transform_hlds.term_constr_main.int2 \
	transform_hlds.term_errors.int2 \
	transform_hlds.term_norm.int2 \
	transform_hlds.term_util.int2

ifeq ($(TARGET_ASM),yes)
recompilation.usage.mh recompilation.usage.mih : recompilation.usage.s
else
recompilation.usage.mh recompilation.usage.mih : recompilation.usage.c
endif

ifeq ($(TARGET_ASM),yes)
recompilation.usage.module_dep : recompilation.usage.s
else
 ifeq ($(findstring il,$(GRADE)),il)
recompilation.usage.module_dep : recompilation.usage.il
  ifeq ($(findstring java,$(GRADE)),java)
recompilation.usage.module_dep : recompilation.usage.java
  else
recompilation.usage.module_dep : recompilation.usage.c
  endif
 endif
endif

recompilation.usage.date recompilation.usage.date0 \
	recompilation.date : recompilation.usage.m \
	recompilation.int0 \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
	hlds.int3 \
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
	queue.int3 \
	set.int3 \
	solutions.int3 \
	string.int3 \
	svmap.int3 \
	term.int3 \
	time.int3 \
	hlds.hlds_data.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_pred.int3 \
	hlds.passes_aux.int3 \
	hlds.pred_table.int3 \
	libs.compiler_util.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	libs.timestamp.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.mercury_to_mercury.int3 \
	parse_tree.modules.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.prog_out.int3 \
	parse_tree.prog_type.int3 \
	parse_tree.prog_util.int3 \
	recompilation.version.int3 \
	analysis.int3 \
	array.int3 \
	bag.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt_io.int3 \
	mode_robdd.int3 \
	multi_map.int3 \
	ops.int3 \
	random.int3 \
	relation.int3 \
	robdd.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stack.int3 \
	stream.int3 \
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
	hlds.hlds_goal.int3 \
	hlds.hlds_llds.int3 \
	hlds.hlds_rtti.int3 \
	hlds.inst_graph.int3 \
	hlds.instmap.int3 \
	hlds.special_pred.int3 \
	libs.lp_rational.int3 \
	libs.polyhedron.int3 \
	libs.rat.int3 \
	libs.trace_params.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.error_util.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_io.int3 \
	parse_tree.prog_io_util.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3

recompilation.usage.date0 \
	recompilation.date0 : recompilation.usage.m \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
	hlds.int3 \
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
	queue.int3 \
	set.int3 \
	solutions.int3 \
	string.int3 \
	svmap.int3 \
	term.int3 \
	time.int3 \
	hlds.hlds_data.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_pred.int3 \
	hlds.passes_aux.int3 \
	hlds.pred_table.int3 \
	libs.compiler_util.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	libs.timestamp.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.mercury_to_mercury.int3 \
	parse_tree.modules.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.prog_out.int3 \
	parse_tree.prog_type.int3 \
	parse_tree.prog_util.int3 \
	recompilation.version.int3 \
	analysis.int3 \
	array.int3 \
	bag.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt_io.int3 \
	mode_robdd.int3 \
	multi_map.int3 \
	ops.int3 \
	random.int3 \
	relation.int3 \
	robdd.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stack.int3 \
	stream.int3 \
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
	hlds.hlds_goal.int3 \
	hlds.hlds_llds.int3 \
	hlds.hlds_rtti.int3 \
	hlds.inst_graph.int3 \
	hlds.instmap.int3 \
	hlds.special_pred.int3 \
	libs.lp_rational.int3 \
	libs.polyhedron.int3 \
	libs.rat.int3 \
	libs.trace_params.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.error_util.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_io.int3 \
	parse_tree.prog_io_util.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3



recompilation.usage.$O :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	bitmap.mh \
	bitmap.mh \
	time.mh \
	time.mh \
	string.mh \
	io.mh \
	io.mh



recompilation.usage.pic_o :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	bitmap.mh \
	bitmap.mh \
	time.mh \
	time.mh \
	string.mh \
	io.mh \
	io.mh


recompilation.usage.int0 : recompilation.usage.date0
	@:
recompilation.usage.int : recompilation.usage.date
	@:
recompilation.usage.int2 : recompilation.usage.date
	@:
recompilation.usage.int3 : recompilation.usage.date3
	@:
recompilation.usage.opt : recompilation.usage.optdate
	@:
recompilation.usage.trans_opt : recompilation.usage.trans_opt_date
	@:
