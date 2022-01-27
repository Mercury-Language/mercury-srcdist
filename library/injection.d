injection.trans_opt_date : \
	assoc_list.trans_opt \
	builtin.trans_opt \
	list.trans_opt \
	map.trans_opt \
	pair.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	string.trans_opt

injection.optdate injection.trans_opt_date injection.err injection.c_date injection.s_date injection.pic_s_date injection.il_date injection.java_date : injection.m \
	assoc_list.int \
	builtin.int \
	list.int \
	map.int \
	pair.int \
	private_builtin.int \
	require.int \
	string.int \
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
	stm_builtin.mh \
	store.mh \
	stream.mh \
	string.mh \
	table_builtin.mh \
	term.mh \
	term_io.mh \
	time.mh \
	tree234.mh \
	type_desc.mh \
	unit.mh \
	univ.mh \
	varset.mh \
	version_array.mh \
	stream.string_writer.mh \
	string.format.mh \
	string.to_string.mh

injection.trans_opt_date injection.err injection.c_date injection.s_date injection.pic_s_date injection.il_date injection.java_date :  \
	injection.opt \
	assoc_list.opt \
	builtin.opt \
	list.opt \
	map.opt \
	pair.opt \
	private_builtin.opt \
	require.opt \
	string.opt

injection.err injection.c_date injection.s_date injection.pic_s_date injection.il_date injection.java_date :  \
	injection.trans_opt \
	assoc_list.trans_opt \
	builtin.trans_opt \
	list.trans_opt \
	map.trans_opt \
	pair.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	string.trans_opt

injection.pic_o injection.$O : \
	array.mih \
	assoc_list.mih \
	benchmarking.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
	char.mih \
	construct.mih \
	deconstruct.mih \
	dir.mih \
	enum.mih \
	erlang_rtti_implementation.mih \
	exception.mih \
	float.mih \
	int.mih \
	integer.mih \
	io.mih \
	lexer.mih \
	list.mih \
	map.mih \
	math.mih \
	maybe.mih \
	mutvar.mih \
	ops.mih \
	pair.mih \
	parser.mih \
	pretty_printer.mih \
	private_builtin.mih \
	random.mih \
	require.mih \
	rtti_implementation.mih \
	set.mih \
	set_ordlist.mih \
	set_tree234.mih \
	solutions.mih \
	std_util.mih \
	stm_builtin.mih \
	store.mih \
	stream.mih \
	string.mih \
	table_builtin.mih \
	term.mih \
	term_io.mih \
	time.mih \
	tree234.mih \
	type_desc.mih \
	unit.mih \
	univ.mih \
	varset.mih \
	version_array.mih \
	stream.string_writer.mih \
	string.format.mih \
	string.to_string.mih

injection.mh injection.mih : injection.c


ifeq ($(findstring il,$(GRADE)),il)
injection.module_dep : injection.il
else
 ifeq ($(findstring java,$(GRADE)),java)
injection.module_dep : jmercury/injection.java
 else
injection.module_dep : injection.c
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
	time.mh \
	io.mh \
	io.mh



injection.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
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
