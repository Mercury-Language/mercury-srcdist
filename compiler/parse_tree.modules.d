

parse_tree.modules.optdate parse_tree.modules.trans_opt_date modules.err parse_tree.modules.c_date parse_tree.modules.s_date parse_tree.modules.pic_s_date parse_tree.modules.il_date parse_tree.modules.java_date : modules.m \
	parse_tree.int0 \
	assoc_list.int \
	bool.int \
	builtin.int \
	char.int \
	digraph.int \
	dir.int \
	getopt_io.int \
	int.int \
	io.int \
	library.int \
	libs.int \
	list.int \
	make.int \
	map.int \
	maybe.int \
	mdbcomp.int \
	multi_map.int \
	pair.int \
	private_builtin.int \
	set.int \
	solutions.int \
	sparse_bitset.int \
	string.int \
	svmap.int \
	svset.int \
	term.int \
	unit.int \
	varset.int \
	hlds.passes_aux.int \
	libs.compiler_util.int \
	libs.file_util.int \
	libs.globals.int \
	libs.handle_options.int \
	libs.options.int \
	libs.timestamp.int \
	mdbcomp.prim_data.int \
	parse_tree.deps_map.int \
	parse_tree.error_util.int \
	parse_tree.file_names.int \
	parse_tree.mercury_to_mercury.int \
	parse_tree.module_cmds.int \
	parse_tree.module_imports.int \
	parse_tree.module_qual.int \
	parse_tree.prog_data.int \
	parse_tree.prog_foreign.int \
	parse_tree.prog_io.int \
	parse_tree.prog_item.int \
	parse_tree.prog_mutable.int \
	parse_tree.prog_out.int \
	parse_tree.prog_type.int \
	parse_tree.prog_util.int \
	parse_tree.read_modules.int \
	parse_tree.source_file_map.int \
	parse_tree.write_deps_file.int \
	recompilation.version.int \
	analysis.int2 \
	array.int2 \
	bag.int2 \
	bitmap.int2 \
	check_hlds.int2 \
	construct.int2 \
	cord.int2 \
	deconstruct.int2 \
	enum.int2 \
	hlds.int2 \
	mode_robdd.int2 \
	ops.int2 \
	pretty_printer.int2 \
	random.int2 \
	recompilation.int2 \
	robdd.int2 \
	set_ordlist.int2 \
	stack.int2 \
	stream.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
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
	libs.trace_params.int2 \
	make.options_file.int2 \
	mdbcomp.feedback.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2 \
	mode_robdd.tfeirn.int2 \
	parse_tree.prog_io_util.int2 \
	transform_hlds.term_constr_data.int2 \
	transform_hlds.term_constr_errors.int2 \
	transform_hlds.term_constr_main.int2 \
	transform_hlds.term_errors.int2 \
	transform_hlds.term_norm.int2 \
	transform_hlds.term_util.int2

ifeq ($(TARGET_ASM),yes)
parse_tree.modules.mh parse_tree.modules.mih : parse_tree.modules.s
else
parse_tree.modules.mh parse_tree.modules.mih : parse_tree.modules.c
endif

ifeq ($(TARGET_ASM),yes)
parse_tree.modules.module_dep : parse_tree.modules.s
else
 ifeq ($(findstring il,$(GRADE)),il)
parse_tree.modules.module_dep : parse_tree.modules.il
  ifeq ($(findstring java,$(GRADE)),java)
parse_tree.modules.module_dep : parse_tree.modules.java
  else
parse_tree.modules.module_dep : parse_tree.modules.c
  endif
 endif
endif

parse_tree.modules.date parse_tree.modules.date0 \
	parse_tree.date : modules.m \
	parse_tree.int0 \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	digraph.int3 \
	dir.int3 \
	getopt_io.int3 \
	int.int3 \
	io.int3 \
	library.int3 \
	libs.int3 \
	list.int3 \
	make.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	multi_map.int3 \
	pair.int3 \
	private_builtin.int3 \
	set.int3 \
	solutions.int3 \
	sparse_bitset.int3 \
	string.int3 \
	svmap.int3 \
	svset.int3 \
	term.int3 \
	unit.int3 \
	varset.int3 \
	hlds.passes_aux.int3 \
	libs.compiler_util.int3 \
	libs.file_util.int3 \
	libs.globals.int3 \
	libs.handle_options.int3 \
	libs.options.int3 \
	libs.timestamp.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.deps_map.int3 \
	parse_tree.error_util.int3 \
	parse_tree.file_names.int3 \
	parse_tree.mercury_to_mercury.int3 \
	parse_tree.module_cmds.int3 \
	parse_tree.module_imports.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_io.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.prog_mutable.int3 \
	parse_tree.prog_out.int3 \
	parse_tree.prog_type.int3 \
	parse_tree.prog_util.int3 \
	parse_tree.read_modules.int3 \
	parse_tree.source_file_map.int3 \
	parse_tree.write_deps_file.int3 \
	recompilation.version.int3 \
	analysis.int3 \
	array.int3 \
	bag.int3 \
	bitmap.int3 \
	check_hlds.int3 \
	construct.int3 \
	cord.int3 \
	deconstruct.int3 \
	enum.int3 \
	hlds.int3 \
	mode_robdd.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	recompilation.int3 \
	robdd.int3 \
	set_ordlist.int3 \
	stack.int3 \
	stream.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
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
	libs.trace_params.int3 \
	make.options_file.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.prog_io_util.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3

parse_tree.modules.date0 \
	parse_tree.date0 : modules.m \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	digraph.int3 \
	dir.int3 \
	getopt_io.int3 \
	int.int3 \
	io.int3 \
	library.int3 \
	libs.int3 \
	list.int3 \
	make.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	multi_map.int3 \
	pair.int3 \
	private_builtin.int3 \
	set.int3 \
	solutions.int3 \
	sparse_bitset.int3 \
	string.int3 \
	svmap.int3 \
	svset.int3 \
	term.int3 \
	unit.int3 \
	varset.int3 \
	hlds.passes_aux.int3 \
	libs.compiler_util.int3 \
	libs.file_util.int3 \
	libs.globals.int3 \
	libs.handle_options.int3 \
	libs.options.int3 \
	libs.timestamp.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.deps_map.int3 \
	parse_tree.error_util.int3 \
	parse_tree.file_names.int3 \
	parse_tree.mercury_to_mercury.int3 \
	parse_tree.module_cmds.int3 \
	parse_tree.module_imports.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_io.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.prog_mutable.int3 \
	parse_tree.prog_out.int3 \
	parse_tree.prog_type.int3 \
	parse_tree.prog_util.int3 \
	parse_tree.read_modules.int3 \
	parse_tree.source_file_map.int3 \
	parse_tree.write_deps_file.int3 \
	recompilation.version.int3 \
	analysis.int3 \
	array.int3 \
	bag.int3 \
	bitmap.int3 \
	check_hlds.int3 \
	construct.int3 \
	cord.int3 \
	deconstruct.int3 \
	enum.int3 \
	hlds.int3 \
	mode_robdd.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	recompilation.int3 \
	robdd.int3 \
	set_ordlist.int3 \
	stack.int3 \
	stream.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
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
	libs.trace_params.int3 \
	make.options_file.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.prog_io_util.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3



parse_tree.modules.$O :  \
	array.mh \
	array.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	bitmap.mh \
	bitmap.mh \
	time.mh \
	time.mh \
	dir.mh \
	dir.mh \
	string.mh \
	io.mh \
	io.mh



parse_tree.modules.pic_o :  \
	array.mh \
	array.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	bitmap.mh \
	bitmap.mh \
	time.mh \
	time.mh \
	dir.mh \
	dir.mh \
	string.mh \
	io.mh \
	io.mh


parse_tree.modules.int0 : parse_tree.modules.date0
	@:
parse_tree.modules.int : parse_tree.modules.date
	@:
parse_tree.modules.int2 : parse_tree.modules.date
	@:
parse_tree.modules.int3 : parse_tree.modules.date3
	@:
parse_tree.modules.opt : parse_tree.modules.optdate
	@:
parse_tree.modules.trans_opt : parse_tree.modules.trans_opt_date
	@:

parse_tree.modules.date0 : modules.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) parse_tree.modules
parse_tree.modules.date : modules.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) parse_tree.modules
parse_tree.modules.date3 : modules.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) parse_tree.modules
parse_tree.modules.optdate : modules.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) parse_tree.modules
parse_tree.modules.trans_opt_date : modules.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) parse_tree.modules
parse_tree.modules.c_date : modules.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) parse_tree.modules $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
parse_tree.modules.s_date : modules.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only parse_tree.modules $(ERR_REDIRECT)
parse_tree.modules.pic_s_date : modules.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" parse_tree.modules $(ERR_REDIRECT)
endif # TARGET_ASM
parse_tree.modules.il_date : modules.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only parse_tree.modules $(ERR_REDIRECT)
parse_tree.modules.java_date : modules.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only parse_tree.modules $(ERR_REDIRECT)
