

snapshots.optdate snapshots.trans_opt_date snapshots.err snapshots.c_date snapshots.s_date snapshots.pic_s_date snapshots.il_date snapshots.java_date : snapshots.m \
	bool.int \
	builtin.int \
	demangle.int \
	float.int \
	globals.int \
	int.int \
	io.int \
	list.int \
	map.int \
	options.int \
	private_builtin.int \
	require.int \
	string.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	getopt.int2 \
	maybe.int2 \
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
	univ.int2

ifeq ($(TARGET_ASM),yes)
snapshots.mh snapshots.mih : snapshots.s
else
snapshots.mh snapshots.mih : snapshots.c
endif

ifeq ($(TARGET_ASM),yes)
snapshots.module_dep : snapshots.s
else
 ifeq ($(findstring il,$(GRADE)),il)
snapshots.module_dep : snapshots.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
snapshots.module_dep : jmercury/snapshots.java
  else
snapshots.module_dep : snapshots.c
  endif
 endif
endif

snapshots.date snapshots.date0 : snapshots.m \
	bool.int3 \
	builtin.int3 \
	demangle.int3 \
	float.int3 \
	globals.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	options.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt.int3 \
	maybe.int3 \
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
	univ.int3

snapshots.date0 : snapshots.m \
	bool.int3 \
	builtin.int3 \
	demangle.int3 \
	float.int3 \
	globals.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	options.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt.int3 \
	maybe.int3 \
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
	univ.int3



snapshots.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh



snapshots.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh


snapshots.int0 : snapshots.date0
	@:
snapshots.int : snapshots.date
	@:
snapshots.int2 : snapshots.date
	@:
snapshots.int3 : snapshots.date3
	@:
snapshots.opt : snapshots.optdate
	@:
snapshots.trans_opt : snapshots.trans_opt_date
	@:
