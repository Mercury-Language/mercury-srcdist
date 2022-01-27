

libs.handle_options.optdate libs.handle_options.trans_opt_date handle_options.err libs.handle_options.c_date libs.handle_options.s_date libs.handle_options.pic_s_date libs.handle_options.il_date libs.handle_options.java_date : handle_options.m \
	libs.int0 \
	analysis.int \
	bool.int \
	builtin.int \
	char.int \
	dir.int \
	getopt_io.int \
	int.int \
	io.int \
	library.int \
	list.int \
	map.int \
	maybe.int \
	mdbcomp.int \
	pair.int \
	parse_tree.int \
	private_builtin.int \
	set.int \
	solutions.int \
	std_util.int \
	string.int \
	libs.compiler_util.int \
	libs.globals.int \
	libs.options.int \
	libs.trace_params.int \
	mdbcomp.feedback.int \
	parse_tree.error_util.int \
	array.int2 \
	assoc_list.int2 \
	bag.int2 \
	bimap.int2 \
	bitmap.int2 \
	check_hlds.int2 \
	construct.int2 \
	deconstruct.int2 \
	digraph.int2 \
	enum.int2 \
	hlds.int2 \
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
	hlds.hlds_rtti.int2 \
	hlds.inst_graph.int2 \
	hlds.instmap.int2 \
	hlds.pred_table.int2 \
	hlds.special_pred.int2 \
	libs.lp_rational.int2 \
	libs.polyhedron.int2 \
	libs.rat.int2 \
	libs.timestamp.int2 \
	mdbcomp.goal_path.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2 \
	mode_robdd.tfeirn.int2 \
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

libs.handle_options.pic_o libs.handle_options.$O : \
	analysis.mih \
	array.mih \
	assoc_list.mih \
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
	dir.mih \
	enum.mih \
	getopt_io.mih \
	hlds.mih \
	int.mih \
	io.mih \
	library.mih \
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
	solutions.mih \
	sparse_bitset.mih \
	stack.mih \
	std_util.mih \
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
	libs.compiler_util.mih \
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

libs.handle_options.mh libs.handle_options.mih : libs.handle_options.c


ifeq ($(findstring il,$(GRADE)),il)
libs.handle_options.module_dep : libs.handle_options.il
else
 ifeq ($(findstring java,$(GRADE)),java)
libs.handle_options.module_dep : jmercury/libs__handle_options.java
 else
libs.handle_options.module_dep : libs.handle_options.c
 endif
endif


libs.handle_options.date libs.handle_options.date0 \
	libs.date : handle_options.m \
	libs.int0 \
	analysis.int3 \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	dir.int3 \
	getopt_io.int3 \
	int.int3 \
	io.int3 \
	library.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	pair.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	set.int3 \
	solutions.int3 \
	std_util.int3 \
	string.int3 \
	libs.compiler_util.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	libs.trace_params.int3 \
	mdbcomp.feedback.int3 \
	parse_tree.error_util.int3 \
	array.int3 \
	assoc_list.int3 \
	bag.int3 \
	bimap.int3 \
	bitmap.int3 \
	check_hlds.int3 \
	construct.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	hlds.int3 \
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
	hlds.hlds_rtti.int3 \
	hlds.inst_graph.int3 \
	hlds.instmap.int3 \
	hlds.pred_table.int3 \
	hlds.special_pred.int3 \
	libs.lp_rational.int3 \
	libs.polyhedron.int3 \
	libs.rat.int3 \
	libs.timestamp.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
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

libs.handle_options.date0 \
	libs.date0 : handle_options.m \
	analysis.int3 \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	dir.int3 \
	getopt_io.int3 \
	int.int3 \
	io.int3 \
	library.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	pair.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	set.int3 \
	solutions.int3 \
	std_util.int3 \
	string.int3 \
	libs.compiler_util.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	libs.trace_params.int3 \
	mdbcomp.feedback.int3 \
	parse_tree.error_util.int3 \
	array.int3 \
	assoc_list.int3 \
	bag.int3 \
	bimap.int3 \
	bitmap.int3 \
	check_hlds.int3 \
	construct.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	hlds.int3 \
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
	hlds.hlds_rtti.int3 \
	hlds.inst_graph.int3 \
	hlds.instmap.int3 \
	hlds.pred_table.int3 \
	hlds.special_pred.int3 \
	libs.lp_rational.int3 \
	libs.polyhedron.int3 \
	libs.rat.int3 \
	libs.timestamp.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
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



libs.handle_options.$O :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	dir.mh \
	dir.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	libs.handle_options.mh



libs.handle_options.pic_o :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	dir.mh \
	dir.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	libs.handle_options.mh


libs.handle_options.int0 : libs.handle_options.date0
	@:
libs.handle_options.int : libs.handle_options.date
	@:
libs.handle_options.int2 : libs.handle_options.date
	@:
libs.handle_options.int3 : libs.handle_options.date3
	@:
libs.handle_options.opt : libs.handle_options.optdate
	@:
libs.handle_options.trans_opt : libs.handle_options.trans_opt_date
	@:

libs.handle_options.date0 : handle_options.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) libs.handle_options
libs.handle_options.date : handle_options.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) libs.handle_options
libs.handle_options.date3 : handle_options.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) libs.handle_options
libs.handle_options.optdate : handle_options.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) libs.handle_options
libs.handle_options.trans_opt_date : handle_options.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) libs.handle_options
libs.handle_options.c_date : handle_options.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) libs.handle_options $(ERR_REDIRECT)
libs.handle_options.il_date : handle_options.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only libs.handle_options $(ERR_REDIRECT)
libs.handle_options.java_date : handle_options.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only libs.handle_options $(ERR_REDIRECT)
