parsing_utils.trans_opt_date : \
	array.trans_opt \
	builtin.trans_opt \
	char.trans_opt \
	int.trans_opt \
	list.trans_opt \
	maybe.trans_opt \
	mutvar.trans_opt \
	private_builtin.trans_opt \
	string.trans_opt \
	unit.trans_opt

parsing_utils.optdate parsing_utils.trans_opt_date parsing_utils.err parsing_utils.c_date parsing_utils.s_date parsing_utils.pic_s_date parsing_utils.il_date parsing_utils.java_date : parsing_utils.m \
	array.int \
	builtin.int \
	char.int \
	int.int \
	list.int \
	maybe.int \
	mutvar.int \
	private_builtin.int \
	string.int \
	unit.int \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	io.int2 \
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

parsing_utils.$O :  \
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

parsing_utils.trans_opt_date parsing_utils.err parsing_utils.c_date parsing_utils.s_date parsing_utils.pic_s_date parsing_utils.il_date parsing_utils.java_date :  \
	parsing_utils.opt \
	array.opt \
	builtin.opt \
	char.opt \
	int.opt \
	list.opt \
	maybe.opt \
	mutvar.opt \
	private_builtin.opt \
	string.opt \
	unit.opt

parsing_utils.err parsing_utils.c_date parsing_utils.s_date parsing_utils.pic_s_date parsing_utils.il_date parsing_utils.java_date :  \
	parsing_utils.trans_opt \
	array.trans_opt \
	builtin.trans_opt \
	char.trans_opt \
	int.trans_opt \
	list.trans_opt \
	maybe.trans_opt \
	mutvar.trans_opt \
	private_builtin.trans_opt \
	string.trans_opt \
	unit.trans_opt

ifeq ($(TARGET_ASM),yes)
parsing_utils.mh parsing_utils.mih : parsing_utils.s
else
parsing_utils.mh parsing_utils.mih : parsing_utils.c
endif

ifeq ($(TARGET_ASM),yes)
parsing_utils.module_dep : parsing_utils.s
else
 ifeq ($(findstring il,$(GRADE)),il)
parsing_utils.module_dep : parsing_utils.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
parsing_utils.module_dep : jmercury/parsing_utils.java
  else
parsing_utils.module_dep : parsing_utils.c
  endif
 endif
endif

parsing_utils.date parsing_utils.date0 : parsing_utils.m \
	array.int3 \
	builtin.int3 \
	char.int3 \
	int.int3 \
	list.int3 \
	maybe.int3 \
	mutvar.int3 \
	private_builtin.int3 \
	string.int3 \
	unit.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
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

parsing_utils.date0 : parsing_utils.m \
	array.int3 \
	builtin.int3 \
	char.int3 \
	int.int3 \
	list.int3 \
	maybe.int3 \
	mutvar.int3 \
	private_builtin.int3 \
	string.int3 \
	unit.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
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



parsing_utils.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	array.mh \
	array.mh



parsing_utils.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	array.mh \
	array.mh


parsing_utils.int0 : parsing_utils.date0
	@:
parsing_utils.int : parsing_utils.date
	@:
parsing_utils.int2 : parsing_utils.date
	@:
parsing_utils.int3 : parsing_utils.date3
	@:
parsing_utils.opt : parsing_utils.optdate
	@:
parsing_utils.trans_opt : parsing_utils.trans_opt_date
	@:
