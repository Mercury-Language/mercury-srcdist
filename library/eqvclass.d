eqvclass.trans_opt_date : \
	builtin.trans_opt \
	counter.trans_opt \
	int.trans_opt \
	list.trans_opt \
	map.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	set.trans_opt \
	svmap.trans_opt

eqvclass.optdate eqvclass.trans_opt_date eqvclass.err eqvclass.c_date eqvclass.s_date eqvclass.pic_s_date eqvclass.il_date eqvclass.java_date : eqvclass.m \
	builtin.int \
	counter.int \
	int.int \
	list.int \
	map.int \
	private_builtin.int \
	require.int \
	set.int \
	svmap.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	io.int2 \
	maybe.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set_ordlist.int2 \
	stream.int2 \
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

eqvclass.$O :  \
	array.mh \
	assoc_list.mh \
	benchmarking.mh \
	bitmap.mh \
	bool.mh \
	builtin.mh \
	char.mh \
	construct.mh \
	counter.mh \
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

eqvclass.trans_opt_date eqvclass.err eqvclass.c_date eqvclass.s_date eqvclass.pic_s_date eqvclass.il_date eqvclass.java_date :  \
	eqvclass.opt \
	builtin.opt \
	counter.opt \
	int.opt \
	list.opt \
	map.opt \
	private_builtin.opt \
	require.opt \
	set.opt \
	svmap.opt

eqvclass.err eqvclass.c_date eqvclass.s_date eqvclass.pic_s_date eqvclass.il_date eqvclass.java_date :  \
	eqvclass.trans_opt \
	builtin.trans_opt \
	counter.trans_opt \
	int.trans_opt \
	list.trans_opt \
	map.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	set.trans_opt \
	svmap.trans_opt

ifeq ($(TARGET_ASM),yes)
eqvclass.mh eqvclass.mih : eqvclass.s
else
eqvclass.mh eqvclass.mih : eqvclass.c
endif

ifeq ($(TARGET_ASM),yes)
eqvclass.module_dep : eqvclass.s
else
 ifeq ($(findstring il,$(GRADE)),il)
eqvclass.module_dep : eqvclass.il
  ifeq ($(findstring java,$(GRADE)),java)
eqvclass.module_dep : jmercury/eqvclass.java
  else
eqvclass.module_dep : eqvclass.c
  endif
 endif
endif

eqvclass.date eqvclass.date0 : eqvclass.m \
	builtin.int3 \
	counter.int3 \
	int.int3 \
	list.int3 \
	map.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	svmap.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

eqvclass.date0 : eqvclass.m \
	builtin.int3 \
	counter.int3 \
	int.int3 \
	list.int3 \
	map.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	svmap.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



eqvclass.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



eqvclass.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


eqvclass.int0 : eqvclass.date0
	@:
eqvclass.int : eqvclass.date
	@:
eqvclass.int2 : eqvclass.date
	@:
eqvclass.int3 : eqvclass.date3
	@:
eqvclass.opt : eqvclass.optdate
	@:
eqvclass.trans_opt : eqvclass.trans_opt_date
	@:
