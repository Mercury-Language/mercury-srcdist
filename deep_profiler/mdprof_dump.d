

mdprof_dump.optdate mdprof_dump.trans_opt_date mdprof_dump.err mdprof_dump.c_date mdprof_dump.s_date mdprof_dump.pic_s_date mdprof_dump.il_date mdprof_dump.java_date : mdprof_dump.m \
	bool.int \
	builtin.int \
	char.int \
	dump.int \
	getopt.int \
	io.int \
	list.int \
	maybe.int \
	private_builtin.int \
	read_profile.int \
	string.int \
	array.int2 \
	assoc_list.int2 \
	bimap.int2 \
	bitmap.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	exclude.int2 \
	map.int2 \
	mdbcomp.int2 \
	measurement_units.int2 \
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
mdprof_dump.mh mdprof_dump.mih : mdprof_dump.s
else
mdprof_dump.mh mdprof_dump.mih : mdprof_dump.c
endif

ifeq ($(TARGET_ASM),yes)
mdprof_dump.module_dep : mdprof_dump.s
else
 ifeq ($(findstring il,$(GRADE)),il)
mdprof_dump.module_dep : mdprof_dump.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
mdprof_dump.module_dep : jmercury/mdprof_dump.java
  else
mdprof_dump.module_dep : mdprof_dump.c
  endif
 endif
endif

mdprof_dump.date mdprof_dump.date0 : mdprof_dump.m \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	dump.int3 \
	getopt.int3 \
	io.int3 \
	list.int3 \
	maybe.int3 \
	private_builtin.int3 \
	read_profile.int3 \
	string.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	exclude.int3 \
	map.int3 \
	mdbcomp.int3 \
	measurement_units.int3 \
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

mdprof_dump.date0 : mdprof_dump.m \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	dump.int3 \
	getopt.int3 \
	io.int3 \
	list.int3 \
	maybe.int3 \
	private_builtin.int3 \
	read_profile.int3 \
	string.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	exclude.int3 \
	map.int3 \
	mdbcomp.int3 \
	measurement_units.int3 \
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



mdprof_dump.$O :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	read_profile.mh \
	read_profile.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh



mdprof_dump.pic_o :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	read_profile.mh \
	read_profile.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh


mdprof_dump.int0 : mdprof_dump.date0
	@:
mdprof_dump.int : mdprof_dump.date
	@:
mdprof_dump.int2 : mdprof_dump.date
	@:
mdprof_dump.int3 : mdprof_dump.date3
	@:
mdprof_dump.opt : mdprof_dump.optdate
	@:
mdprof_dump.trans_opt : mdprof_dump.trans_opt_date
	@:
