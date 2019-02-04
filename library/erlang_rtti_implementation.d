erlang_rtti_implementation.trans_opt_date : \
	int.trans_opt \
	list.trans_opt \
	maybe.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	string.trans_opt \
	term_io.trans_opt \
	type_desc.trans_opt \
	univ.trans_opt

erlang_rtti_implementation.optdate erlang_rtti_implementation.trans_opt_date erlang_rtti_implementation.err erlang_rtti_implementation.c_date erlang_rtti_implementation.s_date erlang_rtti_implementation.pic_s_date erlang_rtti_implementation.il_date erlang_rtti_implementation.java_date : erlang_rtti_implementation.m \
	array.int \
	builtin.int \
	char.int \
	construct.int \
	deconstruct.int \
	int.int \
	list.int \
	maybe.int \
	private_builtin.int \
	require.int \
	string.int \
	term_io.int \
	type_desc.int \
	univ.int \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	enum.int2 \
	io.int2 \
	map.int2 \
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
	varset.int2

erlang_rtti_implementation.$O :  \
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

erlang_rtti_implementation.trans_opt_date erlang_rtti_implementation.err erlang_rtti_implementation.c_date erlang_rtti_implementation.s_date erlang_rtti_implementation.pic_s_date erlang_rtti_implementation.il_date erlang_rtti_implementation.java_date :  \
	erlang_rtti_implementation.opt \
	array.opt \
	builtin.opt \
	char.opt \
	construct.opt \
	deconstruct.opt \
	int.opt \
	list.opt \
	maybe.opt \
	private_builtin.opt \
	require.opt \
	string.opt \
	term_io.opt \
	type_desc.opt \
	univ.opt

erlang_rtti_implementation.err erlang_rtti_implementation.c_date erlang_rtti_implementation.s_date erlang_rtti_implementation.pic_s_date erlang_rtti_implementation.il_date erlang_rtti_implementation.java_date :  \
	erlang_rtti_implementation.trans_opt \
	array.trans_opt \
	builtin.trans_opt \
	char.trans_opt \
	construct.trans_opt \
	deconstruct.trans_opt \
	int.trans_opt \
	list.trans_opt \
	maybe.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	string.trans_opt \
	term_io.trans_opt \
	type_desc.trans_opt \
	univ.trans_opt

ifeq ($(TARGET_ASM),yes)
erlang_rtti_implementation.mh erlang_rtti_implementation.mih : erlang_rtti_implementation.s
else
erlang_rtti_implementation.mh erlang_rtti_implementation.mih : erlang_rtti_implementation.c
endif

ifeq ($(TARGET_ASM),yes)
erlang_rtti_implementation.module_dep : erlang_rtti_implementation.s
else
 ifeq ($(findstring il,$(GRADE)),il)
erlang_rtti_implementation.module_dep : erlang_rtti_implementation.il
  ifeq ($(findstring java,$(GRADE)),java)
erlang_rtti_implementation.module_dep : mercury/erlang_rtti_implementation.java
  else
erlang_rtti_implementation.module_dep : erlang_rtti_implementation.c
  endif
 endif
endif

erlang_rtti_implementation.date erlang_rtti_implementation.date0 : erlang_rtti_implementation.m \
	array.int3 \
	builtin.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	int.int3 \
	list.int3 \
	maybe.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	term_io.int3 \
	type_desc.int3 \
	univ.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	enum.int3 \
	io.int3 \
	map.int3 \
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
	varset.int3

erlang_rtti_implementation.date0 : erlang_rtti_implementation.m \
	array.int3 \
	builtin.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	int.int3 \
	list.int3 \
	maybe.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	term_io.int3 \
	type_desc.int3 \
	univ.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	enum.int3 \
	io.int3 \
	map.int3 \
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
	varset.int3



erlang_rtti_implementation.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	array.mh \
	array.mh



erlang_rtti_implementation.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	array.mh \
	array.mh


erlang_rtti_implementation.int0 : erlang_rtti_implementation.date0
	@:
erlang_rtti_implementation.int : erlang_rtti_implementation.date
	@:
erlang_rtti_implementation.int2 : erlang_rtti_implementation.date
	@:
erlang_rtti_implementation.int3 : erlang_rtti_implementation.date3
	@:
erlang_rtti_implementation.opt : erlang_rtti_implementation.optdate
	@:
erlang_rtti_implementation.trans_opt : erlang_rtti_implementation.trans_opt_date
	@:
