injection.trans_opt_date : \
	assoc_list.trans_opt \
	builtin.trans_opt \
	list.trans_opt \
	map.trans_opt \
	pair.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	string.trans_opt \
	svmap.trans_opt

injection.optdate injection.trans_opt_date injection.err injection.c_date injection.s_date injection.pic_s_date injection.il_date injection.java_date : injection.m \
	assoc_list.int \
	builtin.int \
	list.int \
	map.int \
	pair.int \
	private_builtin.int \
	require.int \
	string.int \
	svmap.int \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	io.int2 \
	maybe.int2 \
	ops.int2 \
	pretty_printer.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

injection.$O :  \
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

injection.trans_opt_date injection.err injection.c_date injection.s_date injection.pic_s_date injection.il_date injection.java_date :  \
	injection.opt \
	assoc_list.opt \
	builtin.opt \
	list.opt \
	map.opt \
	pair.opt \
	private_builtin.opt \
	require.opt \
	string.opt \
	svmap.opt

injection.err injection.c_date injection.s_date injection.pic_s_date injection.il_date injection.java_date :  \
	injection.trans_opt \
	assoc_list.trans_opt \
	builtin.trans_opt \
	list.trans_opt \
	map.trans_opt \
	pair.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	string.trans_opt \
	svmap.trans_opt

ifeq ($(TARGET_ASM),yes)
injection.mh injection.mih : injection.s
else
injection.mh injection.mih : injection.c
endif

ifeq ($(TARGET_ASM),yes)
injection.module_dep : injection.s
else
 ifeq ($(findstring il,$(GRADE)),il)
injection.module_dep : injection.il
  ifeq ($(findstring java,$(GRADE)),java)
injection.module_dep : injection.java
  else
injection.module_dep : injection.c
  endif
 endif
endif

injection.date injection.date0 : injection.m \
	assoc_list.int3 \
	builtin.int3 \
	list.int3 \
	map.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	svmap.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	maybe.int3 \
	ops.int3 \
	pretty_printer.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

injection.date0 : injection.m \
	assoc_list.int3 \
	builtin.int3 \
	list.int3 \
	map.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	svmap.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	maybe.int3 \
	ops.int3 \
	pretty_printer.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



injection.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



injection.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


injection.int0 : injection.date0
	@:
injection.int : injection.date
	@:
injection.int2 : injection.date
	@:
injection.int3 : injection.date3
	@:
injection.opt : injection.optdate
	@:
injection.trans_opt : injection.trans_opt_date
	@:
