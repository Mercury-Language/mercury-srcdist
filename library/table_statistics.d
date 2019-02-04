table_statistics.trans_opt_date : \
	bool.trans_opt \
	builtin.trans_opt \
	float.trans_opt \
	int.trans_opt \
	io.trans_opt \
	list.trans_opt \
	maybe.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	string.trans_opt \
	table_builtin.trans_opt

table_statistics.optdate table_statistics.trans_opt_date table_statistics.err table_statistics.c_date table_statistics.s_date table_statistics.pic_s_date table_statistics.il_date table_statistics.java_date : table_statistics.m \
	bool.int \
	builtin.int \
	float.int \
	int.int \
	io.int \
	list.int \
	maybe.int \
	private_builtin.int \
	require.int \
	string.int \
	table_builtin.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	map.int2 \
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

table_statistics.$O :  \
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

table_statistics.trans_opt_date table_statistics.err table_statistics.c_date table_statistics.s_date table_statistics.pic_s_date table_statistics.il_date table_statistics.java_date :  \
	table_statistics.opt \
	bool.opt \
	builtin.opt \
	float.opt \
	int.opt \
	io.opt \
	list.opt \
	maybe.opt \
	private_builtin.opt \
	require.opt \
	string.opt \
	table_builtin.opt

table_statistics.err table_statistics.c_date table_statistics.s_date table_statistics.pic_s_date table_statistics.il_date table_statistics.java_date :  \
	table_statistics.trans_opt \
	bool.trans_opt \
	builtin.trans_opt \
	float.trans_opt \
	int.trans_opt \
	io.trans_opt \
	list.trans_opt \
	maybe.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	string.trans_opt \
	table_builtin.trans_opt

ifeq ($(TARGET_ASM),yes)
table_statistics.mh table_statistics.mih : table_statistics.s
else
table_statistics.mh table_statistics.mih : table_statistics.c
endif

ifeq ($(TARGET_ASM),yes)
table_statistics.module_dep : table_statistics.s
else
 ifeq ($(findstring il,$(GRADE)),il)
table_statistics.module_dep : table_statistics.il
  ifeq ($(findstring java,$(GRADE)),java)
table_statistics.module_dep : jmercury/table_statistics.java
  else
table_statistics.module_dep : table_statistics.c
  endif
 endif
endif

table_statistics.date table_statistics.date0 : table_statistics.m \
	bool.int3 \
	builtin.int3 \
	float.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	maybe.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	table_builtin.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	map.int3 \
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

table_statistics.date0 : table_statistics.m \
	bool.int3 \
	builtin.int3 \
	float.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	maybe.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	table_builtin.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	map.int3 \
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



table_statistics.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	table_builtin.mh \
	table_builtin.mh \
	string.mh \
	io.mh \
	io.mh \
	table_statistics.mh



table_statistics.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	table_builtin.mh \
	table_builtin.mh \
	string.mh \
	io.mh \
	io.mh \
	table_statistics.mh


table_statistics.int0 : table_statistics.date0
	@:
table_statistics.int : table_statistics.date
	@:
table_statistics.int2 : table_statistics.date
	@:
table_statistics.int3 : table_statistics.date3
	@:
table_statistics.opt : table_statistics.optdate
	@:
table_statistics.trans_opt : table_statistics.trans_opt_date
	@:
