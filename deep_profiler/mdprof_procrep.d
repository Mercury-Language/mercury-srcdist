

mdprof_procrep.optdate mdprof_procrep.trans_opt_date mdprof_procrep.err mdprof_procrep.c_date mdprof_procrep.s_date mdprof_procrep.pic_s_date mdprof_procrep.il_date mdprof_procrep.java_date : mdprof_procrep.m \
	bool.int \
	builtin.int \
	char.int \
	cord.int \
	int.int \
	io.int \
	list.int \
	map.int \
	maybe.int \
	mdbcomp.int \
	private_builtin.int \
	program_representation_utils.int \
	require.int \
	string.int \
	mdbcomp.prim_data.int \
	mdbcomp.program_representation.int \
	mdbcomp.rtti_access.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	random.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	unit.int2 \
	univ.int2 \
	mdbcomp.trace_counts.int2

ifeq ($(TARGET_ASM),yes)
mdprof_procrep.mh mdprof_procrep.mih : mdprof_procrep.s
else
mdprof_procrep.mh mdprof_procrep.mih : mdprof_procrep.c
endif

ifeq ($(TARGET_ASM),yes)
mdprof_procrep.module_dep : mdprof_procrep.s
else
 ifeq ($(findstring il,$(GRADE)),il)
mdprof_procrep.module_dep : mdprof_procrep.il
  ifeq ($(findstring java,$(GRADE)),java)
mdprof_procrep.module_dep : mercury/mdprof_procrep.java
  else
mdprof_procrep.module_dep : mdprof_procrep.c
  endif
 endif
endif

mdprof_procrep.date mdprof_procrep.date0 : mdprof_procrep.m \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	cord.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	program_representation_utils.int3 \
	require.int3 \
	string.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	mdbcomp.trace_counts.int3

mdprof_procrep.date0 : mdprof_procrep.m \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	cord.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	program_representation_utils.int3 \
	require.int3 \
	string.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	mdbcomp.trace_counts.int3



mdprof_procrep.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh \
	string.mh \
	io.mh \
	io.mh



mdprof_procrep.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh \
	string.mh \
	io.mh \
	io.mh


mdprof_procrep.int0 : mdprof_procrep.date0
	@:
mdprof_procrep.int : mdprof_procrep.date
	@:
mdprof_procrep.int2 : mdprof_procrep.date
	@:
mdprof_procrep.int3 : mdprof_procrep.date3
	@:
mdprof_procrep.opt : mdprof_procrep.optdate
	@:
mdprof_procrep.trans_opt : mdprof_procrep.trans_opt_date
	@:
