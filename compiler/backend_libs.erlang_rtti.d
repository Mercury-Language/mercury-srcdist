

backend_libs.erlang_rtti.optdate backend_libs.erlang_rtti.trans_opt_date erlang_rtti.err backend_libs.erlang_rtti.c_date backend_libs.erlang_rtti.s_date backend_libs.erlang_rtti.pic_s_date backend_libs.erlang_rtti.il_date backend_libs.erlang_rtti.java_date : erlang_rtti.m \
	backend_libs.int0 \
	builtin.int \
	hlds.int \
	list.int \
	maybe.int \
	mdbcomp.int \
	private_builtin.int \
	backend_libs.rtti.int \
	hlds.hlds_rtti.int \
	mdbcomp.prim_data.int \
	analysis.int2 \
	array.int2 \
	assoc_list.int2 \
	bag.int2 \
	bimap.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	check_hlds.int2 \
	construct.int2 \
	deconstruct.int2 \
	digraph.int2 \
	enum.int2 \
	getopt_io.int2 \
	io.int2 \
	libs.int2 \
	map.int2 \
	mode_robdd.int2 \
	multi_map.int2 \
	ops.int2 \
	pair.int2 \
	parse_tree.int2 \
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
	tree_bitset.int2 \
	type_desc.int2 \
	unit.int2 \
	univ.int2 \
	varset.int2 \
	check_hlds.delay_info.int2 \
	check_hlds.mode_constraint_robdd.int2 \
	check_hlds.mode_errors.int2 \
	check_hlds.mode_info.int2 \
	check_hlds.unify_proc.int2 \
	hlds.const_struct.int2 \
	hlds.hlds_args.int2 \
	hlds.hlds_clauses.int2 \
	hlds.hlds_data.int2 \
	hlds.hlds_goal.int2 \
	hlds.hlds_llds.int2 \
	hlds.hlds_module.int2 \
	hlds.hlds_pred.int2 \
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
	mdbcomp.goal_path.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2 \
	mode_robdd.tfeirn.int2 \
	parse_tree.error_util.int2 \
	parse_tree.module_qual.int2 \
	parse_tree.prog_data.int2 \
	parse_tree.prog_foreign.int2 \
	parse_tree.prog_item.int2 \
	parse_tree.set_of_var.int2 \
	transform_hlds.term_constr_data.int2 \
	transform_hlds.term_constr_errors.int2 \
	transform_hlds.term_constr_main.int2 \
	transform_hlds.term_errors.int2 \
	transform_hlds.term_norm.int2 \
	transform_hlds.term_util.int2 \
	mdbcomp.feedback.automatic_parallelism.int2

backend_libs.erlang_rtti.pic_o backend_libs.erlang_rtti.$O : \
	analysis.mih \
	array.mih \
	assoc_list.mih \
	backend_libs.mih \
	bag.mih \
	bimap.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
	char.mih \
	check_hlds.mih \
	construct.mih \
	deconstruct.mih \
	digraph.mih \
	enum.mih \
	getopt_io.mih \
	hlds.mih \
	io.mih \
	libs.mih \
	list.mih \
	map.mih \
	maybe.mih \
	mdbcomp.mih \
	mode_robdd.mih \
	multi_map.mih \
	ops.mih \
	pair.mih \
	parse_tree.mih \
	pretty_printer.mih \
	private_builtin.mih \
	queue.mih \
	random.mih \
	recompilation.mih \
	robdd.mih \
	rtti_implementation.mih \
	set.mih \
	set_ordlist.mih \
	sparse_bitset.mih \
	stack.mih \
	stream.mih \
	string.mih \
	term.mih \
	time.mih \
	tree234.mih \
	tree_bitset.mih \
	type_desc.mih \
	unit.mih \
	univ.mih \
	varset.mih \
	backend_libs.rtti.mih \
	check_hlds.delay_info.mih \
	check_hlds.mode_constraint_robdd.mih \
	check_hlds.mode_errors.mih \
	check_hlds.mode_info.mih \
	check_hlds.unify_proc.mih \
	hlds.const_struct.mih \
	hlds.hlds_args.mih \
	hlds.hlds_clauses.mih \
	hlds.hlds_data.mih \
	hlds.hlds_goal.mih \
	hlds.hlds_llds.mih \
	hlds.hlds_module.mih \
	hlds.hlds_pred.mih \
	hlds.hlds_rtti.mih \
	hlds.inst_graph.mih \
	hlds.instmap.mih \
	hlds.pred_table.mih \
	hlds.special_pred.mih \
	libs.globals.mih \
	libs.lp_rational.mih \
	libs.options.mih \
	libs.polyhedron.mih \
	libs.rat.mih \
	libs.timestamp.mih \
	libs.trace_params.mih \
	mdbcomp.feedback.mih \
	mdbcomp.goal_path.mih \
	mdbcomp.prim_data.mih \
	mdbcomp.program_representation.mih \
	mdbcomp.rtti_access.mih \
	mdbcomp.trace_counts.mih \
	mode_robdd.tfeirn.mih \
	parse_tree.error_util.mih \
	parse_tree.module_qual.mih \
	parse_tree.prog_data.mih \
	parse_tree.prog_foreign.mih \
	parse_tree.prog_item.mih \
	parse_tree.set_of_var.mih \
	transform_hlds.term_constr_data.mih \
	transform_hlds.term_constr_errors.mih \
	transform_hlds.term_constr_main.mih \
	transform_hlds.term_errors.mih \
	transform_hlds.term_norm.mih \
	transform_hlds.term_util.mih \
	mdbcomp.feedback.automatic_parallelism.mih

backend_libs.erlang_rtti.mh backend_libs.erlang_rtti.mih : backend_libs.erlang_rtti.c


ifeq ($(findstring il,$(GRADE)),il)
backend_libs.erlang_rtti.module_dep : backend_libs.erlang_rtti.il
else
 ifeq ($(findstring java,$(GRADE)),java)
backend_libs.erlang_rtti.module_dep : jmercury/backend_libs__erlang_rtti.java
 else
backend_libs.erlang_rtti.module_dep : backend_libs.erlang_rtti.c
 endif
endif


backend_libs.erlang_rtti.date backend_libs.erlang_rtti.date0 \
	backend_libs.date : erlang_rtti.m \
	backend_libs.int0 \
	builtin.int3 \
	hlds.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	backend_libs.rtti.int3 \
	hlds.hlds_rtti.int3 \
	mdbcomp.prim_data.int3 \
	analysis.int3 \
	array.int3 \
	assoc_list.int3 \
	bag.int3 \
	bimap.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	check_hlds.int3 \
	construct.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
	io.int3 \
	libs.int3 \
	map.int3 \
	mode_robdd.int3 \
	multi_map.int3 \
	ops.int3 \
	pair.int3 \
	parse_tree.int3 \
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
	tree_bitset.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	varset.int3 \
	check_hlds.delay_info.int3 \
	check_hlds.mode_constraint_robdd.int3 \
	check_hlds.mode_errors.int3 \
	check_hlds.mode_info.int3 \
	check_hlds.unify_proc.int3 \
	hlds.const_struct.int3 \
	hlds.hlds_args.int3 \
	hlds.hlds_clauses.int3 \
	hlds.hlds_data.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_llds.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_pred.int3 \
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
	mdbcomp.goal_path.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.error_util.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.set_of_var.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3 \
	mdbcomp.feedback.automatic_parallelism.int3

backend_libs.erlang_rtti.date0 \
	backend_libs.date0 : erlang_rtti.m \
	builtin.int3 \
	hlds.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	backend_libs.rtti.int3 \
	hlds.hlds_rtti.int3 \
	mdbcomp.prim_data.int3 \
	analysis.int3 \
	array.int3 \
	assoc_list.int3 \
	bag.int3 \
	bimap.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	check_hlds.int3 \
	construct.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
	io.int3 \
	libs.int3 \
	map.int3 \
	mode_robdd.int3 \
	multi_map.int3 \
	ops.int3 \
	pair.int3 \
	parse_tree.int3 \
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
	tree_bitset.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	varset.int3 \
	check_hlds.delay_info.int3 \
	check_hlds.mode_constraint_robdd.int3 \
	check_hlds.mode_errors.int3 \
	check_hlds.mode_info.int3 \
	check_hlds.unify_proc.int3 \
	hlds.const_struct.int3 \
	hlds.hlds_args.int3 \
	hlds.hlds_clauses.int3 \
	hlds.hlds_data.int3 \
	hlds.hlds_goal.int3 \
	hlds.hlds_llds.int3 \
	hlds.hlds_module.int3 \
	hlds.hlds_pred.int3 \
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
	mdbcomp.goal_path.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.error_util.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.set_of_var.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3 \
	mdbcomp.feedback.automatic_parallelism.int3



backend_libs.erlang_rtti.$O :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	array.mh \
	array.mh



backend_libs.erlang_rtti.pic_o :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	array.mh \
	array.mh


backend_libs.erlang_rtti.int0 : backend_libs.erlang_rtti.date0
	@:
backend_libs.erlang_rtti.int : backend_libs.erlang_rtti.date
	@:
backend_libs.erlang_rtti.int2 : backend_libs.erlang_rtti.date
	@:
backend_libs.erlang_rtti.int3 : backend_libs.erlang_rtti.date3
	@:
backend_libs.erlang_rtti.opt : backend_libs.erlang_rtti.optdate
	@:
backend_libs.erlang_rtti.trans_opt : backend_libs.erlang_rtti.trans_opt_date
	@:

backend_libs.erlang_rtti.date0 : erlang_rtti.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) backend_libs.erlang_rtti
backend_libs.erlang_rtti.date : erlang_rtti.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) backend_libs.erlang_rtti
backend_libs.erlang_rtti.date3 : erlang_rtti.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) backend_libs.erlang_rtti
backend_libs.erlang_rtti.optdate : erlang_rtti.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) backend_libs.erlang_rtti
backend_libs.erlang_rtti.trans_opt_date : erlang_rtti.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) backend_libs.erlang_rtti
backend_libs.erlang_rtti.c_date : erlang_rtti.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) backend_libs.erlang_rtti $(ERR_REDIRECT)
backend_libs.erlang_rtti.il_date : erlang_rtti.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only backend_libs.erlang_rtti $(ERR_REDIRECT)
backend_libs.erlang_rtti.java_date : erlang_rtti.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only backend_libs.erlang_rtti $(ERR_REDIRECT)
