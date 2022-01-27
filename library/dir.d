dir.trans_opt_date : \
	exception.trans_opt \
	int.trans_opt \
	io.trans_opt \
	list.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	std_util.trans_opt \
	string.trans_opt

dir.optdate dir.trans_opt_date dir.err dir.c_date dir.s_date dir.pic_s_date dir.il_date dir.java_date : dir.m \
	bool.int \
	builtin.int \
	char.int \
	exception.int \
	int.int \
	io.int \
	list.int \
	private_builtin.int \
	require.int \
	std_util.int \
	string.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	map.int2 \
	maybe.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	stm_builtin.int2 \
	store.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

dir.$O :  \
	array.mh \
	assoc_list.mh \
	benchmarking.mh \
	bitmap.mh \
	bool.mh \
	builtin.mh \
	calendar.mh \
	char.mh \
	construct.mh \
	cord.mh \
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
	term_conversion.mh \
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
	string.parse_runtime.mh \
	string.parse_util.mh \
	string.to_string.mh

dir.trans_opt_date dir.err dir.c_date dir.s_date dir.pic_s_date dir.il_date dir.java_date :  \
	dir.opt \
	bool.opt \
	builtin.opt \
	char.opt \
	exception.opt \
	int.opt \
	io.opt \
	list.opt \
	private_builtin.opt \
	require.opt \
	std_util.opt \
	string.opt

dir.err dir.c_date dir.s_date dir.pic_s_date dir.il_date dir.java_date :  \
	dir.trans_opt \
	bool.trans_opt \
	builtin.trans_opt \
	char.trans_opt \
	exception.trans_opt \
	int.trans_opt \
	io.trans_opt \
	list.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	std_util.trans_opt \
	string.trans_opt

dir.pic_o dir.$O : \
	array.mih \
	assoc_list.mih \
	benchmarking.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
	calendar.mih \
	char.mih \
	construct.mih \
	cord.mih \
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
	term_conversion.mih \
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
	string.parse_runtime.mih \
	string.parse_util.mih \
	string.to_string.mih

dir.mh dir.mih : dir.c


ifeq ($(findstring il,$(GRADE)),il)
dir.module_dep : dir.il
else
 ifeq ($(findstring java,$(GRADE)),java)
dir.module_dep : jmercury/dir.java
 else
dir.module_dep : dir.c
 endif
endif


dir.date dir.date0 : dir.m \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	exception.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	private_builtin.int3 \
	require.int3 \
	std_util.int3 \
	string.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stm_builtin.int3 \
	store.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

dir.date0 : dir.m \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	exception.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	private_builtin.int3 \
	require.int3 \
	std_util.int3 \
	string.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stm_builtin.int3 \
	store.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



dir.$O :  \
	dir.mh \
	io.mh \
	io.mh \
	time.mh \
	string.mh \
	bitmap.mh \
	bitmap.mh \
	time.mh \
	time.mh \
	stm_builtin.mh \
	stm_builtin.mh \
	store.mh \
	store.mh \
	array.mh \
	array.mh



dir.pic_o :  \
	dir.mh \
	io.mh \
	io.mh \
	time.mh \
	string.mh \
	bitmap.mh \
	bitmap.mh \
	time.mh \
	time.mh \
	stm_builtin.mh \
	stm_builtin.mh \
	store.mh \
	store.mh \
	array.mh \
	array.mh


dir.int0 : dir.date0
	@:
dir.int : dir.date
	@:
dir.int2 : dir.date
	@:
dir.int3 : dir.date3
	@:
dir.opt : dir.optdate
	@:
dir.trans_opt : dir.trans_opt_date
	@:
