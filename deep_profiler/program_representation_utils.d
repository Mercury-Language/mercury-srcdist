

program_representation_utils.optdate program_representation_utils.trans_opt_date program_representation_utils.err program_representation_utils.c_date program_representation_utils.s_date program_representation_utils.pic_s_date program_representation_utils.il_date program_representation_utils.java_date : program_representation_utils.m \
	bool.int \
	builtin.int \
	cord.int \
	counter.int \
	int.int \
	list.int \
	map.int \
	maybe.int \
	mdbcomp.int \
	private_builtin.int \
	require.int \
	set.int \
	std_util.int \
	string.int \
	unit.int \
	mdbcomp.goal_path.int \
	mdbcomp.prim_data.int \
	mdbcomp.program_representation.int \
	mdbcomp.sym_name.int \
	array.int2 \
	assoc_list.int2 \
	bimap.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	io.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2

program_representation_utils.pic_o program_representation_utils.$O : \
	array.mih \
	assoc_list.mih \
	bimap.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
	char.mih \
	construct.mih \
	cord.mih \
	counter.mih \
	deconstruct.mih \
	enum.mih \
	int.mih \
	io.mih \
	list.mih \
	map.mih \
	maybe.mih \
	mdbcomp.mih \
	ops.mih \
	pair.mih \
	pretty_printer.mih \
	private_builtin.mih \
	random.mih \
	require.mih \
	rtti_implementation.mih \
	set.mih \
	set_ordlist.mih \
	std_util.mih \
	stream.mih \
	string.mih \
	term.mih \
	time.mih \
	tree234.mih \
	type_desc.mih \
	unit.mih \
	univ.mih \
	mdbcomp.goal_path.mih \
	mdbcomp.prim_data.mih \
	mdbcomp.program_representation.mih \
	mdbcomp.rtti_access.mih \
	mdbcomp.sym_name.mih \
	mdbcomp.trace_counts.mih

program_representation_utils.mh program_representation_utils.mih : program_representation_utils.c


ifeq ($(findstring il,$(GRADE)),il)
program_representation_utils.module_dep : program_representation_utils.il
else
 ifeq ($(findstring java,$(GRADE)),java)
program_representation_utils.module_dep : jmercury/program_representation_utils.java
 else
program_representation_utils.module_dep : program_representation_utils.c
 endif
endif


program_representation_utils.date program_representation_utils.date0 : program_representation_utils.m \
	bool.int3 \
	builtin.int3 \
	cord.int3 \
	counter.int3 \
	int.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	std_util.int3 \
	string.int3 \
	unit.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.sym_name.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3

program_representation_utils.date0 : program_representation_utils.m \
	bool.int3 \
	builtin.int3 \
	cord.int3 \
	counter.int3 \
	int.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	std_util.int3 \
	string.int3 \
	unit.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.sym_name.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3



program_representation_utils.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	array.mh \
	array.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh



program_representation_utils.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	array.mh \
	array.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh


program_representation_utils.int0 : program_representation_utils.date0
	@:
program_representation_utils.int : program_representation_utils.date
	@:
program_representation_utils.int2 : program_representation_utils.date
	@:
program_representation_utils.int3 : program_representation_utils.date3
	@:
program_representation_utils.opt : program_representation_utils.optdate
	@:
program_representation_utils.trans_opt : program_representation_utils.trans_opt_date
	@:
