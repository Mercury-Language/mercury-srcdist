

create_report.optdate create_report.trans_opt_date create_report.err create_report.c_date create_report.s_date create_report.pic_s_date create_report.il_date create_report.java_date : create_report.m \
	apply_exclusion.int \
	array.int \
	assoc_list.int \
	builtin.int \
	char.int \
	coverage.int \
	exception.int \
	exclude.int \
	float.int \
	int.int \
	list.int \
	map.int \
	math.int \
	maybe.int \
	mdbcomp.int \
	measurement_units.int \
	measurements.int \
	pair.int \
	private_builtin.int \
	profile.int \
	program_representation_utils.int \
	query.int \
	report.int \
	require.int \
	set.int \
	string.int \
	svmap.int \
	top_procs.int \
	unit.int \
	univ.int \
	var_use_analysis.int \
	mdbcomp.program_representation.int \
	bitmap.int2 \
	bool.int2 \
	construct.int2 \
	cord.int2 \
	deconstruct.int2 \
	enum.int2 \
	io.int2 \
	ops.int2 \
	pretty_printer.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set_ordlist.int2 \
	stm_builtin.int2 \
	store.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2

ifeq ($(TARGET_ASM),yes)
create_report.mh create_report.mih : create_report.s
else
create_report.mh create_report.mih : create_report.c
endif

ifeq ($(TARGET_ASM),yes)
create_report.module_dep : create_report.s
else
 ifeq ($(findstring il,$(GRADE)),il)
create_report.module_dep : create_report.il
  ifeq ($(findstring java,$(GRADE)),java)
create_report.module_dep : jmercury/create_report.java
  else
create_report.module_dep : create_report.c
  endif
 endif
endif

create_report.date create_report.date0 : create_report.m \
	apply_exclusion.int3 \
	array.int3 \
	assoc_list.int3 \
	builtin.int3 \
	char.int3 \
	coverage.int3 \
	exception.int3 \
	exclude.int3 \
	float.int3 \
	int.int3 \
	list.int3 \
	map.int3 \
	math.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	measurement_units.int3 \
	measurements.int3 \
	pair.int3 \
	private_builtin.int3 \
	profile.int3 \
	program_representation_utils.int3 \
	query.int3 \
	report.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	svmap.int3 \
	top_procs.int3 \
	unit.int3 \
	univ.int3 \
	var_use_analysis.int3 \
	mdbcomp.program_representation.int3 \
	bitmap.int3 \
	bool.int3 \
	construct.int3 \
	cord.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stm_builtin.int3 \
	store.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3

create_report.date0 : create_report.m \
	apply_exclusion.int3 \
	array.int3 \
	assoc_list.int3 \
	builtin.int3 \
	char.int3 \
	coverage.int3 \
	exception.int3 \
	exclude.int3 \
	float.int3 \
	int.int3 \
	list.int3 \
	map.int3 \
	math.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	measurement_units.int3 \
	measurements.int3 \
	pair.int3 \
	private_builtin.int3 \
	profile.int3 \
	program_representation_utils.int3 \
	query.int3 \
	report.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	svmap.int3 \
	top_procs.int3 \
	unit.int3 \
	univ.int3 \
	var_use_analysis.int3 \
	mdbcomp.program_representation.int3 \
	bitmap.int3 \
	bool.int3 \
	construct.int3 \
	cord.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stm_builtin.int3 \
	store.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3



create_report.$O :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	stm_builtin.mh \
	stm_builtin.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh \
	array.mh \
	array.mh \
	profile.mh \
	profile.mh



create_report.pic_o :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	stm_builtin.mh \
	stm_builtin.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh \
	array.mh \
	array.mh \
	profile.mh \
	profile.mh


create_report.int0 : create_report.date0
	@:
create_report.int : create_report.date
	@:
create_report.int2 : create_report.date
	@:
create_report.int3 : create_report.date3
	@:
create_report.opt : create_report.optdate
	@:
create_report.trans_opt : create_report.trans_opt_date
	@:
