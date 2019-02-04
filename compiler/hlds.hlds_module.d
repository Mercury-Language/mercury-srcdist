

hlds.hlds_module.optdate hlds.hlds_module.trans_opt_date hlds_module.err hlds.hlds_module.c_date hlds.hlds_module.s_date hlds.hlds_module.pic_s_date hlds.hlds_module.il_date hlds.hlds_module.java_date : hlds_module.m \
	hlds.int0 \
	analysis.int \
	assoc_list.int \
	bool.int \
	builtin.int \
	check_hlds.int \
	counter.int \
	digraph.int \
	int.int \
	libs.int \
	list.int \
	map.int \
	maybe.int \
	mdbcomp.int \
	multi_map.int \
	pair.int \
	parse_tree.int \
	private_builtin.int \
	recompilation.int \
	set.int \
	string.int \
	transform_hlds.int \
	check_hlds.unify_proc.int \
	hlds.hlds_data.int \
	hlds.hlds_pred.int \
	hlds.pred_table.int \
	hlds.special_pred.int \
	libs.compiler_util.int \
	libs.globals.int \
	mdbcomp.prim_data.int \
	parse_tree.module_qual.int \
	parse_tree.modules.int \
	parse_tree.prog_data.int \
	parse_tree.prog_foreign.int \
	parse_tree.prog_item.int \
	parse_tree.prog_util.int \
	transform_hlds.mmc_analysis.int \
	array.int2 \
	bag.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	cord.int2 \
	deconstruct.int2 \
	enum.int2 \
	getopt_io.int2 \
	io.int2 \
	mode_robdd.int2 \
	ops.int2 \
	pretty_printer.int2 \
	random.int2 \
	robdd.int2 \
	set_ordlist.int2 \
	sparse_bitset.int2 \
	stack.int2 \
	stream.int2 \
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
	hlds.hlds_args.int2 \
	hlds.hlds_clauses.int2 \
	hlds.hlds_goal.int2 \
	hlds.hlds_llds.int2 \
	hlds.hlds_rtti.int2 \
	hlds.inst_graph.int2 \
	hlds.instmap.int2 \
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
	parse_tree.error_util.int2 \
	parse_tree.prog_io.int2 \
	parse_tree.prog_io_util.int2 \
	transform_hlds.term_constr_data.int2 \
	transform_hlds.term_constr_errors.int2 \
	transform_hlds.term_constr_main.int2 \
	transform_hlds.term_errors.int2 \
	transform_hlds.term_norm.int2 \
	transform_hlds.term_util.int2

ifeq ($(TARGET_ASM),yes)
hlds.hlds_module.mh hlds.hlds_module.mih : hlds.hlds_module.s
else
hlds.hlds_module.mh hlds.hlds_module.mih : hlds.hlds_module.c
endif

ifeq ($(TARGET_ASM),yes)
hlds.hlds_module.module_dep : hlds.hlds_module.s
else
 ifeq ($(findstring il,$(GRADE)),il)
hlds.hlds_module.module_dep : hlds.hlds_module.il
  ifeq ($(findstring java,$(GRADE)),java)
hlds.hlds_module.module_dep : hlds.hlds_module.java
  else
hlds.hlds_module.module_dep : hlds.hlds_module.c
  endif
 endif
endif

hlds.hlds_module.date hlds.hlds_module.date0 \
	hlds.date : hlds_module.m \
	hlds.int0 \
	analysis.int3 \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
	counter.int3 \
	digraph.int3 \
	int.int3 \
	libs.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	multi_map.int3 \
	pair.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	recompilation.int3 \
	set.int3 \
	string.int3 \
	transform_hlds.int3 \
	check_hlds.unify_proc.int3 \
	hlds.hlds_data.int3 \
	hlds.hlds_pred.int3 \
	hlds.pred_table.int3 \
	hlds.special_pred.int3 \
	libs.compiler_util.int3 \
	libs.globals.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.modules.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.prog_util.int3 \
	transform_hlds.mmc_analysis.int3 \
	array.int3 \
	bag.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	cord.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt_io.int3 \
	io.int3 \
	mode_robdd.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	robdd.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stack.int3 \
	stream.int3 \
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
	hlds.hlds_args.int3 \
	hlds.hlds_clauses.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_llds.int3 \
	hlds.hlds_rtti.int3 \
	hlds.inst_graph.int3 \
	hlds.instmap.int3 \
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
	parse_tree.error_util.int3 \
	parse_tree.prog_io.int3 \
	parse_tree.prog_io_util.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3

hlds.hlds_module.date0 \
	hlds.date0 : hlds_module.m \
	analysis.int3 \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
	counter.int3 \
	digraph.int3 \
	int.int3 \
	libs.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	multi_map.int3 \
	pair.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	recompilation.int3 \
	set.int3 \
	string.int3 \
	transform_hlds.int3 \
	check_hlds.unify_proc.int3 \
	hlds.hlds_data.int3 \
	hlds.hlds_pred.int3 \
	hlds.pred_table.int3 \
	hlds.special_pred.int3 \
	libs.compiler_util.int3 \
	libs.globals.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.modules.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.prog_util.int3 \
	transform_hlds.mmc_analysis.int3 \
	array.int3 \
	bag.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	cord.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt_io.int3 \
	io.int3 \
	mode_robdd.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	robdd.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stack.int3 \
	stream.int3 \
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
	hlds.hlds_args.int3 \
	hlds.hlds_clauses.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_llds.int3 \
	hlds.hlds_rtti.int3 \
	hlds.inst_graph.int3 \
	hlds.instmap.int3 \
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
	parse_tree.error_util.int3 \
	parse_tree.prog_io.int3 \
	parse_tree.prog_io_util.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3



hlds.hlds_module.$O :  \
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



hlds.hlds_module.pic_o :  \
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


hlds.hlds_module.int0 : hlds.hlds_module.date0
	@:
hlds.hlds_module.int : hlds.hlds_module.date
	@:
hlds.hlds_module.int2 : hlds.hlds_module.date
	@:
hlds.hlds_module.int3 : hlds.hlds_module.date3
	@:
hlds.hlds_module.opt : hlds.hlds_module.optdate
	@:
hlds.hlds_module.trans_opt : hlds.hlds_module.trans_opt_date
	@:

hlds.hlds_module.date0 : hlds_module.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) hlds.hlds_module
hlds.hlds_module.date : hlds_module.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) hlds.hlds_module
hlds.hlds_module.date3 : hlds_module.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) hlds.hlds_module
hlds.hlds_module.optdate : hlds_module.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) hlds.hlds_module
hlds.hlds_module.trans_opt_date : hlds_module.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) hlds.hlds_module
hlds.hlds_module.c_date : hlds_module.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) hlds.hlds_module $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
hlds.hlds_module.s_date : hlds_module.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only hlds.hlds_module $(ERR_REDIRECT)
hlds.hlds_module.pic_s_date : hlds_module.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" hlds.hlds_module $(ERR_REDIRECT)
endif # TARGET_ASM
hlds.hlds_module.il_date : hlds_module.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only hlds.hlds_module $(ERR_REDIRECT)
hlds.hlds_module.java_date : hlds_module.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only hlds.hlds_module $(ERR_REDIRECT)
