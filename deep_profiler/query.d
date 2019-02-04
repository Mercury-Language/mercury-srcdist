

query.optdate query.trans_opt_date query.err query.c_date query.s_date query.pic_s_date query.il_date query.java_date : query.m \
	bool.int \
	builtin.int \
	char.int \
	create_report.int \
	display_report.int \
	exception.int \
	html_format.int \
	int.int \
	io.int \
	list.int \
	math.int \
	maybe.int \
	measurement_units.int \
	private_builtin.int \
	profile.int \
	report.int \
	string.int \
	table_builtin.int \
	univ.int \
	util.int \
	analysis_utils.int2 \
	array.int2 \
	assoc_list.int2 \
	bimap.int2 \
	bitmap.int2 \
	construct.int2 \
	cord.int2 \
	coverage.int2 \
	deconstruct.int2 \
	display.int2 \
	enum.int2 \
	exclude.int2 \
	map.int2 \
	mdbcomp.int2 \
	measurements.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	stm_builtin.int2 \
	store.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	unit.int2 \
	var_use_analysis.int2 \
	mdbcomp.feedback.int2 \
	mdbcomp.goal_path.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2 \
	mdbcomp.feedback.automatic_parallelism.int2

ifeq ($(TARGET_ASM),yes)
query.mh query.mih : query.s
else
query.mh query.mih : query.c
endif

ifeq ($(TARGET_ASM),yes)
query.module_dep : query.s
else
 ifeq ($(findstring il,$(GRADE)),il)
query.module_dep : query.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
query.module_dep : jmercury/query.java
  else
query.module_dep : query.c
  endif
 endif
endif

query.date query.date0 : query.m \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	create_report.int3 \
	display_report.int3 \
	exception.int3 \
	html_format.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	math.int3 \
	maybe.int3 \
	measurement_units.int3 \
	private_builtin.int3 \
	profile.int3 \
	report.int3 \
	string.int3 \
	table_builtin.int3 \
	univ.int3 \
	util.int3 \
	analysis_utils.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	construct.int3 \
	cord.int3 \
	coverage.int3 \
	deconstruct.int3 \
	display.int3 \
	enum.int3 \
	exclude.int3 \
	map.int3 \
	mdbcomp.int3 \
	measurements.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stm_builtin.int3 \
	store.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	var_use_analysis.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mdbcomp.feedback.automatic_parallelism.int3

query.date0 : query.m \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	create_report.int3 \
	display_report.int3 \
	exception.int3 \
	html_format.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	math.int3 \
	maybe.int3 \
	measurement_units.int3 \
	private_builtin.int3 \
	profile.int3 \
	report.int3 \
	string.int3 \
	table_builtin.int3 \
	univ.int3 \
	util.int3 \
	analysis_utils.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	construct.int3 \
	cord.int3 \
	coverage.int3 \
	deconstruct.int3 \
	display.int3 \
	enum.int3 \
	exclude.int3 \
	map.int3 \
	mdbcomp.int3 \
	measurements.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stm_builtin.int3 \
	store.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	var_use_analysis.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mdbcomp.feedback.automatic_parallelism.int3



query.$O :  \
	store.mh \
	store.mh \
	stm_builtin.mh \
	stm_builtin.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	table_builtin.mh \
	table_builtin.mh \
	profile.mh \
	profile.mh \
	string.mh \
	io.mh \
	io.mh



query.pic_o :  \
	store.mh \
	store.mh \
	stm_builtin.mh \
	stm_builtin.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	table_builtin.mh \
	table_builtin.mh \
	profile.mh \
	profile.mh \
	string.mh \
	io.mh \
	io.mh


query.int0 : query.date0
	@:
query.int : query.date
	@:
query.int2 : query.date
	@:
query.int3 : query.date3
	@:
query.opt : query.optdate
	@:
query.trans_opt : query.trans_opt_date
	@:
