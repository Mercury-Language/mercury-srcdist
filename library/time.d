time.trans_opt_date :

time.optdate time.trans_opt_date time.err time.c_date time.s_date time.pic_s_date time.il_date time.java_date : time.m \
	builtin.int \
	exception.int \
	int.int \
	io.int \
	list.int \
	maybe.int \
	private_builtin.int \
	require.int \
	string.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	map.int2 \
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
	tree234.int2 \
	type_desc.int2 \
	univ.int2

time.$O :  \
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

time.trans_opt_date time.err time.c_date time.s_date time.pic_s_date time.il_date time.java_date :  \
	time.opt \
	builtin.opt \
	exception.opt \
	int.opt \
	io.opt \
	list.opt \
	maybe.opt \
	private_builtin.opt \
	require.opt \
	string.opt

time.err time.c_date time.s_date time.pic_s_date time.il_date time.java_date :  \
	time.trans_opt \
	builtin.trans_opt \
	exception.trans_opt \
	int.trans_opt \
	io.trans_opt \
	list.trans_opt \
	maybe.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	string.trans_opt

ifeq ($(TARGET_ASM),yes)
time.mh time.mih : time.s
else
time.mh time.mih : time.c
endif

ifeq ($(TARGET_ASM),yes)
time.module_dep : time.s
else
 ifeq ($(findstring il,$(GRADE)),il)
time.module_dep : time.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
time.module_dep : jmercury/time.java
  else
time.module_dep : time.c
  endif
 endif
endif

time.date time.date0 : time.m \
	builtin.int3 \
	exception.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	maybe.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	map.int3 \
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
	tree234.int3 \
	type_desc.int3 \
	univ.int3

time.date0 : time.m \
	builtin.int3 \
	exception.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	maybe.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	map.int3 \
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
	tree234.int3 \
	type_desc.int3 \
	univ.int3



time.$O :  \
	array.mh \
	array.mh \
	store.mh \
	store.mh \
	stm_builtin.mh \
	stm_builtin.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	time.mh



time.pic_o :  \
	array.mh \
	array.mh \
	store.mh \
	store.mh \
	stm_builtin.mh \
	stm_builtin.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	time.mh


time.int0 : time.date0
	@:
time.int : time.date
	@:
time.int2 : time.date
	@:
time.int3 : time.date3
	@:
time.opt : time.optdate
	@:
time.trans_opt : time.trans_opt_date
	@:
