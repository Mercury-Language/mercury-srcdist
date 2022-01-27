hash_table.trans_opt_date : \
	array.trans_opt \
	assoc_list.trans_opt \
	bool.trans_opt \
	builtin.trans_opt \
	char.trans_opt \
	deconstruct.trans_opt \
	exception.trans_opt \
	float.trans_opt \
	int.trans_opt \
	list.trans_opt \
	pair.trans_opt \
	private_builtin.trans_opt \
	string.trans_opt \
	type_desc.trans_opt \
	univ.trans_opt

hash_table.optdate hash_table.trans_opt_date hash_table.err hash_table.c_date hash_table.s_date hash_table.pic_s_date hash_table.il_date hash_table.java_date : hash_table.m \
	array.int \
	assoc_list.int \
	bool.int \
	builtin.int \
	char.int \
	deconstruct.int \
	exception.int \
	float.int \
	int.int \
	list.int \
	pair.int \
	private_builtin.int \
	string.int \
	type_desc.int \
	univ.int \
	bitmap.int2 \
	construct.int2 \
	enum.int2 \
	io.int2 \
	map.int2 \
	maybe.int2 \
	ops.int2 \
	pretty_printer.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	stm_builtin.int2 \
	store.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2

hash_table.$O :  \
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
	stream.string_writer.mh

hash_table.trans_opt_date hash_table.err hash_table.c_date hash_table.s_date hash_table.pic_s_date hash_table.il_date hash_table.java_date :  \
	hash_table.opt \
	array.opt \
	assoc_list.opt \
	bool.opt \
	builtin.opt \
	char.opt \
	deconstruct.opt \
	exception.opt \
	float.opt \
	int.opt \
	list.opt \
	pair.opt \
	private_builtin.opt \
	string.opt \
	type_desc.opt \
	univ.opt

hash_table.err hash_table.c_date hash_table.s_date hash_table.pic_s_date hash_table.il_date hash_table.java_date :  \
	hash_table.trans_opt \
	array.trans_opt \
	assoc_list.trans_opt \
	bool.trans_opt \
	builtin.trans_opt \
	char.trans_opt \
	deconstruct.trans_opt \
	exception.trans_opt \
	float.trans_opt \
	int.trans_opt \
	list.trans_opt \
	pair.trans_opt \
	private_builtin.trans_opt \
	string.trans_opt \
	type_desc.trans_opt \
	univ.trans_opt

hash_table.pic_o hash_table.$O : \
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
	stream.string_writer.mih

hash_table.mh hash_table.mih : hash_table.c


ifeq ($(findstring il,$(GRADE)),il)
hash_table.module_dep : hash_table.il
else
 ifeq ($(findstring java,$(GRADE)),java)
hash_table.module_dep : jmercury/hash_table.java
 else
hash_table.module_dep : hash_table.c
 endif
endif


hash_table.date hash_table.date0 : hash_table.m \
	array.int3 \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	deconstruct.int3 \
	exception.int3 \
	float.int3 \
	int.int3 \
	list.int3 \
	pair.int3 \
	private_builtin.int3 \
	string.int3 \
	type_desc.int3 \
	univ.int3 \
	bitmap.int3 \
	construct.int3 \
	enum.int3 \
	io.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stm_builtin.int3 \
	store.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3

hash_table.date0 : hash_table.m \
	array.int3 \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	deconstruct.int3 \
	exception.int3 \
	float.int3 \
	int.int3 \
	list.int3 \
	pair.int3 \
	private_builtin.int3 \
	string.int3 \
	type_desc.int3 \
	univ.int3 \
	bitmap.int3 \
	construct.int3 \
	enum.int3 \
	io.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stm_builtin.int3 \
	store.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3



hash_table.$O :  \
	store.mh \
	store.mh \
	stm_builtin.mh \
	stm_builtin.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	array.mh \
	array.mh \
	hash_table.mh



hash_table.pic_o :  \
	store.mh \
	store.mh \
	stm_builtin.mh \
	stm_builtin.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	array.mh \
	array.mh \
	hash_table.mh


hash_table.int0 : hash_table.date0
	@:
hash_table.int : hash_table.date
	@:
hash_table.int2 : hash_table.date
	@:
hash_table.int3 : hash_table.date3
	@:
hash_table.opt : hash_table.optdate
	@:
hash_table.trans_opt : hash_table.trans_opt_date
	@:
