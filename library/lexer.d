lexer.trans_opt_date : \
	list.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	string.trans_opt

lexer.optdate lexer.trans_opt_date lexer.err lexer.c_date lexer.s_date lexer.pic_s_date lexer.il_date lexer.java_date : lexer.m \
	builtin.int \
	char.int \
	int.int \
	io.int \
	list.int \
	private_builtin.int \
	require.int \
	string.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	map.int2 \
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

lexer.$O :  \
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

lexer.trans_opt_date lexer.err lexer.c_date lexer.s_date lexer.pic_s_date lexer.il_date lexer.java_date :  \
	lexer.opt \
	builtin.opt \
	char.opt \
	int.opt \
	io.opt \
	list.opt \
	private_builtin.opt \
	require.opt \
	string.opt

lexer.err lexer.c_date lexer.s_date lexer.pic_s_date lexer.il_date lexer.java_date :  \
	lexer.trans_opt \
	builtin.trans_opt \
	char.trans_opt \
	int.trans_opt \
	io.trans_opt \
	list.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	string.trans_opt

ifeq ($(TARGET_ASM),yes)
lexer.mh lexer.mih : lexer.s
else
lexer.mh lexer.mih : lexer.c
endif

ifeq ($(TARGET_ASM),yes)
lexer.module_dep : lexer.s
else
 ifeq ($(findstring il,$(GRADE)),il)
lexer.module_dep : lexer.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
lexer.module_dep : jmercury/lexer.java
  else
lexer.module_dep : lexer.c
  endif
 endif
endif

lexer.date lexer.date0 : lexer.m \
	builtin.int3 \
	char.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	map.int3 \
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

lexer.date0 : lexer.m \
	builtin.int3 \
	char.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	map.int3 \
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



lexer.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	lexer.mh



lexer.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	lexer.mh


lexer.int0 : lexer.date0
	@:
lexer.int : lexer.date
	@:
lexer.int2 : lexer.date
	@:
lexer.int3 : lexer.date3
	@:
lexer.opt : lexer.optdate
	@:
lexer.trans_opt : lexer.trans_opt_date
	@:
