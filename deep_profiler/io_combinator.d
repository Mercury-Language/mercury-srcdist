

io_combinator.optdate io_combinator.trans_opt_date io_combinator.err io_combinator.c_date io_combinator.s_date io_combinator.pic_s_date io_combinator.il_date io_combinator.java_date : io_combinator.m \
	builtin.int \
	io.int \
	maybe.int \
	private_builtin.int \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
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
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

io_combinator.pic_o io_combinator.$O : \
	assoc_list.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
	char.mih \
	construct.mih \
	deconstruct.mih \
	enum.mih \
	integer.mih \
	io.mih \
	list.mih \
	map.mih \
	maybe.mih \
	ops.mih \
	pair.mih \
	pretty_printer.mih \
	private_builtin.mih \
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

io_combinator.mh io_combinator.mih : io_combinator.c


ifeq ($(findstring il,$(GRADE)),il)
io_combinator.module_dep : io_combinator.il
else
 ifeq ($(findstring java,$(GRADE)),java)
io_combinator.module_dep : jmercury/io_combinator.java
 else
io_combinator.module_dep : io_combinator.c
 endif
endif


io_combinator.date io_combinator.date0 : io_combinator.m \
	builtin.int3 \
	io.int3 \
	maybe.int3 \
	private_builtin.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
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
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

io_combinator.date0 : io_combinator.m \
	builtin.int3 \
	io.int3 \
	maybe.int3 \
	private_builtin.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
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
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



io_combinator.$O :  \
	io.mh \
	io.mh \
	time.mh \
	string.mh \
	bitmap.mh \
	bitmap.mh \
	time.mh \
	time.mh



io_combinator.pic_o :  \
	io.mh \
	io.mh \
	time.mh \
	string.mh \
	bitmap.mh \
	bitmap.mh \
	time.mh \
	time.mh


io_combinator.int0 : io_combinator.date0
	@:
io_combinator.int : io_combinator.date
	@:
io_combinator.int2 : io_combinator.date
	@:
io_combinator.int3 : io_combinator.date3
	@:
io_combinator.opt : io_combinator.optdate
	@:
io_combinator.trans_opt : io_combinator.trans_opt_date
	@:
