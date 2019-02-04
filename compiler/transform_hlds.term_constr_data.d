

transform_hlds.term_constr_data.optdate transform_hlds.term_constr_data.trans_opt_date term_constr_data.err transform_hlds.term_constr_data.c_date transform_hlds.term_constr_data.s_date transform_hlds.term_constr_data.pic_s_date transform_hlds.term_constr_data.il_date transform_hlds.term_constr_data.java_date : term_constr_data.m \
	transform_hlds.int0 \
	bool.int \
	builtin.int \
	check_hlds.int \
	hlds.int \
	int.int \
	io.int \
	libs.int \
	list.int \
	map.int \
	mdbcomp.int \
	parse_tree.int \
	private_builtin.int \
	set.int \
	std_util.int \
	string.int \
	term.int \
	varset.int \
	hlds.hlds_module.int \
	hlds.hlds_out.int \
	hlds.hlds_pred.int \
	libs.compiler_util.int \
	libs.lp_rational.int \
	libs.polyhedron.int \
	parse_tree.prog_data.int \
	transform_hlds.term_constr_errors.int \
	analysis.int2 \
	array.int2 \
	assoc_list.int2 \
	bag.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	getopt_io.int2 \
	maybe.int2 \
	mode_robdd.int2 \
	multi_map.int2 \
	ops.int2 \
	pair.int2 \
	random.int2 \
	recompilation.int2 \
	relation.int2 \
	robdd.int2 \
	set_ordlist.int2 \
	sparse_bitset.int2 \
	stack.int2 \
	stream.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	unit.int2 \
	univ.int2 \
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
	libs.globals.int2 \
	libs.options.int2 \
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
	transform_hlds.term_constr_main.int2 \
	transform_hlds.term_errors.int2 \
	transform_hlds.term_norm.int2 \
	transform_hlds.term_util.int2

ifeq ($(TARGET_ASM),yes)
transform_hlds.term_constr_data.mh transform_hlds.term_constr_data.mih : transform_hlds.term_constr_data.s
else
transform_hlds.term_constr_data.mh transform_hlds.term_constr_data.mih : transform_hlds.term_constr_data.c
endif

ifeq ($(TARGET_ASM),yes)
transform_hlds.term_constr_data.module_dep : transform_hlds.term_constr_data.s
else
 ifeq ($(findstring il,$(GRADE)),il)
transform_hlds.term_constr_data.module_dep : transform_hlds.term_constr_data.il
  ifeq ($(findstring java,$(GRADE)),java)
transform_hlds.term_constr_data.module_dep : transform_hlds.term_constr_data.java
  else
transform_hlds.term_constr_data.module_dep : transform_hlds.term_constr_data.c
  endif
 endif
endif

transform_hlds.term_constr_data.date transform_hlds.term_constr_data.date0 \
	transform_hlds.date : term_constr_data.m \
	transform_hlds.int0 \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
	hlds.int3 \
	int.int3 \
	io.int3 \
	libs.int3 \
	list.int3 \
	map.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	set.int3 \
	std_util.int3 \
	string.int3 \
	term.int3 \
	varset.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_out.int3 \
	hlds.hlds_pred.int3 \
	libs.compiler_util.int3 \
	libs.lp_rational.int3 \
	libs.polyhedron.int3 \
	parse_tree.prog_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	analysis.int3 \
	array.int3 \
	assoc_list.int3 \
	bag.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt_io.int3 \
	maybe.int3 \
	mode_robdd.int3 \
	multi_map.int3 \
	ops.int3 \
	pair.int3 \
	random.int3 \
	recompilation.int3 \
	relation.int3 \
	robdd.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stack.int3 \
	stream.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
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
	libs.globals.int3 \
	libs.options.int3 \
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
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3

transform_hlds.term_constr_data.date0 \
	transform_hlds.date0 : term_constr_data.m \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
	hlds.int3 \
	int.int3 \
	io.int3 \
	libs.int3 \
	list.int3 \
	map.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	set.int3 \
	std_util.int3 \
	string.int3 \
	term.int3 \
	varset.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_out.int3 \
	hlds.hlds_pred.int3 \
	libs.compiler_util.int3 \
	libs.lp_rational.int3 \
	libs.polyhedron.int3 \
	parse_tree.prog_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	analysis.int3 \
	array.int3 \
	assoc_list.int3 \
	bag.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt_io.int3 \
	maybe.int3 \
	mode_robdd.int3 \
	multi_map.int3 \
	ops.int3 \
	pair.int3 \
	random.int3 \
	recompilation.int3 \
	relation.int3 \
	robdd.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stack.int3 \
	stream.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
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
	libs.globals.int3 \
	libs.options.int3 \
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
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3



transform_hlds.term_constr_data.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



transform_hlds.term_constr_data.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


transform_hlds.term_constr_data.int0 : transform_hlds.term_constr_data.date0
	@:
transform_hlds.term_constr_data.int : transform_hlds.term_constr_data.date
	@:
transform_hlds.term_constr_data.int2 : transform_hlds.term_constr_data.date
	@:
transform_hlds.term_constr_data.int3 : transform_hlds.term_constr_data.date3
	@:
transform_hlds.term_constr_data.opt : transform_hlds.term_constr_data.optdate
	@:
transform_hlds.term_constr_data.trans_opt : transform_hlds.term_constr_data.trans_opt_date
	@:

transform_hlds.term_constr_data.date0 : term_constr_data.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) transform_hlds.term_constr_data
transform_hlds.term_constr_data.date : term_constr_data.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) transform_hlds.term_constr_data
transform_hlds.term_constr_data.date3 : term_constr_data.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) transform_hlds.term_constr_data
transform_hlds.term_constr_data.optdate : term_constr_data.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) transform_hlds.term_constr_data
transform_hlds.term_constr_data.trans_opt_date : term_constr_data.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) transform_hlds.term_constr_data
transform_hlds.term_constr_data.c_date : term_constr_data.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) transform_hlds.term_constr_data $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
transform_hlds.term_constr_data.s_date : term_constr_data.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only transform_hlds.term_constr_data $(ERR_REDIRECT)
transform_hlds.term_constr_data.pic_s_date : term_constr_data.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" transform_hlds.term_constr_data $(ERR_REDIRECT)
endif # TARGET_ASM
transform_hlds.term_constr_data.il_date : term_constr_data.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only transform_hlds.term_constr_data $(ERR_REDIRECT)
transform_hlds.term_constr_data.java_date : term_constr_data.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only transform_hlds.term_constr_data $(ERR_REDIRECT)
