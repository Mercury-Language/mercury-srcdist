tree234.trans_opt_date :

tree234.optdate tree234.trans_opt_date tree234.err tree234.c_date tree234.s_date tree234.pic_s_date tree234.il_date tree234.java_date : tree234.m \
	assoc_list.int \
	bool.int \
	builtin.int \
	int.int \
	io.int \
	list.int \
	maybe.int \
	pair.int \
	pretty_printer.int \
	private_builtin.int \
	require.int \
	set.int \
	string.int \
	term.int \
	array.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	map.int2 \
	ops.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set_ordlist.int2 \
	stream.int2 \
	time.int2 \
	type_desc.int2 \
	univ.int2

tree234.$O :  \
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

tree234.trans_opt_date tree234.err tree234.c_date tree234.s_date tree234.pic_s_date tree234.il_date tree234.java_date :  \
	tree234.opt \
	assoc_list.opt \
	bool.opt \
	builtin.opt \
	int.opt \
	io.opt \
	list.opt \
	maybe.opt \
	pair.opt \
	pretty_printer.opt \
	private_builtin.opt \
	require.opt \
	set.opt \
	string.opt \
	term.opt

tree234.err tree234.c_date tree234.s_date tree234.pic_s_date tree234.il_date tree234.java_date :  \
	tree234.trans_opt \
	assoc_list.trans_opt \
	bool.trans_opt \
	builtin.trans_opt \
	int.trans_opt \
	io.trans_opt \
	list.trans_opt \
	maybe.trans_opt \
	pair.trans_opt \
	pretty_printer.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	set.trans_opt \
	string.trans_opt \
	term.trans_opt

ifeq ($(TARGET_ASM),yes)
tree234.mh tree234.mih : tree234.s
else
tree234.mh tree234.mih : tree234.c
endif

ifeq ($(TARGET_ASM),yes)
tree234.module_dep : tree234.s
else
 ifeq ($(findstring il,$(GRADE)),il)
tree234.module_dep : tree234.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
tree234.module_dep : jmercury/tree234.java
  else
tree234.module_dep : tree234.c
  endif
 endif
endif

tree234.date tree234.date0 : tree234.m \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	maybe.int3 \
	pair.int3 \
	pretty_printer.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	term.int3 \
	array.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	map.int3 \
	ops.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stream.int3 \
	time.int3 \
	type_desc.int3 \
	univ.int3

tree234.date0 : tree234.m \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	maybe.int3 \
	pair.int3 \
	pretty_printer.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	term.int3 \
	array.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	map.int3 \
	ops.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stream.int3 \
	time.int3 \
	type_desc.int3 \
	univ.int3



tree234.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	array.mh \
	array.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh



tree234.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	array.mh \
	array.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh


tree234.int0 : tree234.date0
	@:
tree234.int : tree234.date
	@:
tree234.int2 : tree234.date
	@:
tree234.int3 : tree234.date3
	@:
tree234.opt : tree234.optdate
	@:
tree234.trans_opt : tree234.trans_opt_date
	@:
