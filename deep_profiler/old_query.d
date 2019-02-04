

old_query.optdate old_query.trans_opt_date old_query.err old_query.c_date old_query.s_date old_query.pic_s_date old_query.il_date old_query.java_date : old_query.m \
	apply_exclusion.int \
	array.int \
	assoc_list.int \
	bool.int \
	builtin.int \
	exclude.int \
	float.int \
	html_format.int \
	int.int \
	io.int \
	list.int \
	map.int \
	maybe.int \
	measurements.int \
	old_html_format.int \
	pair.int \
	private_builtin.int \
	profile.int \
	query.int \
	require.int \
	string.int \
	top_procs.int \
	unit.int \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	cord.int2 \
	deconstruct.int2 \
	display.int2 \
	enum.int2 \
	mdbcomp.int2 \
	measurement_units.int2 \
	ops.int2 \
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
	univ.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2

ifeq ($(TARGET_ASM),yes)
old_query.mh old_query.mih : old_query.s
else
old_query.mh old_query.mih : old_query.c
endif

ifeq ($(TARGET_ASM),yes)
old_query.module_dep : old_query.s
else
 ifeq ($(findstring il,$(GRADE)),il)
old_query.module_dep : old_query.il
  ifeq ($(findstring java,$(GRADE)),java)
old_query.module_dep : jmercury/old_query.java
  else
old_query.module_dep : old_query.c
  endif
 endif
endif

old_query.date old_query.date0 : old_query.m \
	apply_exclusion.int3 \
	array.int3 \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	exclude.int3 \
	float.int3 \
	html_format.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	measurements.int3 \
	old_html_format.int3 \
	pair.int3 \
	private_builtin.int3 \
	profile.int3 \
	query.int3 \
	require.int3 \
	string.int3 \
	top_procs.int3 \
	unit.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	cord.int3 \
	deconstruct.int3 \
	display.int3 \
	enum.int3 \
	mdbcomp.int3 \
	measurement_units.int3 \
	ops.int3 \
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
	univ.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3

old_query.date0 : old_query.m \
	apply_exclusion.int3 \
	array.int3 \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	exclude.int3 \
	float.int3 \
	html_format.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	measurements.int3 \
	old_html_format.int3 \
	pair.int3 \
	private_builtin.int3 \
	profile.int3 \
	query.int3 \
	require.int3 \
	string.int3 \
	top_procs.int3 \
	unit.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	cord.int3 \
	deconstruct.int3 \
	display.int3 \
	enum.int3 \
	mdbcomp.int3 \
	measurement_units.int3 \
	ops.int3 \
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
	univ.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3



old_query.$O :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	array.mh \
	array.mh \
	profile.mh \
	profile.mh \
	string.mh \
	io.mh \
	io.mh



old_query.pic_o :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	array.mh \
	array.mh \
	profile.mh \
	profile.mh \
	string.mh \
	io.mh \
	io.mh


old_query.int0 : old_query.date0
	@:
old_query.int : old_query.date
	@:
old_query.int2 : old_query.date
	@:
old_query.int3 : old_query.date3
	@:
old_query.opt : old_query.optdate
	@:
old_query.trans_opt : old_query.trans_opt_date
	@:
