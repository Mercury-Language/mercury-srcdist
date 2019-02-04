

parse_tree.write_deps_file.optdate parse_tree.write_deps_file.trans_opt_date write_deps_file.err parse_tree.write_deps_file.c_date parse_tree.write_deps_file.s_date parse_tree.write_deps_file.pic_s_date parse_tree.write_deps_file.il_date parse_tree.write_deps_file.java_date : write_deps_file.m \
	parse_tree.int0 \
	assoc_list.int \
	bool.int \
	builtin.int \
	cord.int \
	dir.int \
	io.int \
	library.int \
	libs.int \
	list.int \
	make.int \
	map.int \
	maybe.int \
	mdbcomp.int \
	pair.int \
	private_builtin.int \
	require.int \
	set.int \
	string.int \
	libs.file_util.int \
	libs.globals.int \
	libs.options.int \
	mdbcomp.prim_data.int \
	parse_tree.deps_map.int \
	parse_tree.file_names.int \
	parse_tree.module_cmds.int \
	parse_tree.module_imports.int \
	parse_tree.prog_data.int \
	parse_tree.prog_foreign.int \
	parse_tree.prog_io.int \
	parse_tree.prog_item.int \
	parse_tree.source_file_map.int \
	analysis.int2 \
	array.int2 \
	bag.int2 \
	bimap.int2 \
	bitmap.int2 \
	char.int2 \
	check_hlds.int2 \
	construct.int2 \
	deconstruct.int2 \
	digraph.int2 \
	enum.int2 \
	getopt_io.int2 \
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
	libs.trace_params.int2 \
	make.options_file.int2 \
	mdbcomp.feedback.int2 \
	mdbcomp.goal_path.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2 \
	mode_robdd.tfeirn.int2 \
	parse_tree.error_util.int2 \
	parse_tree.module_qual.int2 \
	parse_tree.prog_io_util.int2 \
	parse_tree.set_of_var.int2 \
	transform_hlds.term_constr_data.int2 \
	transform_hlds.term_constr_errors.int2 \
	transform_hlds.term_constr_main.int2 \
	transform_hlds.term_errors.int2 \
	transform_hlds.term_norm.int2 \
	transform_hlds.term_util.int2 \
	mdbcomp.feedback.automatic_parallelism.int2

ifeq ($(TARGET_ASM),yes)
parse_tree.write_deps_file.mh parse_tree.write_deps_file.mih : parse_tree.write_deps_file.s
else
parse_tree.write_deps_file.mh parse_tree.write_deps_file.mih : parse_tree.write_deps_file.c
endif

ifeq ($(TARGET_ASM),yes)
parse_tree.write_deps_file.module_dep : parse_tree.write_deps_file.s
else
 ifeq ($(findstring il,$(GRADE)),il)
parse_tree.write_deps_file.module_dep : parse_tree.write_deps_file.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
parse_tree.write_deps_file.module_dep : jmercury/parse_tree__write_deps_file.java
  else
parse_tree.write_deps_file.module_dep : parse_tree.write_deps_file.c
  endif
 endif
endif

parse_tree.write_deps_file.date parse_tree.write_deps_file.date0 \
	parse_tree.date : write_deps_file.m \
	parse_tree.int0 \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	cord.int3 \
	dir.int3 \
	io.int3 \
	library.int3 \
	libs.int3 \
	list.int3 \
	make.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	libs.file_util.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.deps_map.int3 \
	parse_tree.file_names.int3 \
	parse_tree.module_cmds.int3 \
	parse_tree.module_imports.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_io.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.source_file_map.int3 \
	analysis.int3 \
	array.int3 \
	bag.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	check_hlds.int3 \
	construct.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
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
	libs.trace_params.int3 \
	make.options_file.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.error_util.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_io_util.int3 \
	parse_tree.set_of_var.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3 \
	mdbcomp.feedback.automatic_parallelism.int3

parse_tree.write_deps_file.date0 \
	parse_tree.date0 : write_deps_file.m \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	cord.int3 \
	dir.int3 \
	io.int3 \
	library.int3 \
	libs.int3 \
	list.int3 \
	make.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	libs.file_util.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.deps_map.int3 \
	parse_tree.file_names.int3 \
	parse_tree.module_cmds.int3 \
	parse_tree.module_imports.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_io.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.source_file_map.int3 \
	analysis.int3 \
	array.int3 \
	bag.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	check_hlds.int3 \
	construct.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
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
	libs.trace_params.int3 \
	make.options_file.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.error_util.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_io_util.int3 \
	parse_tree.set_of_var.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3 \
	mdbcomp.feedback.automatic_parallelism.int3



parse_tree.write_deps_file.$O :  \
	array.mh \
	array.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	dir.mh \
	dir.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh



parse_tree.write_deps_file.pic_o :  \
	array.mh \
	array.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	dir.mh \
	dir.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh


parse_tree.write_deps_file.int0 : parse_tree.write_deps_file.date0
	@:
parse_tree.write_deps_file.int : parse_tree.write_deps_file.date
	@:
parse_tree.write_deps_file.int2 : parse_tree.write_deps_file.date
	@:
parse_tree.write_deps_file.int3 : parse_tree.write_deps_file.date3
	@:
parse_tree.write_deps_file.opt : parse_tree.write_deps_file.optdate
	@:
parse_tree.write_deps_file.trans_opt : parse_tree.write_deps_file.trans_opt_date
	@:

parse_tree.write_deps_file.date0 : write_deps_file.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) parse_tree.write_deps_file
parse_tree.write_deps_file.date : write_deps_file.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) parse_tree.write_deps_file
parse_tree.write_deps_file.date3 : write_deps_file.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) parse_tree.write_deps_file
parse_tree.write_deps_file.optdate : write_deps_file.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) parse_tree.write_deps_file
parse_tree.write_deps_file.trans_opt_date : write_deps_file.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) parse_tree.write_deps_file
parse_tree.write_deps_file.c_date : write_deps_file.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) parse_tree.write_deps_file $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
parse_tree.write_deps_file.s_date : write_deps_file.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only parse_tree.write_deps_file $(ERR_REDIRECT)
parse_tree.write_deps_file.pic_s_date : write_deps_file.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" parse_tree.write_deps_file $(ERR_REDIRECT)
endif # TARGET_ASM
parse_tree.write_deps_file.il_date : write_deps_file.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only parse_tree.write_deps_file $(ERR_REDIRECT)
parse_tree.write_deps_file.java_date : write_deps_file.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only parse_tree.write_deps_file $(ERR_REDIRECT)
