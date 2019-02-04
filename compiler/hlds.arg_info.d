

hlds.arg_info.optdate hlds.arg_info.trans_opt_date arg_info.err hlds.arg_info.c_date hlds.arg_info.s_date hlds.arg_info.pic_s_date hlds.arg_info.il_date hlds.arg_info.java_date : arg_info.m \
	hlds.int0 \
	assoc_list.int \
	builtin.int \
	check_hlds.int \
	int.int \
	libs.int \
	list.int \
	map.int \
	mdbcomp.int \
	pair.int \
	parse_tree.int \
	private_builtin.int \
	set.int \
	svset.int \
	transform_hlds.int \
	check_hlds.mode_util.int \
	hlds.code_model.int \
	hlds.hlds_module.int \
	hlds.hlds_pred.int \
	libs.compiler_util.int \
	parse_tree.prog_data.int \
	analysis.int2 \
	array.int2 \
	bag.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	digraph.int2 \
	enum.int2 \
	getopt_io.int2 \
	io.int2 \
	maybe.int2 \
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
	string.int2 \
	table_builtin.int2 \
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
hlds.arg_info.mh hlds.arg_info.mih : hlds.arg_info.s
else
hlds.arg_info.mh hlds.arg_info.mih : hlds.arg_info.c
endif

ifeq ($(TARGET_ASM),yes)
hlds.arg_info.module_dep : hlds.arg_info.s
else
 ifeq ($(findstring il,$(GRADE)),il)
hlds.arg_info.module_dep : hlds.arg_info.il
  ifeq ($(findstring java,$(GRADE)),java)
hlds.arg_info.module_dep : hlds.arg_info.java
  else
hlds.arg_info.module_dep : hlds.arg_info.c
  endif
 endif
endif

hlds.arg_info.date hlds.arg_info.date0 \
	hlds.date : arg_info.m \
	hlds.int0 \
	assoc_list.int3 \
	builtin.int3 \
	check_hlds.int3 \
	int.int3 \
	libs.int3 \
	list.int3 \
	map.int3 \
	mdbcomp.int3 \
	pair.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	set.int3 \
	svset.int3 \
	transform_hlds.int3 \
	check_hlds.mode_util.int3 \
	hlds.code_model.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_pred.int3 \
	libs.compiler_util.int3 \
	parse_tree.prog_data.int3 \
	analysis.int3 \
	array.int3 \
	bag.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
	io.int3 \
	maybe.int3 \
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
	string.int3 \
	table_builtin.int3 \
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

hlds.arg_info.date0 \
	hlds.date0 : arg_info.m \
	assoc_list.int3 \
	builtin.int3 \
	check_hlds.int3 \
	int.int3 \
	libs.int3 \
	list.int3 \
	map.int3 \
	mdbcomp.int3 \
	pair.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	set.int3 \
	svset.int3 \
	transform_hlds.int3 \
	check_hlds.mode_util.int3 \
	hlds.code_model.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_pred.int3 \
	libs.compiler_util.int3 \
	parse_tree.prog_data.int3 \
	analysis.int3 \
	array.int3 \
	bag.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
	io.int3 \
	maybe.int3 \
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
	string.int3 \
	table_builtin.int3 \
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



hlds.arg_info.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	string.mh \
	io.mh \
	io.mh \
	table_builtin.mh \
	table_builtin.mh



hlds.arg_info.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	string.mh \
	io.mh \
	io.mh \
	table_builtin.mh \
	table_builtin.mh


hlds.arg_info.int0 : hlds.arg_info.date0
	@:
hlds.arg_info.int : hlds.arg_info.date
	@:
hlds.arg_info.int2 : hlds.arg_info.date
	@:
hlds.arg_info.int3 : hlds.arg_info.date3
	@:
hlds.arg_info.opt : hlds.arg_info.optdate
	@:
hlds.arg_info.trans_opt : hlds.arg_info.trans_opt_date
	@:

hlds.arg_info.date0 : arg_info.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) hlds.arg_info
hlds.arg_info.date : arg_info.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) hlds.arg_info
hlds.arg_info.date3 : arg_info.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) hlds.arg_info
hlds.arg_info.optdate : arg_info.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) hlds.arg_info
hlds.arg_info.trans_opt_date : arg_info.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) hlds.arg_info
hlds.arg_info.c_date : arg_info.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) hlds.arg_info $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
hlds.arg_info.s_date : arg_info.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only hlds.arg_info $(ERR_REDIRECT)
hlds.arg_info.pic_s_date : arg_info.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" hlds.arg_info $(ERR_REDIRECT)
endif # TARGET_ASM
hlds.arg_info.il_date : arg_info.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only hlds.arg_info $(ERR_REDIRECT)
hlds.arg_info.java_date : arg_info.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only hlds.arg_info $(ERR_REDIRECT)
