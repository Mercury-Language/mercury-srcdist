

bytecode_backend.bytecode.optdate bytecode_backend.bytecode.trans_opt_date bytecode.err bytecode_backend.bytecode.c_date bytecode_backend.bytecode.s_date bytecode_backend.bytecode.pic_s_date bytecode_backend.bytecode.il_date bytecode_backend.bytecode.java_date : bytecode.m \
	bytecode_backend.int0 \
	assoc_list.int \
	backend_libs.int \
	builtin.int \
	char.int \
	hlds.int \
	io.int \
	libs.int \
	list.int \
	mdbcomp.int \
	pair.int \
	parse_tree.int \
	private_builtin.int \
	string.int \
	backend_libs.builtin_ops.int \
	backend_libs.bytecode_data.int \
	backend_libs.c_util.int \
	hlds.hlds_data.int \
	libs.compiler_util.int \
	libs.tree.int \
	mdbcomp.prim_data.int \
	parse_tree.prog_data.int \
	analysis.int2 \
	bag.int2 \
	bitmap.int2 \
	bool.int2 \
	check_hlds.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	getopt_io.int2 \
	map.int2 \
	maybe.int2 \
	mode_robdd.int2 \
	multi_map.int2 \
	ops.int2 \
	recompilation.int2 \
	relation.int2 \
	robdd.int2 \
	set.int2 \
	set_ordlist.int2 \
	sparse_bitset.int2 \
	stack.int2 \
	stream.int2 \
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
	libs.globals.int2 \
	libs.lp_rational.int2 \
	libs.options.int2 \
	libs.polyhedron.int2 \
	libs.rat.int2 \
	libs.timestamp.int2 \
	libs.trace_params.int2 \
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
bytecode_backend.bytecode.mh bytecode_backend.bytecode.mih : bytecode_backend.bytecode.s
else
bytecode_backend.bytecode.mh bytecode_backend.bytecode.mih : bytecode_backend.bytecode.c
endif

ifeq ($(TARGET_ASM),yes)
bytecode_backend.bytecode.module_dep : bytecode_backend.bytecode.s
else
 ifeq ($(findstring il,$(GRADE)),il)
bytecode_backend.bytecode.module_dep : bytecode_backend.bytecode.il
  ifeq ($(findstring java,$(GRADE)),java)
bytecode_backend.bytecode.module_dep : bytecode_backend.bytecode.java
  else
bytecode_backend.bytecode.module_dep : bytecode_backend.bytecode.c
  endif
 endif
endif

bytecode_backend.bytecode.date bytecode_backend.bytecode.date0 \
	bytecode_backend.date : bytecode.m \
	bytecode_backend.int0 \
	assoc_list.int3 \
	backend_libs.int3 \
	builtin.int3 \
	char.int3 \
	hlds.int3 \
	io.int3 \
	libs.int3 \
	list.int3 \
	mdbcomp.int3 \
	pair.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	string.int3 \
	backend_libs.builtin_ops.int3 \
	backend_libs.bytecode_data.int3 \
	backend_libs.c_util.int3 \
	hlds.hlds_data.int3 \
	libs.compiler_util.int3 \
	libs.tree.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.prog_data.int3 \
	analysis.int3 \
	bag.int3 \
	bitmap.int3 \
	bool.int3 \
	check_hlds.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt_io.int3 \
	map.int3 \
	maybe.int3 \
	mode_robdd.int3 \
	multi_map.int3 \
	ops.int3 \
	recompilation.int3 \
	relation.int3 \
	robdd.int3 \
	set.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stack.int3 \
	stream.int3 \
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
	libs.globals.int3 \
	libs.lp_rational.int3 \
	libs.options.int3 \
	libs.polyhedron.int3 \
	libs.rat.int3 \
	libs.timestamp.int3 \
	libs.trace_params.int3 \
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

bytecode_backend.bytecode.date0 \
	bytecode_backend.date0 : bytecode.m \
	assoc_list.int3 \
	backend_libs.int3 \
	builtin.int3 \
	char.int3 \
	hlds.int3 \
	io.int3 \
	libs.int3 \
	list.int3 \
	mdbcomp.int3 \
	pair.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	string.int3 \
	backend_libs.builtin_ops.int3 \
	backend_libs.bytecode_data.int3 \
	backend_libs.c_util.int3 \
	hlds.hlds_data.int3 \
	libs.compiler_util.int3 \
	libs.tree.int3 \
	mdbcomp.prim_data.int3 \
	parse_tree.prog_data.int3 \
	analysis.int3 \
	bag.int3 \
	bitmap.int3 \
	bool.int3 \
	check_hlds.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt_io.int3 \
	map.int3 \
	maybe.int3 \
	mode_robdd.int3 \
	multi_map.int3 \
	ops.int3 \
	recompilation.int3 \
	relation.int3 \
	robdd.int3 \
	set.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stack.int3 \
	stream.int3 \
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
	libs.globals.int3 \
	libs.lp_rational.int3 \
	libs.options.int3 \
	libs.polyhedron.int3 \
	libs.rat.int3 \
	libs.timestamp.int3 \
	libs.trace_params.int3 \
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



bytecode_backend.bytecode.$O :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



bytecode_backend.bytecode.pic_o :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


bytecode_backend.bytecode.int0 : bytecode_backend.bytecode.date0
	@:
bytecode_backend.bytecode.int : bytecode_backend.bytecode.date
	@:
bytecode_backend.bytecode.int2 : bytecode_backend.bytecode.date
	@:
bytecode_backend.bytecode.int3 : bytecode_backend.bytecode.date3
	@:
bytecode_backend.bytecode.opt : bytecode_backend.bytecode.optdate
	@:
bytecode_backend.bytecode.trans_opt : bytecode_backend.bytecode.trans_opt_date
	@:

bytecode_backend.bytecode.date0 : bytecode.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) bytecode_backend.bytecode
bytecode_backend.bytecode.date : bytecode.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) bytecode_backend.bytecode
bytecode_backend.bytecode.date3 : bytecode.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) bytecode_backend.bytecode
bytecode_backend.bytecode.optdate : bytecode.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) bytecode_backend.bytecode
bytecode_backend.bytecode.trans_opt_date : bytecode.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) bytecode_backend.bytecode
bytecode_backend.bytecode.c_date : bytecode.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) bytecode_backend.bytecode $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
bytecode_backend.bytecode.s_date : bytecode.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only bytecode_backend.bytecode $(ERR_REDIRECT)
bytecode_backend.bytecode.pic_s_date : bytecode.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" bytecode_backend.bytecode $(ERR_REDIRECT)
endif # TARGET_ASM
bytecode_backend.bytecode.il_date : bytecode.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only bytecode_backend.bytecode $(ERR_REDIRECT)
bytecode_backend.bytecode.java_date : bytecode.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only bytecode_backend.bytecode $(ERR_REDIRECT)
