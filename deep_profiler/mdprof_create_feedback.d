

mdprof_create_feedback.optdate mdprof_create_feedback.trans_opt_date mdprof_create_feedback.err mdprof_create_feedback.c_date mdprof_create_feedback.s_date mdprof_create_feedback.pic_s_date mdprof_create_feedback.il_date mdprof_create_feedback.java_date : mdprof_create_feedback.m \
	bool.int \
	builtin.int \
	char.int \
	conf.int \
	cord.int \
	float.int \
	getopt.int \
	int.int \
	io.int \
	library.int \
	list.int \
	map.int \
	maybe.int \
	mdbcomp.int \
	mdprof_fb.int \
	message.int \
	parsing_utils.int \
	private_builtin.int \
	profile.int \
	startup.int \
	string.int \
	mdbcomp.feedback.int \
	mdprof_fb.automatic_parallelism.int \
	mdbcomp.feedback.automatic_parallelism.int \
	mdprof_fb.automatic_parallelism.autopar_reports.int \
	mdprof_fb.automatic_parallelism.autopar_search_callgraph.int \
	analysis_utils.int2 \
	array.int2 \
	assoc_list.int2 \
	bimap.int2 \
	bitmap.int2 \
	construct.int2 \
	coverage.int2 \
	deconstruct.int2 \
	digraph.int2 \
	dump.int2 \
	enum.int2 \
	exclude.int2 \
	lazy.int2 \
	measurement_units.int2 \
	measurements.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	program_representation_utils.int2 \
	query.int2 \
	random.int2 \
	report.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	sparse_bitset.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	unit.int2 \
	univ.int2 \
	var_use_analysis.int2 \
	mdbcomp.goal_path.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2 \
	mdprof_fb.automatic_parallelism.autopar_types.int2

ifeq ($(TARGET_ASM),yes)
mdprof_create_feedback.mh mdprof_create_feedback.mih : mdprof_create_feedback.s
else
mdprof_create_feedback.mh mdprof_create_feedback.mih : mdprof_create_feedback.c
endif

ifeq ($(TARGET_ASM),yes)
mdprof_create_feedback.module_dep : mdprof_create_feedback.s
else
 ifeq ($(findstring il,$(GRADE)),il)
mdprof_create_feedback.module_dep : mdprof_create_feedback.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
mdprof_create_feedback.module_dep : jmercury/mdprof_create_feedback.java
  else
mdprof_create_feedback.module_dep : mdprof_create_feedback.c
  endif
 endif
endif

mdprof_create_feedback.date mdprof_create_feedback.date0 : mdprof_create_feedback.m \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	conf.int3 \
	cord.int3 \
	float.int3 \
	getopt.int3 \
	int.int3 \
	io.int3 \
	library.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	mdprof_fb.int3 \
	message.int3 \
	parsing_utils.int3 \
	private_builtin.int3 \
	profile.int3 \
	startup.int3 \
	string.int3 \
	mdbcomp.feedback.int3 \
	mdprof_fb.automatic_parallelism.int3 \
	mdbcomp.feedback.automatic_parallelism.int3 \
	mdprof_fb.automatic_parallelism.autopar_reports.int3 \
	mdprof_fb.automatic_parallelism.autopar_search_callgraph.int3 \
	analysis_utils.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	construct.int3 \
	coverage.int3 \
	deconstruct.int3 \
	digraph.int3 \
	dump.int3 \
	enum.int3 \
	exclude.int3 \
	lazy.int3 \
	measurement_units.int3 \
	measurements.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	program_representation_utils.int3 \
	query.int3 \
	random.int3 \
	report.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	var_use_analysis.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mdprof_fb.automatic_parallelism.autopar_types.int3

mdprof_create_feedback.date0 : mdprof_create_feedback.m \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	conf.int3 \
	cord.int3 \
	float.int3 \
	getopt.int3 \
	int.int3 \
	io.int3 \
	library.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	mdprof_fb.int3 \
	message.int3 \
	parsing_utils.int3 \
	private_builtin.int3 \
	profile.int3 \
	startup.int3 \
	string.int3 \
	mdbcomp.feedback.int3 \
	mdprof_fb.automatic_parallelism.int3 \
	mdbcomp.feedback.automatic_parallelism.int3 \
	mdprof_fb.automatic_parallelism.autopar_reports.int3 \
	mdprof_fb.automatic_parallelism.autopar_search_callgraph.int3 \
	analysis_utils.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	construct.int3 \
	coverage.int3 \
	deconstruct.int3 \
	digraph.int3 \
	dump.int3 \
	enum.int3 \
	exclude.int3 \
	lazy.int3 \
	measurement_units.int3 \
	measurements.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	program_representation_utils.int3 \
	query.int3 \
	random.int3 \
	report.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	var_use_analysis.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mdprof_fb.automatic_parallelism.autopar_types.int3



mdprof_create_feedback.$O :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	profile.mh \
	profile.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh



mdprof_create_feedback.pic_o :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	profile.mh \
	profile.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh


mdprof_create_feedback.int0 : mdprof_create_feedback.date0
	@:
mdprof_create_feedback.int : mdprof_create_feedback.date
	@:
mdprof_create_feedback.int2 : mdprof_create_feedback.date
	@:
mdprof_create_feedback.int3 : mdprof_create_feedback.date3
	@:
mdprof_create_feedback.opt : mdprof_create_feedback.optdate
	@:
mdprof_create_feedback.trans_opt : mdprof_create_feedback.trans_opt_date
	@:
