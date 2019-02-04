

display_report.optdate display_report.trans_opt_date display_report.err display_report.c_date display_report.s_date display_report.pic_s_date display_report.il_date display_report.java_date : display_report.m \
	bool.int \
	builtin.int \
	display.int \
	float.int \
	int.int \
	list.int \
	maybe.int \
	measurement_units.int \
	pair.int \
	private_builtin.int \
	profile.int \
	query.int \
	report.int \
	string.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	cord.int2 \
	deconstruct.int2 \
	enum.int2 \
	io.int2 \
	map.int2 \
	mdbcomp.int2 \
	measurements.int2 \
	ops.int2 \
	pretty_printer.int2 \
	random.int2 \
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
display_report.mh display_report.mih : display_report.s
else
display_report.mh display_report.mih : display_report.c
endif

ifeq ($(TARGET_ASM),yes)
display_report.module_dep : display_report.s
else
 ifeq ($(findstring il,$(GRADE)),il)
display_report.module_dep : display_report.il
  ifeq ($(findstring java,$(GRADE)),java)
display_report.module_dep : display_report.java
  else
display_report.module_dep : display_report.c
  endif
 endif
endif

display_report.date display_report.date0 : display_report.m \
	bool.int3 \
	builtin.int3 \
	display.int3 \
	float.int3 \
	int.int3 \
	list.int3 \
	maybe.int3 \
	measurement_units.int3 \
	pair.int3 \
	private_builtin.int3 \
	profile.int3 \
	query.int3 \
	report.int3 \
	string.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	cord.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	map.int3 \
	mdbcomp.int3 \
	measurements.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
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

display_report.date0 : display_report.m \
	bool.int3 \
	builtin.int3 \
	display.int3 \
	float.int3 \
	int.int3 \
	list.int3 \
	maybe.int3 \
	measurement_units.int3 \
	pair.int3 \
	private_builtin.int3 \
	profile.int3 \
	query.int3 \
	report.int3 \
	string.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	cord.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	map.int3 \
	mdbcomp.int3 \
	measurements.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
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



display_report.$O :  \
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



display_report.pic_o :  \
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


display_report.int0 : display_report.date0
	@:
display_report.int : display_report.date
	@:
display_report.int2 : display_report.date
	@:
display_report.int3 : display_report.date3
	@:
display_report.opt : display_report.optdate
	@:
display_report.trans_opt : display_report.trans_opt_date
	@:
