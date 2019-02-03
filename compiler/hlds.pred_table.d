

hlds.pred_table.optdate hlds.pred_table.trans_opt_date pred_table.err hlds.pred_table.c_date hlds.pred_table.s_date hlds.pred_table.pic_s_date hlds.pred_table.il_date hlds.pred_table.java_date : pred_table.m \
	hlds.int0 \
	bool.int \
	builtin.int \
	check_hlds.int \
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
	string.int \
	svmap.int \
	svmulti_map.int \
	transform_hlds.int \
	hlds.hlds_module.int \
	hlds.hlds_pred.int \
	libs.compiler_util.int \
	mdbcomp.prim_data.int \
	parse_tree.error_util.int \
	parse_tree.module_qual.int \
	parse_tree.prog_data.int \
	parse_tree.prog_out.int \
	parse_tree.prog_type.int \
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
	io.int2 \
	mode_robdd.int2 \
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
	hlds.special_pred.int2 \
	libs.globals.int2 \
	libs.lp_rational.int2 \
	libs.options.int2 \
	libs.polyhedron.int2 \
	libs.rat.int2 \
	libs.timestamp.int2 \
	libs.trace_params.int2 \
	mdbcomp.feedback.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2 \
	mode_robdd.tfeirn.int2 \
	parse_tree.prog_foreign.int2 \
	parse_tree.prog_item.int2 \
	transform_hlds.term_constr_data.int2 \
	transform_hlds.term_constr_errors.int2 \
	transform_hlds.term_constr_main.int2 \
	transform_hlds.term_errors.int2 \
	transform_hlds.term_norm.int2 \
	transform_hlds.term_util.int2

ifeq ($(TARGET_ASM),yes)
hlds.pred_table.mh hlds.pred_table.mih : hlds.pred_table.s
else
hlds.pred_table.mh hlds.pred_table.mih : hlds.pred_table.c
endif

ifeq ($(TARGET_ASM),yes)
hlds.pred_table.module_dep : hlds.pred_table.s
else
 ifeq ($(findstring il,$(GRADE)),il)
hlds.pred_table.module_dep : hlds.pred_table.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
hlds.pred_table.module_dep : jmercury/hlds__pred_table.java
  else
hlds.pred_table.module_dep : hlds.pred_table.c
  endif
 endif
endif

hlds.pred_table.date hlds.pred_table.date0 \
	hlds.date : pred_table.m \
	hlds.int0 \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
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
	string.int3 \
	svmap.int3 \
	svmulti_map.int3 \
	transform_hlds.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_pred.int3 \
	libs.compiler_util.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.error_util.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_out.int3 \
	parse_tree.prog_type.int3 \
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
	io.int3 \
	mode_robdd.int3 \
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
	hlds.special_pred.int3 \
	libs.globals.int3 \
	libs.lp_rational.int3 \
	libs.options.int3 \
	libs.polyhedron.int3 \
	libs.rat.int3 \
	libs.timestamp.int3 \
	libs.trace_params.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_item.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3

hlds.pred_table.date0 \
	hlds.date0 : pred_table.m \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
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
	string.int3 \
	svmap.int3 \
	svmulti_map.int3 \
	transform_hlds.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_pred.int3 \
	libs.compiler_util.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.error_util.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_out.int3 \
	parse_tree.prog_type.int3 \
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
	io.int3 \
	mode_robdd.int3 \
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
	hlds.special_pred.int3 \
	libs.globals.int3 \
	libs.lp_rational.int3 \
	libs.options.int3 \
	libs.polyhedron.int3 \
	libs.rat.int3 \
	libs.timestamp.int3 \
	libs.trace_params.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_item.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3



hlds.pred_table.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	string.mh \
	io.mh \
	io.mh



hlds.pred_table.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	string.mh \
	io.mh \
	io.mh


hlds.pred_table.int0 : hlds.pred_table.date0
	@:
hlds.pred_table.int : hlds.pred_table.date
	@:
hlds.pred_table.int2 : hlds.pred_table.date
	@:
hlds.pred_table.int3 : hlds.pred_table.date3
	@:
hlds.pred_table.opt : hlds.pred_table.optdate
	@:
hlds.pred_table.trans_opt : hlds.pred_table.trans_opt_date
	@:

hlds.pred_table.date0 : pred_table.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) hlds.pred_table
hlds.pred_table.date : pred_table.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) hlds.pred_table
hlds.pred_table.date3 : pred_table.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) hlds.pred_table
hlds.pred_table.optdate : pred_table.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) hlds.pred_table
hlds.pred_table.trans_opt_date : pred_table.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) hlds.pred_table
hlds.pred_table.c_date : pred_table.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) hlds.pred_table $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
hlds.pred_table.s_date : pred_table.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only hlds.pred_table $(ERR_REDIRECT)
hlds.pred_table.pic_s_date : pred_table.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" hlds.pred_table $(ERR_REDIRECT)
endif # TARGET_ASM
hlds.pred_table.il_date : pred_table.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only hlds.pred_table $(ERR_REDIRECT)
hlds.pred_table.java_date : pred_table.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only hlds.pred_table $(ERR_REDIRECT)
