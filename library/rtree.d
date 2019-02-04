rtree.trans_opt_date : \
	builtin.trans_opt \
	float.trans_opt \
	int.trans_opt \
	list.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt

rtree.optdate rtree.trans_opt_date rtree.err rtree.c_date rtree.s_date rtree.pic_s_date rtree.il_date rtree.java_date : rtree.m \
	builtin.int \
	float.int \
	int.int \
	list.int \
	private_builtin.int \
	require.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
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
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

rtree.$O :  \
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

rtree.trans_opt_date rtree.err rtree.c_date rtree.s_date rtree.pic_s_date rtree.il_date rtree.java_date :  \
	rtree.opt \
	builtin.opt \
	float.opt \
	int.opt \
	list.opt \
	private_builtin.opt \
	require.opt

rtree.err rtree.c_date rtree.s_date rtree.pic_s_date rtree.il_date rtree.java_date :  \
	rtree.trans_opt \
	builtin.trans_opt \
	float.trans_opt \
	int.trans_opt \
	list.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt

ifeq ($(TARGET_ASM),yes)
rtree.mh rtree.mih : rtree.s
else
rtree.mh rtree.mih : rtree.c
endif

ifeq ($(TARGET_ASM),yes)
rtree.module_dep : rtree.s
else
 ifeq ($(findstring il,$(GRADE)),il)
rtree.module_dep : rtree.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
rtree.module_dep : jmercury/rtree.java
  else
rtree.module_dep : rtree.c
  endif
 endif
endif

rtree.date rtree.date0 : rtree.m \
	builtin.int3 \
	float.int3 \
	int.int3 \
	list.int3 \
	private_builtin.int3 \
	require.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
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
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

rtree.date0 : rtree.m \
	builtin.int3 \
	float.int3 \
	int.int3 \
	list.int3 \
	private_builtin.int3 \
	require.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
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
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



rtree.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



rtree.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


rtree.int0 : rtree.date0
	@:
rtree.int : rtree.date
	@:
rtree.int2 : rtree.date
	@:
rtree.int3 : rtree.date3
	@:
rtree.opt : rtree.optdate
	@:
rtree.trans_opt : rtree.trans_opt_date
	@:
