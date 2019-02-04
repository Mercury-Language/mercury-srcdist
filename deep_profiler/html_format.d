

html_format.optdate html_format.trans_opt_date html_format.err html_format.c_date html_format.s_date html_format.pic_s_date html_format.il_date html_format.java_date : html_format.m \
	builtin.int \
	char.int \
	cord.int \
	display.int \
	int.int \
	list.int \
	map.int \
	maybe.int \
	measurement_units.int \
	pair.int \
	private_builtin.int \
	profile.int \
	query.int \
	require.int \
	set.int \
	string.int \
	svmap.int \
	array.int2 \
	assoc_list.int2 \
	bimap.int2 \
	bitmap.int2 \
	bool.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	exclude.int2 \
	io.int2 \
	mdbcomp.int2 \
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
	unit.int2 \
	univ.int2 \
	mdbcomp.feedback.int2 \
	mdbcomp.goal_path.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2 \
	mdbcomp.feedback.automatic_parallelism.int2

ifeq ($(TARGET_ASM),yes)
html_format.mh html_format.mih : html_format.s
else
html_format.mh html_format.mih : html_format.c
endif

ifeq ($(TARGET_ASM),yes)
html_format.module_dep : html_format.s
else
 ifeq ($(findstring il,$(GRADE)),il)
html_format.module_dep : html_format.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
html_format.module_dep : jmercury/html_format.java
  else
html_format.module_dep : html_format.c
  endif
 endif
endif

html_format.date html_format.date0 : html_format.m \
	builtin.int3 \
	char.int3 \
	cord.int3 \
	display.int3 \
	int.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	measurement_units.int3 \
	pair.int3 \
	private_builtin.int3 \
	profile.int3 \
	query.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	svmap.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	bool.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	exclude.int3 \
	io.int3 \
	mdbcomp.int3 \
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
	unit.int3 \
	univ.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mdbcomp.feedback.automatic_parallelism.int3

html_format.date0 : html_format.m \
	builtin.int3 \
	char.int3 \
	cord.int3 \
	display.int3 \
	int.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	measurement_units.int3 \
	pair.int3 \
	private_builtin.int3 \
	profile.int3 \
	query.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	svmap.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	bool.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	exclude.int3 \
	io.int3 \
	mdbcomp.int3 \
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
	unit.int3 \
	univ.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mdbcomp.feedback.automatic_parallelism.int3



html_format.$O :  \
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
	profile.mh \
	profile.mh



html_format.pic_o :  \
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
	profile.mh \
	profile.mh


html_format.int0 : html_format.date0
	@:
html_format.int : html_format.date
	@:
html_format.int2 : html_format.date
	@:
html_format.int3 : html_format.date3
	@:
html_format.opt : html_format.optdate
	@:
html_format.trans_opt : html_format.trans_opt_date
	@:
