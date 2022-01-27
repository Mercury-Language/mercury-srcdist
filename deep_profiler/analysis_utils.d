

analysis_utils.optdate analysis_utils.trans_opt_date analysis_utils.err analysis_utils.c_date analysis_utils.s_date analysis_utils.pic_s_date analysis_utils.il_date analysis_utils.java_date : analysis_utils.m \
	array.int \
	assoc_list.int \
	bool.int \
	builtin.int \
	cord.int \
	float.int \
	int.int \
	io.int \
	list.int \
	map.int \
	maybe.int \
	mdbcomp.int \
	measurements.int \
	message.int \
	pair.int \
	private_builtin.int \
	profile.int \
	program_representation_utils.int \
	report.int \
	require.int \
	set.int \
	string.int \
	mdbcomp.goal_path.int \
	mdbcomp.program_representation.int \
	bimap.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	coverage.int2 \
	deconstruct.int2 \
	enum.int2 \
	exclude.int2 \
	measurement_units.int2 \
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
	unit.int2 \
	univ.int2 \
	var_use_analysis.int2 \
	mdbcomp.feedback.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2 \
	mdbcomp.feedback.automatic_parallelism.int2

analysis_utils.mh analysis_utils.mih : analysis_utils.c


ifeq ($(findstring il,$(GRADE)),il)
analysis_utils.module_dep : analysis_utils.il
else
 ifeq ($(findstring java,$(GRADE)),java)
analysis_utils.module_dep : jmercury/analysis_utils.java
 else
analysis_utils.module_dep : analysis_utils.c
 endif
endif


analysis_utils.date analysis_utils.date0 : analysis_utils.m \
	array.int3 \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	cord.int3 \
	float.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	measurements.int3 \
	message.int3 \
	pair.int3 \
	private_builtin.int3 \
	profile.int3 \
	program_representation_utils.int3 \
	report.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.program_representation.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	coverage.int3 \
	deconstruct.int3 \
	enum.int3 \
	exclude.int3 \
	measurement_units.int3 \
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
	unit.int3 \
	univ.int3 \
	var_use_analysis.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mdbcomp.feedback.automatic_parallelism.int3

analysis_utils.date0 : analysis_utils.m \
	array.int3 \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	cord.int3 \
	float.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	measurements.int3 \
	message.int3 \
	pair.int3 \
	private_builtin.int3 \
	profile.int3 \
	program_representation_utils.int3 \
	report.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.program_representation.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	coverage.int3 \
	deconstruct.int3 \
	enum.int3 \
	exclude.int3 \
	measurement_units.int3 \
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
	unit.int3 \
	univ.int3 \
	var_use_analysis.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mdbcomp.feedback.automatic_parallelism.int3



analysis_utils.$O :  \
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
	array.mh \
	array.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh \
	profile.mh \
	profile.mh



analysis_utils.pic_o :  \
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
	array.mh \
	array.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh \
	profile.mh \
	profile.mh


analysis_utils.int0 : analysis_utils.date0
	@:
analysis_utils.int : analysis_utils.date
	@:
analysis_utils.int2 : analysis_utils.date
	@:
analysis_utils.int3 : analysis_utils.date3
	@:
analysis_utils.opt : analysis_utils.optdate
	@:
analysis_utils.trans_opt : analysis_utils.trans_opt_date
	@:
