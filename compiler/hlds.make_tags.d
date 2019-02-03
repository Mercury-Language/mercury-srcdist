

hlds.make_tags.optdate hlds.make_tags.trans_opt_date make_tags.err hlds.make_tags.c_date hlds.make_tags.s_date hlds.make_tags.pic_s_date hlds.make_tags.il_date hlds.make_tags.java_date : make_tags.m \
	hlds.int0 \
	bool.int \
	builtin.int \
	check_hlds.int \
	int.int \
	libs.int \
	list.int \
	map.int \
	maybe.int \
	mdbcomp.int \
	parse_tree.int \
	private_builtin.int \
	svmap.int \
	transform_hlds.int \
	hlds.hlds_data.int \
	libs.compiler_util.int \
	libs.globals.int \
	libs.options.int \
	parse_tree.prog_data.int \
	parse_tree.prog_type.int \
	parse_tree.prog_util.int \
	analysis.int2 \
	array.int2 \
	assoc_list.int2 \
	bag.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	digraph.int2 \
	enum.int2 \
	getopt_io.int2 \
	io.int2 \
	mode_robdd.int2 \
	multi_map.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	queue.int2 \
	random.int2 \
	recompilation.int2 \
	robdd.int2 \
	rtti_implementation.int2 \
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
	mdbcomp.feedback.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2 \
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
hlds.make_tags.mh hlds.make_tags.mih : hlds.make_tags.s
else
hlds.make_tags.mh hlds.make_tags.mih : hlds.make_tags.c
endif

ifeq ($(TARGET_ASM),yes)
hlds.make_tags.module_dep : hlds.make_tags.s
else
 ifeq ($(findstring il,$(GRADE)),il)
hlds.make_tags.module_dep : hlds.make_tags.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
hlds.make_tags.module_dep : jmercury/hlds__make_tags.java
  else
hlds.make_tags.module_dep : hlds.make_tags.c
  endif
 endif
endif

hlds.make_tags.date hlds.make_tags.date0 \
	hlds.date : make_tags.m \
	hlds.int0 \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
	int.int3 \
	libs.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	svmap.int3 \
	transform_hlds.int3 \
	hlds.hlds_data.int3 \
	libs.compiler_util.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_type.int3 \
	parse_tree.prog_util.int3 \
	analysis.int3 \
	array.int3 \
	assoc_list.int3 \
	bag.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
	io.int3 \
	mode_robdd.int3 \
	multi_map.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	queue.int3 \
	random.int3 \
	recompilation.int3 \
	robdd.int3 \
	rtti_implementation.int3 \
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
	mdbcomp.feedback.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
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

hlds.make_tags.date0 \
	hlds.date0 : make_tags.m \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
	int.int3 \
	libs.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	svmap.int3 \
	transform_hlds.int3 \
	hlds.hlds_data.int3 \
	libs.compiler_util.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_type.int3 \
	parse_tree.prog_util.int3 \
	analysis.int3 \
	array.int3 \
	assoc_list.int3 \
	bag.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
	io.int3 \
	mode_robdd.int3 \
	multi_map.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	queue.int3 \
	random.int3 \
	recompilation.int3 \
	robdd.int3 \
	rtti_implementation.int3 \
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
	mdbcomp.feedback.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
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



hlds.make_tags.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	string.mh \
	io.mh \
	io.mh



hlds.make_tags.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	string.mh \
	io.mh \
	io.mh


hlds.make_tags.int0 : hlds.make_tags.date0
	@:
hlds.make_tags.int : hlds.make_tags.date
	@:
hlds.make_tags.int2 : hlds.make_tags.date
	@:
hlds.make_tags.int3 : hlds.make_tags.date3
	@:
hlds.make_tags.opt : hlds.make_tags.optdate
	@:
hlds.make_tags.trans_opt : hlds.make_tags.trans_opt_date
	@:

hlds.make_tags.date0 : make_tags.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) hlds.make_tags
hlds.make_tags.date : make_tags.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) hlds.make_tags
hlds.make_tags.date3 : make_tags.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) hlds.make_tags
hlds.make_tags.optdate : make_tags.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) hlds.make_tags
hlds.make_tags.trans_opt_date : make_tags.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) hlds.make_tags
hlds.make_tags.c_date : make_tags.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) hlds.make_tags $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
hlds.make_tags.s_date : make_tags.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only hlds.make_tags $(ERR_REDIRECT)
hlds.make_tags.pic_s_date : make_tags.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" hlds.make_tags $(ERR_REDIRECT)
endif # TARGET_ASM
hlds.make_tags.il_date : make_tags.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only hlds.make_tags $(ERR_REDIRECT)
hlds.make_tags.java_date : make_tags.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only hlds.make_tags $(ERR_REDIRECT)
