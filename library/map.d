map.trans_opt_date : \
	maybe.trans_opt \
	pair.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	set.trans_opt \
	term.trans_opt \
	tree234.trans_opt

map.optdate map.trans_opt_date map.err map.c_date map.s_date map.pic_s_date map.il_date map.java_date : map.m \
	assoc_list.int \
	builtin.int \
	int.int \
	list.int \
	maybe.int \
	pair.int \
	private_builtin.int \
	require.int \
	set.int \
	term.int \
	tree234.int \
	array.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	integer.int2 \
	io.int2 \
	ops.int2 \
	pretty_printer.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set_ordlist.int2 \
	stream.int2 \
	string.int2 \
	time.int2 \
	type_desc.int2 \
	univ.int2

map.$O :  \
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

map.trans_opt_date map.err map.c_date map.s_date map.pic_s_date map.il_date map.java_date :  \
	map.opt \
	assoc_list.opt \
	builtin.opt \
	int.opt \
	list.opt \
	maybe.opt \
	pair.opt \
	private_builtin.opt \
	require.opt \
	set.opt \
	term.opt \
	tree234.opt

map.err map.c_date map.s_date map.pic_s_date map.il_date map.java_date :  \
	map.trans_opt \
	assoc_list.trans_opt \
	builtin.trans_opt \
	int.trans_opt \
	list.trans_opt \
	maybe.trans_opt \
	pair.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	set.trans_opt \
	term.trans_opt \
	tree234.trans_opt

map.pic_o map.$O : \
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

map.mh map.mih : map.c


ifeq ($(findstring il,$(GRADE)),il)
map.module_dep : map.il
else
 ifeq ($(findstring java,$(GRADE)),java)
map.module_dep : jmercury/map.java
 else
map.module_dep : map.c
 endif
endif


map.date map.date0 : map.m \
	assoc_list.int3 \
	builtin.int3 \
	int.int3 \
	list.int3 \
	maybe.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	term.int3 \
	tree234.int3 \
	array.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	integer.int3 \
	io.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	time.int3 \
	type_desc.int3 \
	univ.int3

map.date0 : map.m \
	assoc_list.int3 \
	builtin.int3 \
	int.int3 \
	list.int3 \
	maybe.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	term.int3 \
	tree234.int3 \
	array.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	integer.int3 \
	io.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	time.int3 \
	type_desc.int3 \
	univ.int3



map.$O :  \
	io.mh \
	io.mh \
	time.mh \
	string.mh \
	bitmap.mh \
	bitmap.mh \
	time.mh \
	time.mh \
	array.mh \
	array.mh



map.pic_o :  \
	io.mh \
	io.mh \
	time.mh \
	string.mh \
	bitmap.mh \
	bitmap.mh \
	time.mh \
	time.mh \
	array.mh \
	array.mh


map.int0 : map.date0
	@:
map.int : map.date
	@:
map.int2 : map.date
	@:
map.int3 : map.date3
	@:
map.opt : map.optdate
	@:
map.trans_opt : map.trans_opt_date
	@:
