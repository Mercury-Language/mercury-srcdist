

old_html_format.optdate old_html_format.trans_opt_date old_html_format.err old_html_format.c_date old_html_format.s_date old_html_format.pic_s_date old_html_format.il_date old_html_format.java_date : old_html_format.m \
	bool.int \
	builtin.int \
	float.int \
	html_format.int \
	int.int \
	list.int \
	maybe.int \
	measurement_units.int \
	measurements.int \
	private_builtin.int \
	profile.int \
	query.int \
	require.int \
	string.int \
	top_procs.int \
	unit.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	cord.int2 \
	deconstruct.int2 \
	display.int2 \
	enum.int2 \
	exclude.int2 \
	io.int2 \
	map.int2 \
	mdbcomp.int2 \
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
	univ.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2

ifeq ($(TARGET_ASM),yes)
old_html_format.mh old_html_format.mih : old_html_format.s
else
old_html_format.mh old_html_format.mih : old_html_format.c
endif

ifeq ($(TARGET_ASM),yes)
old_html_format.module_dep : old_html_format.s
else
 ifeq ($(findstring il,$(GRADE)),il)
old_html_format.module_dep : old_html_format.il
  ifeq ($(findstring java,$(GRADE)),java)
old_html_format.module_dep : jmercury/old_html_format.java
  else
old_html_format.module_dep : old_html_format.c
  endif
 endif
endif

old_html_format.date old_html_format.date0 : old_html_format.m \
	bool.int3 \
	builtin.int3 \
	float.int3 \
	html_format.int3 \
	int.int3 \
	list.int3 \
	maybe.int3 \
	measurement_units.int3 \
	measurements.int3 \
	private_builtin.int3 \
	profile.int3 \
	query.int3 \
	require.int3 \
	string.int3 \
	top_procs.int3 \
	unit.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	cord.int3 \
	deconstruct.int3 \
	display.int3 \
	enum.int3 \
	exclude.int3 \
	io.int3 \
	map.int3 \
	mdbcomp.int3 \
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
	univ.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3

old_html_format.date0 : old_html_format.m \
	bool.int3 \
	builtin.int3 \
	float.int3 \
	html_format.int3 \
	int.int3 \
	list.int3 \
	maybe.int3 \
	measurement_units.int3 \
	measurements.int3 \
	private_builtin.int3 \
	profile.int3 \
	query.int3 \
	require.int3 \
	string.int3 \
	top_procs.int3 \
	unit.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	cord.int3 \
	deconstruct.int3 \
	display.int3 \
	enum.int3 \
	exclude.int3 \
	io.int3 \
	map.int3 \
	mdbcomp.int3 \
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
	univ.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3



old_html_format.$O :  \
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



old_html_format.pic_o :  \
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


old_html_format.int0 : old_html_format.date0
	@:
old_html_format.int : old_html_format.date
	@:
old_html_format.int2 : old_html_format.date
	@:
old_html_format.int3 : old_html_format.date3
	@:
old_html_format.opt : old_html_format.optdate
	@:
old_html_format.trans_opt : old_html_format.trans_opt_date
	@:
