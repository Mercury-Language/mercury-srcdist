

top_level.mercury_compile.optdate top_level.mercury_compile.trans_opt_date mercury_compile.err top_level.mercury_compile.c_date top_level.mercury_compile.s_date top_level.mercury_compile.pic_s_date top_level.mercury_compile.il_date top_level.mercury_compile.java_date : mercury_compile.m \
	top_level.int0 \
	analysis.int \
	assoc_list.int \
	backend_libs.int \
	bool.int \
	builtin.int \
	bytecode_backend.int \
	check_hlds.int \
	cord.int \
	erl_backend.int \
	gc.int \
	getopt_io.int \
	hlds.int \
	io.int \
	libs.int \
	list.int \
	ll_backend.int \
	make.int \
	map.int \
	maybe.int \
	ml_backend.int \
	mode_robdd.int \
	pair.int \
	parse_tree.int \
	private_builtin.int \
	recompilation.int \
	require.int \
	set.int \
	string.int \
	transform_hlds.int \
	unit.int \
	backend_libs.compile_target_code.int \
	backend_libs.export.int \
	check_hlds.xml_documentation.int \
	hlds.hlds_module.int \
	hlds.make_hlds.int \
	hlds.passes_aux.int \
	libs.compiler_util.int \
	libs.file_util.int \
	libs.globals.int \
	libs.handle_options.int \
	libs.options.int \
	libs.timestamp.int \
	ll_backend.llds_to_x86_64.int \
	ll_backend.llds_to_x86_64_out.int \
	make.options_file.int \
	make.util.int \
	mdbcomp.prim_data.int \
	ml_backend.maybe_mlds_to_gcc.int \
	parse_tree.equiv_type.int \
	parse_tree.error_util.int \
	parse_tree.file_names.int \
	parse_tree.mercury_to_mercury.int \
	parse_tree.module_cmds.int \
	parse_tree.module_imports.int \
	parse_tree.module_qual.int \
	parse_tree.modules.int \
	parse_tree.prog_data.int \
	parse_tree.prog_event.int \
	parse_tree.prog_foreign.int \
	parse_tree.prog_io.int \
	parse_tree.prog_item.int \
	parse_tree.read_modules.int \
	parse_tree.source_file_map.int \
	parse_tree.write_deps_file.int \
	recompilation.check.int \
	recompilation.usage.int \
	top_level.mercury_compile_erl_back_end.int \
	top_level.mercury_compile_front_end.int \
	top_level.mercury_compile_llds_back_end.int \
	top_level.mercury_compile_middle_passes.int \
	top_level.mercury_compile_mlds_back_end.int \
	transform_hlds.dependency_graph.int \
	transform_hlds.intermod.int \
	transform_hlds.trans_opt.int \
	array.int2 \
	bag.int2 \
	bimap.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	counter.int2 \
	deconstruct.int2 \
	digraph.int2 \
	enum.int2 \
	mdbcomp.int2 \
	multi_map.int2 \
	ops.int2 \
	pretty_printer.int2 \
	queue.int2 \
	random.int2 \
	robdd.int2 \
	rtti_implementation.int2 \
	set_ordlist.int2 \
	sparse_bitset.int2 \
	stack.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2 \
	varset.int2 \
	backend_libs.builtin_ops.int2 \
	backend_libs.foreign.int2 \
	backend_libs.rtti.int2 \
	check_hlds.delay_info.int2 \
	check_hlds.mode_constraint_robdd.int2 \
	check_hlds.mode_errors.int2 \
	check_hlds.mode_info.int2 \
	check_hlds.type_util.int2 \
	check_hlds.unify_proc.int2 \
	erl_backend.elds.int2 \
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
	libs.lp_rational.int2 \
	libs.polyhedron.int2 \
	libs.rat.int2 \
	libs.trace_params.int2 \
	ll_backend.global_data.int2 \
	ll_backend.layout.int2 \
	ll_backend.llds.int2 \
	ll_backend.x86_64_instrs.int2 \
	mdbcomp.feedback.int2 \
	mdbcomp.goal_path.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2 \
	ml_backend.ml_global_data.int2 \
	ml_backend.mlds.int2 \
	mode_robdd.tfeirn.int2 \
	parse_tree.deps_map.int2 \
	parse_tree.prog_io_util.int2 \
	parse_tree.prog_type.int2 \
	transform_hlds.term_constr_data.int2 \
	transform_hlds.term_constr_errors.int2 \
	transform_hlds.term_constr_main.int2 \
	transform_hlds.term_errors.int2 \
	transform_hlds.term_norm.int2 \
	transform_hlds.term_util.int2 \
	hlds.make_hlds.qual_info.int2 \
	mdbcomp.feedback.automatic_parallelism.int2

ifeq ($(TARGET_ASM),yes)
top_level.mercury_compile.mh top_level.mercury_compile.mih : top_level.mercury_compile.s
else
top_level.mercury_compile.mh top_level.mercury_compile.mih : top_level.mercury_compile.c
endif

ifeq ($(TARGET_ASM),yes)
top_level.mercury_compile.module_dep : top_level.mercury_compile.s
else
 ifeq ($(findstring il,$(GRADE)),il)
top_level.mercury_compile.module_dep : top_level.mercury_compile.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
top_level.mercury_compile.module_dep : jmercury/top_level__mercury_compile.java
  else
top_level.mercury_compile.module_dep : top_level.mercury_compile.c
  endif
 endif
endif

top_level.mercury_compile.date top_level.mercury_compile.date0 \
	top_level.date : mercury_compile.m \
	top_level.int0 \
	analysis.int3 \
	assoc_list.int3 \
	backend_libs.int3 \
	bool.int3 \
	builtin.int3 \
	bytecode_backend.int3 \
	check_hlds.int3 \
	cord.int3 \
	erl_backend.int3 \
	gc.int3 \
	getopt_io.int3 \
	hlds.int3 \
	io.int3 \
	libs.int3 \
	list.int3 \
	ll_backend.int3 \
	make.int3 \
	map.int3 \
	maybe.int3 \
	ml_backend.int3 \
	mode_robdd.int3 \
	pair.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	recompilation.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	transform_hlds.int3 \
	unit.int3 \
	backend_libs.compile_target_code.int3 \
	backend_libs.export.int3 \
	check_hlds.xml_documentation.int3 \
	hlds.hlds_module.int3 \
	hlds.make_hlds.int3 \
	hlds.passes_aux.int3 \
	libs.compiler_util.int3 \
	libs.file_util.int3 \
	libs.globals.int3 \
	libs.handle_options.int3 \
	libs.options.int3 \
	libs.timestamp.int3 \
	ll_backend.llds_to_x86_64.int3 \
	ll_backend.llds_to_x86_64_out.int3 \
	make.options_file.int3 \
	make.util.int3 \
	mdbcomp.prim_data.int3 \
	ml_backend.maybe_mlds_to_gcc.int3 \
	parse_tree.equiv_type.int3 \
	parse_tree.error_util.int3 \
	parse_tree.file_names.int3 \
	parse_tree.mercury_to_mercury.int3 \
	parse_tree.module_cmds.int3 \
	parse_tree.module_imports.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.modules.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_event.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_io.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.read_modules.int3 \
	parse_tree.source_file_map.int3 \
	parse_tree.write_deps_file.int3 \
	recompilation.check.int3 \
	recompilation.usage.int3 \
	top_level.mercury_compile_erl_back_end.int3 \
	top_level.mercury_compile_front_end.int3 \
	top_level.mercury_compile_llds_back_end.int3 \
	top_level.mercury_compile_middle_passes.int3 \
	top_level.mercury_compile_mlds_back_end.int3 \
	transform_hlds.dependency_graph.int3 \
	transform_hlds.intermod.int3 \
	transform_hlds.trans_opt.int3 \
	array.int3 \
	bag.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	counter.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	mdbcomp.int3 \
	multi_map.int3 \
	ops.int3 \
	pretty_printer.int3 \
	queue.int3 \
	random.int3 \
	robdd.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stack.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3 \
	varset.int3 \
	backend_libs.builtin_ops.int3 \
	backend_libs.foreign.int3 \
	backend_libs.rtti.int3 \
	check_hlds.delay_info.int3 \
	check_hlds.mode_constraint_robdd.int3 \
	check_hlds.mode_errors.int3 \
	check_hlds.mode_info.int3 \
	check_hlds.type_util.int3 \
	check_hlds.unify_proc.int3 \
	erl_backend.elds.int3 \
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
	libs.lp_rational.int3 \
	libs.polyhedron.int3 \
	libs.rat.int3 \
	libs.trace_params.int3 \
	ll_backend.global_data.int3 \
	ll_backend.layout.int3 \
	ll_backend.llds.int3 \
	ll_backend.x86_64_instrs.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	ml_backend.ml_global_data.int3 \
	ml_backend.mlds.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.deps_map.int3 \
	parse_tree.prog_io_util.int3 \
	parse_tree.prog_type.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3 \
	hlds.make_hlds.qual_info.int3 \
	mdbcomp.feedback.automatic_parallelism.int3

top_level.mercury_compile.date0 \
	top_level.date0 : mercury_compile.m \
	analysis.int3 \
	assoc_list.int3 \
	backend_libs.int3 \
	bool.int3 \
	builtin.int3 \
	bytecode_backend.int3 \
	check_hlds.int3 \
	cord.int3 \
	erl_backend.int3 \
	gc.int3 \
	getopt_io.int3 \
	hlds.int3 \
	io.int3 \
	libs.int3 \
	list.int3 \
	ll_backend.int3 \
	make.int3 \
	map.int3 \
	maybe.int3 \
	ml_backend.int3 \
	mode_robdd.int3 \
	pair.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	recompilation.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	transform_hlds.int3 \
	unit.int3 \
	backend_libs.compile_target_code.int3 \
	backend_libs.export.int3 \
	check_hlds.xml_documentation.int3 \
	hlds.hlds_module.int3 \
	hlds.make_hlds.int3 \
	hlds.passes_aux.int3 \
	libs.compiler_util.int3 \
	libs.file_util.int3 \
	libs.globals.int3 \
	libs.handle_options.int3 \
	libs.options.int3 \
	libs.timestamp.int3 \
	ll_backend.llds_to_x86_64.int3 \
	ll_backend.llds_to_x86_64_out.int3 \
	make.options_file.int3 \
	make.util.int3 \
	mdbcomp.prim_data.int3 \
	ml_backend.maybe_mlds_to_gcc.int3 \
	parse_tree.equiv_type.int3 \
	parse_tree.error_util.int3 \
	parse_tree.file_names.int3 \
	parse_tree.mercury_to_mercury.int3 \
	parse_tree.module_cmds.int3 \
	parse_tree.module_imports.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.modules.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_event.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_io.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.read_modules.int3 \
	parse_tree.source_file_map.int3 \
	parse_tree.write_deps_file.int3 \
	recompilation.check.int3 \
	recompilation.usage.int3 \
	top_level.mercury_compile_erl_back_end.int3 \
	top_level.mercury_compile_front_end.int3 \
	top_level.mercury_compile_llds_back_end.int3 \
	top_level.mercury_compile_middle_passes.int3 \
	top_level.mercury_compile_mlds_back_end.int3 \
	transform_hlds.dependency_graph.int3 \
	transform_hlds.intermod.int3 \
	transform_hlds.trans_opt.int3 \
	array.int3 \
	bag.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	counter.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	mdbcomp.int3 \
	multi_map.int3 \
	ops.int3 \
	pretty_printer.int3 \
	queue.int3 \
	random.int3 \
	robdd.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stack.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3 \
	varset.int3 \
	backend_libs.builtin_ops.int3 \
	backend_libs.foreign.int3 \
	backend_libs.rtti.int3 \
	check_hlds.delay_info.int3 \
	check_hlds.mode_constraint_robdd.int3 \
	check_hlds.mode_errors.int3 \
	check_hlds.mode_info.int3 \
	check_hlds.type_util.int3 \
	check_hlds.unify_proc.int3 \
	erl_backend.elds.int3 \
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
	libs.lp_rational.int3 \
	libs.polyhedron.int3 \
	libs.rat.int3 \
	libs.trace_params.int3 \
	ll_backend.global_data.int3 \
	ll_backend.layout.int3 \
	ll_backend.llds.int3 \
	ll_backend.x86_64_instrs.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	ml_backend.ml_global_data.int3 \
	ml_backend.mlds.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.deps_map.int3 \
	parse_tree.prog_io_util.int3 \
	parse_tree.prog_type.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3 \
	hlds.make_hlds.qual_info.int3 \
	mdbcomp.feedback.automatic_parallelism.int3



top_level.mercury_compile.$O :  \
	array.mh \
	array.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	make.util.mh \
	make.util.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	top_level.mercury_compile.mh



top_level.mercury_compile.pic_o :  \
	array.mh \
	array.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	make.util.mh \
	make.util.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	top_level.mercury_compile.mh


top_level.mercury_compile.int0 : top_level.mercury_compile.date0
	@:
top_level.mercury_compile.int : top_level.mercury_compile.date
	@:
top_level.mercury_compile.int2 : top_level.mercury_compile.date
	@:
top_level.mercury_compile.int3 : top_level.mercury_compile.date3
	@:
top_level.mercury_compile.opt : top_level.mercury_compile.optdate
	@:
top_level.mercury_compile.trans_opt : top_level.mercury_compile.trans_opt_date
	@:

top_level.mercury_compile.date0 : mercury_compile.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) top_level.mercury_compile
top_level.mercury_compile.date : mercury_compile.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) top_level.mercury_compile
top_level.mercury_compile.date3 : mercury_compile.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) top_level.mercury_compile
top_level.mercury_compile.optdate : mercury_compile.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) top_level.mercury_compile
top_level.mercury_compile.trans_opt_date : mercury_compile.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) top_level.mercury_compile
top_level.mercury_compile.c_date : mercury_compile.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) top_level.mercury_compile $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
top_level.mercury_compile.s_date : mercury_compile.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only top_level.mercury_compile $(ERR_REDIRECT)
top_level.mercury_compile.pic_s_date : mercury_compile.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" top_level.mercury_compile $(ERR_REDIRECT)
endif # TARGET_ASM
top_level.mercury_compile.il_date : mercury_compile.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only top_level.mercury_compile $(ERR_REDIRECT)
top_level.mercury_compile.java_date : mercury_compile.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only top_level.mercury_compile $(ERR_REDIRECT)
