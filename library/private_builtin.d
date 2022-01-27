private_builtin.trans_opt_date : \
	require.trans_opt \
	string.trans_opt \
	type_desc.trans_opt

private_builtin.optdate private_builtin.trans_opt_date private_builtin.err private_builtin.c_date private_builtin.s_date private_builtin.pic_s_date private_builtin.il_date private_builtin.java_date : private_builtin.m \
	builtin.int \
	char.int \
	float.int \
	int.int \
	list.int \
	require.int \
	string.int \
	type_desc.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	io.int2 \
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
	univ.int2

private_builtin.$O :  \
	array.mh \
	assoc_list.mh \
	benchmarking.mh \
	bitmap.mh \
	bool.mh \
	builtin.mh \
	calendar.mh \
	char.mh \
	construct.mh \
	cord.mh \
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
	table_builtin.mh \
	term.mh \
	term_io.mh \
	time.mh \
	tree234.mh \
	type_desc.mh \
	unit.mh \
	univ.mh \
	varset.mh \
	version_array.mh \
	stream.string_writer.mh \
	string.format.mh \
	string.parse_runtime.mh \
	string.parse_util.mh \
	string.to_string.mh

private_builtin.trans_opt_date private_builtin.err private_builtin.c_date private_builtin.s_date private_builtin.pic_s_date private_builtin.il_date private_builtin.java_date :  \
	private_builtin.opt \
	builtin.opt \
	char.opt \
	float.opt \
	int.opt \
	list.opt \
	require.opt \
	string.opt \
	type_desc.opt

private_builtin.err private_builtin.c_date private_builtin.s_date private_builtin.pic_s_date private_builtin.il_date private_builtin.java_date :  \
	private_builtin.trans_opt \
	builtin.trans_opt \
	char.trans_opt \
	float.trans_opt \
	int.trans_opt \
	list.trans_opt \
	require.trans_opt \
	string.trans_opt \
	type_desc.trans_opt

private_builtin.pic_o private_builtin.$O : \
	array.mih \
	assoc_list.mih \
	benchmarking.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
	calendar.mih \
	char.mih \
	construct.mih \
	cord.mih \
	deconstruct.mih \
	dir.mih \
	enum.mih \
	erlang_rtti_implementation.mih \
	exception.mih \
	float.mih \
	int.mih \
	integer.mih \
	io.mih \
	lexer.mih \
	list.mih \
	map.mih \
	math.mih \
	maybe.mih \
	mutvar.mih \
	ops.mih \
	pair.mih \
	parser.mih \
	pretty_printer.mih \
	private_builtin.mih \
	random.mih \
	require.mih \
	rtti_implementation.mih \
	set.mih \
	set_ordlist.mih \
	set_tree234.mih \
	solutions.mih \
	std_util.mih \
	stm_builtin.mih \
	store.mih \
	stream.mih \
	string.mih \
	table_builtin.mih \
	term.mih \
	term_io.mih \
	time.mih \
	tree234.mih \
	type_desc.mih \
	unit.mih \
	univ.mih \
	varset.mih \
	version_array.mih \
	stream.string_writer.mih \
	string.format.mih \
	string.parse_runtime.mih \
	string.parse_util.mih \
	string.to_string.mih

private_builtin.mh private_builtin.mih : private_builtin.c


ifeq ($(findstring il,$(GRADE)),il)
private_builtin.module_dep : private_builtin.il
else
 ifeq ($(findstring java,$(GRADE)),java)
private_builtin.module_dep : jmercury/private_builtin.java
 else
private_builtin.module_dep : private_builtin.c
 endif
endif


private_builtin.date private_builtin.date0 : private_builtin.m \
	builtin.int3 \
	char.int3 \
	float.int3 \
	int.int3 \
	list.int3 \
	require.int3 \
	string.int3 \
	type_desc.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
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
	univ.int3

private_builtin.date0 : private_builtin.m \
	builtin.int3 \
	char.int3 \
	float.int3 \
	int.int3 \
	list.int3 \
	require.int3 \
	string.int3 \
	type_desc.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
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
	univ.int3



private_builtin.$O :  \
	private_builtin.mh \
	array.mh \
	array.mh \
	io.mh \
	io.mh \
	time.mh \
	string.mh \
	bitmap.mh \
	bitmap.mh \
	time.mh \
	time.mh



private_builtin.pic_o :  \
	private_builtin.mh \
	array.mh \
	array.mh \
	io.mh \
	io.mh \
	time.mh \
	string.mh \
	bitmap.mh \
	bitmap.mh \
	time.mh \
	time.mh


private_builtin.int0 : private_builtin.date0
	@:
private_builtin.int : private_builtin.date
	@:
private_builtin.int2 : private_builtin.date
	@:
private_builtin.int3 : private_builtin.date3
	@:
private_builtin.opt : private_builtin.optdate
	@:
private_builtin.trans_opt : private_builtin.trans_opt_date
	@:
