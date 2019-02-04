mer_std.trans_opt_date : \
	builtin.trans_opt \
	library.trans_opt \
	private_builtin.trans_opt

mer_std.optdate mer_std.trans_opt_date mer_std.err mer_std.c_date mer_std.s_date mer_std.pic_s_date mer_std.il_date mer_std.java_date : mer_std.m \
	builtin.int \
	library.int \
	private_builtin.int \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	io.int2 \
	list.int2 \
	map.int2 \
	maybe.int2 \
	ops.int2 \
	pair.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

mer_std.$O :  \
	array.mh \
	array2d.mh \
	assoc_list.mh \
	bag.mh \
	benchmarking.mh \
	bimap.mh \
	bintree.mh \
	bintree_set.mh \
	bitmap.mh \
	bool.mh \
	bt_array.mh \
	builtin.mh \
	char.mh \
	construct.mh \
	cord.mh \
	counter.mh \
	deconstruct.mh \
	dir.mh \
	enum.mh \
	eqvclass.mh \
	exception.mh \
	float.mh \
	gc.mh \
	getopt.mh \
	getopt_io.mh \
	graph.mh \
	group.mh \
	hash_table.mh \
	injection.mh \
	int.mh \
	integer.mh \
	io.mh \
	lexer.mh \
	library.mh \
	list.mh \
	map.mh \
	math.mh \
	maybe.mh \
	multi_map.mh \
	mutvar.mh \
	ops.mh \
	pair.mh \
	par_builtin.mh \
	parser.mh \
	pprint.mh \
	pqueue.mh \
	private_builtin.mh \
	profiling_builtin.mh \
	prolog.mh \
	queue.mh \
	random.mh \
	rational.mh \
	rbtree.mh \
	relation.mh \
	require.mh \
	robdd.mh \
	rtree.mh \
	rtti_implementation.mh \
	set.mh \
	set_bbbtree.mh \
	set_ctree234.mh \
	set_ordlist.mh \
	set_tree234.mh \
	set_unordlist.mh \
	solutions.mh \
	sparse_bitset.mh \
	stack.mh \
	std_util.mh \
	store.mh \
	stream.mh \
	string.mh \
	svarray.mh \
	svbag.mh \
	svbimap.mh \
	sveqvclass.mh \
	svmap.mh \
	svmulti_map.mh \
	svqueue.mh \
	svrelation.mh \
	svset.mh \
	svvarset.mh \
	table_builtin.mh \
	term.mh \
	term_io.mh \
	term_size_prof_builtin.mh \
	term_to_xml.mh \
	thread.mh \
	time.mh \
	tree234.mh \
	tree_bitset.mh \
	type_desc.mh \
	unit.mh \
	univ.mh \
	varset.mh \
	version_array.mh \
	version_array2d.mh \
	version_bitmap.mh \
	version_hash_table.mh \
	version_store.mh \
	version_types.mh \
	stream.string_writer.mh

mer_std.trans_opt_date mer_std.err mer_std.c_date mer_std.s_date mer_std.pic_s_date mer_std.il_date mer_std.java_date :  \
	mer_std.opt \
	builtin.opt \
	library.opt \
	private_builtin.opt

mer_std.err mer_std.c_date mer_std.s_date mer_std.pic_s_date mer_std.il_date mer_std.java_date :  \
	mer_std.trans_opt \
	builtin.trans_opt \
	library.trans_opt \
	private_builtin.trans_opt

ifeq ($(TARGET_ASM),yes)
mer_std.mh mer_std.mih : mer_std.s
else
mer_std.mh mer_std.mih : mer_std.c
endif

ifeq ($(TARGET_ASM),yes)
mer_std.module_dep : mer_std.s
else
 ifeq ($(findstring il,$(GRADE)),il)
mer_std.module_dep : mer_std.il
  ifeq ($(findstring java,$(GRADE)),java)
mer_std.module_dep : mer_std.java
  else
mer_std.module_dep : mer_std.c
  endif
 endif
endif

mer_std.date mer_std.date0 : mer_std.m \
	builtin.int3 \
	library.int3 \
	private_builtin.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

mer_std.date0 : mer_std.m \
	builtin.int3 \
	library.int3 \
	private_builtin.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



mer_std.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



mer_std.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


mer_std.int0 : mer_std.date0
	@:
mer_std.int : mer_std.date
	@:
mer_std.int2 : mer_std.date
	@:
mer_std.int3 : mer_std.date3
	@:
mer_std.opt : mer_std.optdate
	@:
mer_std.trans_opt : mer_std.trans_opt_date
	@:
