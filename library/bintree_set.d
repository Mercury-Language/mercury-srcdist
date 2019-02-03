bintree_set.trans_opt_date : \
	assoc_list.trans_opt \
	bintree.trans_opt \
	builtin.trans_opt \
	list.trans_opt \
	pair.trans_opt \
	private_builtin.trans_opt \
	unit.trans_opt

bintree_set.optdate bintree_set.trans_opt_date bintree_set.err bintree_set.c_date bintree_set.s_date bintree_set.pic_s_date bintree_set.il_date bintree_set.java_date : bintree_set.m \
	assoc_list.int \
	bintree.int \
	builtin.int \
	list.int \
	pair.int \
	private_builtin.int \
	unit.int \
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
	pretty_printer.int2 \
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

bintree_set.$O :  \
	array.mh \
	assoc_list.mh \
	benchmarking.mh \
	bintree.mh \
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

bintree_set.trans_opt_date bintree_set.err bintree_set.c_date bintree_set.s_date bintree_set.pic_s_date bintree_set.il_date bintree_set.java_date :  \
	bintree_set.opt \
	assoc_list.opt \
	bintree.opt \
	builtin.opt \
	list.opt \
	pair.opt \
	private_builtin.opt \
	unit.opt

bintree_set.err bintree_set.c_date bintree_set.s_date bintree_set.pic_s_date bintree_set.il_date bintree_set.java_date :  \
	bintree_set.trans_opt \
	assoc_list.trans_opt \
	bintree.trans_opt \
	builtin.trans_opt \
	list.trans_opt \
	pair.trans_opt \
	private_builtin.trans_opt \
	unit.trans_opt

ifeq ($(TARGET_ASM),yes)
bintree_set.mh bintree_set.mih : bintree_set.s
else
bintree_set.mh bintree_set.mih : bintree_set.c
endif

ifeq ($(TARGET_ASM),yes)
bintree_set.module_dep : bintree_set.s
else
 ifeq ($(findstring il,$(GRADE)),il)
bintree_set.module_dep : bintree_set.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
bintree_set.module_dep : jmercury/bintree_set.java
  else
bintree_set.module_dep : bintree_set.c
  endif
 endif
endif

bintree_set.date bintree_set.date0 : bintree_set.m \
	assoc_list.int3 \
	bintree.int3 \
	builtin.int3 \
	list.int3 \
	pair.int3 \
	private_builtin.int3 \
	unit.int3 \
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
	pretty_printer.int3 \
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

bintree_set.date0 : bintree_set.m \
	assoc_list.int3 \
	bintree.int3 \
	builtin.int3 \
	list.int3 \
	pair.int3 \
	private_builtin.int3 \
	unit.int3 \
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
	pretty_printer.int3 \
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



bintree_set.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



bintree_set.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


bintree_set.int0 : bintree_set.date0
	@:
bintree_set.int : bintree_set.date
	@:
bintree_set.int2 : bintree_set.date
	@:
bintree_set.int3 : bintree_set.date3
	@:
bintree_set.opt : bintree_set.optdate
	@:
bintree_set.trans_opt : bintree_set.trans_opt_date
	@:
