

dump.optdate dump.trans_opt_date dump.err dump.c_date dump.s_date dump.pic_s_date dump.il_date dump.java_date : dump.m \
	array.int \
	array_util.int \
	bool.int \
	builtin.int \
	int.int \
	io.int \
	list.int \
	map.int \
	maybe.int \
	measurements.int \
	pair.int \
	private_builtin.int \
	profile.int \
	require.int \
	set.int \
	string.int \
	svset.int \
	assoc_list.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	ops.int2 \
	random.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

ifeq ($(TARGET_ASM),yes)
dump.mh dump.mih : dump.s
else
dump.mh dump.mih : dump.c
endif

ifeq ($(TARGET_ASM),yes)
dump.module_dep : dump.s
else
 ifeq ($(findstring il,$(GRADE)),il)
dump.module_dep : dump.il
  ifeq ($(findstring java,$(GRADE)),java)
dump.module_dep : dump.java
  else
dump.module_dep : dump.c
  endif
 endif
endif

dump.date dump.date0 : dump.m \
	array.int3 \
	array_util.int3 \
	bool.int3 \
	builtin.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	measurements.int3 \
	pair.int3 \
	private_builtin.int3 \
	profile.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	svset.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	ops.int3 \
	random.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

dump.date0 : dump.m \
	array.int3 \
	array_util.int3 \
	bool.int3 \
	builtin.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	measurements.int3 \
	pair.int3 \
	private_builtin.int3 \
	profile.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	svset.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	ops.int3 \
	random.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



dump.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	array.mh \
	array.mh \
	string.mh \
	io.mh \
	io.mh



dump.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	array.mh \
	array.mh \
	string.mh \
	io.mh \
	io.mh


dump.int0 : dump.date0
	@:
dump.int : dump.date
	@:
dump.int2 : dump.date
	@:
dump.int3 : dump.date3
	@:
dump.opt : dump.optdate
	@:
dump.trans_opt : dump.trans_opt_date
	@:
