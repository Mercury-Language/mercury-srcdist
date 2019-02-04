

mdprof_feedback.optdate mdprof_feedback.trans_opt_date mdprof_feedback.err mdprof_feedback.c_date mdprof_feedback.s_date mdprof_feedback.pic_s_date mdprof_feedback.il_date mdprof_feedback.java_date : mdprof_feedback.m \
	array.int \
	bool.int \
	builtin.int \
	char.int \
	conf.int \
	getopt.int \
	int.int \
	io.int \
	library.int \
	list.int \
	map.int \
	maybe.int \
	measurements.int \
	private_builtin.int \
	profile.int \
	require.int \
	startup.int \
	string.int \
	assoc_list.int2 \
	bitmap.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	ops.int2 \
	pair.int2 \
	random.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

ifeq ($(TARGET_ASM),yes)
mdprof_feedback.mh mdprof_feedback.mih : mdprof_feedback.s
else
mdprof_feedback.mh mdprof_feedback.mih : mdprof_feedback.c
endif

ifeq ($(TARGET_ASM),yes)
mdprof_feedback.module_dep : mdprof_feedback.s
else
 ifeq ($(findstring il,$(GRADE)),il)
mdprof_feedback.module_dep : mdprof_feedback.il
  ifeq ($(findstring java,$(GRADE)),java)
mdprof_feedback.module_dep : mdprof_feedback.java
  else
mdprof_feedback.module_dep : mdprof_feedback.c
  endif
 endif
endif

mdprof_feedback.date mdprof_feedback.date0 : mdprof_feedback.m \
	array.int3 \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	conf.int3 \
	getopt.int3 \
	int.int3 \
	io.int3 \
	library.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	measurements.int3 \
	private_builtin.int3 \
	profile.int3 \
	require.int3 \
	startup.int3 \
	string.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	ops.int3 \
	pair.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

mdprof_feedback.date0 : mdprof_feedback.m \
	array.int3 \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	conf.int3 \
	getopt.int3 \
	int.int3 \
	io.int3 \
	library.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	measurements.int3 \
	private_builtin.int3 \
	profile.int3 \
	require.int3 \
	startup.int3 \
	string.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	ops.int3 \
	pair.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



mdprof_feedback.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	array.mh \
	array.mh \
	string.mh \
	io.mh \
	io.mh



mdprof_feedback.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	array.mh \
	array.mh \
	string.mh \
	io.mh \
	io.mh


mdprof_feedback.int0 : mdprof_feedback.date0
	@:
mdprof_feedback.int : mdprof_feedback.date
	@:
mdprof_feedback.int2 : mdprof_feedback.date
	@:
mdprof_feedback.int3 : mdprof_feedback.date3
	@:
mdprof_feedback.opt : mdprof_feedback.optdate
	@:
mdprof_feedback.trans_opt : mdprof_feedback.trans_opt_date
	@:
