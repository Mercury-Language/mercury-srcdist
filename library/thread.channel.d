thread.channel.trans_opt_date : \
	bool.trans_opt \
	builtin.trans_opt \
	io.trans_opt \
	maybe.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	string.trans_opt \
	thread.mvar.trans_opt

thread.channel.optdate thread.channel.trans_opt_date thread.channel.err thread.channel.c_date thread.channel.s_date thread.channel.pic_s_date thread.channel.il_date thread.channel.java_date : thread.channel.m \
	thread.int0 \
	bool.int \
	builtin.int \
	io.int \
	maybe.int \
	private_builtin.int \
	require.int \
	string.int \
	thread.mvar.int \
	assoc_list.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	integer.int2 \
	list.int2 \
	map.int2 \
	ops.int2 \
	pair.int2 \
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

thread.channel.$O :  \
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
	thread.mh \
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
	string.to_string.mh \
	thread.mvar.mh \
	thread.semaphore.mh

thread.channel.trans_opt_date thread.channel.err thread.channel.c_date thread.channel.s_date thread.channel.pic_s_date thread.channel.il_date thread.channel.java_date :  \
	thread.channel.opt \
	bool.opt \
	builtin.opt \
	io.opt \
	maybe.opt \
	private_builtin.opt \
	require.opt \
	string.opt \
	thread.mvar.opt \
	thread.int0

thread.channel.err thread.channel.c_date thread.channel.s_date thread.channel.pic_s_date thread.channel.il_date thread.channel.java_date :  \
	thread.channel.trans_opt \
	bool.trans_opt \
	builtin.trans_opt \
	io.trans_opt \
	maybe.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	string.trans_opt \
	thread.mvar.trans_opt

thread.channel.pic_o thread.channel.$O : \
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
	thread.mih \
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
	string.to_string.mih \
	thread.mvar.mih \
	thread.semaphore.mih

thread.channel.mh thread.channel.mih : thread.channel.c


ifeq ($(findstring il,$(GRADE)),il)
thread.channel.module_dep : thread.channel.il
else
 ifeq ($(findstring java,$(GRADE)),java)
thread.channel.module_dep : jmercury/thread__channel.java
 else
thread.channel.module_dep : thread.channel.c
 endif
endif


thread.channel.date thread.channel.date0 \
	thread.date : thread.channel.m \
	thread.int0 \
	bool.int3 \
	builtin.int3 \
	io.int3 \
	maybe.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	thread.mvar.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	integer.int3 \
	list.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
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

thread.channel.date0 \
	thread.date0 : thread.channel.m \
	bool.int3 \
	builtin.int3 \
	io.int3 \
	maybe.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	thread.mvar.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	integer.int3 \
	list.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
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



thread.channel.$O :  \
	thread.mh \
	io.mh \
	string.mh \
	time.mh



thread.channel.pic_o :  \
	thread.mh \
	io.mh \
	string.mh \
	time.mh


thread.channel.int0 : thread.channel.date0
	@:
thread.channel.int : thread.channel.date
	@:
thread.channel.int2 : thread.channel.date
	@:
thread.channel.int3 : thread.channel.date3
	@:
thread.channel.opt : thread.channel.optdate
	@:
thread.channel.trans_opt : thread.channel.trans_opt_date
	@:
