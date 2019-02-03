

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

ifeq ($(TARGET_ASM),yes)
io_combinator.mh io_combinator.mih : io_combinator.s
else
io_combinator.mh io_combinator.mih : io_combinator.c
endif

ifeq ($(TARGET_ASM),yes)
io_combinator.module_dep : io_combinator.s
else
 ifeq ($(findstring il,$(GRADE)),il)
io_combinator.module_dep : io_combinator.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
io_combinator.module_dep : jmercury/io_combinator.java
  else
io_combinator.module_dep : io_combinator.c
  endif
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
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh



io_combinator.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh


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
