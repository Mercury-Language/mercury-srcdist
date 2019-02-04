assoc_list.trans_opt_date : \
	builtin.trans_opt \
	list.trans_opt \
	pair.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	string.trans_opt \
	type_desc.trans_opt

assoc_list.optdate assoc_list.trans_opt_date assoc_list.err assoc_list.c_date assoc_list.s_date assoc_list.pic_s_date assoc_list.il_date assoc_list.java_date : assoc_list.m \
	builtin.int \
	list.int \
	pair.int \
	private_builtin.int \
	require.int \
	string.int \
	type_desc.int \
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
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	univ.int2

assoc_list.$O :  \
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

assoc_list.trans_opt_date assoc_list.err assoc_list.c_date assoc_list.s_date assoc_list.pic_s_date assoc_list.il_date assoc_list.java_date :  \
	assoc_list.opt \
	builtin.opt \
	list.opt \
	pair.opt \
	private_builtin.opt \
	require.opt \
	string.opt \
	type_desc.opt

assoc_list.err assoc_list.c_date assoc_list.s_date assoc_list.pic_s_date assoc_list.il_date assoc_list.java_date :  \
	assoc_list.trans_opt \
	builtin.trans_opt \
	list.trans_opt \
	pair.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	string.trans_opt \
	type_desc.trans_opt

ifeq ($(TARGET_ASM),yes)
assoc_list.mh assoc_list.mih : assoc_list.s
else
assoc_list.mh assoc_list.mih : assoc_list.c
endif

ifeq ($(TARGET_ASM),yes)
assoc_list.module_dep : assoc_list.s
else
 ifeq ($(findstring il,$(GRADE)),il)
assoc_list.module_dep : assoc_list.il
  ifeq ($(findstring java,$(GRADE)),java)
assoc_list.module_dep : assoc_list.java
  else
assoc_list.module_dep : assoc_list.c
  endif
 endif
endif

assoc_list.date assoc_list.date0 : assoc_list.m \
	builtin.int3 \
	list.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	type_desc.int3 \
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
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	univ.int3

assoc_list.date0 : assoc_list.m \
	builtin.int3 \
	list.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	type_desc.int3 \
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
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	univ.int3



assoc_list.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



assoc_list.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


assoc_list.int0 : assoc_list.date0
	@:
assoc_list.int : assoc_list.date
	@:
assoc_list.int2 : assoc_list.date
	@:
assoc_list.int3 : assoc_list.date3
	@:
assoc_list.opt : assoc_list.optdate
	@:
assoc_list.trans_opt : assoc_list.trans_opt_date
	@:
