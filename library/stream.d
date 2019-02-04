stream.trans_opt_date :

stream.optdate stream.trans_opt_date stream.err stream.c_date stream.s_date stream.pic_s_date stream.il_date stream.java_date : stream.m stream.int0 \
	bool.int \
	builtin.int \
	char.int \
	list.int \
	private_builtin.int \
	assoc_list.int2 \
	bitmap.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	io.int2 \
	map.int2 \
	maybe.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

stream.$O :  \
	array.mh \
	assoc_list.mh \
	benchmarking.mh \
	bitmap.mh \
	bool.mh \
	builtin.mh \
	char.mh \
	construct.mh \
	deconstruct.mh \
	dir.mh \
	enum.mh \
	erlang_rtti_implementation.mh \
	exception.mh \
	float.mh \
	int.mh \
	integer.mh \
	io.mh \
	lexer.mh \
	list.mh \
	map.mh \
	math.mh \
	maybe.mh \
	mutvar.mh \
	ops.mh \
	pair.mh \
	parser.mh \
	pretty_printer.mh \
	private_builtin.mh \
	random.mh \
	require.mh \
	rtti_implementation.mh \
	set.mh \
	set_ordlist.mh \
	set_tree234.mh \
	solutions.mh \
	std_util.mh \
	stm_builtin.mh \
	store.mh \
	stream.mh \
	string.mh \
	svmap.mh \
	svset.mh \
	table_builtin.mh \
	term.mh \
	term_io.mh \
	time.mh \
	tree234.mh \
	type_desc.mh \
	unit.mh \
	univ.mh \
	varset.mh \
	stream.string_writer.mh

stream.trans_opt_date stream.err stream.c_date stream.s_date stream.pic_s_date stream.il_date stream.java_date :  \
	stream.opt \
	bool.opt \
	builtin.opt \
	char.opt \
	list.opt \
	private_builtin.opt

stream.err stream.c_date stream.s_date stream.pic_s_date stream.il_date stream.java_date :  \
	stream.trans_opt \
	bool.trans_opt \
	builtin.trans_opt \
	char.trans_opt \
	list.trans_opt \
	private_builtin.trans_opt

ifeq ($(TARGET_ASM),yes)
stream.mh stream.mih : stream.s
else
stream.mh stream.mih : stream.c
endif

ifeq ($(TARGET_ASM),yes)
stream.module_dep : stream.s
else
 ifeq ($(findstring il,$(GRADE)),il)
stream.module_dep : stream.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
stream.module_dep : jmercury/stream.java
  else
stream.module_dep : stream.c
  endif
 endif
endif

stream.date stream.date0 : stream.m \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	list.int3 \
	private_builtin.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

stream.date0 : stream.m \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	list.int3 \
	private_builtin.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



stream.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



stream.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


stream.int0 : stream.date0
	@:
stream.int : stream.date
	@:
stream.int2 : stream.date
	@:
stream.int3 : stream.date3
	@:
stream.opt : stream.optdate
	@:
stream.trans_opt : stream.trans_opt_date
	@:
