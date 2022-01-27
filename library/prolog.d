prolog.trans_opt_date : \
	builtin.trans_opt \
	deconstruct.trans_opt \
	int.trans_opt \
	list.trans_opt \
	pair.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	univ.trans_opt

prolog.optdate prolog.trans_opt_date prolog.err prolog.c_date prolog.s_date prolog.pic_s_date prolog.il_date prolog.java_date : prolog.m \
	builtin.int \
	deconstruct.int \
	int.int \
	list.int \
	pair.int \
	private_builtin.int \
	require.int \
	univ.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	enum.int2 \
	integer.int2 \
	io.int2 \
	map.int2 \
	maybe.int2 \
	ops.int2 \
	pretty_printer.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2

prolog.$O :  \
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

prolog.trans_opt_date prolog.err prolog.c_date prolog.s_date prolog.pic_s_date prolog.il_date prolog.java_date :  \
	prolog.opt \
	builtin.opt \
	deconstruct.opt \
	int.opt \
	list.opt \
	pair.opt \
	private_builtin.opt \
	require.opt \
	univ.opt

prolog.err prolog.c_date prolog.s_date prolog.pic_s_date prolog.il_date prolog.java_date :  \
	prolog.trans_opt \
	builtin.trans_opt \
	deconstruct.trans_opt \
	int.trans_opt \
	list.trans_opt \
	pair.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	univ.trans_opt

prolog.pic_o prolog.$O : \
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

prolog.mh prolog.mih : prolog.c


ifeq ($(findstring il,$(GRADE)),il)
prolog.module_dep : prolog.il
else
 ifeq ($(findstring java,$(GRADE)),java)
prolog.module_dep : jmercury/prolog.java
 else
prolog.module_dep : prolog.c
 endif
endif


prolog.date prolog.date0 : prolog.m \
	builtin.int3 \
	deconstruct.int3 \
	int.int3 \
	list.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	univ.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	enum.int3 \
	integer.int3 \
	io.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3

prolog.date0 : prolog.m \
	builtin.int3 \
	deconstruct.int3 \
	int.int3 \
	list.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	univ.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	enum.int3 \
	integer.int3 \
	io.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3



prolog.$O :  \
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



prolog.pic_o :  \
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


prolog.int0 : prolog.date0
	@:
prolog.int : prolog.date
	@:
prolog.int2 : prolog.date
	@:
prolog.int3 : prolog.date3
	@:
prolog.opt : prolog.optdate
	@:
prolog.trans_opt : prolog.trans_opt_date
	@:
