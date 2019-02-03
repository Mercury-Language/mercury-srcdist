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

ifeq ($(TARGET_ASM),yes)
prolog.mh prolog.mih : prolog.s
else
prolog.mh prolog.mih : prolog.c
endif

ifeq ($(TARGET_ASM),yes)
prolog.module_dep : prolog.s
else
 ifeq ($(findstring il,$(GRADE)),il)
prolog.module_dep : prolog.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
prolog.module_dep : jmercury/prolog.java
  else
prolog.module_dep : prolog.c
  endif
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
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh



prolog.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh


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
