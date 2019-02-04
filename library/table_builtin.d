table_builtin.trans_opt_date : \
	univ.trans_opt

table_builtin.optdate table_builtin.trans_opt_date table_builtin.err table_builtin.c_date table_builtin.s_date table_builtin.pic_s_date table_builtin.il_date table_builtin.java_date : table_builtin.m \
	builtin.int \
	int.int \
	io.int \
	list.int \
	maybe.int \
	private_builtin.int \
	require.int \
	univ.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	map.int2 \
	ops.int2 \
	pair.int2 \
	random.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2

table_builtin.$O :  \
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

table_builtin.trans_opt_date table_builtin.err table_builtin.c_date table_builtin.s_date table_builtin.pic_s_date table_builtin.il_date table_builtin.java_date :  \
	table_builtin.opt \
	builtin.opt \
	int.opt \
	io.opt \
	list.opt \
	maybe.opt \
	private_builtin.opt \
	require.opt \
	univ.opt

table_builtin.err table_builtin.c_date table_builtin.s_date table_builtin.pic_s_date table_builtin.il_date table_builtin.java_date :  \
	table_builtin.trans_opt \
	builtin.trans_opt \
	int.trans_opt \
	io.trans_opt \
	list.trans_opt \
	maybe.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	univ.trans_opt

ifeq ($(TARGET_ASM),yes)
table_builtin.mh table_builtin.mih : table_builtin.s
else
table_builtin.mh table_builtin.mih : table_builtin.c
endif

ifeq ($(TARGET_ASM),yes)
table_builtin.module_dep : table_builtin.s
else
 ifeq ($(findstring il,$(GRADE)),il)
table_builtin.module_dep : table_builtin.il
  ifeq ($(findstring java,$(GRADE)),java)
table_builtin.module_dep : table_builtin.java
  else
table_builtin.module_dep : table_builtin.c
  endif
 endif
endif

table_builtin.date table_builtin.date0 : table_builtin.m \
	builtin.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	maybe.int3 \
	private_builtin.int3 \
	require.int3 \
	univ.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3

table_builtin.date0 : table_builtin.m \
	builtin.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	maybe.int3 \
	private_builtin.int3 \
	require.int3 \
	univ.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3



table_builtin.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	table_builtin.mh



table_builtin.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	table_builtin.mh


table_builtin.int0 : table_builtin.date0
	@:
table_builtin.int : table_builtin.date
	@:
table_builtin.int2 : table_builtin.date
	@:
table_builtin.int3 : table_builtin.date3
	@:
table_builtin.opt : table_builtin.optdate
	@:
table_builtin.trans_opt : table_builtin.trans_opt_date
	@:
