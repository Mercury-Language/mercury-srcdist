

ml_backend.mlds_to_ilasm.optdate ml_backend.mlds_to_ilasm.trans_opt_date mlds_to_ilasm.err ml_backend.mlds_to_ilasm.c_date ml_backend.mlds_to_ilasm.s_date ml_backend.mlds_to_ilasm.pic_s_date ml_backend.mlds_to_ilasm.il_date ml_backend.mlds_to_ilasm.java_date : mlds_to_ilasm.m \
	ml_backend.int0 \
	backend_libs.int \
	bool.int \
	builtin.int \
	check_hlds.int \
	hlds.int \
	io.int \
	libs.int \
	list.int \
	maybe.int \
	mdbcomp.int \
	parse_tree.int \
	private_builtin.int \
	set.int \
	string.int \
	hlds.passes_aux.int \
	libs.compiler_util.int \
	libs.globals.int \
	libs.options.int \
	ml_backend.il_peephole.int \
	ml_backend.ilasm.int \
	ml_backend.mlds.int \
	ml_backend.mlds_to_il.int \
	ml_backend.mlds_to_managed.int \
	parse_tree.modules.int \
	parse_tree.prog_foreign.int \
	analysis.int2 \
	assoc_list.int2 \
	bag.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	cord.int2 \
	deconstruct.int2 \
	digraph.int2 \
	enum.int2 \
	getopt_io.int2 \
	integer.int2 \
	map.int2 \
	mode_robdd.int2 \
	multi_map.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	recompilation.int2 \
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
	backend_libs.builtin_ops.int2 \
	backend_libs.foreign.int2 \
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
	ml_backend.ilds.int2 \
	mode_robdd.tfeirn.int2 \
	parse_tree.error_util.int2 \
	parse_tree.module_qual.int2 \
	parse_tree.prog_data.int2 \
	parse_tree.prog_io.int2 \
	parse_tree.prog_io_util.int2 \
	parse_tree.prog_item.int2 \
	parse_tree.prog_type.int2 \
	transform_hlds.term_constr_data.int2 \
	transform_hlds.term_constr_errors.int2 \
	transform_hlds.term_constr_main.int2 \
	transform_hlds.term_errors.int2 \
	transform_hlds.term_norm.int2 \
	transform_hlds.term_util.int2

ifeq ($(TARGET_ASM),yes)
ml_backend.mlds_to_ilasm.mh ml_backend.mlds_to_ilasm.mih : ml_backend.mlds_to_ilasm.s
else
ml_backend.mlds_to_ilasm.mh ml_backend.mlds_to_ilasm.mih : ml_backend.mlds_to_ilasm.c
endif

ifeq ($(TARGET_ASM),yes)
ml_backend.mlds_to_ilasm.module_dep : ml_backend.mlds_to_ilasm.s
else
 ifeq ($(findstring il,$(GRADE)),il)
ml_backend.mlds_to_ilasm.module_dep : ml_backend.mlds_to_ilasm.il
  ifeq ($(findstring java,$(GRADE)),java)
ml_backend.mlds_to_ilasm.module_dep : ml_backend.mlds_to_ilasm.java
  else
ml_backend.mlds_to_ilasm.module_dep : ml_backend.mlds_to_ilasm.c
  endif
 endif
endif

ml_backend.mlds_to_ilasm.date ml_backend.mlds_to_ilasm.date0 \
	ml_backend.date : mlds_to_ilasm.m \
	ml_backend.int0 \
	backend_libs.int3 \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
	hlds.int3 \
	io.int3 \
	libs.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	set.int3 \
	string.int3 \
	hlds.passes_aux.int3 \
	libs.compiler_util.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	ml_backend.il_peephole.int3 \
	ml_backend.ilasm.int3 \
	ml_backend.mlds.int3 \
	ml_backend.mlds_to_il.int3 \
	ml_backend.mlds_to_managed.int3 \
	parse_tree.modules.int3 \
	parse_tree.prog_foreign.int3 \
	analysis.int3 \
	assoc_list.int3 \
	bag.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	cord.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
	integer.int3 \
	map.int3 \
	mode_robdd.int3 \
	multi_map.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	recompilation.int3 \
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
	backend_libs.builtin_ops.int3 \
	backend_libs.foreign.int3 \
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
	ml_backend.ilds.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.error_util.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_io.int3 \
	parse_tree.prog_io_util.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.prog_type.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3

ml_backend.mlds_to_ilasm.date0 \
	ml_backend.date0 : mlds_to_ilasm.m \
	backend_libs.int3 \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
	hlds.int3 \
	io.int3 \
	libs.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	set.int3 \
	string.int3 \
	hlds.passes_aux.int3 \
	libs.compiler_util.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	ml_backend.il_peephole.int3 \
	ml_backend.ilasm.int3 \
	ml_backend.mlds.int3 \
	ml_backend.mlds_to_il.int3 \
	ml_backend.mlds_to_managed.int3 \
	parse_tree.modules.int3 \
	parse_tree.prog_foreign.int3 \
	analysis.int3 \
	assoc_list.int3 \
	bag.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	cord.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
	integer.int3 \
	map.int3 \
	mode_robdd.int3 \
	multi_map.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	recompilation.int3 \
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
	backend_libs.builtin_ops.int3 \
	backend_libs.foreign.int3 \
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
	ml_backend.ilds.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.error_util.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_io.int3 \
	parse_tree.prog_io_util.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.prog_type.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3



ml_backend.mlds_to_ilasm.$O :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	table_builtin.mh \
	table_builtin.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



ml_backend.mlds_to_ilasm.pic_o :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	table_builtin.mh \
	table_builtin.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


ml_backend.mlds_to_ilasm.int0 : ml_backend.mlds_to_ilasm.date0
	@:
ml_backend.mlds_to_ilasm.int : ml_backend.mlds_to_ilasm.date
	@:
ml_backend.mlds_to_ilasm.int2 : ml_backend.mlds_to_ilasm.date
	@:
ml_backend.mlds_to_ilasm.int3 : ml_backend.mlds_to_ilasm.date3
	@:
ml_backend.mlds_to_ilasm.opt : ml_backend.mlds_to_ilasm.optdate
	@:
ml_backend.mlds_to_ilasm.trans_opt : ml_backend.mlds_to_ilasm.trans_opt_date
	@:

ml_backend.mlds_to_ilasm.date0 : mlds_to_ilasm.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) ml_backend.mlds_to_ilasm
ml_backend.mlds_to_ilasm.date : mlds_to_ilasm.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) ml_backend.mlds_to_ilasm
ml_backend.mlds_to_ilasm.date3 : mlds_to_ilasm.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) ml_backend.mlds_to_ilasm
ml_backend.mlds_to_ilasm.optdate : mlds_to_ilasm.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) ml_backend.mlds_to_ilasm
ml_backend.mlds_to_ilasm.trans_opt_date : mlds_to_ilasm.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) ml_backend.mlds_to_ilasm
ml_backend.mlds_to_ilasm.c_date : mlds_to_ilasm.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) ml_backend.mlds_to_ilasm $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
ml_backend.mlds_to_ilasm.s_date : mlds_to_ilasm.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only ml_backend.mlds_to_ilasm $(ERR_REDIRECT)
ml_backend.mlds_to_ilasm.pic_s_date : mlds_to_ilasm.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" ml_backend.mlds_to_ilasm $(ERR_REDIRECT)
endif # TARGET_ASM
ml_backend.mlds_to_ilasm.il_date : mlds_to_ilasm.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only ml_backend.mlds_to_ilasm $(ERR_REDIRECT)
ml_backend.mlds_to_ilasm.java_date : mlds_to_ilasm.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only ml_backend.mlds_to_ilasm $(ERR_REDIRECT)
