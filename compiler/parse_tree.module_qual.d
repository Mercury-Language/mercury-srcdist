

parse_tree.module_qual.optdate parse_tree.module_qual.trans_opt_date module_qual.err parse_tree.module_qual.c_date parse_tree.module_qual.s_date parse_tree.module_qual.pic_s_date parse_tree.module_qual.il_date parse_tree.module_qual.java_date : module_qual.m \
	parse_tree.int0 \
	assoc_list.int \
	bool.int \
	builtin.int \
	libs.int \
	list.int \
	map.int \
	maybe.int \
	mdbcomp.int \
	pair.int \
	private_builtin.int \
	recompilation.int \
	set.int \
	solutions.int \
	svmap.int \
	term.int \
	libs.compiler_util.int \
	libs.globals.int \
	libs.options.int \
	mdbcomp.prim_data.int \
	parse_tree.error_util.int \
	parse_tree.modules.int \
	parse_tree.prog_data.int \
	parse_tree.prog_io.int \
	parse_tree.prog_item.int \
	parse_tree.prog_out.int \
	parse_tree.prog_util.int \
	analysis.int2 \
	bag.int2 \
	bitmap.int2 \
	char.int2 \
	check_hlds.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	getopt_io.int2 \
	hlds.int2 \
	io.int2 \
	mode_robdd.int2 \
	multi_map.int2 \
	ops.int2 \
	relation.int2 \
	robdd.int2 \
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
	libs.lp_rational.int2 \
	libs.polyhedron.int2 \
	libs.rat.int2 \
	libs.timestamp.int2 \
	libs.trace_params.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2 \
	mode_robdd.tfeirn.int2 \
	parse_tree.prog_foreign.int2 \
	parse_tree.prog_io_util.int2 \
	transform_hlds.term_constr_data.int2 \
	transform_hlds.term_constr_errors.int2 \
	transform_hlds.term_constr_main.int2 \
	transform_hlds.term_errors.int2 \
	transform_hlds.term_norm.int2 \
	transform_hlds.term_util.int2

ifeq ($(TARGET_ASM),yes)
parse_tree.module_qual.mh parse_tree.module_qual.mih : parse_tree.module_qual.s
else
parse_tree.module_qual.mh parse_tree.module_qual.mih : parse_tree.module_qual.c
endif

ifeq ($(TARGET_ASM),yes)
parse_tree.module_qual.module_dep : parse_tree.module_qual.s
else
 ifeq ($(findstring il,$(GRADE)),il)
parse_tree.module_qual.module_dep : parse_tree.module_qual.il
  ifeq ($(findstring java,$(GRADE)),java)
parse_tree.module_qual.module_dep : parse_tree.module_qual.java
  else
parse_tree.module_qual.module_dep : parse_tree.module_qual.c
  endif
 endif
endif

parse_tree.module_qual.date parse_tree.module_qual.date0 \
	parse_tree.date : module_qual.m \
	parse_tree.int0 \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	libs.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	pair.int3 \
	private_builtin.int3 \
	recompilation.int3 \
	set.int3 \
	solutions.int3 \
	svmap.int3 \
	term.int3 \
	libs.compiler_util.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.error_util.int3 \
	parse_tree.modules.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_io.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.prog_out.int3 \
	parse_tree.prog_util.int3 \
	analysis.int3 \
	bag.int3 \
	bitmap.int3 \
	char.int3 \
	check_hlds.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt_io.int3 \
	hlds.int3 \
	io.int3 \
	mode_robdd.int3 \
	multi_map.int3 \
	ops.int3 \
	relation.int3 \
	robdd.int3 \
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
	libs.lp_rational.int3 \
	libs.polyhedron.int3 \
	libs.rat.int3 \
	libs.timestamp.int3 \
	libs.trace_params.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_io_util.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3

parse_tree.module_qual.date0 \
	parse_tree.date0 : module_qual.m \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	libs.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	pair.int3 \
	private_builtin.int3 \
	recompilation.int3 \
	set.int3 \
	solutions.int3 \
	svmap.int3 \
	term.int3 \
	libs.compiler_util.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.error_util.int3 \
	parse_tree.modules.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_io.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.prog_out.int3 \
	parse_tree.prog_util.int3 \
	analysis.int3 \
	bag.int3 \
	bitmap.int3 \
	char.int3 \
	check_hlds.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt_io.int3 \
	hlds.int3 \
	io.int3 \
	mode_robdd.int3 \
	multi_map.int3 \
	ops.int3 \
	relation.int3 \
	robdd.int3 \
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
	libs.lp_rational.int3 \
	libs.polyhedron.int3 \
	libs.rat.int3 \
	libs.timestamp.int3 \
	libs.trace_params.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_io_util.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3



parse_tree.module_qual.$O :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



parse_tree.module_qual.pic_o :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


parse_tree.module_qual.int0 : parse_tree.module_qual.date0
	@:
parse_tree.module_qual.int : parse_tree.module_qual.date
	@:
parse_tree.module_qual.int2 : parse_tree.module_qual.date
	@:
parse_tree.module_qual.int3 : parse_tree.module_qual.date3
	@:
parse_tree.module_qual.opt : parse_tree.module_qual.optdate
	@:
parse_tree.module_qual.trans_opt : parse_tree.module_qual.trans_opt_date
	@:

parse_tree.module_qual.date0 : module_qual.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) parse_tree.module_qual
parse_tree.module_qual.date : module_qual.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) parse_tree.module_qual
parse_tree.module_qual.date3 : module_qual.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) parse_tree.module_qual
parse_tree.module_qual.optdate : module_qual.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) parse_tree.module_qual
parse_tree.module_qual.trans_opt_date : module_qual.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) parse_tree.module_qual
parse_tree.module_qual.c_date : module_qual.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) parse_tree.module_qual $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
parse_tree.module_qual.s_date : module_qual.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only parse_tree.module_qual $(ERR_REDIRECT)
parse_tree.module_qual.pic_s_date : module_qual.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" parse_tree.module_qual $(ERR_REDIRECT)
endif # TARGET_ASM
parse_tree.module_qual.il_date : module_qual.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only parse_tree.module_qual $(ERR_REDIRECT)
parse_tree.module_qual.java_date : module_qual.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only parse_tree.module_qual $(ERR_REDIRECT)
