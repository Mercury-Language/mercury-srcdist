robdd.trans_opt_date : \
	assoc_list.trans_opt \
	bool.trans_opt \
	builtin.trans_opt \
	hash_table.trans_opt \
	int.trans_opt \
	io.trans_opt \
	list.trans_opt \
	map.trans_opt \
	multi_map.trans_opt \
	pair.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	set_bbbtree.trans_opt \
	set_unordlist.trans_opt \
	sparse_bitset.trans_opt \
	stream.trans_opt \
	string.trans_opt \
	term.trans_opt \
	string.format.trans_opt \
	string.parse_util.trans_opt

robdd.optdate robdd.trans_opt_date robdd.err robdd.c_date robdd.java_date : robdd.m \
	assoc_list.int \
	bool.int \
	builtin.int \
	hash_table.int \
	int.int \
	io.int \
	list.int \
	map.int \
	multi_map.int \
	pair.int \
	private_builtin.int \
	require.int \
	set_bbbtree.int \
	set_unordlist.int \
	sparse_bitset.int \
	stream.int \
	string.int \
	term.int \
	string.format.int \
	string.parse_util.int \
	array.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	integer.int2 \
	maybe.int2 \
	ops.int2 \
	pretty_printer.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

robdd.$O :  \
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
	hash_table.mh \
	int.mh \
	integer.mh \
	io.mh \
	lexer.mh \
	list.mh \
	map.mh \
	math.mh \
	maybe.mh \
	multi_map.mh \
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
	set_bbbtree.mh \
	set_ordlist.mh \
	set_tree234.mh \
	set_unordlist.mh \
	solutions.mh \
	sparse_bitset.mh \
	std_util.mh \
	stm_builtin.mh \
	store.mh \
	stream.mh \
	string.mh \
	table_builtin.mh \
	term.mh \
	term_conversion.mh \
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

robdd.trans_opt_date robdd.err robdd.c_date robdd.java_date :  \
	robdd.opt \
	assoc_list.opt \
	bool.opt \
	builtin.opt \
	hash_table.opt \
	int.opt \
	io.opt \
	list.opt \
	map.opt \
	multi_map.opt \
	pair.opt \
	private_builtin.opt \
	require.opt \
	set_bbbtree.opt \
	set_unordlist.opt \
	sparse_bitset.opt \
	stream.opt \
	string.opt \
	term.opt \
	string.format.opt \
	string.parse_util.opt \
	string.int0

robdd.err robdd.c_date robdd.java_date :  \
	robdd.trans_opt \
	assoc_list.trans_opt \
	bool.trans_opt \
	builtin.trans_opt \
	hash_table.trans_opt \
	int.trans_opt \
	io.trans_opt \
	list.trans_opt \
	map.trans_opt \
	multi_map.trans_opt \
	pair.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	set_bbbtree.trans_opt \
	set_unordlist.trans_opt \
	sparse_bitset.trans_opt \
	stream.trans_opt \
	string.trans_opt \
	term.trans_opt \
	string.format.trans_opt \
	string.parse_util.trans_opt

robdd.pic_o robdd.$O : \
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
	hash_table.mih \
	int.mih \
	integer.mih \
	io.mih \
	lexer.mih \
	list.mih \
	map.mih \
	math.mih \
	maybe.mih \
	multi_map.mih \
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
	set_bbbtree.mih \
	set_ordlist.mih \
	set_tree234.mih \
	set_unordlist.mih \
	solutions.mih \
	sparse_bitset.mih \
	std_util.mih \
	stm_builtin.mih \
	store.mih \
	stream.mih \
	string.mih \
	table_builtin.mih \
	term.mih \
	term_conversion.mih \
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

robdd.mh robdd.mih : robdd.c


ifeq ($(findstring java,$(GRADE)),java)
robdd.module_dep : jmercury/robdd.java
else
robdd.module_dep : robdd.c
endif


robdd.date robdd.date0 : robdd.m \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	hash_table.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	multi_map.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	set_bbbtree.int3 \
	set_unordlist.int3 \
	sparse_bitset.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	string.format.int3 \
	string.parse_util.int3 \
	array.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	integer.int3 \
	maybe.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

robdd.date0 : robdd.m \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	hash_table.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	multi_map.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	set_bbbtree.int3 \
	set_unordlist.int3 \
	sparse_bitset.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	string.format.int3 \
	string.parse_util.int3 \
	array.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	integer.int3 \
	maybe.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



robdd.$O :  \
	io.mh \
	robdd.mh \
	string.mh \
	time.mh



robdd.pic_o :  \
	io.mh \
	robdd.mh \
	string.mh \
	time.mh


robdd.int0 : robdd.date0
	@:
robdd.int : robdd.date
	@:
robdd.int2 : robdd.date
	@:
robdd.int3 : robdd.date3
	@:
robdd.opt : robdd.optdate
	@:
robdd.trans_opt : robdd.trans_opt_date
	@:
