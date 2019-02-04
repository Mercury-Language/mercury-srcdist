queue.trans_opt_date : \
	builtin.trans_opt \
	int.trans_opt \
	list.trans_opt \
	private_builtin.trans_opt

queue.optdate queue.trans_opt_date queue.err queue.c_date queue.s_date queue.pic_s_date queue.il_date queue.java_date : queue.m \
	builtin.int \
	int.int \
	list.int \
	private_builtin.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	io.int2 \
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
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

queue.$O :  \
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

queue.trans_opt_date queue.err queue.c_date queue.s_date queue.pic_s_date queue.il_date queue.java_date :  \
	queue.opt \
	builtin.opt \
	int.opt \
	list.opt \
	private_builtin.opt

queue.err queue.c_date queue.s_date queue.pic_s_date queue.il_date queue.java_date :  \
	queue.trans_opt \
	builtin.trans_opt \
	int.trans_opt \
	list.trans_opt \
	private_builtin.trans_opt

ifeq ($(TARGET_ASM),yes)
queue.mh queue.mih : queue.s
else
queue.mh queue.mih : queue.c
endif

ifeq ($(TARGET_ASM),yes)
queue.module_dep : queue.s
else
 ifeq ($(findstring il,$(GRADE)),il)
queue.module_dep : queue.il
  ifeq ($(findstring java,$(GRADE)),java)
queue.module_dep : jmercury/queue.java
  else
queue.module_dep : queue.c
  endif
 endif
endif

queue.date queue.date0 : queue.m \
	builtin.int3 \
	int.int3 \
	list.int3 \
	private_builtin.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
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
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

queue.date0 : queue.m \
	builtin.int3 \
	int.int3 \
	list.int3 \
	private_builtin.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
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
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



queue.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



queue.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


queue.int0 : queue.date0
	@:
queue.int : queue.date
	@:
queue.int2 : queue.date
	@:
queue.int3 : queue.date3
	@:
queue.opt : queue.optdate
	@:
queue.trans_opt : queue.trans_opt_date
	@:
