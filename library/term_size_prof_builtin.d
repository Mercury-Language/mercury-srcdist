term_size_prof_builtin.trans_opt_date : \
	builtin.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt

term_size_prof_builtin.optdate term_size_prof_builtin.trans_opt_date term_size_prof_builtin.err term_size_prof_builtin.c_date term_size_prof_builtin.s_date term_size_prof_builtin.pic_s_date term_size_prof_builtin.il_date term_size_prof_builtin.java_date : term_size_prof_builtin.m \
	builtin.int \
	private_builtin.int \
	require.int \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	io.int2 \
	list.int2 \
	map.int2 \
	maybe.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

term_size_prof_builtin.$O :  \
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

term_size_prof_builtin.trans_opt_date term_size_prof_builtin.err term_size_prof_builtin.c_date term_size_prof_builtin.s_date term_size_prof_builtin.pic_s_date term_size_prof_builtin.il_date term_size_prof_builtin.java_date :  \
	term_size_prof_builtin.opt \
	builtin.opt \
	private_builtin.opt \
	require.opt

term_size_prof_builtin.err term_size_prof_builtin.c_date term_size_prof_builtin.s_date term_size_prof_builtin.pic_s_date term_size_prof_builtin.il_date term_size_prof_builtin.java_date :  \
	term_size_prof_builtin.trans_opt \
	builtin.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt

ifeq ($(TARGET_ASM),yes)
term_size_prof_builtin.mh term_size_prof_builtin.mih : term_size_prof_builtin.s
else
term_size_prof_builtin.mh term_size_prof_builtin.mih : term_size_prof_builtin.c
endif

ifeq ($(TARGET_ASM),yes)
term_size_prof_builtin.module_dep : term_size_prof_builtin.s
else
 ifeq ($(findstring il,$(GRADE)),il)
term_size_prof_builtin.module_dep : term_size_prof_builtin.il
  ifeq ($(findstring java,$(GRADE)),java)
term_size_prof_builtin.module_dep : term_size_prof_builtin.java
  else
term_size_prof_builtin.module_dep : term_size_prof_builtin.c
  endif
 endif
endif

term_size_prof_builtin.date term_size_prof_builtin.date0 : term_size_prof_builtin.m \
	builtin.int3 \
	private_builtin.int3 \
	require.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

term_size_prof_builtin.date0 : term_size_prof_builtin.m \
	builtin.int3 \
	private_builtin.int3 \
	require.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



term_size_prof_builtin.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	term_size_prof_builtin.mh



term_size_prof_builtin.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	term_size_prof_builtin.mh


term_size_prof_builtin.int0 : term_size_prof_builtin.date0
	@:
term_size_prof_builtin.int : term_size_prof_builtin.date
	@:
term_size_prof_builtin.int2 : term_size_prof_builtin.date
	@:
term_size_prof_builtin.int3 : term_size_prof_builtin.date3
	@:
term_size_prof_builtin.opt : term_size_prof_builtin.optdate
	@:
term_size_prof_builtin.trans_opt : term_size_prof_builtin.trans_opt_date
	@:
