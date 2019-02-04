

backend_libs.switch_util.optdate backend_libs.switch_util.trans_opt_date switch_util.err backend_libs.switch_util.c_date backend_libs.switch_util.s_date backend_libs.switch_util.pic_s_date backend_libs.switch_util.il_date backend_libs.switch_util.java_date : switch_util.m \
	backend_libs.int0 \
	assoc_list.int \
	builtin.int \
	char.int \
	hlds.int \
	int.int \
	libs.int \
	list.int \
	map.int \
	pair.int \
	parse_tree.int \
	private_builtin.int \
	string.int \
	svmap.int \
	backend_libs.rtti.int \
	hlds.hlds_data.int \
	hlds.hlds_goal.int \
	hlds.hlds_module.int \
	libs.compiler_util.int \
	parse_tree.prog_data.int \
	parse_tree.prog_type.int \
	analysis.int2 \
	array.int2 \
	bag.int2 \
	bitmap.int2 \
	bool.int2 \
	check_hlds.int2 \
	construct.int2 \
	cord.int2 \
	deconstruct.int2 \
	digraph.int2 \
	enum.int2 \
	getopt_io.int2 \
	io.int2 \
	maybe.int2 \
	mdbcomp.int2 \
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
	hlds.hlds_llds.int2 \
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
backend_libs.switch_util.mh backend_libs.switch_util.mih : backend_libs.switch_util.s
else
backend_libs.switch_util.mh backend_libs.switch_util.mih : backend_libs.switch_util.c
endif

ifeq ($(TARGET_ASM),yes)
backend_libs.switch_util.module_dep : backend_libs.switch_util.s
else
 ifeq ($(findstring il,$(GRADE)),il)
backend_libs.switch_util.module_dep : backend_libs.switch_util.il
  ifeq ($(findstring java,$(GRADE)),java)
backend_libs.switch_util.module_dep : backend_libs.switch_util.java
  else
backend_libs.switch_util.module_dep : backend_libs.switch_util.c
  endif
 endif
endif

backend_libs.switch_util.date backend_libs.switch_util.date0 \
	backend_libs.date : switch_util.m \
	backend_libs.int0 \
	assoc_list.int3 \
	builtin.int3 \
	char.int3 \
	hlds.int3 \
	int.int3 \
	libs.int3 \
	list.int3 \
	map.int3 \
	pair.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	string.int3 \
	svmap.int3 \
	backend_libs.rtti.int3 \
	hlds.hlds_data.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_module.int3 \
	libs.compiler_util.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_type.int3 \
	analysis.int3 \
	array.int3 \
	bag.int3 \
	bitmap.int3 \
	bool.int3 \
	check_hlds.int3 \
	construct.int3 \
	cord.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
	io.int3 \
	maybe.int3 \
	mdbcomp.int3 \
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
	hlds.hlds_llds.int3 \
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

backend_libs.switch_util.date0 \
	backend_libs.date0 : switch_util.m \
	assoc_list.int3 \
	builtin.int3 \
	char.int3 \
	hlds.int3 \
	int.int3 \
	libs.int3 \
	list.int3 \
	map.int3 \
	pair.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	string.int3 \
	svmap.int3 \
	backend_libs.rtti.int3 \
	hlds.hlds_data.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_module.int3 \
	libs.compiler_util.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_type.int3 \
	analysis.int3 \
	array.int3 \
	bag.int3 \
	bitmap.int3 \
	bool.int3 \
	check_hlds.int3 \
	construct.int3 \
	cord.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
	io.int3 \
	maybe.int3 \
	mdbcomp.int3 \
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
	hlds.hlds_llds.int3 \
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



backend_libs.switch_util.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	table_builtin.mh \
	table_builtin.mh \
	string.mh \
	io.mh \
	io.mh



backend_libs.switch_util.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	table_builtin.mh \
	table_builtin.mh \
	string.mh \
	io.mh \
	io.mh


backend_libs.switch_util.int0 : backend_libs.switch_util.date0
	@:
backend_libs.switch_util.int : backend_libs.switch_util.date
	@:
backend_libs.switch_util.int2 : backend_libs.switch_util.date
	@:
backend_libs.switch_util.int3 : backend_libs.switch_util.date3
	@:
backend_libs.switch_util.opt : backend_libs.switch_util.optdate
	@:
backend_libs.switch_util.trans_opt : backend_libs.switch_util.trans_opt_date
	@:

backend_libs.switch_util.date0 : switch_util.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) backend_libs.switch_util
backend_libs.switch_util.date : switch_util.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) backend_libs.switch_util
backend_libs.switch_util.date3 : switch_util.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) backend_libs.switch_util
backend_libs.switch_util.optdate : switch_util.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) backend_libs.switch_util
backend_libs.switch_util.trans_opt_date : switch_util.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) backend_libs.switch_util
backend_libs.switch_util.c_date : switch_util.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) backend_libs.switch_util $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
backend_libs.switch_util.s_date : switch_util.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only backend_libs.switch_util $(ERR_REDIRECT)
backend_libs.switch_util.pic_s_date : switch_util.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" backend_libs.switch_util $(ERR_REDIRECT)
endif # TARGET_ASM
backend_libs.switch_util.il_date : switch_util.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only backend_libs.switch_util $(ERR_REDIRECT)
backend_libs.switch_util.java_date : switch_util.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only backend_libs.switch_util $(ERR_REDIRECT)
