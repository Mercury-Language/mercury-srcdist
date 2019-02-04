benchmarking.trans_opt_date : \
	builtin.trans_opt \
	int.trans_opt \
	io.trans_opt \
	maybe.trans_opt \
	private_builtin.trans_opt \
	string.trans_opt

benchmarking.optdate benchmarking.trans_opt_date benchmarking.err benchmarking.c_date benchmarking.s_date benchmarking.pic_s_date benchmarking.il_date benchmarking.java_date : benchmarking.m \
	builtin.int \
	int.int \
	io.int \
	maybe.int \
	private_builtin.int \
	string.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	list.int2 \
	map.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

benchmarking.$O :  \
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

benchmarking.trans_opt_date benchmarking.err benchmarking.c_date benchmarking.s_date benchmarking.pic_s_date benchmarking.il_date benchmarking.java_date :  \
	benchmarking.opt \
	builtin.opt \
	int.opt \
	io.opt \
	maybe.opt \
	private_builtin.opt \
	string.opt

benchmarking.err benchmarking.c_date benchmarking.s_date benchmarking.pic_s_date benchmarking.il_date benchmarking.java_date :  \
	benchmarking.trans_opt \
	builtin.trans_opt \
	int.trans_opt \
	io.trans_opt \
	maybe.trans_opt \
	private_builtin.trans_opt \
	string.trans_opt

ifeq ($(TARGET_ASM),yes)
benchmarking.mh benchmarking.mih : benchmarking.s
else
benchmarking.mh benchmarking.mih : benchmarking.c
endif

ifeq ($(TARGET_ASM),yes)
benchmarking.module_dep : benchmarking.s
else
 ifeq ($(findstring il,$(GRADE)),il)
benchmarking.module_dep : benchmarking.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
benchmarking.module_dep : jmercury/benchmarking.java
  else
benchmarking.module_dep : benchmarking.c
  endif
 endif
endif

benchmarking.date benchmarking.date0 : benchmarking.m \
	builtin.int3 \
	int.int3 \
	io.int3 \
	maybe.int3 \
	private_builtin.int3 \
	string.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	list.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

benchmarking.date0 : benchmarking.m \
	builtin.int3 \
	int.int3 \
	io.int3 \
	maybe.int3 \
	private_builtin.int3 \
	string.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	list.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



benchmarking.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	benchmarking.mh



benchmarking.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	benchmarking.mh


benchmarking.int0 : benchmarking.date0
	@:
benchmarking.int : benchmarking.date
	@:
benchmarking.int2 : benchmarking.date
	@:
benchmarking.int3 : benchmarking.date3
	@:
benchmarking.opt : benchmarking.optdate
	@:
benchmarking.trans_opt : benchmarking.trans_opt_date
	@:
