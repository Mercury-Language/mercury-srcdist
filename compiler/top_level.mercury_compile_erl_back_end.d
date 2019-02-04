

top_level.mercury_compile_erl_back_end.optdate top_level.mercury_compile_erl_back_end.trans_opt_date mercury_compile_erl_back_end.err top_level.mercury_compile_erl_back_end.c_date top_level.mercury_compile_erl_back_end.s_date top_level.mercury_compile_erl_back_end.pic_s_date top_level.mercury_compile_erl_back_end.il_date top_level.mercury_compile_erl_back_end.java_date : mercury_compile_erl_back_end.m \
	top_level.int0 \
	analysis.int \
	backend_libs.int \
	builtin.int \
	bytecode_backend.int \
	check_hlds.int \
	erl_backend.int \
	hlds.int \
	io.int \
	libs.int \
	list.int \
	ll_backend.int \
	ml_backend.int \
	mode_robdd.int \
	parse_tree.int \
	private_builtin.int \
	transform_hlds.int \
	backend_libs.base_typeclass_info.int \
	backend_libs.type_class_info.int \
	backend_libs.type_ctor_info.int \
	erl_backend.elds.int \
	erl_backend.elds_to_erlang.int \
	erl_backend.erl_code_gen.int \
	erl_backend.erl_rtti.int \
	hlds.hlds_module.int \
	hlds.passes_aux.int \
	libs.file_util.int \
	libs.globals.int \
	libs.options.int \
	top_level.mercury_compile.int \
	array.int2 \
	assoc_list.int2 \
	bag.int2 \
	bimap.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	digraph.int2 \
	enum.int2 \
	getopt_io.int2 \
	map.int2 \
	maybe.int2 \
	mdbcomp.int2 \
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
	tree_bitset.int2 \
	type_desc.int2 \
	unit.int2 \
	univ.int2 \
	varset.int2 \
	backend_libs.erlang_rtti.int2 \
	backend_libs.rtti.int2 \
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
	mdbcomp.goal_path.int2 \
	mdbcomp.prim_data.int2 \
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

ifeq ($(TARGET_ASM),yes)
top_level.mercury_compile_erl_back_end.mh top_level.mercury_compile_erl_back_end.mih : top_level.mercury_compile_erl_back_end.s
else
top_level.mercury_compile_erl_back_end.mh top_level.mercury_compile_erl_back_end.mih : top_level.mercury_compile_erl_back_end.c
endif

ifeq ($(TARGET_ASM),yes)
top_level.mercury_compile_erl_back_end.module_dep : top_level.mercury_compile_erl_back_end.s
else
 ifeq ($(findstring il,$(GRADE)),il)
top_level.mercury_compile_erl_back_end.module_dep : top_level.mercury_compile_erl_back_end.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
top_level.mercury_compile_erl_back_end.module_dep : jmercury/top_level__mercury_compile_erl_back_end.java
  else
top_level.mercury_compile_erl_back_end.module_dep : top_level.mercury_compile_erl_back_end.c
  endif
 endif
endif

top_level.mercury_compile_erl_back_end.date top_level.mercury_compile_erl_back_end.date0 \
	top_level.date : mercury_compile_erl_back_end.m \
	top_level.int0 \
	analysis.int3 \
	backend_libs.int3 \
	builtin.int3 \
	bytecode_backend.int3 \
	check_hlds.int3 \
	erl_backend.int3 \
	hlds.int3 \
	io.int3 \
	libs.int3 \
	list.int3 \
	ll_backend.int3 \
	ml_backend.int3 \
	mode_robdd.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	transform_hlds.int3 \
	backend_libs.base_typeclass_info.int3 \
	backend_libs.type_class_info.int3 \
	backend_libs.type_ctor_info.int3 \
	erl_backend.elds.int3 \
	erl_backend.elds_to_erlang.int3 \
	erl_backend.erl_code_gen.int3 \
	erl_backend.erl_rtti.int3 \
	hlds.hlds_module.int3 \
	hlds.passes_aux.int3 \
	libs.file_util.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	top_level.mercury_compile.int3 \
	array.int3 \
	assoc_list.int3 \
	bag.int3 \
	bimap.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
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
	tree_bitset.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	varset.int3 \
	backend_libs.erlang_rtti.int3 \
	backend_libs.rtti.int3 \
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
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
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

top_level.mercury_compile_erl_back_end.date0 \
	top_level.date0 : mercury_compile_erl_back_end.m \
	analysis.int3 \
	backend_libs.int3 \
	builtin.int3 \
	bytecode_backend.int3 \
	check_hlds.int3 \
	erl_backend.int3 \
	hlds.int3 \
	io.int3 \
	libs.int3 \
	list.int3 \
	ll_backend.int3 \
	ml_backend.int3 \
	mode_robdd.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	transform_hlds.int3 \
	backend_libs.base_typeclass_info.int3 \
	backend_libs.type_class_info.int3 \
	backend_libs.type_ctor_info.int3 \
	erl_backend.elds.int3 \
	erl_backend.elds_to_erlang.int3 \
	erl_backend.erl_code_gen.int3 \
	erl_backend.erl_rtti.int3 \
	hlds.hlds_module.int3 \
	hlds.passes_aux.int3 \
	libs.file_util.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	top_level.mercury_compile.int3 \
	array.int3 \
	assoc_list.int3 \
	bag.int3 \
	bimap.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	getopt_io.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
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
	tree_bitset.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	varset.int3 \
	backend_libs.erlang_rtti.int3 \
	backend_libs.rtti.int3 \
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
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
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



top_level.mercury_compile_erl_back_end.$O :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



top_level.mercury_compile_erl_back_end.pic_o :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


top_level.mercury_compile_erl_back_end.int0 : top_level.mercury_compile_erl_back_end.date0
	@:
top_level.mercury_compile_erl_back_end.int : top_level.mercury_compile_erl_back_end.date
	@:
top_level.mercury_compile_erl_back_end.int2 : top_level.mercury_compile_erl_back_end.date
	@:
top_level.mercury_compile_erl_back_end.int3 : top_level.mercury_compile_erl_back_end.date3
	@:
top_level.mercury_compile_erl_back_end.opt : top_level.mercury_compile_erl_back_end.optdate
	@:
top_level.mercury_compile_erl_back_end.trans_opt : top_level.mercury_compile_erl_back_end.trans_opt_date
	@:

top_level.mercury_compile_erl_back_end.date0 : mercury_compile_erl_back_end.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) top_level.mercury_compile_erl_back_end
top_level.mercury_compile_erl_back_end.date : mercury_compile_erl_back_end.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) top_level.mercury_compile_erl_back_end
top_level.mercury_compile_erl_back_end.date3 : mercury_compile_erl_back_end.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) top_level.mercury_compile_erl_back_end
top_level.mercury_compile_erl_back_end.optdate : mercury_compile_erl_back_end.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) top_level.mercury_compile_erl_back_end
top_level.mercury_compile_erl_back_end.trans_opt_date : mercury_compile_erl_back_end.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) top_level.mercury_compile_erl_back_end
top_level.mercury_compile_erl_back_end.c_date : mercury_compile_erl_back_end.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) top_level.mercury_compile_erl_back_end $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
top_level.mercury_compile_erl_back_end.s_date : mercury_compile_erl_back_end.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only top_level.mercury_compile_erl_back_end $(ERR_REDIRECT)
top_level.mercury_compile_erl_back_end.pic_s_date : mercury_compile_erl_back_end.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" top_level.mercury_compile_erl_back_end $(ERR_REDIRECT)
endif # TARGET_ASM
top_level.mercury_compile_erl_back_end.il_date : mercury_compile_erl_back_end.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only top_level.mercury_compile_erl_back_end $(ERR_REDIRECT)
top_level.mercury_compile_erl_back_end.java_date : mercury_compile_erl_back_end.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only top_level.mercury_compile_erl_back_end $(ERR_REDIRECT)
