

ll_backend.llds_to_x86_64.optdate ll_backend.llds_to_x86_64.trans_opt_date llds_to_x86_64.err ll_backend.llds_to_x86_64.c_date ll_backend.llds_to_x86_64.s_date ll_backend.llds_to_x86_64.pic_s_date ll_backend.llds_to_x86_64.il_date ll_backend.llds_to_x86_64.java_date : llds_to_x86_64.m \
	ll_backend.int0 \
	backend_libs.int \
	bool.int \
	builtin.int \
	check_hlds.int \
	hlds.int \
	int.int \
	io.int \
	libs.int \
	list.int \
	maybe.int \
	mdbcomp.int \
	parse_tree.int \
	private_builtin.int \
	set.int \
	string.int \
	backend_libs.builtin_ops.int \
	backend_libs.name_mangle.int \
	hlds.hlds_module.int \
	libs.compiler_util.int \
	ll_backend.llds.int \
	ll_backend.llds_out.int \
	ll_backend.x86_64_instrs.int \
	ll_backend.x86_64_out.int \
	ll_backend.x86_64_regs.int \
	mdbcomp.prim_data.int \
	analysis.int2 \
	array.int2 \
	assoc_list.int2 \
	bag.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	counter.int2 \
	deconstruct.int2 \
	enum.int2 \
	getopt_io.int2 \
	map.int2 \
	mode_robdd.int2 \
	multi_map.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	random.int2 \
	recompilation.int2 \
	relation.int2 \
	robdd.int2 \
	set_ordlist.int2 \
	set_tree234.int2 \
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
	backend_libs.rtti.int2 \
	check_hlds.delay_info.int2 \
	check_hlds.mode_constraint_robdd.int2 \
	check_hlds.mode_errors.int2 \
	check_hlds.mode_info.int2 \
	check_hlds.unify_proc.int2 \
	hlds.code_model.int2 \
	hlds.hlds_args.int2 \
	hlds.hlds_clauses.int2 \
	hlds.hlds_data.int2 \
	hlds.hlds_goal.int2 \
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
	libs.tree.int2 \
	ll_backend.layout.int2 \
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
ll_backend.llds_to_x86_64.mh ll_backend.llds_to_x86_64.mih : ll_backend.llds_to_x86_64.s
else
ll_backend.llds_to_x86_64.mh ll_backend.llds_to_x86_64.mih : ll_backend.llds_to_x86_64.c
endif

ifeq ($(TARGET_ASM),yes)
ll_backend.llds_to_x86_64.module_dep : ll_backend.llds_to_x86_64.s
else
 ifeq ($(findstring il,$(GRADE)),il)
ll_backend.llds_to_x86_64.module_dep : ll_backend.llds_to_x86_64.il
  ifeq ($(findstring java,$(GRADE)),java)
ll_backend.llds_to_x86_64.module_dep : ll_backend.llds_to_x86_64.java
  else
ll_backend.llds_to_x86_64.module_dep : ll_backend.llds_to_x86_64.c
  endif
 endif
endif

ll_backend.llds_to_x86_64.date ll_backend.llds_to_x86_64.date0 \
	ll_backend.date : llds_to_x86_64.m \
	ll_backend.int0 \
	backend_libs.int3 \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
	hlds.int3 \
	int.int3 \
	io.int3 \
	libs.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	set.int3 \
	string.int3 \
	backend_libs.builtin_ops.int3 \
	backend_libs.name_mangle.int3 \
	hlds.hlds_module.int3 \
	libs.compiler_util.int3 \
	ll_backend.llds.int3 \
	ll_backend.llds_out.int3 \
	ll_backend.x86_64_instrs.int3 \
	ll_backend.x86_64_out.int3 \
	ll_backend.x86_64_regs.int3 \
	mdbcomp.prim_data.int3 \
	analysis.int3 \
	array.int3 \
	assoc_list.int3 \
	bag.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	counter.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt_io.int3 \
	map.int3 \
	mode_robdd.int3 \
	multi_map.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	recompilation.int3 \
	relation.int3 \
	robdd.int3 \
	set_ordlist.int3 \
	set_tree234.int3 \
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
	backend_libs.rtti.int3 \
	check_hlds.delay_info.int3 \
	check_hlds.mode_constraint_robdd.int3 \
	check_hlds.mode_errors.int3 \
	check_hlds.mode_info.int3 \
	check_hlds.unify_proc.int3 \
	hlds.code_model.int3 \
	hlds.hlds_args.int3 \
	hlds.hlds_clauses.int3 \
	hlds.hlds_data.int3 \
	hlds.hlds_goal.int3 \
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
	libs.tree.int3 \
	ll_backend.layout.int3 \
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

ll_backend.llds_to_x86_64.date0 \
	ll_backend.date0 : llds_to_x86_64.m \
	backend_libs.int3 \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
	hlds.int3 \
	int.int3 \
	io.int3 \
	libs.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	set.int3 \
	string.int3 \
	backend_libs.builtin_ops.int3 \
	backend_libs.name_mangle.int3 \
	hlds.hlds_module.int3 \
	libs.compiler_util.int3 \
	ll_backend.llds.int3 \
	ll_backend.llds_out.int3 \
	ll_backend.x86_64_instrs.int3 \
	ll_backend.x86_64_out.int3 \
	ll_backend.x86_64_regs.int3 \
	mdbcomp.prim_data.int3 \
	analysis.int3 \
	array.int3 \
	assoc_list.int3 \
	bag.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	counter.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt_io.int3 \
	map.int3 \
	mode_robdd.int3 \
	multi_map.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	recompilation.int3 \
	relation.int3 \
	robdd.int3 \
	set_ordlist.int3 \
	set_tree234.int3 \
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
	backend_libs.rtti.int3 \
	check_hlds.delay_info.int3 \
	check_hlds.mode_constraint_robdd.int3 \
	check_hlds.mode_errors.int3 \
	check_hlds.mode_info.int3 \
	check_hlds.unify_proc.int3 \
	hlds.code_model.int3 \
	hlds.hlds_args.int3 \
	hlds.hlds_clauses.int3 \
	hlds.hlds_data.int3 \
	hlds.hlds_goal.int3 \
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
	libs.tree.int3 \
	ll_backend.layout.int3 \
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



ll_backend.llds_to_x86_64.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	array.mh \
	array.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	table_builtin.mh \
	table_builtin.mh \
	string.mh \
	io.mh \
	io.mh



ll_backend.llds_to_x86_64.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	array.mh \
	array.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	table_builtin.mh \
	table_builtin.mh \
	string.mh \
	io.mh \
	io.mh


ll_backend.llds_to_x86_64.int0 : ll_backend.llds_to_x86_64.date0
	@:
ll_backend.llds_to_x86_64.int : ll_backend.llds_to_x86_64.date
	@:
ll_backend.llds_to_x86_64.int2 : ll_backend.llds_to_x86_64.date
	@:
ll_backend.llds_to_x86_64.int3 : ll_backend.llds_to_x86_64.date3
	@:
ll_backend.llds_to_x86_64.opt : ll_backend.llds_to_x86_64.optdate
	@:
ll_backend.llds_to_x86_64.trans_opt : ll_backend.llds_to_x86_64.trans_opt_date
	@:

ll_backend.llds_to_x86_64.date0 : llds_to_x86_64.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) ll_backend.llds_to_x86_64
ll_backend.llds_to_x86_64.date : llds_to_x86_64.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) ll_backend.llds_to_x86_64
ll_backend.llds_to_x86_64.date3 : llds_to_x86_64.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) ll_backend.llds_to_x86_64
ll_backend.llds_to_x86_64.optdate : llds_to_x86_64.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) ll_backend.llds_to_x86_64
ll_backend.llds_to_x86_64.trans_opt_date : llds_to_x86_64.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) ll_backend.llds_to_x86_64
ll_backend.llds_to_x86_64.c_date : llds_to_x86_64.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) ll_backend.llds_to_x86_64 $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
ll_backend.llds_to_x86_64.s_date : llds_to_x86_64.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only ll_backend.llds_to_x86_64 $(ERR_REDIRECT)
ll_backend.llds_to_x86_64.pic_s_date : llds_to_x86_64.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" ll_backend.llds_to_x86_64 $(ERR_REDIRECT)
endif # TARGET_ASM
ll_backend.llds_to_x86_64.il_date : llds_to_x86_64.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only ll_backend.llds_to_x86_64 $(ERR_REDIRECT)
ll_backend.llds_to_x86_64.java_date : llds_to_x86_64.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only ll_backend.llds_to_x86_64 $(ERR_REDIRECT)
