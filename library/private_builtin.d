private_builtin.trans_opt_date : \
	require.trans_opt \
	string.trans_opt \
	type_desc.trans_opt

private_builtin.optdate private_builtin.trans_opt_date private_builtin.err private_builtin.c_date private_builtin.s_date private_builtin.pic_s_date private_builtin.il_date private_builtin.java_date : private_builtin.m \
	builtin.int \
	char.int \
	float.int \
	int.int \
	io.int \
	list.int \
	require.int \
	string.int \
	type_desc.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	map.int2 \
	maybe.int2 \
	ops.int2 \
	pair.int2 \
	random.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	univ.int2

private_builtin.$O :  \
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

private_builtin.trans_opt_date private_builtin.err private_builtin.c_date private_builtin.s_date private_builtin.pic_s_date private_builtin.il_date private_builtin.java_date :  \
	private_builtin.opt \
	builtin.opt \
	char.opt \
	float.opt \
	int.opt \
	io.opt \
	list.opt \
	require.opt \
	string.opt \
	type_desc.opt

private_builtin.err private_builtin.c_date private_builtin.s_date private_builtin.pic_s_date private_builtin.il_date private_builtin.java_date :  \
	private_builtin.trans_opt \
	builtin.trans_opt \
	char.trans_opt \
	float.trans_opt \
	int.trans_opt \
	io.trans_opt \
	list.trans_opt \
	require.trans_opt \
	string.trans_opt \
	type_desc.trans_opt

ifeq ($(TARGET_ASM),yes)
private_builtin.mh private_builtin.mih : private_builtin.s
else
private_builtin.mh private_builtin.mih : private_builtin.c
endif

ifeq ($(TARGET_ASM),yes)
private_builtin.module_dep : private_builtin.s
else
 ifeq ($(findstring il,$(GRADE)),il)
private_builtin.module_dep : private_builtin.il
  ifeq ($(findstring java,$(GRADE)),java)
private_builtin.module_dep : private_builtin.java
  else
private_builtin.module_dep : private_builtin.c
  endif
 endif
endif

private_builtin.date private_builtin.date0 : private_builtin.m \
	builtin.int3 \
	char.int3 \
	float.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	require.int3 \
	string.int3 \
	type_desc.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	univ.int3

private_builtin.date0 : private_builtin.m \
	builtin.int3 \
	char.int3 \
	float.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	require.int3 \
	string.int3 \
	type_desc.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	univ.int3



private_builtin.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	private_builtin.mh



private_builtin.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	private_builtin.mh


private_builtin.int0 : private_builtin.date0
	@:
private_builtin.int : private_builtin.date
	@:
private_builtin.int2 : private_builtin.date
	@:
private_builtin.int3 : private_builtin.date3
	@:
private_builtin.opt : private_builtin.optdate
	@:
private_builtin.trans_opt : private_builtin.trans_opt_date
	@:
