

mdprof_fb.automatic_parallelism.optdate mdprof_fb.automatic_parallelism.trans_opt_date mdprof_fb.automatic_parallelism.err mdprof_fb.automatic_parallelism.c_date mdprof_fb.automatic_parallelism.s_date mdprof_fb.automatic_parallelism.pic_s_date mdprof_fb.automatic_parallelism.il_date mdprof_fb.automatic_parallelism.java_date : mdprof_fb.automatic_parallelism.m \
	mdprof_fb.int0 \
	array.int \
	assoc_list.int \
	builtin.int \
	cord.int \
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
	message.int \
	multi_map.int \
	mutvar.int \
	pair.int \
	pqueue.int \
	private_builtin.int \
	profile.int \
	program_representation_utils.int \
	report.int \
	require.int \
	set.int \
	string.int \
	svmap.int \
	svset.int \
	var_use_analysis.int \
	mdbcomp.feedback.int \
	mdbcomp.program_representation.int \
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
	unit.int2 \
	univ.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2

ifeq ($(TARGET_ASM),yes)
mdprof_fb.automatic_parallelism.mh mdprof_fb.automatic_parallelism.mih : mdprof_fb.automatic_parallelism.s
else
mdprof_fb.automatic_parallelism.mh mdprof_fb.automatic_parallelism.mih : mdprof_fb.automatic_parallelism.c
endif

ifeq ($(TARGET_ASM),yes)
mdprof_fb.automatic_parallelism.module_dep : mdprof_fb.automatic_parallelism.s
else
 ifeq ($(findstring il,$(GRADE)),il)
mdprof_fb.automatic_parallelism.module_dep : mdprof_fb.automatic_parallelism.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
mdprof_fb.automatic_parallelism.module_dep : jmercury/mdprof_fb__automatic_parallelism.java
  else
mdprof_fb.automatic_parallelism.module_dep : mdprof_fb.automatic_parallelism.c
  endif
 endif
endif

mdprof_fb.automatic_parallelism.date mdprof_fb.automatic_parallelism.date0 \
	mdprof_fb.date : mdprof_fb.automatic_parallelism.m \
	mdprof_fb.int0 \
	array.int3 \
	assoc_list.int3 \
	builtin.int3 \
	cord.int3 \
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
	message.int3 \
	multi_map.int3 \
	mutvar.int3 \
	pair.int3 \
	pqueue.int3 \
	private_builtin.int3 \
	profile.int3 \
	program_representation_utils.int3 \
	report.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	svmap.int3 \
	svset.int3 \
	var_use_analysis.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.program_representation.int3 \
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
	unit.int3 \
	univ.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3

mdprof_fb.automatic_parallelism.date0 \
	mdprof_fb.date0 : mdprof_fb.automatic_parallelism.m \
	array.int3 \
	assoc_list.int3 \
	builtin.int3 \
	cord.int3 \
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
	message.int3 \
	multi_map.int3 \
	mutvar.int3 \
	pair.int3 \
	pqueue.int3 \
	private_builtin.int3 \
	profile.int3 \
	program_representation_utils.int3 \
	report.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	svmap.int3 \
	svset.int3 \
	var_use_analysis.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.program_representation.int3 \
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
	unit.int3 \
	univ.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3



mdprof_fb.automatic_parallelism.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	string.mh \
	io.mh \
	io.mh \
	array.mh \
	array.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh \
	profile.mh \
	profile.mh



mdprof_fb.automatic_parallelism.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	string.mh \
	io.mh \
	io.mh \
	array.mh \
	array.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh \
	profile.mh \
	profile.mh


mdprof_fb.automatic_parallelism.int0 : mdprof_fb.automatic_parallelism.date0
	@:
mdprof_fb.automatic_parallelism.int : mdprof_fb.automatic_parallelism.date
	@:
mdprof_fb.automatic_parallelism.int2 : mdprof_fb.automatic_parallelism.date
	@:
mdprof_fb.automatic_parallelism.int3 : mdprof_fb.automatic_parallelism.date3
	@:
mdprof_fb.automatic_parallelism.opt : mdprof_fb.automatic_parallelism.optdate
	@:
mdprof_fb.automatic_parallelism.trans_opt : mdprof_fb.automatic_parallelism.trans_opt_date
	@:
