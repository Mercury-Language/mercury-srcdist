

conf.optdate conf.trans_opt_date conf.err conf.c_date conf.s_date conf.pic_s_date conf.il_date conf.java_date : conf.m \
	builtin.int \
	io.int \
	list.int \
	maybe.int \
	private_builtin.int \
	require.int \
	stream.int \
	string.int \
	string.format.int \
	string.parse_util.int \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	map.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

conf.pic_o conf.$O : \
	assoc_list.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
	char.mih \
	construct.mih \
	deconstruct.mih \
	enum.mih \
	io.mih \
	list.mih \
	map.mih \
	maybe.mih \
	ops.mih \
	pair.mih \
	pretty_printer.mih \
	private_builtin.mih \
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

conf.mh conf.mih : conf.c


ifeq ($(findstring il,$(GRADE)),il)
conf.module_dep : conf.il
else
 ifeq ($(findstring java,$(GRADE)),java)
conf.module_dep : jmercury/conf.java
 else
conf.module_dep : conf.c
 endif
endif


conf.date conf.date0 : conf.m \
	builtin.int3 \
	io.int3 \
	list.int3 \
	maybe.int3 \
	private_builtin.int3 \
	require.int3 \
	stream.int3 \
	string.int3 \
	string.format.int3 \
	string.parse_util.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

conf.date0 : conf.m \
	builtin.int3 \
	io.int3 \
	list.int3 \
	maybe.int3 \
	private_builtin.int3 \
	require.int3 \
	stream.int3 \
	string.int3 \
	string.format.int3 \
	string.parse_util.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



conf.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	conf.mh



conf.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	conf.mh


conf.int0 : conf.date0
	@:
conf.int : conf.date
	@:
conf.int2 : conf.date
	@:
conf.int3 : conf.date3
	@:
conf.opt : conf.optdate
	@:
conf.trans_opt : conf.trans_opt_date
	@:
