tree_bitset.trans_opt_date : \
	bool.trans_opt \
	builtin.trans_opt \
	enum.trans_opt \
	int.trans_opt \
	list.trans_opt \
	maybe.trans_opt \
	pair.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	set.trans_opt \
	string.trans_opt \
	term.trans_opt

tree_bitset.optdate tree_bitset.trans_opt_date tree_bitset.err tree_bitset.c_date tree_bitset.s_date tree_bitset.pic_s_date tree_bitset.il_date tree_bitset.java_date : tree_bitset.m \
	bool.int \
	builtin.int \
	enum.int \
	int.int \
	list.int \
	maybe.int \
	pair.int \
	private_builtin.int \
	require.int \
	set.int \
	string.int \
	term.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	io.int2 \
	map.int2 \
	ops.int2 \
	pretty_printer.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set_ordlist.int2 \
	stream.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

tree_bitset.$O :  \
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

tree_bitset.trans_opt_date tree_bitset.err tree_bitset.c_date tree_bitset.s_date tree_bitset.pic_s_date tree_bitset.il_date tree_bitset.java_date :  \
	tree_bitset.opt \
	bool.opt \
	builtin.opt \
	enum.opt \
	int.opt \
	list.opt \
	maybe.opt \
	pair.opt \
	private_builtin.opt \
	require.opt \
	set.opt \
	string.opt \
	term.opt

tree_bitset.err tree_bitset.c_date tree_bitset.s_date tree_bitset.pic_s_date tree_bitset.il_date tree_bitset.java_date :  \
	tree_bitset.trans_opt \
	bool.trans_opt \
	builtin.trans_opt \
	enum.trans_opt \
	int.trans_opt \
	list.trans_opt \
	maybe.trans_opt \
	pair.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	set.trans_opt \
	string.trans_opt \
	term.trans_opt

ifeq ($(TARGET_ASM),yes)
tree_bitset.mh tree_bitset.mih : tree_bitset.s
else
tree_bitset.mh tree_bitset.mih : tree_bitset.c
endif

ifeq ($(TARGET_ASM),yes)
tree_bitset.module_dep : tree_bitset.s
else
 ifeq ($(findstring il,$(GRADE)),il)
tree_bitset.module_dep : tree_bitset.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
tree_bitset.module_dep : jmercury/tree_bitset.java
  else
tree_bitset.module_dep : tree_bitset.c
  endif
 endif
endif

tree_bitset.date tree_bitset.date0 : tree_bitset.m \
	bool.int3 \
	builtin.int3 \
	enum.int3 \
	int.int3 \
	list.int3 \
	maybe.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	term.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	io.int3 \
	map.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stream.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

tree_bitset.date0 : tree_bitset.m \
	bool.int3 \
	builtin.int3 \
	enum.int3 \
	int.int3 \
	list.int3 \
	maybe.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	term.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	io.int3 \
	map.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stream.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



tree_bitset.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



tree_bitset.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


tree_bitset.int0 : tree_bitset.date0
	@:
tree_bitset.int : tree_bitset.date
	@:
tree_bitset.int2 : tree_bitset.date
	@:
tree_bitset.int3 : tree_bitset.date3
	@:
tree_bitset.opt : tree_bitset.optdate
	@:
tree_bitset.trans_opt : tree_bitset.trans_opt_date
	@:
