

hlds.hlds_out.hlds_out_util.optdate hlds.hlds_out.hlds_out_util.trans_opt_date hlds_out_util.err hlds.hlds_out.hlds_out_util.c_date hlds.hlds_out.hlds_out_util.s_date hlds.hlds_out.hlds_out_util.pic_s_date hlds.hlds_out.hlds_out_util.il_date hlds.hlds_out.hlds_out_util.java_date : hlds_out_util.m \
	hlds.hlds_out.int0 \
	hlds.int0 \
	assoc_list.int \
	bool.int \
	builtin.int \
	check_hlds.int \
	int.int \
	io.int \
	libs.int \
	list.int \
	map.int \
	mdbcomp.int \
	pair.int \
	parse_tree.int \
	private_builtin.int \
	string.int \
	term.int \
	term_io.int \
	transform_hlds.int \
	varset.int \
	hlds.hlds_data.int \
	hlds.hlds_goal.int \
	hlds.hlds_module.int \
	hlds.hlds_pred.int \
	hlds.hlds_rtti.int \
	hlds.special_pred.int \
	libs.globals.int \
	libs.options.int \
	mdbcomp.prim_data.int \
	parse_tree.error_util.int \
	parse_tree.mercury_to_mercury.int \
	parse_tree.prog_data.int \
	parse_tree.prog_out.int \
	analysis.int2 \
	array.int2 \
	bag.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	digraph.int2 \
	enum.int2 \
	getopt_io.int2 \
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
	set.int2 \
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
	hlds.hlds_llds.int2 \
	hlds.inst_graph.int2 \
	hlds.instmap.int2 \
	hlds.pred_table.int2 \
	libs.lp_rational.int2 \
	libs.polyhedron.int2 \
	libs.rat.int2 \
	libs.timestamp.int2 \
	libs.trace_params.int2 \
	mdbcomp.feedback.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2 \
	mode_robdd.tfeirn.int2 \
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
hlds.hlds_out.hlds_out_util.mh hlds.hlds_out.hlds_out_util.mih : hlds.hlds_out.hlds_out_util.s
else
hlds.hlds_out.hlds_out_util.mh hlds.hlds_out.hlds_out_util.mih : hlds.hlds_out.hlds_out_util.c
endif

ifeq ($(TARGET_ASM),yes)
hlds.hlds_out.hlds_out_util.module_dep : hlds.hlds_out.hlds_out_util.s
else
 ifeq ($(findstring il,$(GRADE)),il)
hlds.hlds_out.hlds_out_util.module_dep : hlds.hlds_out.hlds_out_util.il
  ifeq ($(findstring java,$(GRADE)),java)
hlds.hlds_out.hlds_out_util.module_dep : jmercury/hlds__hlds_out__hlds_out_util.java
  else
hlds.hlds_out.hlds_out_util.module_dep : hlds.hlds_out.hlds_out_util.c
  endif
 endif
endif

hlds.hlds_out.hlds_out_util.date hlds.hlds_out.hlds_out_util.date0 \
	hlds.hlds_out.date \
	hlds.date : hlds_out_util.m \
	hlds.hlds_out.int0 \
	hlds.int0 \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
	int.int3 \
	io.int3 \
	libs.int3 \
	list.int3 \
	map.int3 \
	mdbcomp.int3 \
	pair.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	string.int3 \
	term.int3 \
	term_io.int3 \
	transform_hlds.int3 \
	varset.int3 \
	hlds.hlds_data.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_pred.int3 \
	hlds.hlds_rtti.int3 \
	hlds.special_pred.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.error_util.int3 \
	parse_tree.mercury_to_mercury.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_out.int3 \
	analysis.int3 \
	array.int3 \
	bag.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
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
	set.int3 \
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
	hlds.hlds_llds.int3 \
	hlds.inst_graph.int3 \
	hlds.instmap.int3 \
	hlds.pred_table.int3 \
	libs.lp_rational.int3 \
	libs.polyhedron.int3 \
	libs.rat.int3 \
	libs.timestamp.int3 \
	libs.trace_params.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_item.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3

hlds.hlds_out.hlds_out_util.date0 \
	hlds.hlds_out.date0 \
	hlds.date0 : hlds_out_util.m \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
	int.int3 \
	io.int3 \
	libs.int3 \
	list.int3 \
	map.int3 \
	mdbcomp.int3 \
	pair.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	string.int3 \
	term.int3 \
	term_io.int3 \
	transform_hlds.int3 \
	varset.int3 \
	hlds.hlds_data.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_pred.int3 \
	hlds.hlds_rtti.int3 \
	hlds.special_pred.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.error_util.int3 \
	parse_tree.mercury_to_mercury.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_out.int3 \
	analysis.int3 \
	array.int3 \
	bag.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
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
	set.int3 \
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
	hlds.hlds_llds.int3 \
	hlds.inst_graph.int3 \
	hlds.instmap.int3 \
	hlds.pred_table.int3 \
	libs.lp_rational.int3 \
	libs.polyhedron.int3 \
	libs.rat.int3 \
	libs.timestamp.int3 \
	libs.trace_params.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_item.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3



hlds.hlds_out.hlds_out_util.$O :  \
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



hlds.hlds_out.hlds_out_util.pic_o :  \
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


hlds.hlds_out.hlds_out_util.int0 : hlds.hlds_out.hlds_out_util.date0
	@:
hlds.hlds_out.hlds_out_util.int : hlds.hlds_out.hlds_out_util.date
	@:
hlds.hlds_out.hlds_out_util.int2 : hlds.hlds_out.hlds_out_util.date
	@:
hlds.hlds_out.hlds_out_util.int3 : hlds.hlds_out.hlds_out_util.date3
	@:
hlds.hlds_out.hlds_out_util.opt : hlds.hlds_out.hlds_out_util.optdate
	@:
hlds.hlds_out.hlds_out_util.trans_opt : hlds.hlds_out.hlds_out_util.trans_opt_date
	@:

hlds.hlds_out.hlds_out_util.date0 : hlds_out_util.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) hlds.hlds_out.hlds_out_util
hlds.hlds_out.hlds_out_util.date : hlds_out_util.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) hlds.hlds_out.hlds_out_util
hlds.hlds_out.hlds_out_util.date3 : hlds_out_util.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) hlds.hlds_out.hlds_out_util
hlds.hlds_out.hlds_out_util.optdate : hlds_out_util.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) hlds.hlds_out.hlds_out_util
hlds.hlds_out.hlds_out_util.trans_opt_date : hlds_out_util.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) hlds.hlds_out.hlds_out_util
hlds.hlds_out.hlds_out_util.c_date : hlds_out_util.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) hlds.hlds_out.hlds_out_util $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
hlds.hlds_out.hlds_out_util.s_date : hlds_out_util.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only hlds.hlds_out.hlds_out_util $(ERR_REDIRECT)
hlds.hlds_out.hlds_out_util.pic_s_date : hlds_out_util.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" hlds.hlds_out.hlds_out_util $(ERR_REDIRECT)
endif # TARGET_ASM
hlds.hlds_out.hlds_out_util.il_date : hlds_out_util.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only hlds.hlds_out.hlds_out_util $(ERR_REDIRECT)
hlds.hlds_out.hlds_out_util.java_date : hlds_out_util.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only hlds.hlds_out.hlds_out_util $(ERR_REDIRECT)
