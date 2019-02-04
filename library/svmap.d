svmap.trans_opt_date : \
	term.trans_opt

svmap.optdate svmap.trans_opt_date svmap.err svmap.c_date svmap.s_date svmap.pic_s_date svmap.il_date svmap.java_date : svmap.m \
	assoc_list.int \
	builtin.int \
	list.int \
	map.int \
	private_builtin.int \
	term.int \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	io.int2 \
	maybe.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	string.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

svmap.$O :  \
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

svmap.trans_opt_date svmap.err svmap.c_date svmap.s_date svmap.pic_s_date svmap.il_date svmap.java_date :  \
	svmap.opt \
	assoc_list.opt \
	builtin.opt \
	list.opt \
	map.opt \
	private_builtin.opt \
	term.opt

svmap.err svmap.c_date svmap.s_date svmap.pic_s_date svmap.il_date svmap.java_date :  \
	svmap.trans_opt \
	assoc_list.trans_opt \
	builtin.trans_opt \
	list.trans_opt \
	map.trans_opt \
	private_builtin.trans_opt \
	term.trans_opt

ifeq ($(TARGET_ASM),yes)
svmap.mh svmap.mih : svmap.s
else
svmap.mh svmap.mih : svmap.c
endif

ifeq ($(TARGET_ASM),yes)
svmap.module_dep : svmap.s
else
 ifeq ($(findstring il,$(GRADE)),il)
svmap.module_dep : svmap.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
svmap.module_dep : jmercury/svmap.java
  else
svmap.module_dep : svmap.c
  endif
 endif
endif

svmap.date svmap.date0 : svmap.m \
	assoc_list.int3 \
	builtin.int3 \
	list.int3 \
	map.int3 \
	private_builtin.int3 \
	term.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

svmap.date0 : svmap.m \
	assoc_list.int3 \
	builtin.int3 \
	list.int3 \
	map.int3 \
	private_builtin.int3 \
	term.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



svmap.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



svmap.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


svmap.int0 : svmap.date0
	@:
svmap.int : svmap.date
	@:
svmap.int2 : svmap.date
	@:
svmap.int3 : svmap.date3
	@:
svmap.opt : svmap.optdate
	@:
svmap.trans_opt : svmap.trans_opt_date
	@:
