

mdprof_fb.automatic_parallelism.autopar_costs.optdate mdprof_fb.automatic_parallelism.autopar_costs.trans_opt_date autopar_costs.err mdprof_fb.automatic_parallelism.autopar_costs.c_date mdprof_fb.automatic_parallelism.autopar_costs.s_date mdprof_fb.automatic_parallelism.autopar_costs.pic_s_date mdprof_fb.automatic_parallelism.autopar_costs.il_date mdprof_fb.automatic_parallelism.autopar_costs.java_date : autopar_costs.m \
	mdprof_fb.automatic_parallelism.int0 \
	mdprof_fb.int0 \
	analysis_utils.int \
	bool.int \
	builtin.int \
	cord.int \
	coverage.int \
	float.int \
	int.int \
	io.int \
	lazy.int \
	list.int \
	map.int \
	maybe.int \
	mdbcomp.int \
	measurements.int \
	message.int \
	private_builtin.int \
	profile.int \
	program_representation_utils.int \
	report.int \
	require.int \
	set.int \
	solutions.int \
	string.int \
	var_use_analysis.int \
	mdbcomp.feedback.int \
	mdbcomp.goal_path.int \
	mdbcomp.program_representation.int \
	mdbcomp.feedback.automatic_parallelism.int \
	mdprof_fb.automatic_parallelism.autopar_types.int \
	array.int2 \
	assoc_list.int2 \
	bimap.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	digraph.int2 \
	enum.int2 \
	exclude.int2 \
	measurement_units.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	query.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set_ordlist.int2 \
	sparse_bitset.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	unit.int2 \
	univ.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2

ifeq ($(TARGET_ASM),yes)
mdprof_fb.automatic_parallelism.autopar_costs.mh mdprof_fb.automatic_parallelism.autopar_costs.mih : mdprof_fb.automatic_parallelism.autopar_costs.s
else
mdprof_fb.automatic_parallelism.autopar_costs.mh mdprof_fb.automatic_parallelism.autopar_costs.mih : mdprof_fb.automatic_parallelism.autopar_costs.c
endif

ifeq ($(TARGET_ASM),yes)
mdprof_fb.automatic_parallelism.autopar_costs.module_dep : mdprof_fb.automatic_parallelism.autopar_costs.s
else
 ifeq ($(findstring il,$(GRADE)),il)
mdprof_fb.automatic_parallelism.autopar_costs.module_dep : mdprof_fb.automatic_parallelism.autopar_costs.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
mdprof_fb.automatic_parallelism.autopar_costs.module_dep : jmercury/mdprof_fb__automatic_parallelism__autopar_costs.java
  else
mdprof_fb.automatic_parallelism.autopar_costs.module_dep : mdprof_fb.automatic_parallelism.autopar_costs.c
  endif
 endif
endif

mdprof_fb.automatic_parallelism.autopar_costs.date mdprof_fb.automatic_parallelism.autopar_costs.date0 \
	mdprof_fb.automatic_parallelism.date \
	mdprof_fb.date : autopar_costs.m \
	mdprof_fb.automatic_parallelism.int0 \
	mdprof_fb.int0 \
	analysis_utils.int3 \
	bool.int3 \
	builtin.int3 \
	cord.int3 \
	coverage.int3 \
	float.int3 \
	int.int3 \
	io.int3 \
	lazy.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	measurements.int3 \
	message.int3 \
	private_builtin.int3 \
	profile.int3 \
	program_representation_utils.int3 \
	report.int3 \
	require.int3 \
	set.int3 \
	solutions.int3 \
	string.int3 \
	var_use_analysis.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.feedback.automatic_parallelism.int3 \
	mdprof_fb.automatic_parallelism.autopar_types.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	exclude.int3 \
	measurement_units.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	query.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3

mdprof_fb.automatic_parallelism.autopar_costs.date0 \
	mdprof_fb.automatic_parallelism.date0 \
	mdprof_fb.date0 : autopar_costs.m \
	analysis_utils.int3 \
	bool.int3 \
	builtin.int3 \
	cord.int3 \
	coverage.int3 \
	float.int3 \
	int.int3 \
	io.int3 \
	lazy.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	measurements.int3 \
	message.int3 \
	private_builtin.int3 \
	profile.int3 \
	program_representation_utils.int3 \
	report.int3 \
	require.int3 \
	set.int3 \
	solutions.int3 \
	string.int3 \
	var_use_analysis.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.feedback.automatic_parallelism.int3 \
	mdprof_fb.automatic_parallelism.autopar_types.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	digraph.int3 \
	enum.int3 \
	exclude.int3 \
	measurement_units.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	query.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3



mdprof_fb.automatic_parallelism.autopar_costs.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	profile.mh \
	profile.mh \
	string.mh \
	io.mh \
	io.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh



mdprof_fb.automatic_parallelism.autopar_costs.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	profile.mh \
	profile.mh \
	string.mh \
	io.mh \
	io.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh


mdprof_fb.automatic_parallelism.autopar_costs.int0 : mdprof_fb.automatic_parallelism.autopar_costs.date0
	@:
mdprof_fb.automatic_parallelism.autopar_costs.int : mdprof_fb.automatic_parallelism.autopar_costs.date
	@:
mdprof_fb.automatic_parallelism.autopar_costs.int2 : mdprof_fb.automatic_parallelism.autopar_costs.date
	@:
mdprof_fb.automatic_parallelism.autopar_costs.int3 : mdprof_fb.automatic_parallelism.autopar_costs.date3
	@:
mdprof_fb.automatic_parallelism.autopar_costs.opt : mdprof_fb.automatic_parallelism.autopar_costs.optdate
	@:
mdprof_fb.automatic_parallelism.autopar_costs.trans_opt : mdprof_fb.automatic_parallelism.autopar_costs.trans_opt_date
	@:

mdprof_fb.automatic_parallelism.autopar_costs.date0 : autopar_costs.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) mdprof_fb.automatic_parallelism.autopar_costs
mdprof_fb.automatic_parallelism.autopar_costs.date : autopar_costs.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) mdprof_fb.automatic_parallelism.autopar_costs
mdprof_fb.automatic_parallelism.autopar_costs.date3 : autopar_costs.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) mdprof_fb.automatic_parallelism.autopar_costs
mdprof_fb.automatic_parallelism.autopar_costs.optdate : autopar_costs.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) mdprof_fb.automatic_parallelism.autopar_costs
mdprof_fb.automatic_parallelism.autopar_costs.trans_opt_date : autopar_costs.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) mdprof_fb.automatic_parallelism.autopar_costs
mdprof_fb.automatic_parallelism.autopar_costs.c_date : autopar_costs.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) mdprof_fb.automatic_parallelism.autopar_costs $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
mdprof_fb.automatic_parallelism.autopar_costs.s_date : autopar_costs.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only mdprof_fb.automatic_parallelism.autopar_costs $(ERR_REDIRECT)
mdprof_fb.automatic_parallelism.autopar_costs.pic_s_date : autopar_costs.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" mdprof_fb.automatic_parallelism.autopar_costs $(ERR_REDIRECT)
endif # TARGET_ASM
mdprof_fb.automatic_parallelism.autopar_costs.il_date : autopar_costs.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only mdprof_fb.automatic_parallelism.autopar_costs $(ERR_REDIRECT)
mdprof_fb.automatic_parallelism.autopar_costs.java_date : autopar_costs.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only mdprof_fb.automatic_parallelism.autopar_costs $(ERR_REDIRECT)
