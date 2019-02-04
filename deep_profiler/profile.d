

profile.optdate profile.trans_opt_date profile.err profile.c_date profile.s_date profile.pic_s_date profile.il_date profile.java_date : profile.m \
	array.int \
	array_util.int \
	bool.int \
	builtin.int \
	int.int \
	list.int \
	map.int \
	maybe.int \
	measurements.int \
	private_builtin.int \
	require.int \
	assoc_list.int2 \
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
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

ifeq ($(TARGET_ASM),yes)
profile.mh profile.mih : profile.s
else
profile.mh profile.mih : profile.c
endif

ifeq ($(TARGET_ASM),yes)
profile.module_dep : profile.s
else
 ifeq ($(findstring il,$(GRADE)),il)
profile.module_dep : profile.il
  ifeq ($(findstring java,$(GRADE)),java)
profile.module_dep : profile.java
  else
profile.module_dep : profile.c
  endif
 endif
endif

profile.date profile.date0 : profile.m \
	array.int3 \
	array_util.int3 \
	bool.int3 \
	builtin.int3 \
	int.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	measurements.int3 \
	private_builtin.int3 \
	require.int3 \
	assoc_list.int3 \
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
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

profile.date0 : profile.m \
	array.int3 \
	array_util.int3 \
	bool.int3 \
	builtin.int3 \
	int.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	measurements.int3 \
	private_builtin.int3 \
	require.int3 \
	assoc_list.int3 \
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
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



profile.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	array.mh \
	array.mh



profile.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	array.mh \
	array.mh


profile.int0 : profile.date0
	@:
profile.int : profile.date
	@:
profile.int2 : profile.date
	@:
profile.int3 : profile.date3
	@:
profile.opt : profile.optdate
	@:
profile.trans_opt : profile.trans_opt_date
	@:
