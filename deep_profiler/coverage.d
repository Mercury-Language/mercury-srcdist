

coverage.optdate coverage.trans_opt_date coverage.err coverage.c_date coverage.s_date coverage.pic_s_date coverage.il_date coverage.java_date : coverage.m \
	analysis_utils.int \
	array.int \
	bool.int \
	builtin.int \
	float.int \
	int.int \
	io.int \
	list.int \
	map.int \
	maybe.int \
	mdbcomp.int \
	measurements.int \
	private_builtin.int \
	require.int \
	string.int \
	mdbcomp.goal_path.int \
	mdbcomp.program_representation.int \
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
	pair.int2 \
	pretty_printer.int2 \
	profile.int2 \
	query.int2 \
	random.int2 \
	report.int2 \
	rtti_implementation.int2 \
	set.int2 \
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
	mdbcomp.prim_data.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2 \
	mdbcomp.feedback.automatic_parallelism.int2

ifeq ($(TARGET_ASM),yes)
coverage.mh coverage.mih : coverage.s
else
coverage.mh coverage.mih : coverage.c
endif

ifeq ($(TARGET_ASM),yes)
coverage.module_dep : coverage.s
else
 ifeq ($(findstring il,$(GRADE)),il)
coverage.module_dep : coverage.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
coverage.module_dep : jmercury/coverage.java
  else
coverage.module_dep : coverage.c
  endif
 endif
endif

coverage.date coverage.date0 : coverage.m \
	analysis_utils.int3 \
	array.int3 \
	bool.int3 \
	builtin.int3 \
	float.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	measurements.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.program_representation.int3 \
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
	pair.int3 \
	pretty_printer.int3 \
	profile.int3 \
	query.int3 \
	random.int3 \
	report.int3 \
	rtti_implementation.int3 \
	set.int3 \
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
	mdbcomp.prim_data.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mdbcomp.feedback.automatic_parallelism.int3

coverage.date0 : coverage.m \
	analysis_utils.int3 \
	array.int3 \
	bool.int3 \
	builtin.int3 \
	float.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	measurements.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.program_representation.int3 \
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
	pair.int3 \
	pretty_printer.int3 \
	profile.int3 \
	query.int3 \
	random.int3 \
	report.int3 \
	rtti_implementation.int3 \
	set.int3 \
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
	mdbcomp.prim_data.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mdbcomp.feedback.automatic_parallelism.int3



coverage.$O :  \
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
	array.mh \
	array.mh



coverage.pic_o :  \
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
	array.mh \
	array.mh


coverage.int0 : coverage.date0
	@:
coverage.int : coverage.date
	@:
coverage.int2 : coverage.date
	@:
coverage.int3 : coverage.date3
	@:
coverage.opt : coverage.optdate
	@:
coverage.trans_opt : coverage.trans_opt_date
	@:
