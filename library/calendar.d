calendar.trans_opt_date : \
	builtin.trans_opt \
	char.trans_opt \
	int.trans_opt \
	io.trans_opt \
	list.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	string.trans_opt \
	time.trans_opt

calendar.optdate calendar.trans_opt_date calendar.err calendar.c_date calendar.s_date calendar.pic_s_date calendar.il_date calendar.java_date : calendar.m \
	builtin.int \
	char.int \
	int.int \
	io.int \
	list.int \
	private_builtin.int \
	require.int \
	string.int \
	time.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
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
	stream.int2 \
	term.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

calendar.$O :  \
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

calendar.trans_opt_date calendar.err calendar.c_date calendar.s_date calendar.pic_s_date calendar.il_date calendar.java_date :  \
	calendar.opt \
	builtin.opt \
	char.opt \
	int.opt \
	io.opt \
	list.opt \
	private_builtin.opt \
	require.opt \
	string.opt \
	time.opt

calendar.err calendar.c_date calendar.s_date calendar.pic_s_date calendar.il_date calendar.java_date :  \
	calendar.trans_opt \
	builtin.trans_opt \
	char.trans_opt \
	int.trans_opt \
	io.trans_opt \
	list.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	string.trans_opt \
	time.trans_opt

calendar.pic_o calendar.$O : \
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

calendar.mh calendar.mih : calendar.c


ifeq ($(findstring il,$(GRADE)),il)
calendar.module_dep : calendar.il
else
 ifeq ($(findstring java,$(GRADE)),java)
calendar.module_dep : jmercury/calendar.java
 else
calendar.module_dep : calendar.c
 endif
endif


calendar.date calendar.date0 : calendar.m \
	builtin.int3 \
	char.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	time.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
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
	stream.int3 \
	term.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

calendar.date0 : calendar.m \
	builtin.int3 \
	char.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	time.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
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
	stream.int3 \
	term.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



calendar.$O :  \
	array.mh \
	array.mh \
	bitmap.mh \
	bitmap.mh \
	time.mh \
	time.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh



calendar.pic_o :  \
	array.mh \
	array.mh \
	bitmap.mh \
	bitmap.mh \
	time.mh \
	time.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh


calendar.int0 : calendar.date0
	@:
calendar.int : calendar.date
	@:
calendar.int2 : calendar.date
	@:
calendar.int3 : calendar.date3
	@:
calendar.opt : calendar.optdate
	@:
calendar.trans_opt : calendar.trans_opt_date
	@:
