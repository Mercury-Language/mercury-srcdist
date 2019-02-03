rbtree.trans_opt_date : \
	assoc_list.trans_opt \
	bool.trans_opt \
	builtin.trans_opt \
	int.trans_opt \
	list.trans_opt \
	maybe.trans_opt \
	pair.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt

rbtree.optdate rbtree.trans_opt_date rbtree.err rbtree.c_date rbtree.s_date rbtree.pic_s_date rbtree.il_date rbtree.java_date : rbtree.m \
	assoc_list.int \
	bool.int \
	builtin.int \
	int.int \
	list.int \
	maybe.int \
	pair.int \
	private_builtin.int \
	require.int \
	array.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	io.int2 \
	map.int2 \
	ops.int2 \
	pretty_printer.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

rbtree.$O :  \
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

rbtree.trans_opt_date rbtree.err rbtree.c_date rbtree.s_date rbtree.pic_s_date rbtree.il_date rbtree.java_date :  \
	rbtree.opt \
	assoc_list.opt \
	bool.opt \
	builtin.opt \
	int.opt \
	list.opt \
	maybe.opt \
	pair.opt \
	private_builtin.opt \
	require.opt

rbtree.err rbtree.c_date rbtree.s_date rbtree.pic_s_date rbtree.il_date rbtree.java_date :  \
	rbtree.trans_opt \
	assoc_list.trans_opt \
	bool.trans_opt \
	builtin.trans_opt \
	int.trans_opt \
	list.trans_opt \
	maybe.trans_opt \
	pair.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt

ifeq ($(TARGET_ASM),yes)
rbtree.mh rbtree.mih : rbtree.s
else
rbtree.mh rbtree.mih : rbtree.c
endif

ifeq ($(TARGET_ASM),yes)
rbtree.module_dep : rbtree.s
else
 ifeq ($(findstring il,$(GRADE)),il)
rbtree.module_dep : rbtree.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
rbtree.module_dep : jmercury/rbtree.java
  else
rbtree.module_dep : rbtree.c
  endif
 endif
endif

rbtree.date rbtree.date0 : rbtree.m \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	int.int3 \
	list.int3 \
	maybe.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	array.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	map.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

rbtree.date0 : rbtree.m \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	int.int3 \
	list.int3 \
	maybe.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	array.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	map.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



rbtree.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh



rbtree.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh


rbtree.int0 : rbtree.date0
	@:
rbtree.int : rbtree.date
	@:
rbtree.int2 : rbtree.date
	@:
rbtree.int3 : rbtree.date3
	@:
rbtree.opt : rbtree.optdate
	@:
rbtree.trans_opt : rbtree.trans_opt_date
	@:
