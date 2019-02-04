

report.optdate report.trans_opt_date report.err report.c_date report.s_date report.pic_s_date report.il_date report.java_date : report.m \
	builtin.int \
	coverage.int \
	list.int \
	map.int \
	maybe.int \
	mdbcomp.int \
	measurement_units.int \
	private_builtin.int \
	profile.int \
	query.int \
	set.int \
	unit.int \
	var_use_analysis.int \
	mdbcomp.goal_path.int \
	mdbcomp.program_representation.int \
	analysis_utils.int2 \
	array.int2 \
	assoc_list.int2 \
	bimap.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	exclude.int2 \
	io.int2 \
	measurements.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set_ordlist.int2 \
	stream.int2 \
	string.int2 \
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
report.mh report.mih : report.s
else
report.mh report.mih : report.c
endif

ifeq ($(TARGET_ASM),yes)
report.module_dep : report.s
else
 ifeq ($(findstring il,$(GRADE)),il)
report.module_dep : report.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
report.module_dep : jmercury/report.java
  else
report.module_dep : report.c
  endif
 endif
endif

report.date report.date0 : report.m \
	builtin.int3 \
	coverage.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	measurement_units.int3 \
	private_builtin.int3 \
	profile.int3 \
	query.int3 \
	set.int3 \
	unit.int3 \
	var_use_analysis.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.program_representation.int3 \
	analysis_utils.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	exclude.int3 \
	io.int3 \
	measurements.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
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

report.date0 : report.m \
	builtin.int3 \
	coverage.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	measurement_units.int3 \
	private_builtin.int3 \
	profile.int3 \
	query.int3 \
	set.int3 \
	unit.int3 \
	var_use_analysis.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.program_representation.int3 \
	analysis_utils.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	exclude.int3 \
	io.int3 \
	measurements.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
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



report.$O :  \
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



report.pic_o :  \
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


report.int0 : report.date0
	@:
report.int : report.date
	@:
report.int2 : report.date
	@:
report.int3 : report.date3
	@:
report.opt : report.optdate
	@:
report.trans_opt : report.trans_opt_date
	@:
