

display.optdate display.trans_opt_date display.err display.c_date display.s_date display.pic_s_date display.il_date display.java_date : display.m \
	builtin.int \
	int.int \
	list.int \
	maybe.int \
	measurement_units.int \
	private_builtin.int \
	query.int \
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
	map.int2 \
	mdbcomp.int2 \
	measurements.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	profile.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	string.int2 \
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

display.mh display.mih : display.c


ifeq ($(findstring il,$(GRADE)),il)
display.module_dep : display.il
else
 ifeq ($(findstring java,$(GRADE)),java)
display.module_dep : jmercury/display.java
 else
display.module_dep : display.c
 endif
endif


display.date display.date0 : display.m \
	builtin.int3 \
	int.int3 \
	list.int3 \
	maybe.int3 \
	measurement_units.int3 \
	private_builtin.int3 \
	query.int3 \
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
	map.int3 \
	mdbcomp.int3 \
	measurements.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	profile.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
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

display.date0 : display.m \
	builtin.int3 \
	int.int3 \
	list.int3 \
	maybe.int3 \
	measurement_units.int3 \
	private_builtin.int3 \
	query.int3 \
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
	map.int3 \
	mdbcomp.int3 \
	measurements.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	profile.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
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



display.$O :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh



display.pic_o :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh


display.int0 : display.date0
	@:
display.int : display.date
	@:
display.int2 : display.date
	@:
display.int3 : display.date3
	@:
display.opt : display.optdate
	@:
display.trans_opt : display.trans_opt_date
	@:
