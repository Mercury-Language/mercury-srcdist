sparse_bitset.trans_opt_date : \
	builtin.trans_opt \
	enum.trans_opt \
	int.trans_opt \
	list.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	set.trans_opt \
	term.trans_opt

sparse_bitset.optdate sparse_bitset.trans_opt_date sparse_bitset.err sparse_bitset.c_date sparse_bitset.s_date sparse_bitset.pic_s_date sparse_bitset.il_date sparse_bitset.java_date : sparse_bitset.m \
	builtin.int \
	enum.int \
	int.int \
	list.int \
	private_builtin.int \
	require.int \
	set.int \
	term.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	io.int2 \
	map.int2 \
	maybe.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	random.int2 \
	set_ordlist.int2 \
	stream.int2 \
	string.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

sparse_bitset.$O :  \
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

sparse_bitset.trans_opt_date sparse_bitset.err sparse_bitset.c_date sparse_bitset.s_date sparse_bitset.pic_s_date sparse_bitset.il_date sparse_bitset.java_date :  \
	sparse_bitset.opt \
	builtin.opt \
	enum.opt \
	int.opt \
	list.opt \
	private_builtin.opt \
	require.opt \
	set.opt \
	term.opt

sparse_bitset.err sparse_bitset.c_date sparse_bitset.s_date sparse_bitset.pic_s_date sparse_bitset.il_date sparse_bitset.java_date :  \
	sparse_bitset.trans_opt \
	builtin.trans_opt \
	enum.trans_opt \
	int.trans_opt \
	list.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	set.trans_opt \
	term.trans_opt

ifeq ($(TARGET_ASM),yes)
sparse_bitset.mh sparse_bitset.mih : sparse_bitset.s
else
sparse_bitset.mh sparse_bitset.mih : sparse_bitset.c
endif

ifeq ($(TARGET_ASM),yes)
sparse_bitset.module_dep : sparse_bitset.s
else
 ifeq ($(findstring il,$(GRADE)),il)
sparse_bitset.module_dep : sparse_bitset.il
  ifeq ($(findstring java,$(GRADE)),java)
sparse_bitset.module_dep : sparse_bitset.java
  else
sparse_bitset.module_dep : sparse_bitset.c
  endif
 endif
endif

sparse_bitset.date sparse_bitset.date0 : sparse_bitset.m \
	builtin.int3 \
	enum.int3 \
	int.int3 \
	list.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	term.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	io.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

sparse_bitset.date0 : sparse_bitset.m \
	builtin.int3 \
	enum.int3 \
	int.int3 \
	list.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	term.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	io.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



sparse_bitset.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



sparse_bitset.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


sparse_bitset.int0 : sparse_bitset.date0
	@:
sparse_bitset.int : sparse_bitset.date
	@:
sparse_bitset.int2 : sparse_bitset.date
	@:
sparse_bitset.int3 : sparse_bitset.date3
	@:
sparse_bitset.opt : sparse_bitset.optdate
	@:
sparse_bitset.trans_opt : sparse_bitset.trans_opt_date
	@:
