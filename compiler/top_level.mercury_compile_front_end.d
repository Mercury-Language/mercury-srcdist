

top_level.mercury_compile_front_end.optdate top_level.mercury_compile_front_end.trans_opt_date mercury_compile_front_end.err top_level.mercury_compile_front_end.c_date top_level.mercury_compile_front_end.s_date top_level.mercury_compile_front_end.pic_s_date top_level.mercury_compile_front_end.il_date top_level.mercury_compile_front_end.java_date : mercury_compile_front_end.m \
	top_level.int0 \
	analysis.int \
	backend_libs.int \
	benchmarking.int \
	bool.int \
	builtin.int \
	bytecode_backend.int \
	check_hlds.int \
	erl_backend.int \
	hlds.int \
	int.int \
	io.int \
	libs.int \
	list.int \
	ll_backend.int \
	maybe.int \
	ml_backend.int \
	mode_robdd.int \
	pair.int \
	parse_tree.int \
	private_builtin.int \
	set.int \
	string.int \
	transform_hlds.int \
	check_hlds.check_typeclass.int \
	check_hlds.cse_detection.int \
	check_hlds.det_analysis.int \
	check_hlds.implementation_defined_literals.int \
	check_hlds.inst_check.int \
	check_hlds.mode_constraints.int \
	check_hlds.modes.int \
	check_hlds.polymorphism.int \
	check_hlds.post_typecheck.int \
	check_hlds.purity.int \
	check_hlds.simplify.int \
	check_hlds.stratify.int \
	check_hlds.switch_detection.int \
	check_hlds.try_expand.int \
	check_hlds.type_constraints.int \
	check_hlds.typecheck.int \
	check_hlds.unique_modes.int \
	check_hlds.unused_imports.int \
	hlds.hlds_error_util.int \
	hlds.hlds_module.int \
	hlds.hlds_statistics.int \
	hlds.make_hlds.int \
	hlds.passes_aux.int \
	libs.compiler_util.int \
	libs.file_util.int \
	libs.globals.int \
	libs.options.int \
	parse_tree.error_util.int \
	parse_tree.file_names.int \
	parse_tree.module_cmds.int \
	top_level.mercury_compile.int \
	top_level.mercury_compile_middle_passes.int \
	transform_hlds.dead_proc_elim.int \
	transform_hlds.intermod.int \
	array.int2 \
	assoc_list.int2 \
	bag.int2 \
	bimap.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	cord.int2 \
	deconstruct.int2 \
	digraph.int2 \
	enum.int2 \
	getopt_io.int2 \
	map.int2 \
	mdbcomp.int2 \
	multi_map.int2 \
	ops.int2 \
	pretty_printer.int2 \
	queue.int2 \
	random.int2 \
	recompilation.int2 \
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
	unit.int2 \
	univ.int2 \
	varset.int2 \
	check_hlds.abstract_mode_constraints.int2 \
	check_hlds.build_mode_constraints.int2 \
	check_hlds.common.int2 \
	check_hlds.delay_info.int2 \
	check_hlds.det_report.int2 \
	check_hlds.det_util.int2 \
	check_hlds.mode_constraint_robdd.int2 \
	check_hlds.mode_errors.int2 \
	check_hlds.mode_info.int2 \
	check_hlds.prop_mode_constraints.int2 \
	check_hlds.unify_proc.int2 \
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
	libs.timestamp.int2 \
	libs.trace_params.int2 \
	mdbcomp.feedback.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2 \
	mode_robdd.tfeirn.int2 \
	parse_tree.equiv_type.int2 \
	parse_tree.module_imports.int2 \
	parse_tree.module_qual.int2 \
	parse_tree.prog_data.int2 \
	parse_tree.prog_foreign.int2 \
	parse_tree.prog_io.int2 \
	parse_tree.prog_io_util.int2 \
	parse_tree.prog_item.int2 \
	transform_hlds.term_constr_data.int2 \
	transform_hlds.term_constr_errors.int2 \
	transform_hlds.term_constr_main.int2 \
	transform_hlds.term_errors.int2 \
	transform_hlds.term_norm.int2 \
	transform_hlds.term_util.int2 \
	hlds.make_hlds.qual_info.int2

ifeq ($(TARGET_ASM),yes)
top_level.mercury_compile_front_end.mh top_level.mercury_compile_front_end.mih : top_level.mercury_compile_front_end.s
else
top_level.mercury_compile_front_end.mh top_level.mercury_compile_front_end.mih : top_level.mercury_compile_front_end.c
endif

ifeq ($(TARGET_ASM),yes)
top_level.mercury_compile_front_end.module_dep : top_level.mercury_compile_front_end.s
else
 ifeq ($(findstring il,$(GRADE)),il)
top_level.mercury_compile_front_end.module_dep : top_level.mercury_compile_front_end.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
top_level.mercury_compile_front_end.module_dep : jmercury/top_level__mercury_compile_front_end.java
  else
top_level.mercury_compile_front_end.module_dep : top_level.mercury_compile_front_end.c
  endif
 endif
endif

top_level.mercury_compile_front_end.date top_level.mercury_compile_front_end.date0 \
	top_level.date : mercury_compile_front_end.m \
	top_level.int0 \
	analysis.int3 \
	backend_libs.int3 \
	benchmarking.int3 \
	bool.int3 \
	builtin.int3 \
	bytecode_backend.int3 \
	check_hlds.int3 \
	erl_backend.int3 \
	hlds.int3 \
	int.int3 \
	io.int3 \
	libs.int3 \
	list.int3 \
	ll_backend.int3 \
	maybe.int3 \
	ml_backend.int3 \
	mode_robdd.int3 \
	pair.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	set.int3 \
	string.int3 \
	transform_hlds.int3 \
	check_hlds.check_typeclass.int3 \
	check_hlds.cse_detection.int3 \
	check_hlds.det_analysis.int3 \
	check_hlds.implementation_defined_literals.int3 \
	check_hlds.inst_check.int3 \
	check_hlds.mode_constraints.int3 \
	check_hlds.modes.int3 \
	check_hlds.polymorphism.int3 \
	check_hlds.post_typecheck.int3 \
	check_hlds.purity.int3 \
	check_hlds.simplify.int3 \
	check_hlds.stratify.int3 \
	check_hlds.switch_detection.int3 \
	check_hlds.try_expand.int3 \
	check_hlds.type_constraints.int3 \
	check_hlds.typecheck.int3 \
	check_hlds.unique_modes.int3 \
	check_hlds.unused_imports.int3 \
	hlds.hlds_error_util.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_statistics.int3 \
	hlds.make_hlds.int3 \
	hlds.passes_aux.int3 \
	libs.compiler_util.int3 \
	libs.file_util.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	parse_tree.error_util.int3 \
	parse_tree.file_names.int3 \
	parse_tree.module_cmds.int3 \
	top_level.mercury_compile.int3 \
	top_level.mercury_compile_middle_passes.int3 \
	transform_hlds.dead_proc_elim.int3 \
	transform_hlds.intermod.int3 \
	array.int3 \
	assoc_list.int3 \
	bag.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	cord.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
	map.int3 \
	mdbcomp.int3 \
	multi_map.int3 \
	ops.int3 \
	pretty_printer.int3 \
	queue.int3 \
	random.int3 \
	recompilation.int3 \
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
	unit.int3 \
	univ.int3 \
	varset.int3 \
	check_hlds.abstract_mode_constraints.int3 \
	check_hlds.build_mode_constraints.int3 \
	check_hlds.common.int3 \
	check_hlds.delay_info.int3 \
	check_hlds.det_report.int3 \
	check_hlds.det_util.int3 \
	check_hlds.mode_constraint_robdd.int3 \
	check_hlds.mode_errors.int3 \
	check_hlds.mode_info.int3 \
	check_hlds.prop_mode_constraints.int3 \
	check_hlds.unify_proc.int3 \
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
	libs.timestamp.int3 \
	libs.trace_params.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.equiv_type.int3 \
	parse_tree.module_imports.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_io.int3 \
	parse_tree.prog_io_util.int3 \
	parse_tree.prog_item.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3 \
	hlds.make_hlds.qual_info.int3

top_level.mercury_compile_front_end.date0 \
	top_level.date0 : mercury_compile_front_end.m \
	analysis.int3 \
	backend_libs.int3 \
	benchmarking.int3 \
	bool.int3 \
	builtin.int3 \
	bytecode_backend.int3 \
	check_hlds.int3 \
	erl_backend.int3 \
	hlds.int3 \
	int.int3 \
	io.int3 \
	libs.int3 \
	list.int3 \
	ll_backend.int3 \
	maybe.int3 \
	ml_backend.int3 \
	mode_robdd.int3 \
	pair.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	set.int3 \
	string.int3 \
	transform_hlds.int3 \
	check_hlds.check_typeclass.int3 \
	check_hlds.cse_detection.int3 \
	check_hlds.det_analysis.int3 \
	check_hlds.implementation_defined_literals.int3 \
	check_hlds.inst_check.int3 \
	check_hlds.mode_constraints.int3 \
	check_hlds.modes.int3 \
	check_hlds.polymorphism.int3 \
	check_hlds.post_typecheck.int3 \
	check_hlds.purity.int3 \
	check_hlds.simplify.int3 \
	check_hlds.stratify.int3 \
	check_hlds.switch_detection.int3 \
	check_hlds.try_expand.int3 \
	check_hlds.type_constraints.int3 \
	check_hlds.typecheck.int3 \
	check_hlds.unique_modes.int3 \
	check_hlds.unused_imports.int3 \
	hlds.hlds_error_util.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_statistics.int3 \
	hlds.make_hlds.int3 \
	hlds.passes_aux.int3 \
	libs.compiler_util.int3 \
	libs.file_util.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	parse_tree.error_util.int3 \
	parse_tree.file_names.int3 \
	parse_tree.module_cmds.int3 \
	top_level.mercury_compile.int3 \
	top_level.mercury_compile_middle_passes.int3 \
	transform_hlds.dead_proc_elim.int3 \
	transform_hlds.intermod.int3 \
	array.int3 \
	assoc_list.int3 \
	bag.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	cord.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
	map.int3 \
	mdbcomp.int3 \
	multi_map.int3 \
	ops.int3 \
	pretty_printer.int3 \
	queue.int3 \
	random.int3 \
	recompilation.int3 \
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
	unit.int3 \
	univ.int3 \
	varset.int3 \
	check_hlds.abstract_mode_constraints.int3 \
	check_hlds.build_mode_constraints.int3 \
	check_hlds.common.int3 \
	check_hlds.delay_info.int3 \
	check_hlds.det_report.int3 \
	check_hlds.det_util.int3 \
	check_hlds.mode_constraint_robdd.int3 \
	check_hlds.mode_errors.int3 \
	check_hlds.mode_info.int3 \
	check_hlds.prop_mode_constraints.int3 \
	check_hlds.unify_proc.int3 \
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
	libs.timestamp.int3 \
	libs.trace_params.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.equiv_type.int3 \
	parse_tree.module_imports.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_io.int3 \
	parse_tree.prog_io_util.int3 \
	parse_tree.prog_item.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3 \
	hlds.make_hlds.qual_info.int3



top_level.mercury_compile_front_end.$O :  \
	array.mh \
	array.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



top_level.mercury_compile_front_end.pic_o :  \
	array.mh \
	array.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


top_level.mercury_compile_front_end.int0 : top_level.mercury_compile_front_end.date0
	@:
top_level.mercury_compile_front_end.int : top_level.mercury_compile_front_end.date
	@:
top_level.mercury_compile_front_end.int2 : top_level.mercury_compile_front_end.date
	@:
top_level.mercury_compile_front_end.int3 : top_level.mercury_compile_front_end.date3
	@:
top_level.mercury_compile_front_end.opt : top_level.mercury_compile_front_end.optdate
	@:
top_level.mercury_compile_front_end.trans_opt : top_level.mercury_compile_front_end.trans_opt_date
	@:

top_level.mercury_compile_front_end.date0 : mercury_compile_front_end.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) top_level.mercury_compile_front_end
top_level.mercury_compile_front_end.date : mercury_compile_front_end.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) top_level.mercury_compile_front_end
top_level.mercury_compile_front_end.date3 : mercury_compile_front_end.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) top_level.mercury_compile_front_end
top_level.mercury_compile_front_end.optdate : mercury_compile_front_end.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) top_level.mercury_compile_front_end
top_level.mercury_compile_front_end.trans_opt_date : mercury_compile_front_end.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) top_level.mercury_compile_front_end
top_level.mercury_compile_front_end.c_date : mercury_compile_front_end.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) top_level.mercury_compile_front_end $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
top_level.mercury_compile_front_end.s_date : mercury_compile_front_end.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only top_level.mercury_compile_front_end $(ERR_REDIRECT)
top_level.mercury_compile_front_end.pic_s_date : mercury_compile_front_end.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" top_level.mercury_compile_front_end $(ERR_REDIRECT)
endif # TARGET_ASM
top_level.mercury_compile_front_end.il_date : mercury_compile_front_end.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only top_level.mercury_compile_front_end $(ERR_REDIRECT)
top_level.mercury_compile_front_end.java_date : mercury_compile_front_end.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only top_level.mercury_compile_front_end $(ERR_REDIRECT)
