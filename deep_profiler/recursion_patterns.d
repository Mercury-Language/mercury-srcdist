

recursion_patterns.optdate recursion_patterns.trans_opt_date recursion_patterns.err recursion_patterns.c_date recursion_patterns.s_date recursion_patterns.pic_s_date recursion_patterns.il_date recursion_patterns.java_date : recursion_patterns.m \
	analysis_utils.int \
	array.int \
	array_util.int \
	assoc_list.int \
	builtin.int \
	coverage.int \
	create_report.int \
	float.int \
	int.int \
	io.int \
	list.int \
	map.int \
	maybe.int \
	mdbcomp.int \
	measurement_units.int \
	measurements.int \
	pair.int \
	private_builtin.int \
	profile.int \
	report.int \
	require.int \
	set.int \
	solutions.int \
	string.int \
	unit.int \
	mdbcomp.goal_path.int \
	mdbcomp.program_representation.int \
	bimap.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	exclude.int2 \
	ops.int2 \
	pretty_printer.int2 \
	query.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2 \
	var_use_analysis.int2 \
	mdbcomp.feedback.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2 \
	mdbcomp.feedback.automatic_parallelism.int2

ifeq ($(TARGET_ASM),yes)
recursion_patterns.mh recursion_patterns.mih : recursion_patterns.s
else
recursion_patterns.mh recursion_patterns.mih : recursion_patterns.c
endif

ifeq ($(TARGET_ASM),yes)
recursion_patterns.module_dep : recursion_patterns.s
else
 ifeq ($(findstring il,$(GRADE)),il)
recursion_patterns.module_dep : recursion_patterns.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
recursion_patterns.module_dep : jmercury/recursion_patterns.java
  else
recursion_patterns.module_dep : recursion_patterns.c
  endif
 endif
endif

recursion_patterns.date recursion_patterns.date0 : recursion_patterns.m \
	analysis_utils.int3 \
	array.int3 \
	array_util.int3 \
	assoc_list.int3 \
	builtin.int3 \
	coverage.int3 \
	create_report.int3 \
	float.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	measurement_units.int3 \
	measurements.int3 \
	pair.int3 \
	private_builtin.int3 \
	profile.int3 \
	report.int3 \
	require.int3 \
	set.int3 \
	solutions.int3 \
	string.int3 \
	unit.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.program_representation.int3 \
	bimap.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	exclude.int3 \
	ops.int3 \
	pretty_printer.int3 \
	query.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3 \
	var_use_analysis.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mdbcomp.feedback.automatic_parallelism.int3

recursion_patterns.date0 : recursion_patterns.m \
	analysis_utils.int3 \
	array.int3 \
	array_util.int3 \
	assoc_list.int3 \
	builtin.int3 \
	coverage.int3 \
	create_report.int3 \
	float.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	measurement_units.int3 \
	measurements.int3 \
	pair.int3 \
	private_builtin.int3 \
	profile.int3 \
	report.int3 \
	require.int3 \
	set.int3 \
	solutions.int3 \
	string.int3 \
	unit.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.program_representation.int3 \
	bimap.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	exclude.int3 \
	ops.int3 \
	pretty_printer.int3 \
	query.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3 \
	var_use_analysis.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mdbcomp.feedback.automatic_parallelism.int3



recursion_patterns.$O :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	array.mh \
	array.mh \
	profile.mh \
	profile.mh



recursion_patterns.pic_o :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	array.mh \
	array.mh \
	profile.mh \
	profile.mh


recursion_patterns.int0 : recursion_patterns.date0
	@:
recursion_patterns.int : recursion_patterns.date
	@:
recursion_patterns.int2 : recursion_patterns.date
	@:
recursion_patterns.int3 : recursion_patterns.date3
	@:
recursion_patterns.opt : recursion_patterns.optdate
	@:
recursion_patterns.trans_opt : recursion_patterns.trans_opt_date
	@:
