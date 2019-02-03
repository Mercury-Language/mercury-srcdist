

erl_backend.elds.optdate erl_backend.elds.trans_opt_date elds.err erl_backend.elds.c_date erl_backend.elds.s_date erl_backend.elds.pic_s_date erl_backend.elds.il_date erl_backend.elds.java_date : elds.m \
	erl_backend.int0 \
	backend_libs.int \
	bool.int \
	builtin.int \
	char.int \
	check_hlds.int \
	hlds.int \
	libs.int \
	list.int \
	maybe.int \
	mdbcomp.int \
	parse_tree.int \
	private_builtin.int \
	set.int \
	backend_libs.rtti.int \
	hlds.hlds_pred.int \
	libs.compiler_util.int \
	mdbcomp.prim_data.int \
	parse_tree.prog_data.int \
	parse_tree.prog_foreign.int \
	analysis.int2 \
	array.int2 \
	assoc_list.int2 \
	bag.int2 \
	bitmap.int2 \
	construct.int2 \
	deconstruct.int2 \
	digraph.int2 \
	enum.int2 \
	getopt_io.int2 \
	int.int2 \
	io.int2 \
	map.int2 \
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
	hlds.hlds_goal.int2 \
	hlds.hlds_llds.int2 \
	hlds.hlds_module.int2 \
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
	mdbcomp.feedback.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2 \
	mode_robdd.tfeirn.int2 \
	parse_tree.error_util.int2 \
	parse_tree.module_qual.int2 \
	parse_tree.prog_item.int2 \
	transform_hlds.term_constr_data.int2 \
	transform_hlds.term_constr_errors.int2 \
	transform_hlds.term_constr_main.int2 \
	transform_hlds.term_errors.int2 \
	transform_hlds.term_norm.int2 \
	transform_hlds.term_util.int2

ifeq ($(TARGET_ASM),yes)
erl_backend.elds.mh erl_backend.elds.mih : erl_backend.elds.s
else
erl_backend.elds.mh erl_backend.elds.mih : erl_backend.elds.c
endif

ifeq ($(TARGET_ASM),yes)
erl_backend.elds.module_dep : erl_backend.elds.s
else
 ifeq ($(findstring il,$(GRADE)),il)
erl_backend.elds.module_dep : erl_backend.elds.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
erl_backend.elds.module_dep : jmercury/erl_backend__elds.java
  else
erl_backend.elds.module_dep : erl_backend.elds.c
  endif
 endif
endif

erl_backend.elds.date erl_backend.elds.date0 \
	erl_backend.date : elds.m \
	erl_backend.int0 \
	backend_libs.int3 \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	check_hlds.int3 \
	hlds.int3 \
	libs.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	set.int3 \
	backend_libs.rtti.int3 \
	hlds.hlds_pred.int3 \
	libs.compiler_util.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_foreign.int3 \
	analysis.int3 \
	array.int3 \
	assoc_list.int3 \
	bag.int3 \
	bitmap.int3 \
	construct.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
	int.int3 \
	io.int3 \
	map.int3 \
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
	hlds.hlds_goal.int3 \
	hlds.hlds_llds.int3 \
	hlds.hlds_module.int3 \
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
	mdbcomp.feedback.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.error_util.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_item.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3

erl_backend.elds.date0 \
	erl_backend.date0 : elds.m \
	backend_libs.int3 \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	check_hlds.int3 \
	hlds.int3 \
	libs.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	set.int3 \
	backend_libs.rtti.int3 \
	hlds.hlds_pred.int3 \
	libs.compiler_util.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_foreign.int3 \
	analysis.int3 \
	array.int3 \
	assoc_list.int3 \
	bag.int3 \
	bitmap.int3 \
	construct.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
	int.int3 \
	io.int3 \
	map.int3 \
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
	hlds.hlds_goal.int3 \
	hlds.hlds_llds.int3 \
	hlds.hlds_module.int3 \
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
	mdbcomp.feedback.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.error_util.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_item.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3



erl_backend.elds.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	string.mh \
	io.mh \
	io.mh



erl_backend.elds.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	string.mh \
	io.mh \
	io.mh


erl_backend.elds.int0 : erl_backend.elds.date0
	@:
erl_backend.elds.int : erl_backend.elds.date
	@:
erl_backend.elds.int2 : erl_backend.elds.date
	@:
erl_backend.elds.int3 : erl_backend.elds.date3
	@:
erl_backend.elds.opt : erl_backend.elds.optdate
	@:
erl_backend.elds.trans_opt : erl_backend.elds.trans_opt_date
	@:

erl_backend.elds.date0 : elds.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) erl_backend.elds
erl_backend.elds.date : elds.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) erl_backend.elds
erl_backend.elds.date3 : elds.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) erl_backend.elds
erl_backend.elds.optdate : elds.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) erl_backend.elds
erl_backend.elds.trans_opt_date : elds.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) erl_backend.elds
erl_backend.elds.c_date : elds.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) erl_backend.elds $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
erl_backend.elds.s_date : elds.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only erl_backend.elds $(ERR_REDIRECT)
erl_backend.elds.pic_s_date : elds.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" erl_backend.elds $(ERR_REDIRECT)
endif # TARGET_ASM
erl_backend.elds.il_date : elds.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only erl_backend.elds $(ERR_REDIRECT)
erl_backend.elds.java_date : elds.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only erl_backend.elds $(ERR_REDIRECT)
