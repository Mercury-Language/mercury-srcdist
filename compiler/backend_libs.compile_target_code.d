

backend_libs.compile_target_code.optdate backend_libs.compile_target_code.trans_opt_date compile_target_code.err backend_libs.compile_target_code.c_date backend_libs.compile_target_code.s_date backend_libs.compile_target_code.pic_s_date backend_libs.compile_target_code.il_date backend_libs.compile_target_code.java_date : compile_target_code.m \
	backend_libs.int0 \
	bool.int \
	builtin.int \
	dir.int \
	getopt_io.int \
	hlds.int \
	io.int \
	libs.int \
	list.int \
	maybe.int \
	mdbcomp.int \
	parse_tree.int \
	private_builtin.int \
	string.int \
	hlds.passes_aux.int \
	libs.compiler_util.int \
	libs.file_util.int \
	libs.globals.int \
	libs.handle_options.int \
	libs.options.int \
	libs.timestamp.int \
	libs.trace_params.int \
	mdbcomp.prim_data.int \
	parse_tree.error_util.int \
	parse_tree.file_names.int \
	parse_tree.module_cmds.int \
	parse_tree.module_imports.int \
	parse_tree.prog_data.int \
	parse_tree.prog_foreign.int \
	parse_tree.prog_out.int \
	parse_tree.write_deps_file.int \
	analysis.int2 \
	array.int2 \
	assoc_list.int2 \
	bag.int2 \
	bitmap.int2 \
	char.int2 \
	check_hlds.int2 \
	construct.int2 \
	cord.int2 \
	deconstruct.int2 \
	digraph.int2 \
	enum.int2 \
	int.int2 \
	map.int2 \
	mode_robdd.int2 \
	multi_map.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	random.int2 \
	recompilation.int2 \
	robdd.int2 \
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
	mdbcomp.feedback.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2 \
	mode_robdd.tfeirn.int2 \
	parse_tree.deps_map.int2 \
	parse_tree.module_qual.int2 \
	parse_tree.prog_io.int2 \
	parse_tree.prog_io_util.int2 \
	parse_tree.prog_item.int2 \
	transform_hlds.term_constr_data.int2 \
	transform_hlds.term_constr_errors.int2 \
	transform_hlds.term_constr_main.int2 \
	transform_hlds.term_errors.int2 \
	transform_hlds.term_norm.int2 \
	transform_hlds.term_util.int2

ifeq ($(TARGET_ASM),yes)
backend_libs.compile_target_code.mh backend_libs.compile_target_code.mih : backend_libs.compile_target_code.s
else
backend_libs.compile_target_code.mh backend_libs.compile_target_code.mih : backend_libs.compile_target_code.c
endif

ifeq ($(TARGET_ASM),yes)
backend_libs.compile_target_code.module_dep : backend_libs.compile_target_code.s
else
 ifeq ($(findstring il,$(GRADE)),il)
backend_libs.compile_target_code.module_dep : backend_libs.compile_target_code.il
  ifeq ($(findstring java,$(GRADE)),java)
backend_libs.compile_target_code.module_dep : backend_libs.compile_target_code.java
  else
backend_libs.compile_target_code.module_dep : backend_libs.compile_target_code.c
  endif
 endif
endif

backend_libs.compile_target_code.date backend_libs.compile_target_code.date0 \
	backend_libs.date : compile_target_code.m \
	backend_libs.int0 \
	bool.int3 \
	builtin.int3 \
	dir.int3 \
	getopt_io.int3 \
	hlds.int3 \
	io.int3 \
	libs.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	string.int3 \
	hlds.passes_aux.int3 \
	libs.compiler_util.int3 \
	libs.file_util.int3 \
	libs.globals.int3 \
	libs.handle_options.int3 \
	libs.options.int3 \
	libs.timestamp.int3 \
	libs.trace_params.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.error_util.int3 \
	parse_tree.file_names.int3 \
	parse_tree.module_cmds.int3 \
	parse_tree.module_imports.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_out.int3 \
	parse_tree.write_deps_file.int3 \
	analysis.int3 \
	array.int3 \
	assoc_list.int3 \
	bag.int3 \
	bitmap.int3 \
	char.int3 \
	check_hlds.int3 \
	construct.int3 \
	cord.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	int.int3 \
	map.int3 \
	mode_robdd.int3 \
	multi_map.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	recompilation.int3 \
	robdd.int3 \
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
	mdbcomp.feedback.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.deps_map.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_io.int3 \
	parse_tree.prog_io_util.int3 \
	parse_tree.prog_item.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3

backend_libs.compile_target_code.date0 \
	backend_libs.date0 : compile_target_code.m \
	bool.int3 \
	builtin.int3 \
	dir.int3 \
	getopt_io.int3 \
	hlds.int3 \
	io.int3 \
	libs.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	string.int3 \
	hlds.passes_aux.int3 \
	libs.compiler_util.int3 \
	libs.file_util.int3 \
	libs.globals.int3 \
	libs.handle_options.int3 \
	libs.options.int3 \
	libs.timestamp.int3 \
	libs.trace_params.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.error_util.int3 \
	parse_tree.file_names.int3 \
	parse_tree.module_cmds.int3 \
	parse_tree.module_imports.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_out.int3 \
	parse_tree.write_deps_file.int3 \
	analysis.int3 \
	array.int3 \
	assoc_list.int3 \
	bag.int3 \
	bitmap.int3 \
	char.int3 \
	check_hlds.int3 \
	construct.int3 \
	cord.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	int.int3 \
	map.int3 \
	mode_robdd.int3 \
	multi_map.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	recompilation.int3 \
	robdd.int3 \
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
	mdbcomp.feedback.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.deps_map.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_io.int3 \
	parse_tree.prog_io_util.int3 \
	parse_tree.prog_item.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3



backend_libs.compile_target_code.$O :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	dir.mh \
	dir.mh \
	string.mh \
	io.mh \
	io.mh



backend_libs.compile_target_code.pic_o :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	dir.mh \
	dir.mh \
	string.mh \
	io.mh \
	io.mh


backend_libs.compile_target_code.int0 : backend_libs.compile_target_code.date0
	@:
backend_libs.compile_target_code.int : backend_libs.compile_target_code.date
	@:
backend_libs.compile_target_code.int2 : backend_libs.compile_target_code.date
	@:
backend_libs.compile_target_code.int3 : backend_libs.compile_target_code.date3
	@:
backend_libs.compile_target_code.opt : backend_libs.compile_target_code.optdate
	@:
backend_libs.compile_target_code.trans_opt : backend_libs.compile_target_code.trans_opt_date
	@:

backend_libs.compile_target_code.date0 : compile_target_code.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) backend_libs.compile_target_code
backend_libs.compile_target_code.date : compile_target_code.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) backend_libs.compile_target_code
backend_libs.compile_target_code.date3 : compile_target_code.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) backend_libs.compile_target_code
backend_libs.compile_target_code.optdate : compile_target_code.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) backend_libs.compile_target_code
backend_libs.compile_target_code.trans_opt_date : compile_target_code.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) backend_libs.compile_target_code
backend_libs.compile_target_code.c_date : compile_target_code.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) backend_libs.compile_target_code $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
backend_libs.compile_target_code.s_date : compile_target_code.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only backend_libs.compile_target_code $(ERR_REDIRECT)
backend_libs.compile_target_code.pic_s_date : compile_target_code.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" backend_libs.compile_target_code $(ERR_REDIRECT)
endif # TARGET_ASM
backend_libs.compile_target_code.il_date : compile_target_code.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only backend_libs.compile_target_code $(ERR_REDIRECT)
backend_libs.compile_target_code.java_date : compile_target_code.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only backend_libs.compile_target_code $(ERR_REDIRECT)
