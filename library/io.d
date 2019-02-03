io.trans_opt_date : \
	list.trans_opt \
	map.trans_opt \
	maybe.trans_opt \
	ops.trans_opt \
	parser.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	rtti_implementation.trans_opt \
	stream.trans_opt \
	string.trans_opt \
	table_builtin.trans_opt \
	term.trans_opt \
	term_io.trans_opt \
	time.trans_opt \
	type_desc.trans_opt \
	univ.trans_opt \
	stream.string_writer.trans_opt

io.optdate io.trans_opt_date io.err io.c_date io.s_date io.pic_s_date io.il_date io.java_date : io.m \
	array.int \
	benchmarking.int \
	bitmap.int \
	bool.int \
	builtin.int \
	char.int \
	deconstruct.int \
	dir.int \
	enum.int \
	exception.int \
	int.int \
	list.int \
	map.int \
	maybe.int \
	ops.int \
	parser.int \
	private_builtin.int \
	require.int \
	rtti_implementation.int \
	stream.int \
	string.int \
	table_builtin.int \
	term.int \
	term_io.int \
	time.int \
	type_desc.int \
	univ.int \
	stream.string_writer.int \
	assoc_list.int2 \
	construct.int2 \
	lexer.int2 \
	pair.int2 \
	pretty_printer.int2 \
	random.int2 \
	set.int2 \
	set_ordlist.int2 \
	stm_builtin.int2 \
	store.int2 \
	tree234.int2 \
	varset.int2

io.$O :  \
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
	stream.string_writer.mh

io.trans_opt_date io.err io.c_date io.s_date io.pic_s_date io.il_date io.java_date :  \
	io.opt \
	array.opt \
	benchmarking.opt \
	bitmap.opt \
	bool.opt \
	builtin.opt \
	char.opt \
	deconstruct.opt \
	dir.opt \
	enum.opt \
	exception.opt \
	int.opt \
	list.opt \
	map.opt \
	maybe.opt \
	ops.opt \
	parser.opt \
	private_builtin.opt \
	require.opt \
	rtti_implementation.opt \
	stream.opt \
	string.opt \
	table_builtin.opt \
	term.opt \
	term_io.opt \
	time.opt \
	type_desc.opt \
	univ.opt \
	stream.string_writer.opt \
	stream.int0

io.err io.c_date io.s_date io.pic_s_date io.il_date io.java_date :  \
	io.trans_opt \
	array.trans_opt \
	benchmarking.trans_opt \
	bitmap.trans_opt \
	bool.trans_opt \
	builtin.trans_opt \
	char.trans_opt \
	deconstruct.trans_opt \
	dir.trans_opt \
	enum.trans_opt \
	exception.trans_opt \
	int.trans_opt \
	list.trans_opt \
	map.trans_opt \
	maybe.trans_opt \
	ops.trans_opt \
	parser.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	rtti_implementation.trans_opt \
	stream.trans_opt \
	string.trans_opt \
	table_builtin.trans_opt \
	term.trans_opt \
	term_io.trans_opt \
	time.trans_opt \
	type_desc.trans_opt \
	univ.trans_opt \
	stream.string_writer.trans_opt

ifeq ($(TARGET_ASM),yes)
io.mh io.mih : io.s
else
io.mh io.mih : io.c
endif

ifeq ($(TARGET_ASM),yes)
io.module_dep : io.s
else
 ifeq ($(findstring il,$(GRADE)),il)
io.module_dep : io.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
io.module_dep : jmercury/io.java
  else
io.module_dep : io.c
  endif
 endif
endif

io.date io.date0 : io.m \
	array.int3 \
	benchmarking.int3 \
	bitmap.int3 \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	deconstruct.int3 \
	dir.int3 \
	enum.int3 \
	exception.int3 \
	int.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	parser.int3 \
	private_builtin.int3 \
	require.int3 \
	rtti_implementation.int3 \
	stream.int3 \
	string.int3 \
	table_builtin.int3 \
	term.int3 \
	term_io.int3 \
	time.int3 \
	type_desc.int3 \
	univ.int3 \
	stream.string_writer.int3 \
	assoc_list.int3 \
	construct.int3 \
	lexer.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	stm_builtin.int3 \
	store.int3 \
	tree234.int3 \
	varset.int3

io.date0 : io.m \
	array.int3 \
	benchmarking.int3 \
	bitmap.int3 \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	deconstruct.int3 \
	dir.int3 \
	enum.int3 \
	exception.int3 \
	int.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	parser.int3 \
	private_builtin.int3 \
	require.int3 \
	rtti_implementation.int3 \
	stream.int3 \
	string.int3 \
	table_builtin.int3 \
	term.int3 \
	term_io.int3 \
	time.int3 \
	type_desc.int3 \
	univ.int3 \
	stream.string_writer.int3 \
	assoc_list.int3 \
	construct.int3 \
	lexer.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	stm_builtin.int3 \
	store.int3 \
	tree234.int3 \
	varset.int3



io.$O :  \
	store.mh \
	store.mh \
	stm_builtin.mh \
	stm_builtin.mh \
	table_builtin.mh \
	table_builtin.mh \
	dir.mh \
	dir.mh \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh



io.pic_o :  \
	store.mh \
	store.mh \
	stm_builtin.mh \
	stm_builtin.mh \
	table_builtin.mh \
	table_builtin.mh \
	dir.mh \
	dir.mh \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh


io.int0 : io.date0
	@:
io.int : io.date
	@:
io.int2 : io.date
	@:
io.int3 : io.date3
	@:
io.opt : io.optdate
	@:
io.trans_opt : io.trans_opt_date
	@:
