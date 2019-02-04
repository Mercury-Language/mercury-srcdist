thread.mvar.trans_opt_date : \
	bool.trans_opt \
	builtin.trans_opt \
	io.trans_opt \
	maybe.trans_opt \
	mutvar.trans_opt \
	private_builtin.trans_opt \
	thread.semaphore.trans_opt

thread.mvar.optdate thread.mvar.trans_opt_date thread.mvar.err thread.mvar.c_date thread.mvar.s_date thread.mvar.pic_s_date thread.mvar.il_date thread.mvar.java_date : thread.mvar.m \
	thread.int0 \
	bool.int \
	builtin.int \
	io.int \
	maybe.int \
	mutvar.int \
	private_builtin.int \
	thread.semaphore.int \
	assoc_list.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	list.int2 \
	map.int2 \
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

thread.mvar.$O :  \
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
	thread.mh \
	time.mh \
	tree234.mh \
	type_desc.mh \
	unit.mh \
	univ.mh \
	varset.mh \
	stream.string_writer.mh \
	thread.semaphore.mh

thread.mvar.trans_opt_date thread.mvar.err thread.mvar.c_date thread.mvar.s_date thread.mvar.pic_s_date thread.mvar.il_date thread.mvar.java_date :  \
	thread.mvar.opt \
	bool.opt \
	builtin.opt \
	io.opt \
	maybe.opt \
	mutvar.opt \
	private_builtin.opt \
	thread.semaphore.opt \
	thread.int0

thread.mvar.err thread.mvar.c_date thread.mvar.s_date thread.mvar.pic_s_date thread.mvar.il_date thread.mvar.java_date :  \
	thread.mvar.trans_opt \
	bool.trans_opt \
	builtin.trans_opt \
	io.trans_opt \
	maybe.trans_opt \
	mutvar.trans_opt \
	private_builtin.trans_opt \
	thread.semaphore.trans_opt

ifeq ($(TARGET_ASM),yes)
thread.mvar.mh thread.mvar.mih : thread.mvar.s
else
thread.mvar.mh thread.mvar.mih : thread.mvar.c
endif

ifeq ($(TARGET_ASM),yes)
thread.mvar.module_dep : thread.mvar.s
else
 ifeq ($(findstring il,$(GRADE)),il)
thread.mvar.module_dep : thread.mvar.il
  ifeq ($(findstring java,$(GRADE)),java)
thread.mvar.module_dep : jmercury/thread__mvar.java
  else
thread.mvar.module_dep : thread.mvar.c
  endif
 endif
endif

thread.mvar.date thread.mvar.date0 \
	thread.date : thread.mvar.m \
	thread.int0 \
	bool.int3 \
	builtin.int3 \
	io.int3 \
	maybe.int3 \
	mutvar.int3 \
	private_builtin.int3 \
	thread.semaphore.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	list.int3 \
	map.int3 \
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

thread.mvar.date0 \
	thread.date0 : thread.mvar.m \
	bool.int3 \
	builtin.int3 \
	io.int3 \
	maybe.int3 \
	mutvar.int3 \
	private_builtin.int3 \
	thread.semaphore.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	list.int3 \
	map.int3 \
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



thread.mvar.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	thread.semaphore.mh \
	thread.semaphore.mh \
	string.mh \
	io.mh \
	io.mh \
	thread.mh



thread.mvar.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	thread.semaphore.mh \
	thread.semaphore.mh \
	string.mh \
	io.mh \
	io.mh \
	thread.mh


thread.mvar.int0 : thread.mvar.date0
	@:
thread.mvar.int : thread.mvar.date
	@:
thread.mvar.int2 : thread.mvar.date
	@:
thread.mvar.int3 : thread.mvar.date3
	@:
thread.mvar.opt : thread.mvar.optdate
	@:
thread.mvar.trans_opt : thread.mvar.trans_opt_date
	@:
