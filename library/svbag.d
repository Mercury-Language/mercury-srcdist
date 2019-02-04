svbag.trans_opt_date : \
	bag.trans_opt \
	builtin.trans_opt \
	list.trans_opt \
	private_builtin.trans_opt \
	set.trans_opt

svbag.optdate svbag.trans_opt_date svbag.err svbag.c_date svbag.s_date svbag.pic_s_date svbag.il_date svbag.java_date : svbag.m \
	bag.int \
	builtin.int \
	list.int \
	private_builtin.int \
	set.int \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
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
	set_ordlist.int2 \
	stream.int2 \
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

svbag.$O :  \
	array.mh \
	assoc_list.mh \
	bag.mh \
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

svbag.trans_opt_date svbag.err svbag.c_date svbag.s_date svbag.pic_s_date svbag.il_date svbag.java_date :  \
	svbag.opt \
	bag.opt \
	builtin.opt \
	list.opt \
	private_builtin.opt \
	set.opt

svbag.err svbag.c_date svbag.s_date svbag.pic_s_date svbag.il_date svbag.java_date :  \
	svbag.trans_opt \
	bag.trans_opt \
	builtin.trans_opt \
	list.trans_opt \
	private_builtin.trans_opt \
	set.trans_opt

ifeq ($(TARGET_ASM),yes)
svbag.mh svbag.mih : svbag.s
else
svbag.mh svbag.mih : svbag.c
endif

ifeq ($(TARGET_ASM),yes)
svbag.module_dep : svbag.s
else
 ifeq ($(findstring il,$(GRADE)),il)
svbag.module_dep : svbag.il
  ifeq ($(findstring java,$(GRADE)),java)
svbag.module_dep : svbag.java
  else
svbag.module_dep : svbag.c
  endif
 endif
endif

svbag.date svbag.date0 : svbag.m \
	bag.int3 \
	builtin.int3 \
	list.int3 \
	private_builtin.int3 \
	set.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
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
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

svbag.date0 : svbag.m \
	bag.int3 \
	builtin.int3 \
	list.int3 \
	private_builtin.int3 \
	set.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
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
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



svbag.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



svbag.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


svbag.int0 : svbag.date0
	@:
svbag.int : svbag.date
	@:
svbag.int2 : svbag.date
	@:
svbag.int3 : svbag.date3
	@:
svbag.opt : svbag.optdate
	@:
svbag.trans_opt : svbag.trans_opt_date
	@:
