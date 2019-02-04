term.trans_opt_date : \
	type_desc.trans_opt \
	univ.trans_opt

term.optdate term.trans_opt_date term.err term.c_date term.s_date term.pic_s_date term.il_date term.java_date : term.m \
	array.int \
	bitmap.int \
	builtin.int \
	construct.int \
	deconstruct.int \
	enum.int \
	int.int \
	list.int \
	map.int \
	private_builtin.int \
	require.int \
	string.int \
	svmap.int \
	type_desc.int \
	univ.int \
	assoc_list.int2 \
	bool.int2 \
	char.int2 \
	io.int2 \
	maybe.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	time.int2 \
	tree234.int2

term.$O :  \
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

term.trans_opt_date term.err term.c_date term.s_date term.pic_s_date term.il_date term.java_date :  \
	term.opt \
	array.opt \
	bitmap.opt \
	builtin.opt \
	construct.opt \
	deconstruct.opt \
	enum.opt \
	int.opt \
	list.opt \
	map.opt \
	private_builtin.opt \
	require.opt \
	string.opt \
	svmap.opt \
	type_desc.opt \
	univ.opt

term.err term.c_date term.s_date term.pic_s_date term.il_date term.java_date :  \
	term.trans_opt \
	array.trans_opt \
	bitmap.trans_opt \
	builtin.trans_opt \
	construct.trans_opt \
	deconstruct.trans_opt \
	enum.trans_opt \
	int.trans_opt \
	list.trans_opt \
	map.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	string.trans_opt \
	svmap.trans_opt \
	type_desc.trans_opt \
	univ.trans_opt

ifeq ($(TARGET_ASM),yes)
term.mh term.mih : term.s
else
term.mh term.mih : term.c
endif

ifeq ($(TARGET_ASM),yes)
term.module_dep : term.s
else
 ifeq ($(findstring il,$(GRADE)),il)
term.module_dep : term.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
term.module_dep : jmercury/term.java
  else
term.module_dep : term.c
  endif
 endif
endif

term.date term.date0 : term.m \
	array.int3 \
	bitmap.int3 \
	builtin.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	int.int3 \
	list.int3 \
	map.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	svmap.int3 \
	type_desc.int3 \
	univ.int3 \
	assoc_list.int3 \
	bool.int3 \
	char.int3 \
	io.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	time.int3 \
	tree234.int3

term.date0 : term.m \
	array.int3 \
	bitmap.int3 \
	builtin.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	int.int3 \
	list.int3 \
	map.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	svmap.int3 \
	type_desc.int3 \
	univ.int3 \
	assoc_list.int3 \
	bool.int3 \
	char.int3 \
	io.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	time.int3 \
	tree234.int3



term.$O :  \
	time.mh \
	time.mh \
	string.mh \
	io.mh \
	io.mh \
	bitmap.mh \
	bitmap.mh \
	array.mh \
	array.mh



term.pic_o :  \
	time.mh \
	time.mh \
	string.mh \
	io.mh \
	io.mh \
	bitmap.mh \
	bitmap.mh \
	array.mh \
	array.mh


term.int0 : term.date0
	@:
term.int : term.date
	@:
term.int2 : term.date
	@:
term.int3 : term.date3
	@:
term.opt : term.optdate
	@:
term.trans_opt : term.trans_opt_date
	@:
