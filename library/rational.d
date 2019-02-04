rational.trans_opt_date : \
	builtin.trans_opt \
	integer.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt

rational.optdate rational.trans_opt_date rational.err rational.c_date rational.s_date rational.pic_s_date rational.il_date rational.java_date : rational.m \
	builtin.int \
	integer.int \
	private_builtin.int \
	require.int \
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
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

rational.$O :  \
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

rational.trans_opt_date rational.err rational.c_date rational.s_date rational.pic_s_date rational.il_date rational.java_date :  \
	rational.opt \
	builtin.opt \
	integer.opt \
	private_builtin.opt \
	require.opt

rational.err rational.c_date rational.s_date rational.pic_s_date rational.il_date rational.java_date :  \
	rational.trans_opt \
	builtin.trans_opt \
	integer.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt

ifeq ($(TARGET_ASM),yes)
rational.mh rational.mih : rational.s
else
rational.mh rational.mih : rational.c
endif

ifeq ($(TARGET_ASM),yes)
rational.module_dep : rational.s
else
 ifeq ($(findstring il,$(GRADE)),il)
rational.module_dep : rational.il
  ifeq ($(findstring java,$(GRADE)),java)
rational.module_dep : rational.java
  else
rational.module_dep : rational.c
  endif
 endif
endif

rational.date rational.date0 : rational.m \
	builtin.int3 \
	integer.int3 \
	private_builtin.int3 \
	require.int3 \
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
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

rational.date0 : rational.m \
	builtin.int3 \
	integer.int3 \
	private_builtin.int3 \
	require.int3 \
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
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



rational.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



rational.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


rational.int0 : rational.date0
	@:
rational.int : rational.date
	@:
rational.int2 : rational.date
	@:
rational.int3 : rational.date3
	@:
rational.opt : rational.optdate
	@:
rational.trans_opt : rational.trans_opt_date
	@:
