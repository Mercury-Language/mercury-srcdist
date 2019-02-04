relation.trans_opt_date : \
	assoc_list.trans_opt \
	bimap.trans_opt \
	builtin.trans_opt \
	enum.trans_opt \
	int.trans_opt \
	list.trans_opt \
	map.trans_opt \
	pair.trans_opt \
	private_builtin.trans_opt \
	queue.trans_opt \
	require.trans_opt \
	set.trans_opt \
	sparse_bitset.trans_opt

relation.optdate relation.trans_opt_date relation.err relation.c_date relation.s_date relation.pic_s_date relation.il_date relation.java_date : relation.m \
	assoc_list.int \
	bimap.int \
	builtin.int \
	enum.int \
	int.int \
	list.int \
	map.int \
	pair.int \
	private_builtin.int \
	queue.int \
	require.int \
	set.int \
	sparse_bitset.int \
	array.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	io.int2 \
	maybe.int2 \
	ops.int2 \
	random.int2 \
	set_ordlist.int2 \
	stream.int2 \
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

relation.$O :  \
	array.mh \
	assoc_list.mh \
	benchmarking.mh \
	bimap.mh \
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
	private_builtin.mh \
	queue.mh \
	random.mh \
	require.mh \
	rtti_implementation.mh \
	set.mh \
	set_ordlist.mh \
	set_tree234.mh \
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

relation.trans_opt_date relation.err relation.c_date relation.s_date relation.pic_s_date relation.il_date relation.java_date :  \
	relation.opt \
	assoc_list.opt \
	bimap.opt \
	builtin.opt \
	enum.opt \
	int.opt \
	list.opt \
	map.opt \
	pair.opt \
	private_builtin.opt \
	queue.opt \
	require.opt \
	set.opt \
	sparse_bitset.opt

relation.err relation.c_date relation.s_date relation.pic_s_date relation.il_date relation.java_date :  \
	relation.trans_opt \
	assoc_list.trans_opt \
	bimap.trans_opt \
	builtin.trans_opt \
	enum.trans_opt \
	int.trans_opt \
	list.trans_opt \
	map.trans_opt \
	pair.trans_opt \
	private_builtin.trans_opt \
	queue.trans_opt \
	require.trans_opt \
	set.trans_opt \
	sparse_bitset.trans_opt

ifeq ($(TARGET_ASM),yes)
relation.mh relation.mih : relation.s
else
relation.mh relation.mih : relation.c
endif

ifeq ($(TARGET_ASM),yes)
relation.module_dep : relation.s
else
 ifeq ($(findstring il,$(GRADE)),il)
relation.module_dep : relation.il
  ifeq ($(findstring java,$(GRADE)),java)
relation.module_dep : relation.java
  else
relation.module_dep : relation.c
  endif
 endif
endif

relation.date relation.date0 : relation.m \
	assoc_list.int3 \
	bimap.int3 \
	builtin.int3 \
	enum.int3 \
	int.int3 \
	list.int3 \
	map.int3 \
	pair.int3 \
	private_builtin.int3 \
	queue.int3 \
	require.int3 \
	set.int3 \
	sparse_bitset.int3 \
	array.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	io.int3 \
	maybe.int3 \
	ops.int3 \
	random.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

relation.date0 : relation.m \
	assoc_list.int3 \
	bimap.int3 \
	builtin.int3 \
	enum.int3 \
	int.int3 \
	list.int3 \
	map.int3 \
	pair.int3 \
	private_builtin.int3 \
	queue.int3 \
	require.int3 \
	set.int3 \
	sparse_bitset.int3 \
	array.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	io.int3 \
	maybe.int3 \
	ops.int3 \
	random.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



relation.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



relation.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


relation.int0 : relation.date0
	@:
relation.int : relation.date
	@:
relation.int2 : relation.date
	@:
relation.int3 : relation.date3
	@:
relation.opt : relation.optdate
	@:
relation.trans_opt : relation.trans_opt_date
	@:
