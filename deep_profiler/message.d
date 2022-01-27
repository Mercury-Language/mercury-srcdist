

message.optdate message.trans_opt_date message.err message.c_date message.s_date message.pic_s_date message.il_date message.java_date : message.m \
	builtin.int \
	cord.int \
	int.int \
	io.int \
	list.int \
	mdbcomp.int \
	private_builtin.int \
	profile.int \
	program_representation_utils.int \
	require.int \
	string.int \
	mdbcomp.goal_path.int \
	mdbcomp.program_representation.int \
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
	map.int2 \
	maybe.int2 \
	measurement_units.int2 \
	measurements.int2 \
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
	mdbcomp.feedback.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2 \
	mdbcomp.feedback.automatic_parallelism.int2

message.pic_o message.$O : \
	array.mih \
	assoc_list.mih \
	bimap.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
	char.mih \
	construct.mih \
	cord.mih \
	deconstruct.mih \
	enum.mih \
	exclude.mih \
	int.mih \
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
	program_representation_utils.mih \
	random.mih \
	require.mih \
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
	mdbcomp.trace_counts.mih \
	mdbcomp.feedback.automatic_parallelism.mih

message.mh message.mih : message.c


ifeq ($(findstring il,$(GRADE)),il)
message.module_dep : message.il
else
 ifeq ($(findstring java,$(GRADE)),java)
message.module_dep : jmercury/message.java
 else
message.module_dep : message.c
 endif
endif


message.date message.date0 : message.m \
	builtin.int3 \
	cord.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	profile.int3 \
	program_representation_utils.int3 \
	require.int3 \
	string.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.program_representation.int3 \
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
	map.int3 \
	maybe.int3 \
	measurement_units.int3 \
	measurements.int3 \
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
	mdbcomp.feedback.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mdbcomp.feedback.automatic_parallelism.int3

message.date0 : message.m \
	builtin.int3 \
	cord.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	profile.int3 \
	program_representation_utils.int3 \
	require.int3 \
	string.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.program_representation.int3 \
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
	map.int3 \
	maybe.int3 \
	measurement_units.int3 \
	measurements.int3 \
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
	mdbcomp.feedback.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mdbcomp.feedback.automatic_parallelism.int3



message.$O :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh \
	profile.mh \
	profile.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	message.mh



message.pic_o :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh \
	profile.mh \
	profile.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	message.mh


message.int0 : message.date0
	@:
message.int : message.date
	@:
message.int2 : message.date
	@:
message.int3 : message.date3
	@:
message.opt : message.optdate
	@:
message.trans_opt : message.trans_opt_date
	@:
