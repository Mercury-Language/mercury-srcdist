

mdprof_fb.automatic_parallelism.autopar_search_callgraph.optdate mdprof_fb.automatic_parallelism.autopar_search_callgraph.trans_opt_date autopar_search_callgraph.err mdprof_fb.automatic_parallelism.autopar_search_callgraph.c_date mdprof_fb.automatic_parallelism.autopar_search_callgraph.s_date mdprof_fb.automatic_parallelism.autopar_search_callgraph.pic_s_date mdprof_fb.automatic_parallelism.autopar_search_callgraph.il_date mdprof_fb.automatic_parallelism.autopar_search_callgraph.java_date : autopar_search_callgraph.m \
	mdprof_fb.automatic_parallelism.int0 \
	mdprof_fb.int0 \
	analysis_utils.int \
	array.int \
	assoc_list.int \
	bool.int \
	builtin.int \
	cord.int \
	coverage.int \
	exception.int \
	float.int \
	int.int \
	io.int \
	lazy.int \
	list.int \
	map.int \
	maybe.int \
	mdbcomp.int \
	measurement_units.int \
	measurements.int \
	message.int \
	pair.int \
	private_builtin.int \
	profile.int \
	program_representation_utils.int \
	read_profile.int \
	recursion_patterns.int \
	report.int \
	require.int \
	set.int \
	string.int \
	var_use_analysis.int \
	mdbcomp.feedback.int \
	mdbcomp.goal_path.int \
	mdbcomp.program_representation.int \
	mdbcomp.feedback.automatic_parallelism.int \
	mdprof_fb.automatic_parallelism.autopar_annotate.int \
	mdprof_fb.automatic_parallelism.autopar_costs.int \
	mdprof_fb.automatic_parallelism.autopar_search_goals.int \
	mdprof_fb.automatic_parallelism.autopar_types.int \
	bimap.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	digraph.int2 \
	enum.int2 \
	exclude.int2 \
	ops.int2 \
	pretty_printer.int2 \
	query.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set_ordlist.int2 \
	sparse_bitset.int2 \
	stm_builtin.int2 \
	store.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	unit.int2 \
	univ.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.sym_name.int2 \
	mdbcomp.trace_counts.int2

mdprof_fb.automatic_parallelism.autopar_search_callgraph.pic_o mdprof_fb.automatic_parallelism.autopar_search_callgraph.$O : \
	analysis_utils.mih \
	array.mih \
	assoc_list.mih \
	bimap.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
	char.mih \
	construct.mih \
	cord.mih \
	coverage.mih \
	deconstruct.mih \
	digraph.mih \
	enum.mih \
	exception.mih \
	exclude.mih \
	float.mih \
	int.mih \
	io.mih \
	lazy.mih \
	list.mih \
	map.mih \
	maybe.mih \
	mdbcomp.mih \
	mdprof_fb.mih \
	measurement_units.mih \
	measurements.mih \
	message.mih \
	ops.mih \
	pair.mih \
	pretty_printer.mih \
	private_builtin.mih \
	profile.mih \
	program_representation_utils.mih \
	query.mih \
	random.mih \
	read_profile.mih \
	recursion_patterns.mih \
	report.mih \
	require.mih \
	rtti_implementation.mih \
	set.mih \
	set_ordlist.mih \
	sparse_bitset.mih \
	stm_builtin.mih \
	store.mih \
	stream.mih \
	string.mih \
	term.mih \
	time.mih \
	tree234.mih \
	type_desc.mih \
	unit.mih \
	univ.mih \
	var_use_analysis.mih \
	mdbcomp.feedback.mih \
	mdbcomp.goal_path.mih \
	mdbcomp.prim_data.mih \
	mdbcomp.program_representation.mih \
	mdbcomp.rtti_access.mih \
	mdbcomp.sym_name.mih \
	mdbcomp.trace_counts.mih \
	mdprof_fb.automatic_parallelism.mih \
	mdbcomp.feedback.automatic_parallelism.mih \
	mdprof_fb.automatic_parallelism.autopar_annotate.mih \
	mdprof_fb.automatic_parallelism.autopar_costs.mih \
	mdprof_fb.automatic_parallelism.autopar_search_goals.mih \
	mdprof_fb.automatic_parallelism.autopar_types.mih

mdprof_fb.automatic_parallelism.autopar_search_callgraph.mh mdprof_fb.automatic_parallelism.autopar_search_callgraph.mih : mdprof_fb.automatic_parallelism.autopar_search_callgraph.c


ifeq ($(findstring il,$(GRADE)),il)
mdprof_fb.automatic_parallelism.autopar_search_callgraph.module_dep : mdprof_fb.automatic_parallelism.autopar_search_callgraph.il
else
 ifeq ($(findstring java,$(GRADE)),java)
mdprof_fb.automatic_parallelism.autopar_search_callgraph.module_dep : jmercury/mdprof_fb__automatic_parallelism__autopar_search_callgraph.java
 else
mdprof_fb.automatic_parallelism.autopar_search_callgraph.module_dep : mdprof_fb.automatic_parallelism.autopar_search_callgraph.c
 endif
endif


mdprof_fb.automatic_parallelism.autopar_search_callgraph.date mdprof_fb.automatic_parallelism.autopar_search_callgraph.date0 \
	mdprof_fb.automatic_parallelism.date \
	mdprof_fb.date : autopar_search_callgraph.m \
	mdprof_fb.automatic_parallelism.int0 \
	mdprof_fb.int0 \
	analysis_utils.int3 \
	array.int3 \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	cord.int3 \
	coverage.int3 \
	exception.int3 \
	float.int3 \
	int.int3 \
	io.int3 \
	lazy.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	measurement_units.int3 \
	measurements.int3 \
	message.int3 \
	pair.int3 \
	private_builtin.int3 \
	profile.int3 \
	program_representation_utils.int3 \
	read_profile.int3 \
	recursion_patterns.int3 \
	report.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	var_use_analysis.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.feedback.automatic_parallelism.int3 \
	mdprof_fb.automatic_parallelism.autopar_annotate.int3 \
	mdprof_fb.automatic_parallelism.autopar_costs.int3 \
	mdprof_fb.automatic_parallelism.autopar_search_goals.int3 \
	mdprof_fb.automatic_parallelism.autopar_types.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	exclude.int3 \
	ops.int3 \
	pretty_printer.int3 \
	query.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stm_builtin.int3 \
	store.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.sym_name.int3 \
	mdbcomp.trace_counts.int3

mdprof_fb.automatic_parallelism.autopar_search_callgraph.date0 \
	mdprof_fb.automatic_parallelism.date0 \
	mdprof_fb.date0 : autopar_search_callgraph.m \
	analysis_utils.int3 \
	array.int3 \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	cord.int3 \
	coverage.int3 \
	exception.int3 \
	float.int3 \
	int.int3 \
	io.int3 \
	lazy.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	measurement_units.int3 \
	measurements.int3 \
	message.int3 \
	pair.int3 \
	private_builtin.int3 \
	profile.int3 \
	program_representation_utils.int3 \
	read_profile.int3 \
	recursion_patterns.int3 \
	report.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	var_use_analysis.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.feedback.automatic_parallelism.int3 \
	mdprof_fb.automatic_parallelism.autopar_annotate.int3 \
	mdprof_fb.automatic_parallelism.autopar_costs.int3 \
	mdprof_fb.automatic_parallelism.autopar_search_goals.int3 \
	mdprof_fb.automatic_parallelism.autopar_types.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	exclude.int3 \
	ops.int3 \
	pretty_printer.int3 \
	query.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stm_builtin.int3 \
	store.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.sym_name.int3 \
	mdbcomp.trace_counts.int3



mdprof_fb.automatic_parallelism.autopar_search_callgraph.$O :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	store.mh \
	store.mh \
	stm_builtin.mh \
	stm_builtin.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh \
	read_profile.mh \
	read_profile.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	array.mh \
	array.mh \
	profile.mh \
	profile.mh



mdprof_fb.automatic_parallelism.autopar_search_callgraph.pic_o :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	store.mh \
	store.mh \
	stm_builtin.mh \
	stm_builtin.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh \
	read_profile.mh \
	read_profile.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	array.mh \
	array.mh \
	profile.mh \
	profile.mh


mdprof_fb.automatic_parallelism.autopar_search_callgraph.int0 : mdprof_fb.automatic_parallelism.autopar_search_callgraph.date0
	@:
mdprof_fb.automatic_parallelism.autopar_search_callgraph.int : mdprof_fb.automatic_parallelism.autopar_search_callgraph.date
	@:
mdprof_fb.automatic_parallelism.autopar_search_callgraph.int2 : mdprof_fb.automatic_parallelism.autopar_search_callgraph.date
	@:
mdprof_fb.automatic_parallelism.autopar_search_callgraph.int3 : mdprof_fb.automatic_parallelism.autopar_search_callgraph.date3
	@:
mdprof_fb.automatic_parallelism.autopar_search_callgraph.opt : mdprof_fb.automatic_parallelism.autopar_search_callgraph.optdate
	@:
mdprof_fb.automatic_parallelism.autopar_search_callgraph.trans_opt : mdprof_fb.automatic_parallelism.autopar_search_callgraph.trans_opt_date
	@:

mdprof_fb.automatic_parallelism.autopar_search_callgraph.date0 : autopar_search_callgraph.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) mdprof_fb.automatic_parallelism.autopar_search_callgraph
mdprof_fb.automatic_parallelism.autopar_search_callgraph.date : autopar_search_callgraph.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) mdprof_fb.automatic_parallelism.autopar_search_callgraph
mdprof_fb.automatic_parallelism.autopar_search_callgraph.date3 : autopar_search_callgraph.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) mdprof_fb.automatic_parallelism.autopar_search_callgraph
mdprof_fb.automatic_parallelism.autopar_search_callgraph.optdate : autopar_search_callgraph.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) mdprof_fb.automatic_parallelism.autopar_search_callgraph
mdprof_fb.automatic_parallelism.autopar_search_callgraph.trans_opt_date : autopar_search_callgraph.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) mdprof_fb.automatic_parallelism.autopar_search_callgraph
mdprof_fb.automatic_parallelism.autopar_search_callgraph.c_date : autopar_search_callgraph.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) mdprof_fb.automatic_parallelism.autopar_search_callgraph $(ERR_REDIRECT)
mdprof_fb.automatic_parallelism.autopar_search_callgraph.il_date : autopar_search_callgraph.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only mdprof_fb.automatic_parallelism.autopar_search_callgraph $(ERR_REDIRECT)
mdprof_fb.automatic_parallelism.autopar_search_callgraph.java_date : autopar_search_callgraph.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only mdprof_fb.automatic_parallelism.autopar_search_callgraph $(ERR_REDIRECT)
