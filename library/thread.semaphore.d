thread.semaphore.trans_opt_date : \
	bool.trans_opt \
	builtin.trans_opt \
	io.trans_opt \
	private_builtin.trans_opt

thread.semaphore.optdate thread.semaphore.trans_opt_date thread.semaphore.err thread.semaphore.c_date thread.semaphore.s_date thread.semaphore.pic_s_date thread.semaphore.il_date thread.semaphore.java_date : thread.semaphore.m \
	thread.int0 \
	bool.int \
	builtin.int \
	io.int \
	private_builtin.int \
	assoc_list.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	list.int2 \
	map.int2 \
	maybe.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

thread.semaphore.$O :  \
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
	thread.mh \
	time.mh \
	tree234.mh \
	type_desc.mh \
	unit.mh \
	univ.mh \
	varset.mh \
	version_array.mh \
	stream.string_writer.mh

thread.semaphore.trans_opt_date thread.semaphore.err thread.semaphore.c_date thread.semaphore.s_date thread.semaphore.pic_s_date thread.semaphore.il_date thread.semaphore.java_date :  \
	thread.semaphore.opt \
	bool.opt \
	builtin.opt \
	io.opt \
	private_builtin.opt \
	thread.int0

thread.semaphore.err thread.semaphore.c_date thread.semaphore.s_date thread.semaphore.pic_s_date thread.semaphore.il_date thread.semaphore.java_date :  \
	thread.semaphore.trans_opt \
	bool.trans_opt \
	builtin.trans_opt \
	io.trans_opt \
	private_builtin.trans_opt

thread.semaphore.mh thread.semaphore.mih : thread.semaphore.c


ifeq ($(findstring il,$(GRADE)),il)
thread.semaphore.module_dep : thread.semaphore.il
else
 ifeq ($(findstring java,$(GRADE)),java)
thread.semaphore.module_dep : jmercury/thread__semaphore.java
 else
thread.semaphore.module_dep : thread.semaphore.c
 endif
endif


thread.semaphore.date thread.semaphore.date0 \
	thread.date : thread.semaphore.m \
	thread.int0 \
	bool.int3 \
	builtin.int3 \
	io.int3 \
	private_builtin.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

thread.semaphore.date0 \
	thread.date0 : thread.semaphore.m \
	bool.int3 \
	builtin.int3 \
	io.int3 \
	private_builtin.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



thread.semaphore.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	thread.mh \
	thread.semaphore.mh



thread.semaphore.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	thread.mh \
	thread.semaphore.mh


thread.semaphore.int0 : thread.semaphore.date0
	@:
thread.semaphore.int : thread.semaphore.date
	@:
thread.semaphore.int2 : thread.semaphore.date
	@:
thread.semaphore.int3 : thread.semaphore.date3
	@:
thread.semaphore.opt : thread.semaphore.optdate
	@:
thread.semaphore.trans_opt : thread.semaphore.trans_opt_date
	@:
