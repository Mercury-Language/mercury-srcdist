pretty_printer.trans_opt_date : \
	private_builtin.trans_opt \
	stream.trans_opt \
	string.trans_opt \
	term_io.trans_opt \
	tree234.trans_opt \
	type_desc.trans_opt \
	univ.trans_opt

pretty_printer.optdate pretty_printer.trans_opt_date pretty_printer.err pretty_printer.c_date pretty_printer.s_date pretty_printer.pic_s_date pretty_printer.il_date pretty_printer.java_date : pretty_printer.m \
	array.int \
	bool.int \
	builtin.int \
	char.int \
	deconstruct.int \
	exception.int \
	float.int \
	int.int \
	io.int \
	list.int \
	map.int \
	ops.int \
	private_builtin.int \
	stream.int \
	string.int \
	term_io.int \
	tree234.int \
	type_desc.int \
	univ.int \
	assoc_list.int2 \
	bitmap.int2 \
	construct.int2 \
	enum.int2 \
	maybe.int2 \
	pair.int2 \
	random.int2 \
	set.int2 \
	set_ordlist.int2 \
	store.int2 \
	term.int2 \
	time.int2 \
	varset.int2

pretty_printer.$O :  \
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

pretty_printer.trans_opt_date pretty_printer.err pretty_printer.c_date pretty_printer.s_date pretty_printer.pic_s_date pretty_printer.il_date pretty_printer.java_date :  \
	pretty_printer.opt \
	array.opt \
	bool.opt \
	builtin.opt \
	char.opt \
	deconstruct.opt \
	exception.opt \
	float.opt \
	int.opt \
	io.opt \
	list.opt \
	map.opt \
	ops.opt \
	private_builtin.opt \
	stream.opt \
	string.opt \
	term_io.opt \
	tree234.opt \
	type_desc.opt \
	univ.opt

pretty_printer.err pretty_printer.c_date pretty_printer.s_date pretty_printer.pic_s_date pretty_printer.il_date pretty_printer.java_date :  \
	pretty_printer.trans_opt \
	array.trans_opt \
	bool.trans_opt \
	builtin.trans_opt \
	char.trans_opt \
	deconstruct.trans_opt \
	exception.trans_opt \
	float.trans_opt \
	int.trans_opt \
	io.trans_opt \
	list.trans_opt \
	map.trans_opt \
	ops.trans_opt \
	private_builtin.trans_opt \
	stream.trans_opt \
	string.trans_opt \
	term_io.trans_opt \
	tree234.trans_opt \
	type_desc.trans_opt \
	univ.trans_opt

ifeq ($(TARGET_ASM),yes)
pretty_printer.mh pretty_printer.mih : pretty_printer.s
else
pretty_printer.mh pretty_printer.mih : pretty_printer.c
endif

ifeq ($(TARGET_ASM),yes)
pretty_printer.module_dep : pretty_printer.s
else
 ifeq ($(findstring il,$(GRADE)),il)
pretty_printer.module_dep : pretty_printer.il
  ifeq ($(findstring java,$(GRADE)),java)
pretty_printer.module_dep : pretty_printer.java
  else
pretty_printer.module_dep : pretty_printer.c
  endif
 endif
endif

pretty_printer.date pretty_printer.date0 : pretty_printer.m \
	array.int3 \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	deconstruct.int3 \
	exception.int3 \
	float.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	ops.int3 \
	private_builtin.int3 \
	stream.int3 \
	string.int3 \
	term_io.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	construct.int3 \
	enum.int3 \
	maybe.int3 \
	pair.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	store.int3 \
	term.int3 \
	time.int3 \
	varset.int3

pretty_printer.date0 : pretty_printer.m \
	array.int3 \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	deconstruct.int3 \
	exception.int3 \
	float.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	ops.int3 \
	private_builtin.int3 \
	stream.int3 \
	string.int3 \
	term_io.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	construct.int3 \
	enum.int3 \
	maybe.int3 \
	pair.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	store.int3 \
	term.int3 \
	time.int3 \
	varset.int3



pretty_printer.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	array.mh \
	array.mh \
	string.mh \
	io.mh \
	io.mh \
	pretty_printer.mh



pretty_printer.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	array.mh \
	array.mh \
	string.mh \
	io.mh \
	io.mh \
	pretty_printer.mh


pretty_printer.int0 : pretty_printer.date0
	@:
pretty_printer.int : pretty_printer.date
	@:
pretty_printer.int2 : pretty_printer.date
	@:
pretty_printer.int3 : pretty_printer.date3
	@:
pretty_printer.opt : pretty_printer.optdate
	@:
pretty_printer.trans_opt : pretty_printer.trans_opt_date
	@:
