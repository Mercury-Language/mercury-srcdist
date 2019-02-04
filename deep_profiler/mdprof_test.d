

mdprof_test.optdate mdprof_test.trans_opt_date mdprof_test.err mdprof_test.c_date mdprof_test.s_date mdprof_test.pic_s_date mdprof_test.il_date mdprof_test.java_date : mdprof_test.m \
	array.int \
	bool.int \
	builtin.int \
	char.int \
	conf.int \
	dump.int \
	getopt.int \
	int.int \
	io.int \
	library.int \
	list.int \
	maybe.int \
	mdbcomp.int \
	private_builtin.int \
	profile.int \
	query.int \
	require.int \
	startup.int \
	string.int \
	mdbcomp.program_representation.int \
	assoc_list.int2 \
	bimap.int2 \
	bitmap.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	exclude.int2 \
	map.int2 \
	measurement_units.int2 \
	measurements.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	random.int2 \
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
	mdbcomp.feedback.int2 \
	mdbcomp.goal_path.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2 \
	mdbcomp.feedback.automatic_parallelism.int2

ifeq ($(TARGET_ASM),yes)
mdprof_test.mh mdprof_test.mih : mdprof_test.s
else
mdprof_test.mh mdprof_test.mih : mdprof_test.c
endif

ifeq ($(TARGET_ASM),yes)
mdprof_test.module_dep : mdprof_test.s
else
 ifeq ($(findstring il,$(GRADE)),il)
mdprof_test.module_dep : mdprof_test.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
mdprof_test.module_dep : jmercury/mdprof_test.java
  else
mdprof_test.module_dep : mdprof_test.c
  endif
 endif
endif

mdprof_test.date mdprof_test.date0 : mdprof_test.m \
	array.int3 \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	conf.int3 \
	dump.int3 \
	getopt.int3 \
	int.int3 \
	io.int3 \
	library.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	profile.int3 \
	query.int3 \
	require.int3 \
	startup.int3 \
	string.int3 \
	mdbcomp.program_representation.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	exclude.int3 \
	map.int3 \
	measurement_units.int3 \
	measurements.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
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
	mdbcomp.feedback.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mdbcomp.feedback.automatic_parallelism.int3

mdprof_test.date0 : mdprof_test.m \
	array.int3 \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	conf.int3 \
	dump.int3 \
	getopt.int3 \
	int.int3 \
	io.int3 \
	library.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	profile.int3 \
	query.int3 \
	require.int3 \
	startup.int3 \
	string.int3 \
	mdbcomp.program_representation.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	exclude.int3 \
	map.int3 \
	measurement_units.int3 \
	measurements.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
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
	mdbcomp.feedback.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mdbcomp.feedback.automatic_parallelism.int3



mdprof_test.$O :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh \
	profile.mh \
	profile.mh \
	array.mh \
	array.mh \
	string.mh \
	io.mh \
	io.mh



mdprof_test.pic_o :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh \
	profile.mh \
	profile.mh \
	array.mh \
	array.mh \
	string.mh \
	io.mh \
	io.mh


mdprof_test.int0 : mdprof_test.date0
	@:
mdprof_test.int : mdprof_test.date
	@:
mdprof_test.int2 : mdprof_test.date
	@:
mdprof_test.int3 : mdprof_test.date3
	@:
mdprof_test.opt : mdprof_test.optdate
	@:
mdprof_test.trans_opt : mdprof_test.trans_opt_date
	@:
