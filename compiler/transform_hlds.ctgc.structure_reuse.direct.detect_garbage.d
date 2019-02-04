

transform_hlds.ctgc.structure_reuse.direct.detect_garbage.optdate transform_hlds.ctgc.structure_reuse.direct.detect_garbage.trans_opt_date structure_reuse.direct.detect_garbage.err transform_hlds.ctgc.structure_reuse.direct.detect_garbage.c_date transform_hlds.ctgc.structure_reuse.direct.detect_garbage.s_date transform_hlds.ctgc.structure_reuse.direct.detect_garbage.pic_s_date transform_hlds.ctgc.structure_reuse.direct.detect_garbage.il_date transform_hlds.ctgc.structure_reuse.direct.detect_garbage.java_date : structure_reuse.direct.detect_garbage.m \
	transform_hlds.ctgc.structure_reuse.direct.int0 \
	transform_hlds.ctgc.structure_reuse.int0 \
	transform_hlds.ctgc.int0 \
	transform_hlds.int0 \
	analysis.int \
	bool.int \
	builtin.int \
	check_hlds.int \
	hlds.int \
	io.int \
	libs.int \
	list.int \
	map.int \
	mdbcomp.int \
	pair.int \
	parse_tree.int \
	private_builtin.int \
	set.int \
	string.int \
	svmap.int \
	check_hlds.type_util.int \
	hlds.hlds_goal.int \
	hlds.hlds_module.int \
	hlds.hlds_pred.int \
	hlds.passes_aux.int \
	libs.compiler_util.int \
	libs.file_util.int \
	libs.globals.int \
	libs.options.int \
	parse_tree.error_util.int \
	parse_tree.prog_data.int \
	parse_tree.prog_out.int \
	transform_hlds.smm_common.int \
	transform_hlds.ctgc.datastruct.int \
	transform_hlds.ctgc.livedata.int \
	transform_hlds.ctgc.structure_sharing.int \
	transform_hlds.ctgc.util.int \
	transform_hlds.ctgc.structure_reuse.domain.int \
	transform_hlds.ctgc.structure_sharing.domain.int \
	transform_hlds.ctgc.structure_reuse.direct.choose_reuse.int \
	array.int2 \
	assoc_list.int2 \
	bag.int2 \
	bimap.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	digraph.int2 \
	enum.int2 \
	getopt_io.int2 \
	int.int2 \
	ll_backend.int2 \
	maybe.int2 \
	mode_robdd.int2 \
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
	check_hlds.delay_info.int2 \
	check_hlds.mode_constraint_robdd.int2 \
	check_hlds.mode_errors.int2 \
	check_hlds.mode_info.int2 \
	check_hlds.unify_proc.int2 \
	hlds.hlds_args.int2 \
	hlds.hlds_clauses.int2 \
	hlds.hlds_data.int2 \
	hlds.hlds_llds.int2 \
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
	parse_tree.module_qual.int2 \
	parse_tree.prog_foreign.int2 \
	parse_tree.prog_item.int2 \
	parse_tree.prog_type.int2 \
	transform_hlds.term_constr_data.int2 \
	transform_hlds.term_constr_errors.int2 \
	transform_hlds.term_constr_main.int2 \
	transform_hlds.term_errors.int2 \
	transform_hlds.term_norm.int2 \
	transform_hlds.term_util.int2

ifeq ($(TARGET_ASM),yes)
transform_hlds.ctgc.structure_reuse.direct.detect_garbage.mh transform_hlds.ctgc.structure_reuse.direct.detect_garbage.mih : transform_hlds.ctgc.structure_reuse.direct.detect_garbage.s
else
transform_hlds.ctgc.structure_reuse.direct.detect_garbage.mh transform_hlds.ctgc.structure_reuse.direct.detect_garbage.mih : transform_hlds.ctgc.structure_reuse.direct.detect_garbage.c
endif

ifeq ($(TARGET_ASM),yes)
transform_hlds.ctgc.structure_reuse.direct.detect_garbage.module_dep : transform_hlds.ctgc.structure_reuse.direct.detect_garbage.s
else
 ifeq ($(findstring il,$(GRADE)),il)
transform_hlds.ctgc.structure_reuse.direct.detect_garbage.module_dep : transform_hlds.ctgc.structure_reuse.direct.detect_garbage.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
transform_hlds.ctgc.structure_reuse.direct.detect_garbage.module_dep : jmercury/transform_hlds__ctgc__structure_reuse__direct__detect_garbage.java
  else
transform_hlds.ctgc.structure_reuse.direct.detect_garbage.module_dep : transform_hlds.ctgc.structure_reuse.direct.detect_garbage.c
  endif
 endif
endif

transform_hlds.ctgc.structure_reuse.direct.detect_garbage.date transform_hlds.ctgc.structure_reuse.direct.detect_garbage.date0 \
	transform_hlds.ctgc.structure_reuse.direct.date \
	transform_hlds.ctgc.structure_reuse.date \
	transform_hlds.ctgc.date \
	transform_hlds.date : structure_reuse.direct.detect_garbage.m \
	transform_hlds.ctgc.structure_reuse.direct.int0 \
	transform_hlds.ctgc.structure_reuse.int0 \
	transform_hlds.ctgc.int0 \
	transform_hlds.int0 \
	analysis.int3 \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
	hlds.int3 \
	io.int3 \
	libs.int3 \
	list.int3 \
	map.int3 \
	mdbcomp.int3 \
	pair.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	set.int3 \
	string.int3 \
	svmap.int3 \
	check_hlds.type_util.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_pred.int3 \
	hlds.passes_aux.int3 \
	libs.compiler_util.int3 \
	libs.file_util.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	parse_tree.error_util.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_out.int3 \
	transform_hlds.smm_common.int3 \
	transform_hlds.ctgc.datastruct.int3 \
	transform_hlds.ctgc.livedata.int3 \
	transform_hlds.ctgc.structure_sharing.int3 \
	transform_hlds.ctgc.util.int3 \
	transform_hlds.ctgc.structure_reuse.domain.int3 \
	transform_hlds.ctgc.structure_sharing.domain.int3 \
	transform_hlds.ctgc.structure_reuse.direct.choose_reuse.int3 \
	array.int3 \
	assoc_list.int3 \
	bag.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
	int.int3 \
	ll_backend.int3 \
	maybe.int3 \
	mode_robdd.int3 \
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
	check_hlds.delay_info.int3 \
	check_hlds.mode_constraint_robdd.int3 \
	check_hlds.mode_errors.int3 \
	check_hlds.mode_info.int3 \
	check_hlds.unify_proc.int3 \
	hlds.hlds_args.int3 \
	hlds.hlds_clauses.int3 \
	hlds.hlds_data.int3 \
	hlds.hlds_llds.int3 \
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
	parse_tree.module_qual.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.prog_type.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3

transform_hlds.ctgc.structure_reuse.direct.detect_garbage.date0 \
	transform_hlds.ctgc.structure_reuse.direct.date0 \
	transform_hlds.ctgc.structure_reuse.date0 \
	transform_hlds.ctgc.date0 \
	transform_hlds.date0 : structure_reuse.direct.detect_garbage.m \
	analysis.int3 \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
	hlds.int3 \
	io.int3 \
	libs.int3 \
	list.int3 \
	map.int3 \
	mdbcomp.int3 \
	pair.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	set.int3 \
	string.int3 \
	svmap.int3 \
	check_hlds.type_util.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_pred.int3 \
	hlds.passes_aux.int3 \
	libs.compiler_util.int3 \
	libs.file_util.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	parse_tree.error_util.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_out.int3 \
	transform_hlds.smm_common.int3 \
	transform_hlds.ctgc.datastruct.int3 \
	transform_hlds.ctgc.livedata.int3 \
	transform_hlds.ctgc.structure_sharing.int3 \
	transform_hlds.ctgc.util.int3 \
	transform_hlds.ctgc.structure_reuse.domain.int3 \
	transform_hlds.ctgc.structure_sharing.domain.int3 \
	transform_hlds.ctgc.structure_reuse.direct.choose_reuse.int3 \
	array.int3 \
	assoc_list.int3 \
	bag.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
	int.int3 \
	ll_backend.int3 \
	maybe.int3 \
	mode_robdd.int3 \
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
	check_hlds.delay_info.int3 \
	check_hlds.mode_constraint_robdd.int3 \
	check_hlds.mode_errors.int3 \
	check_hlds.mode_info.int3 \
	check_hlds.unify_proc.int3 \
	hlds.hlds_args.int3 \
	hlds.hlds_clauses.int3 \
	hlds.hlds_data.int3 \
	hlds.hlds_llds.int3 \
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
	parse_tree.module_qual.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.prog_type.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3



transform_hlds.ctgc.structure_reuse.direct.detect_garbage.$O :  \
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



transform_hlds.ctgc.structure_reuse.direct.detect_garbage.pic_o :  \
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


transform_hlds.ctgc.structure_reuse.direct.detect_garbage.int0 : transform_hlds.ctgc.structure_reuse.direct.detect_garbage.date0
	@:
transform_hlds.ctgc.structure_reuse.direct.detect_garbage.int : transform_hlds.ctgc.structure_reuse.direct.detect_garbage.date
	@:
transform_hlds.ctgc.structure_reuse.direct.detect_garbage.int2 : transform_hlds.ctgc.structure_reuse.direct.detect_garbage.date
	@:
transform_hlds.ctgc.structure_reuse.direct.detect_garbage.int3 : transform_hlds.ctgc.structure_reuse.direct.detect_garbage.date3
	@:
transform_hlds.ctgc.structure_reuse.direct.detect_garbage.opt : transform_hlds.ctgc.structure_reuse.direct.detect_garbage.optdate
	@:
transform_hlds.ctgc.structure_reuse.direct.detect_garbage.trans_opt : transform_hlds.ctgc.structure_reuse.direct.detect_garbage.trans_opt_date
	@:

transform_hlds.ctgc.structure_reuse.direct.detect_garbage.date0 : structure_reuse.direct.detect_garbage.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) transform_hlds.ctgc.structure_reuse.direct.detect_garbage
transform_hlds.ctgc.structure_reuse.direct.detect_garbage.date : structure_reuse.direct.detect_garbage.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) transform_hlds.ctgc.structure_reuse.direct.detect_garbage
transform_hlds.ctgc.structure_reuse.direct.detect_garbage.date3 : structure_reuse.direct.detect_garbage.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) transform_hlds.ctgc.structure_reuse.direct.detect_garbage
transform_hlds.ctgc.structure_reuse.direct.detect_garbage.optdate : structure_reuse.direct.detect_garbage.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) transform_hlds.ctgc.structure_reuse.direct.detect_garbage
transform_hlds.ctgc.structure_reuse.direct.detect_garbage.trans_opt_date : structure_reuse.direct.detect_garbage.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) transform_hlds.ctgc.structure_reuse.direct.detect_garbage
transform_hlds.ctgc.structure_reuse.direct.detect_garbage.c_date : structure_reuse.direct.detect_garbage.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) transform_hlds.ctgc.structure_reuse.direct.detect_garbage $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
transform_hlds.ctgc.structure_reuse.direct.detect_garbage.s_date : structure_reuse.direct.detect_garbage.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only transform_hlds.ctgc.structure_reuse.direct.detect_garbage $(ERR_REDIRECT)
transform_hlds.ctgc.structure_reuse.direct.detect_garbage.pic_s_date : structure_reuse.direct.detect_garbage.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" transform_hlds.ctgc.structure_reuse.direct.detect_garbage $(ERR_REDIRECT)
endif # TARGET_ASM
transform_hlds.ctgc.structure_reuse.direct.detect_garbage.il_date : structure_reuse.direct.detect_garbage.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only transform_hlds.ctgc.structure_reuse.direct.detect_garbage $(ERR_REDIRECT)
transform_hlds.ctgc.structure_reuse.direct.detect_garbage.java_date : structure_reuse.direct.detect_garbage.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only transform_hlds.ctgc.structure_reuse.direct.detect_garbage $(ERR_REDIRECT)
