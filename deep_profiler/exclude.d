

exclude.optdate exclude.trans_opt_date exclude.err exclude.c_date exclude.s_date exclude.pic_s_date exclude.il_date exclude.java_date : exclude.m \
	bool.int \
	builtin.int \
	char.int \
	io.int \
	list.int \
	map.int \
	maybe.int \
	private_builtin.int \
	profile.int \
	set.int \
	stream.int \
	string.int \
	string.format.int \
	string.parse_util.int \
	array.int2 \
	assoc_list.int2 \
	bimap.int2 \
	bitmap.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	integer.int2 \
	mdbcomp.int2 \
	measurement_units.int2 \
	measurements.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set_ordlist.int2 \
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
	mdbcomp.sym_name.int2 \
	mdbcomp.trace_counts.int2 \
	mdbcomp.feedback.automatic_parallelism.int2

exclude.pic_o exclude.$O : \
	array.mih \
	assoc_list.mih \
	bimap.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
	char.mih \
	construct.mih \
	deconstruct.mih \
	enum.mih \
	exclude.mih \
	integer.mih \
	io.mih \
	list.mih \
	map.mih \
	maybe.mih \
	mdbcomp.mih \
	measurement_units.mih \
	measurements.mih \
	ops.mih \
	pair.mih \
	pretty_printer.mih \
	private_builtin.mih \
	profile.mih \
	random.mih \
	rtti_implementation.mih \
	set.mih \
	set_ordlist.mih \
	stream.mih \
	string.mih \
	term.mih \
	time.mih \
	tree234.mih \
	type_desc.mih \
	unit.mih \
	univ.mih \
	mdbcomp.feedback.mih \
	mdbcomp.goal_path.mih \
	mdbcomp.prim_data.mih \
	mdbcomp.program_representation.mih \
	mdbcomp.rtti_access.mih \
	mdbcomp.sym_name.mih \
	mdbcomp.trace_counts.mih \
	string.format.mih \
	string.parse_util.mih \
	mdbcomp.feedback.automatic_parallelism.mih

exclude.mh exclude.mih : exclude.c


ifeq ($(findstring il,$(GRADE)),il)
exclude.module_dep : exclude.il
else
 ifeq ($(findstring java,$(GRADE)),java)
exclude.module_dep : jmercury/exclude.java
 else
exclude.module_dep : exclude.c
 endif
endif


exclude.date exclude.date0 : exclude.m \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	private_builtin.int3 \
	profile.int3 \
	set.int3 \
	stream.int3 \
	string.int3 \
	string.format.int3 \
	string.parse_util.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	integer.int3 \
	mdbcomp.int3 \
	measurement_units.int3 \
	measurements.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
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
	mdbcomp.sym_name.int3 \
	mdbcomp.trace_counts.int3 \
	mdbcomp.feedback.automatic_parallelism.int3

exclude.date0 : exclude.m \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	private_builtin.int3 \
	profile.int3 \
	set.int3 \
	stream.int3 \
	string.int3 \
	string.format.int3 \
	string.parse_util.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	integer.int3 \
	mdbcomp.int3 \
	measurement_units.int3 \
	measurements.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
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
	mdbcomp.sym_name.int3 \
	mdbcomp.trace_counts.int3 \
	mdbcomp.feedback.automatic_parallelism.int3



exclude.$O :  \
	io.mh \
	io.mh \
	time.mh \
	string.mh \
	profile.mh \
	profile.mh \
	bitmap.mh \
	bitmap.mh \
	time.mh \
	time.mh \
	array.mh \
	array.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh



exclude.pic_o :  \
	io.mh \
	io.mh \
	time.mh \
	string.mh \
	profile.mh \
	profile.mh \
	bitmap.mh \
	bitmap.mh \
	time.mh \
	time.mh \
	array.mh \
	array.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh


exclude.int0 : exclude.date0
	@:
exclude.int : exclude.date
	@:
exclude.int2 : exclude.date
	@:
exclude.int3 : exclude.date3
	@:
exclude.opt : exclude.optdate
	@:
exclude.trans_opt : exclude.trans_opt_date
	@:
