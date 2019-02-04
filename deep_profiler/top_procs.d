

top_procs.optdate top_procs.trans_opt_date top_procs.err top_procs.c_date top_procs.s_date top_procs.pic_s_date top_procs.il_date top_procs.java_date : top_procs.m \
	array.int \
	bool.int \
	builtin.int \
	float.int \
	int.int \
	list.int \
	maybe.int \
	measurements.int \
	private_builtin.int \
	profile.int \
	query.int \
	assoc_list.int2 \
	bimap.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	exclude.int2 \
	io.int2 \
	map.int2 \
	mdbcomp.int2 \
	measurement_units.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
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

ifeq ($(TARGET_ASM),yes)
top_procs.mh top_procs.mih : top_procs.s
else
top_procs.mh top_procs.mih : top_procs.c
endif

ifeq ($(TARGET_ASM),yes)
top_procs.module_dep : top_procs.s
else
 ifeq ($(findstring il,$(GRADE)),il)
top_procs.module_dep : top_procs.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
top_procs.module_dep : jmercury/top_procs.java
  else
top_procs.module_dep : top_procs.c
  endif
 endif
endif

top_procs.date top_procs.date0 : top_procs.m \
	array.int3 \
	bool.int3 \
	builtin.int3 \
	float.int3 \
	int.int3 \
	list.int3 \
	maybe.int3 \
	measurements.int3 \
	private_builtin.int3 \
	profile.int3 \
	query.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	exclude.int3 \
	io.int3 \
	map.int3 \
	mdbcomp.int3 \
	measurement_units.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
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

top_procs.date0 : top_procs.m \
	array.int3 \
	bool.int3 \
	builtin.int3 \
	float.int3 \
	int.int3 \
	list.int3 \
	maybe.int3 \
	measurements.int3 \
	private_builtin.int3 \
	profile.int3 \
	query.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	exclude.int3 \
	io.int3 \
	map.int3 \
	mdbcomp.int3 \
	measurement_units.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
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



top_procs.$O :  \
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



top_procs.pic_o :  \
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


top_procs.int0 : top_procs.date0
	@:
top_procs.int : top_procs.date
	@:
top_procs.int2 : top_procs.date
	@:
top_procs.int3 : top_procs.date3
	@:
top_procs.opt : top_procs.optdate
	@:
top_procs.trans_opt : top_procs.trans_opt_date
	@:
