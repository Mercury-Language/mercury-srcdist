group.trans_opt_date : \
	assoc_list.trans_opt \
	builtin.trans_opt \
	counter.trans_opt \
	list.trans_opt \
	map.trans_opt \
	pair.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	set.trans_opt

group.optdate group.trans_opt_date group.err group.c_date group.s_date group.pic_s_date group.il_date group.java_date : group.m \
	assoc_list.int \
	builtin.int \
	counter.int \
	list.int \
	map.int \
	pair.int \
	private_builtin.int \
	require.int \
	set.int \
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
	rtti_implementation.int2 \
	set_ordlist.int2 \
	stream.int2 \
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

group.$O :  \
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

group.trans_opt_date group.err group.c_date group.s_date group.pic_s_date group.il_date group.java_date :  \
	group.opt \
	assoc_list.opt \
	builtin.opt \
	counter.opt \
	list.opt \
	map.opt \
	pair.opt \
	private_builtin.opt \
	require.opt \
	set.opt

group.err group.c_date group.s_date group.pic_s_date group.il_date group.java_date :  \
	group.trans_opt \
	assoc_list.trans_opt \
	builtin.trans_opt \
	counter.trans_opt \
	list.trans_opt \
	map.trans_opt \
	pair.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	set.trans_opt

ifeq ($(TARGET_ASM),yes)
group.mh group.mih : group.s
else
group.mh group.mih : group.c
endif

ifeq ($(TARGET_ASM),yes)
group.module_dep : group.s
else
 ifeq ($(findstring il,$(GRADE)),il)
group.module_dep : group.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
group.module_dep : jmercury/group.java
  else
group.module_dep : group.c
  endif
 endif
endif

group.date group.date0 : group.m \
	assoc_list.int3 \
	builtin.int3 \
	counter.int3 \
	list.int3 \
	map.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
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
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

group.date0 : group.m \
	assoc_list.int3 \
	builtin.int3 \
	counter.int3 \
	list.int3 \
	map.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
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
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



group.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



group.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


group.int0 : group.date0
	@:
group.int : group.date
	@:
group.int2 : group.date
	@:
group.int3 : group.date3
	@:
group.opt : group.optdate
	@:
group.trans_opt : group.trans_opt_date
	@:
