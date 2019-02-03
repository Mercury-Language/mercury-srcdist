svvarset.trans_opt_date : \
	builtin.trans_opt \
	list.trans_opt \
	maybe.trans_opt \
	private_builtin.trans_opt \
	set.trans_opt \
	term.trans_opt \
	varset.trans_opt

svvarset.optdate svvarset.trans_opt_date svvarset.err svvarset.c_date svvarset.s_date svvarset.pic_s_date svvarset.il_date svvarset.java_date : svvarset.m \
	builtin.int \
	list.int \
	maybe.int \
	private_builtin.int \
	set.int \
	term.int \
	varset.int \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	io.int2 \
	map.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	rtti_implementation.int2 \
	set_ordlist.int2 \
	stream.int2 \
	string.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

svvarset.$O :  \
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

svvarset.trans_opt_date svvarset.err svvarset.c_date svvarset.s_date svvarset.pic_s_date svvarset.il_date svvarset.java_date :  \
	svvarset.opt \
	builtin.opt \
	list.opt \
	maybe.opt \
	private_builtin.opt \
	set.opt \
	term.opt \
	varset.opt

svvarset.err svvarset.c_date svvarset.s_date svvarset.pic_s_date svvarset.il_date svvarset.java_date :  \
	svvarset.trans_opt \
	builtin.trans_opt \
	list.trans_opt \
	maybe.trans_opt \
	private_builtin.trans_opt \
	set.trans_opt \
	term.trans_opt \
	varset.trans_opt

ifeq ($(TARGET_ASM),yes)
svvarset.mh svvarset.mih : svvarset.s
else
svvarset.mh svvarset.mih : svvarset.c
endif

ifeq ($(TARGET_ASM),yes)
svvarset.module_dep : svvarset.s
else
 ifeq ($(findstring il,$(GRADE)),il)
svvarset.module_dep : svvarset.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
svvarset.module_dep : jmercury/svvarset.java
  else
svvarset.module_dep : svvarset.c
  endif
 endif
endif

svvarset.date svvarset.date0 : svvarset.m \
	builtin.int3 \
	list.int3 \
	maybe.int3 \
	private_builtin.int3 \
	set.int3 \
	term.int3 \
	varset.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

svvarset.date0 : svvarset.m \
	builtin.int3 \
	list.int3 \
	maybe.int3 \
	private_builtin.int3 \
	set.int3 \
	term.int3 \
	varset.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



svvarset.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh



svvarset.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh


svvarset.int0 : svvarset.date0
	@:
svvarset.int : svvarset.date
	@:
svvarset.int2 : svvarset.date
	@:
svvarset.int3 : svvarset.date3
	@:
svvarset.opt : svvarset.optdate
	@:
svvarset.trans_opt : svvarset.trans_opt_date
	@:
