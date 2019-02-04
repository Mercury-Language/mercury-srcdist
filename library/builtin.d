builtin.trans_opt_date : \
	erlang_rtti_implementation.trans_opt \
	int.trans_opt \
	private_builtin.trans_opt \
	rtti_implementation.trans_opt

builtin.optdate builtin.trans_opt_date builtin.err builtin.c_date builtin.s_date builtin.pic_s_date builtin.il_date builtin.java_date : builtin.m \
	erlang_rtti_implementation.int \
	int.int \
	private_builtin.int \
	rtti_implementation.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	io.int2 \
	list.int2 \
	map.int2 \
	maybe.int2 \
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
	type_desc.int2 \
	univ.int2

builtin.$O :  \
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

builtin.trans_opt_date builtin.err builtin.c_date builtin.s_date builtin.pic_s_date builtin.il_date builtin.java_date :  \
	builtin.opt \
	erlang_rtti_implementation.opt \
	int.opt \
	private_builtin.opt \
	rtti_implementation.opt

builtin.err builtin.c_date builtin.s_date builtin.pic_s_date builtin.il_date builtin.java_date :  \
	builtin.trans_opt \
	erlang_rtti_implementation.trans_opt \
	int.trans_opt \
	private_builtin.trans_opt \
	rtti_implementation.trans_opt

ifeq ($(TARGET_ASM),yes)
builtin.mh builtin.mih : builtin.s
else
builtin.mh builtin.mih : builtin.c
endif

ifeq ($(TARGET_ASM),yes)
builtin.module_dep : builtin.s
else
 ifeq ($(findstring il,$(GRADE)),il)
builtin.module_dep : builtin.il
  ifeq ($(findstring java,$(GRADE)),java)
builtin.module_dep : builtin.java
  else
builtin.module_dep : builtin.c
  endif
 endif
endif

builtin.date builtin.date0 : builtin.m \
	erlang_rtti_implementation.int3 \
	int.int3 \
	private_builtin.int3 \
	rtti_implementation.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
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
	type_desc.int3 \
	univ.int3

builtin.date0 : builtin.m \
	erlang_rtti_implementation.int3 \
	int.int3 \
	private_builtin.int3 \
	rtti_implementation.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
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
	type_desc.int3 \
	univ.int3



builtin.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	builtin.mh



builtin.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	builtin.mh


builtin.int0 : builtin.date0
	@:
builtin.int : builtin.date
	@:
builtin.int2 : builtin.date
	@:
builtin.int3 : builtin.date3
	@:
builtin.opt : builtin.optdate
	@:
builtin.trans_opt : builtin.trans_opt_date
	@:
