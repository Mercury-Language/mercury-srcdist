

mdprof_procrep.optdate mdprof_procrep.trans_opt_date mdprof_procrep.err mdprof_procrep.c_date mdprof_procrep.s_date mdprof_procrep.pic_s_date mdprof_procrep.il_date mdprof_procrep.java_date : mdprof_procrep.m \
	builtin.int \
	char.int \
	cord.int \
	getopt.int \
	io.int \
	list.int \
	map.int \
	maybe.int \
	mdbcomp.int \
	private_builtin.int \
	program_representation_utils.int \
	string.int \
	mdbcomp.program_representation.int \
	array.int2 \
	assoc_list.int2 \
	bimap.int2 \
	bitmap.int2 \
	bool.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
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
	mdbcomp.goal_path.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2

mdprof_procrep.mh mdprof_procrep.mih : mdprof_procrep.c


ifeq ($(findstring il,$(GRADE)),il)
mdprof_procrep.module_dep : mdprof_procrep.il
else
 ifeq ($(findstring java,$(GRADE)),java)
mdprof_procrep.module_dep : jmercury/mdprof_procrep.java
 else
mdprof_procrep.module_dep : mdprof_procrep.c
 endif
endif


mdprof_procrep.date mdprof_procrep.date0 : mdprof_procrep.m \
	builtin.int3 \
	char.int3 \
	cord.int3 \
	getopt.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	program_representation_utils.int3 \
	string.int3 \
	mdbcomp.program_representation.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	bool.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
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
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3

mdprof_procrep.date0 : mdprof_procrep.m \
	builtin.int3 \
	char.int3 \
	cord.int3 \
	getopt.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	program_representation_utils.int3 \
	string.int3 \
	mdbcomp.program_representation.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	bool.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
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
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3



mdprof_procrep.$O :  \
	array.mh \
	array.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh



mdprof_procrep.pic_o :  \
	array.mh \
	array.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh \
	string.mh \
	time.mh \
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
