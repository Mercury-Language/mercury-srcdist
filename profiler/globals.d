

globals.optdate globals.trans_opt_date globals.err globals.c_date globals.s_date globals.pic_s_date globals.il_date globals.java_date : globals.m \
	bool.int \
	builtin.int \
	getopt.int \
	io.int \
	list.int \
	map.int \
	options.int \
	private_builtin.int \
	require.int \
	string.int \
	univ.int \
	assoc_list.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	integer.int2 \
	maybe.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2

globals.pic_o globals.$O : \
	assoc_list.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
	char.mih \
	construct.mih \
	deconstruct.mih \
	enum.mih \
	getopt.mih \
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
	univ.mih

globals.mh globals.mih : globals.c


ifeq ($(findstring il,$(GRADE)),il)
globals.module_dep : globals.il
else
 ifeq ($(findstring java,$(GRADE)),java)
globals.module_dep : jmercury/globals.java
 else
globals.module_dep : globals.c
 endif
endif


globals.date globals.date0 : globals.m \
	bool.int3 \
	builtin.int3 \
	getopt.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	options.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	univ.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	integer.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3

globals.date0 : globals.m \
	bool.int3 \
	builtin.int3 \
	getopt.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	options.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	univ.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	integer.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3



globals.$O :  \
	io.mh \
	io.mh \
	time.mh \
	string.mh



globals.pic_o :  \
	io.mh \
	io.mh \
	time.mh \
	string.mh


globals.int0 : globals.date0
	@:
globals.int : globals.date
	@:
globals.int2 : globals.date
	@:
globals.int3 : globals.date3
	@:
globals.opt : globals.optdate
	@:
globals.trans_opt : globals.trans_opt_date
	@:
