

mdprof_fb.automatic_parallelism.autopar_types.optdate mdprof_fb.automatic_parallelism.autopar_types.trans_opt_date autopar_types.err mdprof_fb.automatic_parallelism.autopar_types.c_date mdprof_fb.automatic_parallelism.autopar_types.s_date mdprof_fb.automatic_parallelism.autopar_types.pic_s_date mdprof_fb.automatic_parallelism.autopar_types.il_date mdprof_fb.automatic_parallelism.autopar_types.java_date : autopar_types.m \
	mdprof_fb.automatic_parallelism.int0 \
	mdprof_fb.int0 \
	analysis_utils.int \
	array.int \
	assoc_list.int \
	builtin.int \
	coverage.int \
	digraph.int \
	int.int \
	lazy.int \
	list.int \
	map.int \
	maybe.int \
	mdbcomp.int \
	measurements.int \
	pair.int \
	private_builtin.int \
	profile.int \
	program_representation_utils.int \
	report.int \
	set.int \
	var_use_analysis.int \
	mdbcomp.feedback.int \
	mdbcomp.goal_path.int \
	mdbcomp.program_representation.int \
	mdbcomp.feedback.automatic_parallelism.int \
	bimap.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	cord.int2 \
	deconstruct.int2 \
	enum.int2 \
	exclude.int2 \
	io.int2 \
	measurement_units.int2 \
	ops.int2 \
	pretty_printer.int2 \
	query.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set_ordlist.int2 \
	sparse_bitset.int2 \
	stream.int2 \
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	unit.int2 \
	univ.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2

mdprof_fb.automatic_parallelism.autopar_types.mh mdprof_fb.automatic_parallelism.autopar_types.mih : mdprof_fb.automatic_parallelism.autopar_types.c


ifeq ($(findstring il,$(GRADE)),il)
mdprof_fb.automatic_parallelism.autopar_types.module_dep : mdprof_fb.automatic_parallelism.autopar_types.il
else
 ifeq ($(findstring java,$(GRADE)),java)
mdprof_fb.automatic_parallelism.autopar_types.module_dep : jmercury/mdprof_fb__automatic_parallelism__autopar_types.java
 else
mdprof_fb.automatic_parallelism.autopar_types.module_dep : mdprof_fb.automatic_parallelism.autopar_types.c
 endif
endif


mdprof_fb.automatic_parallelism.autopar_types.date mdprof_fb.automatic_parallelism.autopar_types.date0 \
	mdprof_fb.automatic_parallelism.date \
	mdprof_fb.date : autopar_types.m \
	mdprof_fb.automatic_parallelism.int0 \
	mdprof_fb.int0 \
	analysis_utils.int3 \
	array.int3 \
	assoc_list.int3 \
	builtin.int3 \
	coverage.int3 \
	digraph.int3 \
	int.int3 \
	lazy.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	measurements.int3 \
	pair.int3 \
	private_builtin.int3 \
	profile.int3 \
	program_representation_utils.int3 \
	report.int3 \
	set.int3 \
	var_use_analysis.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.feedback.automatic_parallelism.int3 \
	bimap.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	cord.int3 \
	deconstruct.int3 \
	enum.int3 \
	exclude.int3 \
	io.int3 \
	measurement_units.int3 \
	ops.int3 \
	pretty_printer.int3 \
	query.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3

mdprof_fb.automatic_parallelism.autopar_types.date0 \
	mdprof_fb.automatic_parallelism.date0 \
	mdprof_fb.date0 : autopar_types.m \
	analysis_utils.int3 \
	array.int3 \
	assoc_list.int3 \
	builtin.int3 \
	coverage.int3 \
	digraph.int3 \
	int.int3 \
	lazy.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	measurements.int3 \
	pair.int3 \
	private_builtin.int3 \
	profile.int3 \
	program_representation_utils.int3 \
	report.int3 \
	set.int3 \
	var_use_analysis.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.feedback.automatic_parallelism.int3 \
	bimap.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	cord.int3 \
	deconstruct.int3 \
	enum.int3 \
	exclude.int3 \
	io.int3 \
	measurement_units.int3 \
	ops.int3 \
	pretty_printer.int3 \
	query.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3



mdprof_fb.automatic_parallelism.autopar_types.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh \
	profile.mh \
	profile.mh \
	array.mh \
	array.mh



mdprof_fb.automatic_parallelism.autopar_types.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh \
	profile.mh \
	profile.mh \
	array.mh \
	array.mh


mdprof_fb.automatic_parallelism.autopar_types.int0 : mdprof_fb.automatic_parallelism.autopar_types.date0
	@:
mdprof_fb.automatic_parallelism.autopar_types.int : mdprof_fb.automatic_parallelism.autopar_types.date
	@:
mdprof_fb.automatic_parallelism.autopar_types.int2 : mdprof_fb.automatic_parallelism.autopar_types.date
	@:
mdprof_fb.automatic_parallelism.autopar_types.int3 : mdprof_fb.automatic_parallelism.autopar_types.date3
	@:
mdprof_fb.automatic_parallelism.autopar_types.opt : mdprof_fb.automatic_parallelism.autopar_types.optdate
	@:
mdprof_fb.automatic_parallelism.autopar_types.trans_opt : mdprof_fb.automatic_parallelism.autopar_types.trans_opt_date
	@:

mdprof_fb.automatic_parallelism.autopar_types.date0 : autopar_types.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) mdprof_fb.automatic_parallelism.autopar_types
mdprof_fb.automatic_parallelism.autopar_types.date : autopar_types.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) mdprof_fb.automatic_parallelism.autopar_types
mdprof_fb.automatic_parallelism.autopar_types.date3 : autopar_types.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) mdprof_fb.automatic_parallelism.autopar_types
mdprof_fb.automatic_parallelism.autopar_types.optdate : autopar_types.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) mdprof_fb.automatic_parallelism.autopar_types
mdprof_fb.automatic_parallelism.autopar_types.trans_opt_date : autopar_types.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) mdprof_fb.automatic_parallelism.autopar_types
mdprof_fb.automatic_parallelism.autopar_types.c_date : autopar_types.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) mdprof_fb.automatic_parallelism.autopar_types $(ERR_REDIRECT)
mdprof_fb.automatic_parallelism.autopar_types.il_date : autopar_types.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only mdprof_fb.automatic_parallelism.autopar_types $(ERR_REDIRECT)
mdprof_fb.automatic_parallelism.autopar_types.java_date : autopar_types.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only mdprof_fb.automatic_parallelism.autopar_types $(ERR_REDIRECT)
