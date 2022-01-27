

read.optdate read.trans_opt_date read.err read.c_date read.s_date read.pic_s_date read.il_date read.java_date : read.m \
	bool.int \
	builtin.int \
	demangle.int \
	globals.int \
	io.int \
	maybe.int \
	options.int \
	private_builtin.int \
	require.int \
	string.int \
	assoc_list.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	getopt.int2 \
	integer.int2 \
	list.int2 \
	map.int2 \
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
	type_desc.int2 \
	univ.int2

read.pic_o read.$O : \
	assoc_list.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
	char.mih \
	construct.mih \
	deconstruct.mih \
	demangle.mih \
	enum.mih \
	getopt.mih \
	globals.mih \
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

read.mh read.mih : read.c


ifeq ($(findstring il,$(GRADE)),il)
read.module_dep : read.il
else
 ifeq ($(findstring java,$(GRADE)),java)
read.module_dep : jmercury/read.java
 else
read.module_dep : read.c
 endif
endif


read.date read.date0 : read.m \
	bool.int3 \
	builtin.int3 \
	demangle.int3 \
	globals.int3 \
	io.int3 \
	maybe.int3 \
	options.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt.int3 \
	integer.int3 \
	list.int3 \
	map.int3 \
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
	type_desc.int3 \
	univ.int3

read.date0 : read.m \
	bool.int3 \
	builtin.int3 \
	demangle.int3 \
	globals.int3 \
	io.int3 \
	maybe.int3 \
	options.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt.int3 \
	integer.int3 \
	list.int3 \
	map.int3 \
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
	type_desc.int3 \
	univ.int3



read.$O :  \
	io.mh \
	io.mh \
	time.mh \
	string.mh



read.pic_o :  \
	io.mh \
	io.mh \
	time.mh \
	string.mh


read.int0 : read.date0
	@:
read.int : read.date
	@:
read.int2 : read.date
	@:
read.int3 : read.date3
	@:
read.opt : read.optdate
	@:
read.trans_opt : read.trans_opt_date
	@:
