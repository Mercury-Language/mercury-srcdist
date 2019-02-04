deconstruct.trans_opt_date : \
	erlang_rtti_implementation.trans_opt \
	int.trans_opt \
	list.trans_opt \
	maybe.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	rtti_implementation.trans_opt \
	type_desc.trans_opt \
	univ.trans_opt

deconstruct.optdate deconstruct.trans_opt_date deconstruct.err deconstruct.c_date deconstruct.s_date deconstruct.pic_s_date deconstruct.il_date deconstruct.java_date : deconstruct.m \
	builtin.int \
	construct.int \
	erlang_rtti_implementation.int \
	int.int \
	list.int \
	maybe.int \
	private_builtin.int \
	require.int \
	rtti_implementation.int \
	type_desc.int \
	univ.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	enum.int2 \
	io.int2 \
	map.int2 \
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
	tree234.int2

deconstruct.$O :  \
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

deconstruct.trans_opt_date deconstruct.err deconstruct.c_date deconstruct.s_date deconstruct.pic_s_date deconstruct.il_date deconstruct.java_date :  \
	deconstruct.opt \
	builtin.opt \
	construct.opt \
	erlang_rtti_implementation.opt \
	int.opt \
	list.opt \
	maybe.opt \
	private_builtin.opt \
	require.opt \
	rtti_implementation.opt \
	type_desc.opt \
	univ.opt

deconstruct.err deconstruct.c_date deconstruct.s_date deconstruct.pic_s_date deconstruct.il_date deconstruct.java_date :  \
	deconstruct.trans_opt \
	builtin.trans_opt \
	construct.trans_opt \
	erlang_rtti_implementation.trans_opt \
	int.trans_opt \
	list.trans_opt \
	maybe.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	rtti_implementation.trans_opt \
	type_desc.trans_opt \
	univ.trans_opt

ifeq ($(TARGET_ASM),yes)
deconstruct.mh deconstruct.mih : deconstruct.s
else
deconstruct.mh deconstruct.mih : deconstruct.c
endif

ifeq ($(TARGET_ASM),yes)
deconstruct.module_dep : deconstruct.s
else
 ifeq ($(findstring il,$(GRADE)),il)
deconstruct.module_dep : deconstruct.il
  ifeq ($(findstring java,$(GRADE)),java)
deconstruct.module_dep : jmercury/deconstruct.java
  else
deconstruct.module_dep : deconstruct.c
  endif
 endif
endif

deconstruct.date deconstruct.date0 : deconstruct.m \
	builtin.int3 \
	construct.int3 \
	erlang_rtti_implementation.int3 \
	int.int3 \
	list.int3 \
	maybe.int3 \
	private_builtin.int3 \
	require.int3 \
	rtti_implementation.int3 \
	type_desc.int3 \
	univ.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	enum.int3 \
	io.int3 \
	map.int3 \
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
	tree234.int3

deconstruct.date0 : deconstruct.m \
	builtin.int3 \
	construct.int3 \
	erlang_rtti_implementation.int3 \
	int.int3 \
	list.int3 \
	maybe.int3 \
	private_builtin.int3 \
	require.int3 \
	rtti_implementation.int3 \
	type_desc.int3 \
	univ.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	enum.int3 \
	io.int3 \
	map.int3 \
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
	tree234.int3



deconstruct.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	deconstruct.mh



deconstruct.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	deconstruct.mh


deconstruct.int0 : deconstruct.date0
	@:
deconstruct.int : deconstruct.date
	@:
deconstruct.int2 : deconstruct.date
	@:
deconstruct.int3 : deconstruct.date3
	@:
deconstruct.opt : deconstruct.optdate
	@:
deconstruct.trans_opt : deconstruct.trans_opt_date
	@:
