bt_array.trans_opt_date : \
	builtin.trans_opt \
	int.trans_opt \
	list.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	string.trans_opt

bt_array.optdate bt_array.trans_opt_date bt_array.err bt_array.c_date bt_array.s_date bt_array.pic_s_date bt_array.il_date bt_array.java_date : bt_array.m \
	builtin.int \
	int.int \
	list.int \
	private_builtin.int \
	require.int \
	string.int \
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
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

bt_array.$O :  \
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

bt_array.trans_opt_date bt_array.err bt_array.c_date bt_array.s_date bt_array.pic_s_date bt_array.il_date bt_array.java_date :  \
	bt_array.opt \
	builtin.opt \
	int.opt \
	list.opt \
	private_builtin.opt \
	require.opt \
	string.opt

bt_array.err bt_array.c_date bt_array.s_date bt_array.pic_s_date bt_array.il_date bt_array.java_date :  \
	bt_array.trans_opt \
	builtin.trans_opt \
	int.trans_opt \
	list.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	string.trans_opt

ifeq ($(TARGET_ASM),yes)
bt_array.mh bt_array.mih : bt_array.s
else
bt_array.mh bt_array.mih : bt_array.c
endif

ifeq ($(TARGET_ASM),yes)
bt_array.module_dep : bt_array.s
else
 ifeq ($(findstring il,$(GRADE)),il)
bt_array.module_dep : bt_array.il
  ifeq ($(findstring java,$(GRADE)),java)
bt_array.module_dep : bt_array.java
  else
bt_array.module_dep : bt_array.c
  endif
 endif
endif

bt_array.date bt_array.date0 : bt_array.m \
	builtin.int3 \
	int.int3 \
	list.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
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
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

bt_array.date0 : bt_array.m \
	builtin.int3 \
	int.int3 \
	list.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
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
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



bt_array.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



bt_array.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


bt_array.int0 : bt_array.date0
	@:
bt_array.int : bt_array.date
	@:
bt_array.int2 : bt_array.date
	@:
bt_array.int3 : bt_array.date3
	@:
bt_array.opt : bt_array.optdate
	@:
bt_array.trans_opt : bt_array.trans_opt_date
	@:
