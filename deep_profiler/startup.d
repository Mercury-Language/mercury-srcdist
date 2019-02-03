

startup.optdate startup.trans_opt_date startup.err startup.c_date startup.s_date startup.pic_s_date startup.il_date startup.java_date : startup.m \
	array.int \
	array_util.int \
	bool.int \
	builtin.int \
	callgraph.int \
	canonical.int \
	dump.int \
	exclude.int \
	int.int \
	io.int \
	list.int \
	map.int \
	maybe.int \
	mdbcomp.int \
	measurements.int \
	private_builtin.int \
	profile.int \
	read_profile.int \
	require.int \
	string.int \
	svarray.int \
	svmap.int \
	mdbcomp.program_representation.int \
	assoc_list.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	measurement_units.int2 \
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
	mdbcomp.prim_data.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2

ifeq ($(TARGET_ASM),yes)
startup.mh startup.mih : startup.s
else
startup.mh startup.mih : startup.c
endif

ifeq ($(TARGET_ASM),yes)
startup.module_dep : startup.s
else
 ifeq ($(findstring il,$(GRADE)),il)
startup.module_dep : startup.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
startup.module_dep : jmercury/startup.java
  else
startup.module_dep : startup.c
  endif
 endif
endif

startup.date startup.date0 : startup.m \
	array.int3 \
	array_util.int3 \
	bool.int3 \
	builtin.int3 \
	callgraph.int3 \
	canonical.int3 \
	dump.int3 \
	exclude.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	measurements.int3 \
	private_builtin.int3 \
	profile.int3 \
	read_profile.int3 \
	require.int3 \
	string.int3 \
	svarray.int3 \
	svmap.int3 \
	mdbcomp.program_representation.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	measurement_units.int3 \
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
	mdbcomp.prim_data.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3

startup.date0 : startup.m \
	array.int3 \
	array_util.int3 \
	bool.int3 \
	builtin.int3 \
	callgraph.int3 \
	canonical.int3 \
	dump.int3 \
	exclude.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	measurements.int3 \
	private_builtin.int3 \
	profile.int3 \
	read_profile.int3 \
	require.int3 \
	string.int3 \
	svarray.int3 \
	svmap.int3 \
	mdbcomp.program_representation.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	measurement_units.int3 \
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
	mdbcomp.prim_data.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3



startup.$O :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh \
	read_profile.mh \
	read_profile.mh \
	array.mh \
	array.mh \
	profile.mh \
	profile.mh \
	string.mh \
	io.mh \
	io.mh



startup.pic_o :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh \
	read_profile.mh \
	read_profile.mh \
	array.mh \
	array.mh \
	profile.mh \
	profile.mh \
	string.mh \
	io.mh \
	io.mh


startup.int0 : startup.date0
	@:
startup.int : startup.date
	@:
startup.int2 : startup.date
	@:
startup.int3 : startup.date3
	@:
startup.opt : startup.optdate
	@:
startup.trans_opt : startup.trans_opt_date
	@:
