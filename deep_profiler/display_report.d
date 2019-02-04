

display_report.optdate display_report.trans_opt_date display_report.err display_report.c_date display_report.s_date display_report.pic_s_date display_report.il_date display_report.java_date : display_report.m \
	array.int \
	assoc_list.int \
	bool.int \
	builtin.int \
	cord.int \
	counter.int \
	coverage.int \
	display.int \
	exclude.int \
	float.int \
	int.int \
	list.int \
	map.int \
	maybe.int \
	mdbcomp.int \
	measurement_units.int \
	pair.int \
	private_builtin.int \
	profile.int \
	program_representation_utils.int \
	query.int \
	report.int \
	require.int \
	set.int \
	solutions.int \
	string.int \
	unit.int \
	var_use_analysis.int \
	mdbcomp.goal_path.int \
	mdbcomp.program_representation.int \
	analysis_utils.int2 \
	bimap.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	io.int2 \
	measurements.int2 \
	ops.int2 \
	pretty_printer.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2 \
	mdbcomp.feedback.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2 \
	mdbcomp.feedback.automatic_parallelism.int2

ifeq ($(TARGET_ASM),yes)
display_report.mh display_report.mih : display_report.s
else
display_report.mh display_report.mih : display_report.c
endif

ifeq ($(TARGET_ASM),yes)
display_report.module_dep : display_report.s
else
 ifeq ($(findstring il,$(GRADE)),il)
display_report.module_dep : display_report.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
display_report.module_dep : jmercury/display_report.java
  else
display_report.module_dep : display_report.c
  endif
 endif
endif

display_report.date display_report.date0 : display_report.m \
	array.int3 \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	cord.int3 \
	counter.int3 \
	coverage.int3 \
	display.int3 \
	exclude.int3 \
	float.int3 \
	int.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	measurement_units.int3 \
	pair.int3 \
	private_builtin.int3 \
	profile.int3 \
	program_representation_utils.int3 \
	query.int3 \
	report.int3 \
	require.int3 \
	set.int3 \
	solutions.int3 \
	string.int3 \
	unit.int3 \
	var_use_analysis.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.program_representation.int3 \
	analysis_utils.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	measurements.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mdbcomp.feedback.automatic_parallelism.int3

display_report.date0 : display_report.m \
	array.int3 \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	cord.int3 \
	counter.int3 \
	coverage.int3 \
	display.int3 \
	exclude.int3 \
	float.int3 \
	int.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	measurement_units.int3 \
	pair.int3 \
	private_builtin.int3 \
	profile.int3 \
	program_representation_utils.int3 \
	query.int3 \
	report.int3 \
	require.int3 \
	set.int3 \
	solutions.int3 \
	string.int3 \
	unit.int3 \
	var_use_analysis.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.program_representation.int3 \
	analysis_utils.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	measurements.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mdbcomp.feedback.automatic_parallelism.int3



display_report.$O :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh \
	array.mh \
	array.mh \
	profile.mh \
	profile.mh



display_report.pic_o :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh \
	array.mh \
	array.mh \
	profile.mh \
	profile.mh


display_report.int0 : display_report.date0
	@:
display_report.int : display_report.date
	@:
display_report.int2 : display_report.date
	@:
display_report.int3 : display_report.date3
	@:
display_report.opt : display_report.optdate
	@:
display_report.trans_opt : display_report.trans_opt_date
	@:
