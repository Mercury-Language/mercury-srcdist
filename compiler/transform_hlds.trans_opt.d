

transform_hlds.trans_opt.optdate transform_hlds.trans_opt.trans_opt_date trans_opt.err transform_hlds.trans_opt.c_date transform_hlds.trans_opt.s_date transform_hlds.trans_opt.pic_s_date transform_hlds.trans_opt.il_date transform_hlds.trans_opt.java_date : trans_opt.m \
	transform_hlds.int0 \
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
	term.int \
	hlds.hlds_module.int \
	hlds.hlds_pred.int \
	libs.globals.int \
	libs.options.int \
	mdbcomp.prim_data.int \
	parse_tree.mercury_to_mercury.int \
	parse_tree.modules.int \
	parse_tree.prog_data.int \
	parse_tree.prog_io.int \
	parse_tree.prog_item.int \
	parse_tree.prog_out.int \
	transform_hlds.ctgc.int \
	transform_hlds.exception_analysis.int \
	transform_hlds.intermod.int \
	transform_hlds.tabling_analysis.int \
	transform_hlds.term_constr_main.int \
	transform_hlds.termination.int \
	transform_hlds.trailing_analysis.int \
	transform_hlds.ctgc.structure_reuse.int \
	transform_hlds.ctgc.structure_sharing.int \
	transform_hlds.ctgc.structure_reuse.analysis.int \
	transform_hlds.ctgc.structure_sharing.analysis.int \
	analysis.int2 \
	assoc_list.int2 \
	bag.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	getopt_io.int2 \
	ll_backend.int2 \
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
	mdbcomp.program_representation.int2 \
	mode_robdd.tfeirn.int2 \
	parse_tree.error_util.int2 \
	parse_tree.module_qual.int2 \
	parse_tree.prog_foreign.int2 \
	parse_tree.prog_io_util.int2 \
	transform_hlds.term_constr_data.int2 \
	transform_hlds.term_constr_errors.int2 \
	transform_hlds.term_errors.int2 \
	transform_hlds.term_norm.int2 \
	transform_hlds.term_util.int2

ifeq ($(TARGET_ASM),yes)
transform_hlds.trans_opt.mh transform_hlds.trans_opt.mih : transform_hlds.trans_opt.s
else
transform_hlds.trans_opt.mh transform_hlds.trans_opt.mih : transform_hlds.trans_opt.c
endif

ifeq ($(TARGET_ASM),yes)
transform_hlds.trans_opt.module_dep : transform_hlds.trans_opt.s
else
 ifeq ($(findstring il,$(GRADE)),il)
transform_hlds.trans_opt.module_dep : transform_hlds.trans_opt.il
  ifeq ($(findstring java,$(GRADE)),java)
transform_hlds.trans_opt.module_dep : transform_hlds.trans_opt.java
  else
transform_hlds.trans_opt.module_dep : transform_hlds.trans_opt.c
  endif
 endif
endif

transform_hlds.trans_opt.date transform_hlds.trans_opt.date0 \
	transform_hlds.date : trans_opt.m \
	transform_hlds.int0 \
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
	term.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_pred.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.mercury_to_mercury.int3 \
	parse_tree.modules.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_io.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.prog_out.int3 \
	transform_hlds.ctgc.int3 \
	transform_hlds.exception_analysis.int3 \
	transform_hlds.intermod.int3 \
	transform_hlds.tabling_analysis.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.termination.int3 \
	transform_hlds.trailing_analysis.int3 \
	transform_hlds.ctgc.structure_reuse.int3 \
	transform_hlds.ctgc.structure_sharing.int3 \
	transform_hlds.ctgc.structure_reuse.analysis.int3 \
	transform_hlds.ctgc.structure_sharing.analysis.int3 \
	analysis.int3 \
	assoc_list.int3 \
	bag.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt_io.int3 \
	ll_backend.int3 \
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
	mdbcomp.program_representation.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.error_util.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_io_util.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3

transform_hlds.trans_opt.date0 \
	transform_hlds.date0 : trans_opt.m \
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
	term.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_pred.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.mercury_to_mercury.int3 \
	parse_tree.modules.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_io.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.prog_out.int3 \
	transform_hlds.ctgc.int3 \
	transform_hlds.exception_analysis.int3 \
	transform_hlds.intermod.int3 \
	transform_hlds.tabling_analysis.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.termination.int3 \
	transform_hlds.trailing_analysis.int3 \
	transform_hlds.ctgc.structure_reuse.int3 \
	transform_hlds.ctgc.structure_sharing.int3 \
	transform_hlds.ctgc.structure_reuse.analysis.int3 \
	transform_hlds.ctgc.structure_sharing.analysis.int3 \
	analysis.int3 \
	assoc_list.int3 \
	bag.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt_io.int3 \
	ll_backend.int3 \
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
	mdbcomp.program_representation.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.error_util.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_io_util.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3



transform_hlds.trans_opt.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



transform_hlds.trans_opt.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


transform_hlds.trans_opt.int0 : transform_hlds.trans_opt.date0
	@:
transform_hlds.trans_opt.int : transform_hlds.trans_opt.date
	@:
transform_hlds.trans_opt.int2 : transform_hlds.trans_opt.date
	@:
transform_hlds.trans_opt.int3 : transform_hlds.trans_opt.date3
	@:
transform_hlds.trans_opt.opt : transform_hlds.trans_opt.optdate
	@:
transform_hlds.trans_opt.trans_opt : transform_hlds.trans_opt.trans_opt_date
	@:

transform_hlds.trans_opt.date0 : trans_opt.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) transform_hlds.trans_opt
transform_hlds.trans_opt.date : trans_opt.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) transform_hlds.trans_opt
transform_hlds.trans_opt.date3 : trans_opt.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) transform_hlds.trans_opt
transform_hlds.trans_opt.optdate : trans_opt.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) transform_hlds.trans_opt
transform_hlds.trans_opt.trans_opt_date : trans_opt.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) transform_hlds.trans_opt
transform_hlds.trans_opt.c_date : trans_opt.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) transform_hlds.trans_opt $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
transform_hlds.trans_opt.s_date : trans_opt.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only transform_hlds.trans_opt $(ERR_REDIRECT)
transform_hlds.trans_opt.pic_s_date : trans_opt.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" transform_hlds.trans_opt $(ERR_REDIRECT)
endif # TARGET_ASM
transform_hlds.trans_opt.il_date : trans_opt.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only transform_hlds.trans_opt $(ERR_REDIRECT)
transform_hlds.trans_opt.java_date : trans_opt.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only transform_hlds.trans_opt $(ERR_REDIRECT)
