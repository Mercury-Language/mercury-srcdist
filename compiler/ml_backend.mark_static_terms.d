

ml_backend.mark_static_terms.optdate ml_backend.mark_static_terms.trans_opt_date mark_static_terms.err ml_backend.mark_static_terms.c_date ml_backend.mark_static_terms.s_date ml_backend.mark_static_terms.pic_s_date ml_backend.mark_static_terms.il_date ml_backend.mark_static_terms.java_date : mark_static_terms.m \
	ml_backend.int0 \
	backend_libs.int \
	builtin.int \
	check_hlds.int \
	hlds.int \
	libs.int \
	list.int \
	map.int \
	mdbcomp.int \
	pair.int \
	parse_tree.int \
	private_builtin.int \
	svmap.int \
	hlds.hlds_goal.int \
	hlds.hlds_module.int \
	hlds.hlds_pred.int \
	libs.compiler_util.int \
	parse_tree.prog_data.int \
	analysis.int2 \
	assoc_list.int2 \
	bag.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	getopt_io.int2 \
	io.int2 \
	maybe.int2 \
	mode_robdd.int2 \
	multi_map.int2 \
	ops.int2 \
	recompilation.int2 \
	relation.int2 \
	robdd.int2 \
	set.int2 \
	set_ordlist.int2 \
	sparse_bitset.int2 \
	stack.int2 \
	stream.int2 \
	string.int2 \
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
	libs.globals.int2 \
	libs.lp_rational.int2 \
	libs.options.int2 \
	libs.polyhedron.int2 \
	libs.rat.int2 \
	libs.timestamp.int2 \
	libs.trace_params.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.program_representation.int2 \
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
ml_backend.mark_static_terms.mh ml_backend.mark_static_terms.mih : ml_backend.mark_static_terms.s
else
ml_backend.mark_static_terms.mh ml_backend.mark_static_terms.mih : ml_backend.mark_static_terms.c
endif

ifeq ($(TARGET_ASM),yes)
ml_backend.mark_static_terms.module_dep : ml_backend.mark_static_terms.s
else
 ifeq ($(findstring il,$(GRADE)),il)
ml_backend.mark_static_terms.module_dep : ml_backend.mark_static_terms.il
  ifeq ($(findstring java,$(GRADE)),java)
ml_backend.mark_static_terms.module_dep : ml_backend.mark_static_terms.java
  else
ml_backend.mark_static_terms.module_dep : ml_backend.mark_static_terms.c
  endif
 endif
endif

ml_backend.mark_static_terms.date ml_backend.mark_static_terms.date0 \
	ml_backend.date : mark_static_terms.m \
	ml_backend.int0 \
	backend_libs.int3 \
	builtin.int3 \
	check_hlds.int3 \
	hlds.int3 \
	libs.int3 \
	list.int3 \
	map.int3 \
	mdbcomp.int3 \
	pair.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	svmap.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_pred.int3 \
	libs.compiler_util.int3 \
	parse_tree.prog_data.int3 \
	analysis.int3 \
	assoc_list.int3 \
	bag.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt_io.int3 \
	io.int3 \
	maybe.int3 \
	mode_robdd.int3 \
	multi_map.int3 \
	ops.int3 \
	recompilation.int3 \
	relation.int3 \
	robdd.int3 \
	set.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stack.int3 \
	stream.int3 \
	string.int3 \
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
	libs.globals.int3 \
	libs.lp_rational.int3 \
	libs.options.int3 \
	libs.polyhedron.int3 \
	libs.rat.int3 \
	libs.timestamp.int3 \
	libs.trace_params.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
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

ml_backend.mark_static_terms.date0 \
	ml_backend.date0 : mark_static_terms.m \
	backend_libs.int3 \
	builtin.int3 \
	check_hlds.int3 \
	hlds.int3 \
	libs.int3 \
	list.int3 \
	map.int3 \
	mdbcomp.int3 \
	pair.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	svmap.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_pred.int3 \
	libs.compiler_util.int3 \
	parse_tree.prog_data.int3 \
	analysis.int3 \
	assoc_list.int3 \
	bag.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt_io.int3 \
	io.int3 \
	maybe.int3 \
	mode_robdd.int3 \
	multi_map.int3 \
	ops.int3 \
	recompilation.int3 \
	relation.int3 \
	robdd.int3 \
	set.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stack.int3 \
	stream.int3 \
	string.int3 \
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
	libs.globals.int3 \
	libs.lp_rational.int3 \
	libs.options.int3 \
	libs.polyhedron.int3 \
	libs.rat.int3 \
	libs.timestamp.int3 \
	libs.trace_params.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
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



ml_backend.mark_static_terms.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



ml_backend.mark_static_terms.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


ml_backend.mark_static_terms.int0 : ml_backend.mark_static_terms.date0
	@:
ml_backend.mark_static_terms.int : ml_backend.mark_static_terms.date
	@:
ml_backend.mark_static_terms.int2 : ml_backend.mark_static_terms.date
	@:
ml_backend.mark_static_terms.int3 : ml_backend.mark_static_terms.date3
	@:
ml_backend.mark_static_terms.opt : ml_backend.mark_static_terms.optdate
	@:
ml_backend.mark_static_terms.trans_opt : ml_backend.mark_static_terms.trans_opt_date
	@:

ml_backend.mark_static_terms.date0 : mark_static_terms.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) ml_backend.mark_static_terms
ml_backend.mark_static_terms.date : mark_static_terms.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) ml_backend.mark_static_terms
ml_backend.mark_static_terms.date3 : mark_static_terms.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) ml_backend.mark_static_terms
ml_backend.mark_static_terms.optdate : mark_static_terms.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) ml_backend.mark_static_terms
ml_backend.mark_static_terms.trans_opt_date : mark_static_terms.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) ml_backend.mark_static_terms
ml_backend.mark_static_terms.c_date : mark_static_terms.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) ml_backend.mark_static_terms $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
ml_backend.mark_static_terms.s_date : mark_static_terms.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only ml_backend.mark_static_terms $(ERR_REDIRECT)
ml_backend.mark_static_terms.pic_s_date : mark_static_terms.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" ml_backend.mark_static_terms $(ERR_REDIRECT)
endif # TARGET_ASM
ml_backend.mark_static_terms.il_date : mark_static_terms.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only ml_backend.mark_static_terms $(ERR_REDIRECT)
ml_backend.mark_static_terms.java_date : mark_static_terms.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only ml_backend.mark_static_terms $(ERR_REDIRECT)
