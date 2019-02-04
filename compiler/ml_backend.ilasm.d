

ml_backend.ilasm.optdate ml_backend.ilasm.trans_opt_date ilasm.err ml_backend.ilasm.c_date ml_backend.ilasm.s_date ml_backend.ilasm.pic_s_date ml_backend.ilasm.il_date ml_backend.ilasm.java_date : ilasm.m \
	ml_backend.int0 \
	backend_libs.int \
	bool.int \
	builtin.int \
	char.int \
	check_hlds.int \
	getopt_io.int \
	hlds.int \
	int.int \
	integer.int \
	io.int \
	libs.int \
	list.int \
	maybe.int \
	mdbcomp.int \
	pair.int \
	parse_tree.int \
	pprint.int \
	private_builtin.int \
	string.int \
	term.int \
	term_io.int \
	varset.int \
	backend_libs.c_util.int \
	libs.compiler_util.int \
	libs.globals.int \
	libs.options.int \
	ml_backend.ilds.int \
	analysis.int2 \
	array.int2 \
	assoc_list.int2 \
	bag.int2 \
	bitmap.int2 \
	construct.int2 \
	cord.int2 \
	deconstruct.int2 \
	digraph.int2 \
	enum.int2 \
	map.int2 \
	mode_robdd.int2 \
	multi_map.int2 \
	ops.int2 \
	pretty_printer.int2 \
	random.int2 \
	recompilation.int2 \
	robdd.int2 \
	set.int2 \
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
	backend_libs.builtin_ops.int2 \
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
	mdbcomp.prim_data.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2 \
	mode_robdd.tfeirn.int2 \
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
ml_backend.ilasm.mh ml_backend.ilasm.mih : ml_backend.ilasm.s
else
ml_backend.ilasm.mh ml_backend.ilasm.mih : ml_backend.ilasm.c
endif

ifeq ($(TARGET_ASM),yes)
ml_backend.ilasm.module_dep : ml_backend.ilasm.s
else
 ifeq ($(findstring il,$(GRADE)),il)
ml_backend.ilasm.module_dep : ml_backend.ilasm.il
  ifeq ($(findstring java,$(GRADE)),java)
ml_backend.ilasm.module_dep : ml_backend.ilasm.java
  else
ml_backend.ilasm.module_dep : ml_backend.ilasm.c
  endif
 endif
endif

ml_backend.ilasm.date ml_backend.ilasm.date0 \
	ml_backend.date : ilasm.m \
	ml_backend.int0 \
	backend_libs.int3 \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	check_hlds.int3 \
	getopt_io.int3 \
	hlds.int3 \
	int.int3 \
	integer.int3 \
	io.int3 \
	libs.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	pair.int3 \
	parse_tree.int3 \
	pprint.int3 \
	private_builtin.int3 \
	string.int3 \
	term.int3 \
	term_io.int3 \
	varset.int3 \
	backend_libs.c_util.int3 \
	libs.compiler_util.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	ml_backend.ilds.int3 \
	analysis.int3 \
	array.int3 \
	assoc_list.int3 \
	bag.int3 \
	bitmap.int3 \
	construct.int3 \
	cord.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	map.int3 \
	mode_robdd.int3 \
	multi_map.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	recompilation.int3 \
	robdd.int3 \
	set.int3 \
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
	backend_libs.builtin_ops.int3 \
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
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
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

ml_backend.ilasm.date0 \
	ml_backend.date0 : ilasm.m \
	backend_libs.int3 \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	check_hlds.int3 \
	getopt_io.int3 \
	hlds.int3 \
	int.int3 \
	integer.int3 \
	io.int3 \
	libs.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	pair.int3 \
	parse_tree.int3 \
	pprint.int3 \
	private_builtin.int3 \
	string.int3 \
	term.int3 \
	term_io.int3 \
	varset.int3 \
	backend_libs.c_util.int3 \
	libs.compiler_util.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	ml_backend.ilds.int3 \
	analysis.int3 \
	array.int3 \
	assoc_list.int3 \
	bag.int3 \
	bitmap.int3 \
	construct.int3 \
	cord.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	map.int3 \
	mode_robdd.int3 \
	multi_map.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	recompilation.int3 \
	robdd.int3 \
	set.int3 \
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
	backend_libs.builtin_ops.int3 \
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
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
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



ml_backend.ilasm.$O :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	table_builtin.mh \
	table_builtin.mh \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



ml_backend.ilasm.pic_o :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	table_builtin.mh \
	table_builtin.mh \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


ml_backend.ilasm.int0 : ml_backend.ilasm.date0
	@:
ml_backend.ilasm.int : ml_backend.ilasm.date
	@:
ml_backend.ilasm.int2 : ml_backend.ilasm.date
	@:
ml_backend.ilasm.int3 : ml_backend.ilasm.date3
	@:
ml_backend.ilasm.opt : ml_backend.ilasm.optdate
	@:
ml_backend.ilasm.trans_opt : ml_backend.ilasm.trans_opt_date
	@:

ml_backend.ilasm.date0 : ilasm.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) ml_backend.ilasm
ml_backend.ilasm.date : ilasm.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) ml_backend.ilasm
ml_backend.ilasm.date3 : ilasm.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) ml_backend.ilasm
ml_backend.ilasm.optdate : ilasm.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) ml_backend.ilasm
ml_backend.ilasm.trans_opt_date : ilasm.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) ml_backend.ilasm
ml_backend.ilasm.c_date : ilasm.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) ml_backend.ilasm $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
ml_backend.ilasm.s_date : ilasm.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only ml_backend.ilasm $(ERR_REDIRECT)
ml_backend.ilasm.pic_s_date : ilasm.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" ml_backend.ilasm $(ERR_REDIRECT)
endif # TARGET_ASM
ml_backend.ilasm.il_date : ilasm.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only ml_backend.ilasm $(ERR_REDIRECT)
ml_backend.ilasm.java_date : ilasm.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only ml_backend.ilasm $(ERR_REDIRECT)
