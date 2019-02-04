

program_representation_utils.optdate program_representation_utils.trans_opt_date program_representation_utils.err program_representation_utils.c_date program_representation_utils.s_date program_representation_utils.pic_s_date program_representation_utils.il_date program_representation_utils.java_date : program_representation_utils.m \
	array.int \
	bool.int \
	builtin.int \
	cord.int \
	int.int \
	io.int \
	list.int \
	map.int \
	maybe.int \
	mdbcomp.int \
	private_builtin.int \
	require.int \
	set.int \
	string.int \
	svmap.int \
	unit.int \
	mdbcomp.prim_data.int \
	mdbcomp.program_representation.int \
	assoc_list.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
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

ifeq ($(TARGET_ASM),yes)
program_representation_utils.mh program_representation_utils.mih : program_representation_utils.s
else
program_representation_utils.mh program_representation_utils.mih : program_representation_utils.c
endif

ifeq ($(TARGET_ASM),yes)
program_representation_utils.module_dep : program_representation_utils.s
else
 ifeq ($(findstring il,$(GRADE)),il)
program_representation_utils.module_dep : program_representation_utils.il
  ifeq ($(findstring java,$(GRADE)),java)
program_representation_utils.module_dep : jmercury/program_representation_utils.java
  else
program_representation_utils.module_dep : program_representation_utils.c
  endif
 endif
endif

program_representation_utils.date program_representation_utils.date0 : program_representation_utils.m \
	array.int3 \
	bool.int3 \
	builtin.int3 \
	cord.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	svmap.int3 \
	unit.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
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
	array.int3 \
	bool.int3 \
	builtin.int3 \
	cord.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	svmap.int3 \
	unit.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
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
