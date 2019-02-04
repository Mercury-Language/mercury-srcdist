

top_level.mercury_compile_middle_passes.optdate top_level.mercury_compile_middle_passes.trans_opt_date mercury_compile_middle_passes.err top_level.mercury_compile_middle_passes.c_date top_level.mercury_compile_middle_passes.s_date top_level.mercury_compile_middle_passes.pic_s_date top_level.mercury_compile_middle_passes.il_date top_level.mercury_compile_middle_passes.java_date : mercury_compile_middle_passes.m \
	top_level.int0 \
	analysis.int \
	backend_libs.int \
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
	backend_libs.type_ctor_info.int \
	bytecode_backend.bytecode.int \
	bytecode_backend.bytecode_gen.int \
	check_hlds.det_analysis.int \
	hlds.hlds_module.int \
	hlds.passes_aux.int \
	libs.compiler_util.int \
	libs.file_util.int \
	libs.globals.int \
	libs.options.int \
	ll_backend.deep_profiling.int \
	mdbcomp.prim_data.int \
	parse_tree.error_util.int \
	parse_tree.file_names.int \
	top_level.mercury_compile.int \
	top_level.mercury_compile_front_end.int \
	top_level.mercury_compile_llds_back_end.int \
	top_level.mercury_compile_mlds_back_end.int \
	transform_hlds.accumulator.int \
	transform_hlds.closure_analysis.int \
	transform_hlds.complexity.int \
	transform_hlds.ctgc.int \
	transform_hlds.dead_proc_elim.int \
	transform_hlds.deforest.int \
	transform_hlds.delay_construct.int \
	transform_hlds.dep_par_conj.int \
	transform_hlds.distance_granularity.int \
	transform_hlds.equiv_type_hlds.int \
	transform_hlds.exception_analysis.int \
	transform_hlds.granularity.int \
	transform_hlds.higher_order.int \
	transform_hlds.implicit_parallelism.int \
	transform_hlds.inlining.int \
	transform_hlds.lambda.int \
	transform_hlds.lco.int \
	transform_hlds.loop_inv.int \
	transform_hlds.mmc_analysis.int \
	transform_hlds.parallel_to_plain_conj.int \
	transform_hlds.rbmm.int \
	transform_hlds.size_prof.int \
	transform_hlds.ssdebug.int \
	transform_hlds.stm_expand.int \
	transform_hlds.table_gen.int \
	transform_hlds.tabling_analysis.int \
	transform_hlds.term_constr_main.int \
	transform_hlds.termination.int \
	transform_hlds.trailing_analysis.int \
	transform_hlds.trans_opt.int \
	transform_hlds.tupling.int \
	transform_hlds.unneeded_code.int \
	transform_hlds.untupling.int \
	transform_hlds.unused_args.int \
	transform_hlds.ctgc.structure_reuse.int \
	transform_hlds.ctgc.structure_sharing.int \
	transform_hlds.ctgc.structure_reuse.analysis.int \
	transform_hlds.ctgc.structure_sharing.analysis.int \
	array.int2 \
	assoc_list.int2 \
	bag.int2 \
	bimap.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	cord.int2 \
	counter.int2 \
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
	backend_libs.builtin_ops.int2 \
	backend_libs.foreign.int2 \
	backend_libs.rtti.int2 \
	check_hlds.delay_info.int2 \
	check_hlds.det_report.int2 \
	check_hlds.det_util.int2 \
	check_hlds.mode_constraint_robdd.int2 \
	check_hlds.mode_errors.int2 \
	check_hlds.mode_info.int2 \
	check_hlds.type_util.int2 \
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
	hlds.make_hlds.int2 \
	hlds.pred_table.int2 \
	hlds.special_pred.int2 \
	libs.lp_rational.int2 \
	libs.polyhedron.int2 \
	libs.rat.int2 \
	libs.timestamp.int2 \
	libs.trace_params.int2 \
	ll_backend.global_data.int2 \
	ll_backend.layout.int2 \
	ll_backend.llds.int2 \
	mdbcomp.feedback.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2 \
	ml_backend.ml_global_data.int2 \
	ml_backend.mlds.int2 \
	mode_robdd.tfeirn.int2 \
	parse_tree.equiv_type.int2 \
	parse_tree.module_imports.int2 \
	parse_tree.module_qual.int2 \
	parse_tree.prog_data.int2 \
	parse_tree.prog_foreign.int2 \
	parse_tree.prog_io.int2 \
	parse_tree.prog_io_util.int2 \
	parse_tree.prog_item.int2 \
	parse_tree.prog_type.int2 \
	transform_hlds.term_constr_data.int2 \
	transform_hlds.term_constr_errors.int2 \
	transform_hlds.term_errors.int2 \
	transform_hlds.term_norm.int2 \
	transform_hlds.term_util.int2 \
	hlds.make_hlds.qual_info.int2 \
	transform_hlds.ctgc.livedata.int2 \
	transform_hlds.ctgc.structure_reuse.domain.int2 \
	transform_hlds.ctgc.structure_sharing.domain.int2

ifeq ($(TARGET_ASM),yes)
top_level.mercury_compile_middle_passes.mh top_level.mercury_compile_middle_passes.mih : top_level.mercury_compile_middle_passes.s
else
top_level.mercury_compile_middle_passes.mh top_level.mercury_compile_middle_passes.mih : top_level.mercury_compile_middle_passes.c
endif

ifeq ($(TARGET_ASM),yes)
top_level.mercury_compile_middle_passes.module_dep : top_level.mercury_compile_middle_passes.s
else
 ifeq ($(findstring il,$(GRADE)),il)
top_level.mercury_compile_middle_passes.module_dep : top_level.mercury_compile_middle_passes.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
top_level.mercury_compile_middle_passes.module_dep : jmercury/top_level__mercury_compile_middle_passes.java
  else
top_level.mercury_compile_middle_passes.module_dep : top_level.mercury_compile_middle_passes.c
  endif
 endif
endif

top_level.mercury_compile_middle_passes.date top_level.mercury_compile_middle_passes.date0 \
	top_level.date : mercury_compile_middle_passes.m \
	top_level.int0 \
	analysis.int3 \
	backend_libs.int3 \
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
	backend_libs.type_ctor_info.int3 \
	bytecode_backend.bytecode.int3 \
	bytecode_backend.bytecode_gen.int3 \
	check_hlds.det_analysis.int3 \
	hlds.hlds_module.int3 \
	hlds.passes_aux.int3 \
	libs.compiler_util.int3 \
	libs.file_util.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	ll_backend.deep_profiling.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.error_util.int3 \
	parse_tree.file_names.int3 \
	top_level.mercury_compile.int3 \
	top_level.mercury_compile_front_end.int3 \
	top_level.mercury_compile_llds_back_end.int3 \
	top_level.mercury_compile_mlds_back_end.int3 \
	transform_hlds.accumulator.int3 \
	transform_hlds.closure_analysis.int3 \
	transform_hlds.complexity.int3 \
	transform_hlds.ctgc.int3 \
	transform_hlds.dead_proc_elim.int3 \
	transform_hlds.deforest.int3 \
	transform_hlds.delay_construct.int3 \
	transform_hlds.dep_par_conj.int3 \
	transform_hlds.distance_granularity.int3 \
	transform_hlds.equiv_type_hlds.int3 \
	transform_hlds.exception_analysis.int3 \
	transform_hlds.granularity.int3 \
	transform_hlds.higher_order.int3 \
	transform_hlds.implicit_parallelism.int3 \
	transform_hlds.inlining.int3 \
	transform_hlds.lambda.int3 \
	transform_hlds.lco.int3 \
	transform_hlds.loop_inv.int3 \
	transform_hlds.mmc_analysis.int3 \
	transform_hlds.parallel_to_plain_conj.int3 \
	transform_hlds.rbmm.int3 \
	transform_hlds.size_prof.int3 \
	transform_hlds.ssdebug.int3 \
	transform_hlds.stm_expand.int3 \
	transform_hlds.table_gen.int3 \
	transform_hlds.tabling_analysis.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.termination.int3 \
	transform_hlds.trailing_analysis.int3 \
	transform_hlds.trans_opt.int3 \
	transform_hlds.tupling.int3 \
	transform_hlds.unneeded_code.int3 \
	transform_hlds.untupling.int3 \
	transform_hlds.unused_args.int3 \
	transform_hlds.ctgc.structure_reuse.int3 \
	transform_hlds.ctgc.structure_sharing.int3 \
	transform_hlds.ctgc.structure_reuse.analysis.int3 \
	transform_hlds.ctgc.structure_sharing.analysis.int3 \
	array.int3 \
	assoc_list.int3 \
	bag.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	cord.int3 \
	counter.int3 \
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
	backend_libs.builtin_ops.int3 \
	backend_libs.foreign.int3 \
	backend_libs.rtti.int3 \
	check_hlds.delay_info.int3 \
	check_hlds.det_report.int3 \
	check_hlds.det_util.int3 \
	check_hlds.mode_constraint_robdd.int3 \
	check_hlds.mode_errors.int3 \
	check_hlds.mode_info.int3 \
	check_hlds.type_util.int3 \
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
	hlds.make_hlds.int3 \
	hlds.pred_table.int3 \
	hlds.special_pred.int3 \
	libs.lp_rational.int3 \
	libs.polyhedron.int3 \
	libs.rat.int3 \
	libs.timestamp.int3 \
	libs.trace_params.int3 \
	ll_backend.global_data.int3 \
	ll_backend.layout.int3 \
	ll_backend.llds.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	ml_backend.ml_global_data.int3 \
	ml_backend.mlds.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.equiv_type.int3 \
	parse_tree.module_imports.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_io.int3 \
	parse_tree.prog_io_util.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.prog_type.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3 \
	hlds.make_hlds.qual_info.int3 \
	transform_hlds.ctgc.livedata.int3 \
	transform_hlds.ctgc.structure_reuse.domain.int3 \
	transform_hlds.ctgc.structure_sharing.domain.int3

top_level.mercury_compile_middle_passes.date0 \
	top_level.date0 : mercury_compile_middle_passes.m \
	analysis.int3 \
	backend_libs.int3 \
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
	backend_libs.type_ctor_info.int3 \
	bytecode_backend.bytecode.int3 \
	bytecode_backend.bytecode_gen.int3 \
	check_hlds.det_analysis.int3 \
	hlds.hlds_module.int3 \
	hlds.passes_aux.int3 \
	libs.compiler_util.int3 \
	libs.file_util.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	ll_backend.deep_profiling.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.error_util.int3 \
	parse_tree.file_names.int3 \
	top_level.mercury_compile.int3 \
	top_level.mercury_compile_front_end.int3 \
	top_level.mercury_compile_llds_back_end.int3 \
	top_level.mercury_compile_mlds_back_end.int3 \
	transform_hlds.accumulator.int3 \
	transform_hlds.closure_analysis.int3 \
	transform_hlds.complexity.int3 \
	transform_hlds.ctgc.int3 \
	transform_hlds.dead_proc_elim.int3 \
	transform_hlds.deforest.int3 \
	transform_hlds.delay_construct.int3 \
	transform_hlds.dep_par_conj.int3 \
	transform_hlds.distance_granularity.int3 \
	transform_hlds.equiv_type_hlds.int3 \
	transform_hlds.exception_analysis.int3 \
	transform_hlds.granularity.int3 \
	transform_hlds.higher_order.int3 \
	transform_hlds.implicit_parallelism.int3 \
	transform_hlds.inlining.int3 \
	transform_hlds.lambda.int3 \
	transform_hlds.lco.int3 \
	transform_hlds.loop_inv.int3 \
	transform_hlds.mmc_analysis.int3 \
	transform_hlds.parallel_to_plain_conj.int3 \
	transform_hlds.rbmm.int3 \
	transform_hlds.size_prof.int3 \
	transform_hlds.ssdebug.int3 \
	transform_hlds.stm_expand.int3 \
	transform_hlds.table_gen.int3 \
	transform_hlds.tabling_analysis.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.termination.int3 \
	transform_hlds.trailing_analysis.int3 \
	transform_hlds.trans_opt.int3 \
	transform_hlds.tupling.int3 \
	transform_hlds.unneeded_code.int3 \
	transform_hlds.untupling.int3 \
	transform_hlds.unused_args.int3 \
	transform_hlds.ctgc.structure_reuse.int3 \
	transform_hlds.ctgc.structure_sharing.int3 \
	transform_hlds.ctgc.structure_reuse.analysis.int3 \
	transform_hlds.ctgc.structure_sharing.analysis.int3 \
	array.int3 \
	assoc_list.int3 \
	bag.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	cord.int3 \
	counter.int3 \
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
	backend_libs.builtin_ops.int3 \
	backend_libs.foreign.int3 \
	backend_libs.rtti.int3 \
	check_hlds.delay_info.int3 \
	check_hlds.det_report.int3 \
	check_hlds.det_util.int3 \
	check_hlds.mode_constraint_robdd.int3 \
	check_hlds.mode_errors.int3 \
	check_hlds.mode_info.int3 \
	check_hlds.type_util.int3 \
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
	hlds.make_hlds.int3 \
	hlds.pred_table.int3 \
	hlds.special_pred.int3 \
	libs.lp_rational.int3 \
	libs.polyhedron.int3 \
	libs.rat.int3 \
	libs.timestamp.int3 \
	libs.trace_params.int3 \
	ll_backend.global_data.int3 \
	ll_backend.layout.int3 \
	ll_backend.llds.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	ml_backend.ml_global_data.int3 \
	ml_backend.mlds.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.equiv_type.int3 \
	parse_tree.module_imports.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_io.int3 \
	parse_tree.prog_io_util.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.prog_type.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3 \
	hlds.make_hlds.qual_info.int3 \
	transform_hlds.ctgc.livedata.int3 \
	transform_hlds.ctgc.structure_reuse.domain.int3 \
	transform_hlds.ctgc.structure_sharing.domain.int3



top_level.mercury_compile_middle_passes.$O :  \
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



top_level.mercury_compile_middle_passes.pic_o :  \
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


top_level.mercury_compile_middle_passes.int0 : top_level.mercury_compile_middle_passes.date0
	@:
top_level.mercury_compile_middle_passes.int : top_level.mercury_compile_middle_passes.date
	@:
top_level.mercury_compile_middle_passes.int2 : top_level.mercury_compile_middle_passes.date
	@:
top_level.mercury_compile_middle_passes.int3 : top_level.mercury_compile_middle_passes.date3
	@:
top_level.mercury_compile_middle_passes.opt : top_level.mercury_compile_middle_passes.optdate
	@:
top_level.mercury_compile_middle_passes.trans_opt : top_level.mercury_compile_middle_passes.trans_opt_date
	@:

top_level.mercury_compile_middle_passes.date0 : mercury_compile_middle_passes.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) top_level.mercury_compile_middle_passes
top_level.mercury_compile_middle_passes.date : mercury_compile_middle_passes.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) top_level.mercury_compile_middle_passes
top_level.mercury_compile_middle_passes.date3 : mercury_compile_middle_passes.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) top_level.mercury_compile_middle_passes
top_level.mercury_compile_middle_passes.optdate : mercury_compile_middle_passes.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) top_level.mercury_compile_middle_passes
top_level.mercury_compile_middle_passes.trans_opt_date : mercury_compile_middle_passes.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) top_level.mercury_compile_middle_passes
top_level.mercury_compile_middle_passes.c_date : mercury_compile_middle_passes.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) top_level.mercury_compile_middle_passes $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
top_level.mercury_compile_middle_passes.s_date : mercury_compile_middle_passes.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only top_level.mercury_compile_middle_passes $(ERR_REDIRECT)
top_level.mercury_compile_middle_passes.pic_s_date : mercury_compile_middle_passes.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" top_level.mercury_compile_middle_passes $(ERR_REDIRECT)
endif # TARGET_ASM
top_level.mercury_compile_middle_passes.il_date : mercury_compile_middle_passes.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only top_level.mercury_compile_middle_passes $(ERR_REDIRECT)
top_level.mercury_compile_middle_passes.java_date : mercury_compile_middle_passes.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only top_level.mercury_compile_middle_passes $(ERR_REDIRECT)
