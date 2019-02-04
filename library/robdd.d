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
	string.trans_opt \
	term.trans_opt

robdd.optdate robdd.trans_opt_date robdd.err robdd.c_date robdd.s_date robdd.pic_s_date robdd.il_date robdd.java_date : robdd.m \
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
	string.int \
	term.int \
	array.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	maybe.int2 \
	ops.int2 \
	random.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
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
	char.mh \
	construct.mh \
	deconstruct.mh \
	dir.mh \
	enum.mh \
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

robdd.trans_opt_date robdd.err robdd.c_date robdd.s_date robdd.pic_s_date robdd.il_date robdd.java_date :  \
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
	string.opt \
	term.opt

robdd.err robdd.c_date robdd.s_date robdd.pic_s_date robdd.il_date robdd.java_date :  \
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
	string.trans_opt \
	term.trans_opt

ifeq ($(TARGET_ASM),yes)
robdd.mh robdd.mih : robdd.s
else
robdd.mh robdd.mih : robdd.c
endif

ifeq ($(TARGET_ASM),yes)
robdd.module_dep : robdd.s
else
 ifeq ($(findstring il,$(GRADE)),il)
robdd.module_dep : robdd.il
  ifeq ($(findstring java,$(GRADE)),java)
robdd.module_dep : robdd.java
  else
robdd.module_dep : robdd.c
  endif
 endif
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
	string.int3 \
	term.int3 \
	array.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	maybe.int3 \
	ops.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
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
	string.int3 \
	term.int3 \
	array.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	maybe.int3 \
	ops.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



robdd.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	robdd.mh



robdd.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	robdd.mh


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
