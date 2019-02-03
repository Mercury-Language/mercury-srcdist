

dump.optdate dump.trans_opt_date dump.err dump.c_date dump.s_date dump.pic_s_date dump.il_date dump.java_date : dump.m \
	array.int \
	array_util.int \
	bool.int \
	builtin.int \
	coverage.int \
	int.int \
	io.int \
	list.int \
	map.int \
	maybe.int \
	mdbcomp.int \
	measurements.int \
	pair.int \
	private_builtin.int \
	profile.int \
	require.int \
	set.int \
	string.int \
	mdbcomp.goal_path.int \
	mdbcomp.prim_data.int \
	mdbcomp.program_representation.int \
	analysis_utils.int2 \
	assoc_list.int2 \
	bimap.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	exclude.int2 \
	measurement_units.int2 \
	ops.int2 \
	pretty_printer.int2 \
	query.int2 \
	random.int2 \
	report.int2 \
	rtti_implementation.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	unit.int2 \
	univ.int2 \
	var_use_analysis.int2 \
	mdbcomp.feedback.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2 \
	mdbcomp.feedback.automatic_parallelism.int2

ifeq ($(TARGET_ASM),yes)
dump.mh dump.mih : dump.s
else
dump.mh dump.mih : dump.c
endif

ifeq ($(TARGET_ASM),yes)
dump.module_dep : dump.s
else
 ifeq ($(findstring il,$(GRADE)),il)
dump.module_dep : dump.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
dump.module_dep : jmercury/dump.java
  else
dump.module_dep : dump.c
  endif
 endif
endif

dump.date dump.date0 : dump.m \
	array.int3 \
	array_util.int3 \
	bool.int3 \
	builtin.int3 \
	coverage.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	measurements.int3 \
	pair.int3 \
	private_builtin.int3 \
	profile.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	analysis_utils.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	exclude.int3 \
	measurement_units.int3 \
	ops.int3 \
	pretty_printer.int3 \
	query.int3 \
	random.int3 \
	report.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	var_use_analysis.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mdbcomp.feedback.automatic_parallelism.int3

dump.date0 : dump.m \
	array.int3 \
	array_util.int3 \
	bool.int3 \
	builtin.int3 \
	coverage.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	measurements.int3 \
	pair.int3 \
	private_builtin.int3 \
	profile.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	analysis_utils.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	exclude.int3 \
	measurement_units.int3 \
	ops.int3 \
	pretty_printer.int3 \
	query.int3 \
	random.int3 \
	report.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	var_use_analysis.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mdbcomp.feedback.automatic_parallelism.int3



dump.$O :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh \
	array.mh \
	array.mh \
	profile.mh \
	profile.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh



dump.pic_o :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh \
	array.mh \
	array.mh \
	profile.mh \
	profile.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh


dump.int0 : dump.date0
	@:
dump.int : dump.date
	@:
dump.int2 : dump.date
	@:
dump.int3 : dump.date3
	@:
dump.opt : dump.optdate
	@:
dump.trans_opt : dump.trans_opt_date
	@:
