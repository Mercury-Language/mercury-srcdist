set_bbbtree.trans_opt_date : \
	bool.trans_opt \
	builtin.trans_opt \
	int.trans_opt \
	list.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt

set_bbbtree.optdate set_bbbtree.trans_opt_date set_bbbtree.err set_bbbtree.c_date set_bbbtree.s_date set_bbbtree.pic_s_date set_bbbtree.il_date set_bbbtree.java_date : set_bbbtree.m \
	bool.int \
	builtin.int \
	int.int \
	list.int \
	private_builtin.int \
	require.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
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
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

set_bbbtree.$O :  \
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

set_bbbtree.trans_opt_date set_bbbtree.err set_bbbtree.c_date set_bbbtree.s_date set_bbbtree.pic_s_date set_bbbtree.il_date set_bbbtree.java_date :  \
	set_bbbtree.opt \
	bool.opt \
	builtin.opt \
	int.opt \
	list.opt \
	private_builtin.opt \
	require.opt

set_bbbtree.err set_bbbtree.c_date set_bbbtree.s_date set_bbbtree.pic_s_date set_bbbtree.il_date set_bbbtree.java_date :  \
	set_bbbtree.trans_opt \
	bool.trans_opt \
	builtin.trans_opt \
	int.trans_opt \
	list.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt

ifeq ($(TARGET_ASM),yes)
set_bbbtree.mh set_bbbtree.mih : set_bbbtree.s
else
set_bbbtree.mh set_bbbtree.mih : set_bbbtree.c
endif

ifeq ($(TARGET_ASM),yes)
set_bbbtree.module_dep : set_bbbtree.s
else
 ifeq ($(findstring il,$(GRADE)),il)
set_bbbtree.module_dep : set_bbbtree.il
  ifeq ($(findstring java,$(GRADE)),java)
set_bbbtree.module_dep : set_bbbtree.java
  else
set_bbbtree.module_dep : set_bbbtree.c
  endif
 endif
endif

set_bbbtree.date set_bbbtree.date0 : set_bbbtree.m \
	bool.int3 \
	builtin.int3 \
	int.int3 \
	list.int3 \
	private_builtin.int3 \
	require.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
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
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

set_bbbtree.date0 : set_bbbtree.m \
	bool.int3 \
	builtin.int3 \
	int.int3 \
	list.int3 \
	private_builtin.int3 \
	require.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
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
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



set_bbbtree.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



set_bbbtree.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


set_bbbtree.int0 : set_bbbtree.date0
	@:
set_bbbtree.int : set_bbbtree.date
	@:
set_bbbtree.int2 : set_bbbtree.date
	@:
set_bbbtree.int3 : set_bbbtree.date3
	@:
set_bbbtree.opt : set_bbbtree.optdate
	@:
set_bbbtree.trans_opt : set_bbbtree.trans_opt_date
	@:
