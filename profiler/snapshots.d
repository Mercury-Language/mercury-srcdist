

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
	string.format.int \
	string.parse_util.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	getopt.int2 \
	integer.int2 \
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

snapshots.pic_o snapshots.$O : \
	array.mih \
	assoc_list.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
	char.mih \
	construct.mih \
	deconstruct.mih \
	demangle.mih \
	enum.mih \
	float.mih \
	getopt.mih \
	globals.mih \
	int.mih \
	integer.mih \
	io.mih \
	list.mih \
	map.mih \
	maybe.mih \
	ops.mih \
	options.mih \
	pair.mih \
	pretty_printer.mih \
	private_builtin.mih \
	random.mih \
	require.mih \
	rtti_implementation.mih \
	set.mih \
	set_ordlist.mih \
	stream.mih \
	string.mih \
	term.mih \
	time.mih \
	tree234.mih \
	type_desc.mih \
	univ.mih \
	string.format.mih \
	string.parse_util.mih

snapshots.mh snapshots.mih : snapshots.c


ifeq ($(findstring il,$(GRADE)),il)
snapshots.module_dep : snapshots.il
else
 ifeq ($(findstring java,$(GRADE)),java)
snapshots.module_dep : jmercury/snapshots.java
 else
snapshots.module_dep : snapshots.c
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
	string.format.int3 \
	string.parse_util.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt.int3 \
	integer.int3 \
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
	string.format.int3 \
	string.parse_util.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt.int3 \
	integer.int3 \
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
	io.mh \
	io.mh \
	time.mh \
	string.mh \
	bitmap.mh \
	bitmap.mh \
	time.mh \
	time.mh \
	array.mh \
	array.mh



snapshots.pic_o :  \
	io.mh \
	io.mh \
	time.mh \
	string.mh \
	bitmap.mh \
	bitmap.mh \
	time.mh \
	time.mh \
	array.mh \
	array.mh


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
