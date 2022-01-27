pprint.trans_opt_date : \
	array.trans_opt \
	builtin.trans_opt \
	char.trans_opt \
	deconstruct.trans_opt \
	enum.trans_opt \
	int.trans_opt \
	io.trans_opt \
	list.trans_opt \
	map.trans_opt \
	ops.trans_opt \
	pair.trans_opt \
	private_builtin.trans_opt \
	robdd.trans_opt \
	sparse_bitset.trans_opt \
	stream.trans_opt \
	string.trans_opt \
	term.trans_opt \
	type_desc.trans_opt \
	univ.trans_opt \
	version_array.trans_opt

pprint.optdate pprint.trans_opt_date pprint.err pprint.c_date pprint.s_date pprint.pic_s_date pprint.il_date pprint.java_date : pprint.m \
	array.int \
	builtin.int \
	char.int \
	deconstruct.int \
	enum.int \
	int.int \
	io.int \
	list.int \
	map.int \
	ops.int \
	pair.int \
	private_builtin.int \
	robdd.int \
	sparse_bitset.int \
	stream.int \
	string.int \
	term.int \
	type_desc.int \
	univ.int \
	version_array.int \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	construct.int2 \
	maybe.int2 \
	pretty_printer.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	time.int2 \
	tree234.int2

pprint.$O :  \
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
	robdd.mh \
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
	string.to_string.mh

pprint.trans_opt_date pprint.err pprint.c_date pprint.s_date pprint.pic_s_date pprint.il_date pprint.java_date :  \
	pprint.opt \
	array.opt \
	builtin.opt \
	char.opt \
	deconstruct.opt \
	enum.opt \
	int.opt \
	io.opt \
	list.opt \
	map.opt \
	ops.opt \
	pair.opt \
	private_builtin.opt \
	robdd.opt \
	sparse_bitset.opt \
	stream.opt \
	string.opt \
	term.opt \
	type_desc.opt \
	univ.opt \
	version_array.opt

pprint.err pprint.c_date pprint.s_date pprint.pic_s_date pprint.il_date pprint.java_date :  \
	pprint.trans_opt \
	array.trans_opt \
	builtin.trans_opt \
	char.trans_opt \
	deconstruct.trans_opt \
	enum.trans_opt \
	int.trans_opt \
	io.trans_opt \
	list.trans_opt \
	map.trans_opt \
	ops.trans_opt \
	pair.trans_opt \
	private_builtin.trans_opt \
	robdd.trans_opt \
	sparse_bitset.trans_opt \
	stream.trans_opt \
	string.trans_opt \
	term.trans_opt \
	type_desc.trans_opt \
	univ.trans_opt \
	version_array.trans_opt

pprint.pic_o pprint.$O : \
	array.mih \
	assoc_list.mih \
	benchmarking.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
	char.mih \
	construct.mih \
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
	robdd.mih \
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
	string.to_string.mih

pprint.mh pprint.mih : pprint.c


ifeq ($(findstring il,$(GRADE)),il)
pprint.module_dep : pprint.il
else
 ifeq ($(findstring java,$(GRADE)),java)
pprint.module_dep : jmercury/pprint.java
 else
pprint.module_dep : pprint.c
 endif
endif


pprint.date pprint.date0 : pprint.m \
	array.int3 \
	builtin.int3 \
	char.int3 \
	deconstruct.int3 \
	enum.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
	private_builtin.int3 \
	robdd.int3 \
	sparse_bitset.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	type_desc.int3 \
	univ.int3 \
	version_array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	construct.int3 \
	maybe.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	time.int3 \
	tree234.int3

pprint.date0 : pprint.m \
	array.int3 \
	builtin.int3 \
	char.int3 \
	deconstruct.int3 \
	enum.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
	private_builtin.int3 \
	robdd.int3 \
	sparse_bitset.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	type_desc.int3 \
	univ.int3 \
	version_array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	construct.int3 \
	maybe.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	time.int3 \
	tree234.int3



pprint.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	version_array.mh \
	version_array.mh \
	array.mh \
	array.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh



pprint.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	version_array.mh \
	version_array.mh \
	array.mh \
	array.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh


pprint.int0 : pprint.date0
	@:
pprint.int : pprint.date
	@:
pprint.int2 : pprint.date
	@:
pprint.int3 : pprint.date3
	@:
pprint.opt : pprint.optdate
	@:
pprint.trans_opt : pprint.trans_opt_date
	@:
