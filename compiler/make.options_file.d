

make.options_file.optdate make.options_file.trans_opt_date options_file.err make.options_file.c_date make.options_file.s_date make.options_file.pic_s_date make.options_file.il_date make.options_file.java_date : options_file.m \
	make.int0 \
	assoc_list.int \
	backend_libs.int \
	bool.int \
	builtin.int \
	char.int \
	dir.int \
	exception.int \
	hlds.int \
	int.int \
	io.int \
	libs.int \
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
	svmap.int \
	term.int \
	top_level.int \
	univ.int \
	backend_libs.compile_target_code.int \
	libs.compiler_util.int \
	libs.globals.int \
	libs.options.int \
	libs.timestamp.int \
	make.dependencies.int \
	make.module_dep_file.int \
	make.module_target.int \
	make.program_target.int \
	make.util.int \
	mdbcomp.prim_data.int \
	parse_tree.error_util.int \
	parse_tree.modules.int \
	parse_tree.prog_io.int \
	top_level.mercury_compile.int \
	analysis.int2 \
	array.int2 \
	bag.int2 \
	bitmap.int2 \
	bytecode_backend.int2 \
	check_hlds.int2 \
	construct.int2 \
	deconstruct.int2 \
	digraph.int2 \
	enum.int2 \
	erl_backend.int2 \
	getopt_io.int2 \
	ll_backend.int2 \
	ml_backend.int2 \
	mode_robdd.int2 \
	multi_map.int2 \
	ops.int2 \
	pretty_printer.int2 \
	random.int2 \
	recompilation.int2 \
	robdd.int2 \
	set_ordlist.int2 \
	sparse_bitset.int2 \
	stack.int2 \
	stm_builtin.int2 \
	store.int2 \
	stream.int2 \
	table_builtin.int2 \
	time.int2 \
	transform_hlds.int2 \
	tree234.int2 \
	type_desc.int2 \
	unit.int2 \
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
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2 \
	mode_robdd.tfeirn.int2 \
	parse_tree.module_qual.int2 \
	parse_tree.prog_data.int2 \
	parse_tree.prog_foreign.int2 \
	parse_tree.prog_io_util.int2 \
	parse_tree.prog_item.int2 \
	transform_hlds.term_constr_data.int2 \
	transform_hlds.term_constr_errors.int2 \
	transform_hlds.term_constr_main.int2 \
	transform_hlds.term_errors.int2 \
	transform_hlds.term_norm.int2 \
	transform_hlds.term_util.int2

ifeq ($(TARGET_ASM),yes)
make.options_file.mh make.options_file.mih : make.options_file.s
else
make.options_file.mh make.options_file.mih : make.options_file.c
endif

ifeq ($(TARGET_ASM),yes)
make.options_file.module_dep : make.options_file.s
else
 ifeq ($(findstring il,$(GRADE)),il)
make.options_file.module_dep : make.options_file.il
  ifeq ($(findstring java,$(GRADE)),java)
make.options_file.module_dep : make.options_file.java
  else
make.options_file.module_dep : make.options_file.c
  endif
 endif
endif

make.options_file.date make.options_file.date0 \
	make.date : options_file.m \
	make.int0 \
	assoc_list.int3 \
	backend_libs.int3 \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	dir.int3 \
	exception.int3 \
	hlds.int3 \
	int.int3 \
	io.int3 \
	libs.int3 \
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
	svmap.int3 \
	term.int3 \
	top_level.int3 \
	univ.int3 \
	backend_libs.compile_target_code.int3 \
	libs.compiler_util.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	libs.timestamp.int3 \
	make.dependencies.int3 \
	make.module_dep_file.int3 \
	make.module_target.int3 \
	make.program_target.int3 \
	make.util.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.error_util.int3 \
	parse_tree.modules.int3 \
	parse_tree.prog_io.int3 \
	top_level.mercury_compile.int3 \
	analysis.int3 \
	array.int3 \
	bag.int3 \
	bitmap.int3 \
	bytecode_backend.int3 \
	check_hlds.int3 \
	construct.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	erl_backend.int3 \
	getopt_io.int3 \
	ll_backend.int3 \
	ml_backend.int3 \
	mode_robdd.int3 \
	multi_map.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	recompilation.int3 \
	robdd.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stack.int3 \
	stm_builtin.int3 \
	store.int3 \
	stream.int3 \
	table_builtin.int3 \
	time.int3 \
	transform_hlds.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
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
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_io_util.int3 \
	parse_tree.prog_item.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3

make.options_file.date0 \
	make.date0 : options_file.m \
	assoc_list.int3 \
	backend_libs.int3 \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	dir.int3 \
	exception.int3 \
	hlds.int3 \
	int.int3 \
	io.int3 \
	libs.int3 \
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
	svmap.int3 \
	term.int3 \
	top_level.int3 \
	univ.int3 \
	backend_libs.compile_target_code.int3 \
	libs.compiler_util.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	libs.timestamp.int3 \
	make.dependencies.int3 \
	make.module_dep_file.int3 \
	make.module_target.int3 \
	make.program_target.int3 \
	make.util.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.error_util.int3 \
	parse_tree.modules.int3 \
	parse_tree.prog_io.int3 \
	top_level.mercury_compile.int3 \
	analysis.int3 \
	array.int3 \
	bag.int3 \
	bitmap.int3 \
	bytecode_backend.int3 \
	check_hlds.int3 \
	construct.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	erl_backend.int3 \
	getopt_io.int3 \
	ll_backend.int3 \
	ml_backend.int3 \
	mode_robdd.int3 \
	multi_map.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	recompilation.int3 \
	robdd.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stack.int3 \
	stm_builtin.int3 \
	store.int3 \
	stream.int3 \
	table_builtin.int3 \
	time.int3 \
	transform_hlds.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
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
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mode_robdd.tfeirn.int3 \
	parse_tree.module_qual.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_foreign.int3 \
	parse_tree.prog_io_util.int3 \
	parse_tree.prog_item.int3 \
	transform_hlds.term_constr_data.int3 \
	transform_hlds.term_constr_errors.int3 \
	transform_hlds.term_constr_main.int3 \
	transform_hlds.term_errors.int3 \
	transform_hlds.term_norm.int3 \
	transform_hlds.term_util.int3



make.options_file.$O :  \
	stm_builtin.mh \
	stm_builtin.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	table_builtin.mh \
	table_builtin.mh \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	dir.mh \
	dir.mh \
	string.mh \
	io.mh \
	io.mh



make.options_file.pic_o :  \
	stm_builtin.mh \
	stm_builtin.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	table_builtin.mh \
	table_builtin.mh \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	dir.mh \
	dir.mh \
	string.mh \
	io.mh \
	io.mh


make.options_file.int0 : make.options_file.date0
	@:
make.options_file.int : make.options_file.date
	@:
make.options_file.int2 : make.options_file.date
	@:
make.options_file.int3 : make.options_file.date3
	@:
make.options_file.opt : make.options_file.optdate
	@:
make.options_file.trans_opt : make.options_file.trans_opt_date
	@:

make.options_file.date0 : options_file.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) make.options_file
make.options_file.date : options_file.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) make.options_file
make.options_file.date3 : options_file.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) make.options_file
make.options_file.optdate : options_file.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) make.options_file
make.options_file.trans_opt_date : options_file.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) make.options_file
make.options_file.c_date : options_file.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) make.options_file $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
make.options_file.s_date : options_file.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only make.options_file $(ERR_REDIRECT)
make.options_file.pic_s_date : options_file.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" make.options_file $(ERR_REDIRECT)
endif # TARGET_ASM
make.options_file.il_date : options_file.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only make.options_file $(ERR_REDIRECT)
make.options_file.java_date : options_file.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only make.options_file $(ERR_REDIRECT)
