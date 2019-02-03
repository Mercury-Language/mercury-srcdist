solutions.trans_opt_date :

solutions.optdate solutions.trans_opt_date solutions.err solutions.c_date solutions.s_date solutions.pic_s_date solutions.il_date solutions.java_date : solutions.m \
	bool.int \
	builtin.int \
	list.int \
	mutvar.int \
	private_builtin.int \
	set.int \
	assoc_list.int2 \
	bitmap.int2 \
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
	rtti_implementation.int2 \
	set_ordlist.int2 \
	stream.int2 \
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

solutions.$O :  \
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

solutions.trans_opt_date solutions.err solutions.c_date solutions.s_date solutions.pic_s_date solutions.il_date solutions.java_date :  \
	solutions.opt \
	bool.opt \
	builtin.opt \
	list.opt \
	mutvar.opt \
	private_builtin.opt \
	set.opt

solutions.err solutions.c_date solutions.s_date solutions.pic_s_date solutions.il_date solutions.java_date :  \
	solutions.trans_opt \
	bool.trans_opt \
	builtin.trans_opt \
	list.trans_opt \
	mutvar.trans_opt \
	private_builtin.trans_opt \
	set.trans_opt

ifeq ($(TARGET_ASM),yes)
solutions.mh solutions.mih : solutions.s
else
solutions.mh solutions.mih : solutions.c
endif

ifeq ($(TARGET_ASM),yes)
solutions.module_dep : solutions.s
else
 ifeq ($(findstring il,$(GRADE)),il)
solutions.module_dep : solutions.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
solutions.module_dep : jmercury/solutions.java
  else
solutions.module_dep : solutions.c
  endif
 endif
endif

solutions.date solutions.date0 : solutions.m \
	bool.int3 \
	builtin.int3 \
	list.int3 \
	mutvar.int3 \
	private_builtin.int3 \
	set.int3 \
	assoc_list.int3 \
	bitmap.int3 \
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
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

solutions.date0 : solutions.m \
	bool.int3 \
	builtin.int3 \
	list.int3 \
	mutvar.int3 \
	private_builtin.int3 \
	set.int3 \
	assoc_list.int3 \
	bitmap.int3 \
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
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



solutions.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	solutions.mh



solutions.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	solutions.mh


solutions.int0 : solutions.date0
	@:
solutions.int : solutions.date
	@:
solutions.int2 : solutions.date
	@:
solutions.int3 : solutions.date3
	@:
solutions.opt : solutions.optdate
	@:
solutions.trans_opt : solutions.trans_opt_date
	@:
