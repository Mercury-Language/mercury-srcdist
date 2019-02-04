univ.trans_opt_date :

univ.optdate univ.trans_opt_date univ.err univ.c_date univ.s_date univ.pic_s_date univ.il_date univ.java_date : univ.m \
	builtin.int \
	list.int \
	private_builtin.int \
	require.int \
	string.int \
	type_desc.int \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	io.int2 \
	map.int2 \
	maybe.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2

univ.$O :  \
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

univ.trans_opt_date univ.err univ.c_date univ.s_date univ.pic_s_date univ.il_date univ.java_date :  \
	univ.opt \
	builtin.opt \
	list.opt \
	private_builtin.opt \
	require.opt \
	string.opt \
	type_desc.opt

univ.err univ.c_date univ.s_date univ.pic_s_date univ.il_date univ.java_date :  \
	univ.trans_opt \
	builtin.trans_opt \
	list.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	string.trans_opt \
	type_desc.trans_opt

ifeq ($(TARGET_ASM),yes)
univ.mh univ.mih : univ.s
else
univ.mh univ.mih : univ.c
endif

ifeq ($(TARGET_ASM),yes)
univ.module_dep : univ.s
else
 ifeq ($(findstring il,$(GRADE)),il)
univ.module_dep : univ.il
  ifeq ($(findstring java,$(GRADE)),java)
univ.module_dep : univ.java
  else
univ.module_dep : univ.c
  endif
 endif
endif

univ.date univ.date0 : univ.m \
	builtin.int3 \
	list.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	type_desc.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3

univ.date0 : univ.m \
	builtin.int3 \
	list.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	type_desc.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3



univ.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	univ.mh



univ.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	univ.mh


univ.int0 : univ.date0
	@:
univ.int : univ.date
	@:
univ.int2 : univ.date
	@:
univ.int3 : univ.date3
	@:
univ.opt : univ.optdate
	@:
univ.trans_opt : univ.trans_opt_date
	@:
