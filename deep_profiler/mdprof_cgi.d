

mdprof_cgi.optdate mdprof_cgi.trans_opt_date mdprof_cgi.err mdprof_cgi.c_date mdprof_cgi.s_date mdprof_cgi.pic_s_date mdprof_cgi.il_date mdprof_cgi.java_date : mdprof_cgi.m \
	bool.int \
	builtin.int \
	char.int \
	conf.int \
	getopt.int \
	int.int \
	interface.int \
	io.int \
	library.int \
	list.int \
	map.int \
	maybe.int \
	private_builtin.int \
	profile.int \
	query.int \
	require.int \
	startup.int \
	string.int \
	timeout.int \
	util.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	mdbcomp.int2 \
	measurements.int2 \
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
	univ.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2

ifeq ($(TARGET_ASM),yes)
mdprof_cgi.mh mdprof_cgi.mih : mdprof_cgi.s
else
mdprof_cgi.mh mdprof_cgi.mih : mdprof_cgi.c
endif

ifeq ($(TARGET_ASM),yes)
mdprof_cgi.module_dep : mdprof_cgi.s
else
 ifeq ($(findstring il,$(GRADE)),il)
mdprof_cgi.module_dep : mdprof_cgi.il
  ifeq ($(findstring java,$(GRADE)),java)
mdprof_cgi.module_dep : mdprof_cgi.java
  else
mdprof_cgi.module_dep : mdprof_cgi.c
  endif
 endif
endif

mdprof_cgi.date mdprof_cgi.date0 : mdprof_cgi.m \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	conf.int3 \
	getopt.int3 \
	int.int3 \
	interface.int3 \
	io.int3 \
	library.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	private_builtin.int3 \
	profile.int3 \
	query.int3 \
	require.int3 \
	startup.int3 \
	string.int3 \
	timeout.int3 \
	util.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	mdbcomp.int3 \
	measurements.int3 \
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
	univ.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3

mdprof_cgi.date0 : mdprof_cgi.m \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	conf.int3 \
	getopt.int3 \
	int.int3 \
	interface.int3 \
	io.int3 \
	library.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	private_builtin.int3 \
	profile.int3 \
	query.int3 \
	require.int3 \
	startup.int3 \
	string.int3 \
	timeout.int3 \
	util.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	mdbcomp.int3 \
	measurements.int3 \
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
	univ.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3



mdprof_cgi.$O :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	profile.mh \
	profile.mh \
	string.mh \
	io.mh \
	io.mh \
	mdprof_cgi.mh



mdprof_cgi.pic_o :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	profile.mh \
	profile.mh \
	string.mh \
	io.mh \
	io.mh \
	mdprof_cgi.mh


mdprof_cgi.int0 : mdprof_cgi.date0
	@:
mdprof_cgi.int : mdprof_cgi.date
	@:
mdprof_cgi.int2 : mdprof_cgi.date
	@:
mdprof_cgi.int3 : mdprof_cgi.date3
	@:
mdprof_cgi.opt : mdprof_cgi.optdate
	@:
mdprof_cgi.trans_opt : mdprof_cgi.trans_opt_date
	@:
