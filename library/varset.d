varset.trans_opt_date :

varset.optdate varset.trans_opt_date varset.err varset.c_date varset.s_date varset.pic_s_date varset.il_date varset.java_date : varset.m \
	assoc_list.int \
	builtin.int \
	int.int \
	list.int \
	map.int \
	maybe.int \
	pair.int \
	private_builtin.int \
	require.int \
	set.int \
	string.int \
	term.int \
	array.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	io.int2 \
	ops.int2 \
	pretty_printer.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set_ordlist.int2 \
	stream.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

varset.$O :  \
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

varset.trans_opt_date varset.err varset.c_date varset.s_date varset.pic_s_date varset.il_date varset.java_date :  \
	varset.opt \
	assoc_list.opt \
	builtin.opt \
	int.opt \
	list.opt \
	map.opt \
	maybe.opt \
	pair.opt \
	private_builtin.opt \
	require.opt \
	set.opt \
	string.opt \
	term.opt

varset.err varset.c_date varset.s_date varset.pic_s_date varset.il_date varset.java_date :  \
	varset.trans_opt \
	assoc_list.trans_opt \
	builtin.trans_opt \
	int.trans_opt \
	list.trans_opt \
	map.trans_opt \
	maybe.trans_opt \
	pair.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	set.trans_opt \
	string.trans_opt \
	term.trans_opt

ifeq ($(TARGET_ASM),yes)
varset.mh varset.mih : varset.s
else
varset.mh varset.mih : varset.c
endif

ifeq ($(TARGET_ASM),yes)
varset.module_dep : varset.s
else
 ifeq ($(findstring il,$(GRADE)),il)
varset.module_dep : varset.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
varset.module_dep : jmercury/varset.java
  else
varset.module_dep : varset.c
  endif
 endif
endif

varset.date varset.date0 : varset.m \
	assoc_list.int3 \
	builtin.int3 \
	int.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	term.int3 \
	array.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stream.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

varset.date0 : varset.m \
	assoc_list.int3 \
	builtin.int3 \
	int.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	term.int3 \
	array.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stream.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



varset.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



varset.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


varset.int0 : varset.date0
	@:
varset.int : varset.date
	@:
varset.int2 : varset.date
	@:
varset.int3 : varset.date3
	@:
varset.opt : varset.optdate
	@:
varset.trans_opt : varset.trans_opt_date
	@:
