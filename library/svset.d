svset.trans_opt_date : \
	term.trans_opt

svset.optdate svset.trans_opt_date svset.err svset.c_date svset.s_date svset.pic_s_date svset.il_date svset.java_date : svset.m \
	builtin.int \
	list.int \
	private_builtin.int \
	set.int \
	term.int \
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
	rtti_implementation.int2 \
	set_ordlist.int2 \
	stream.int2 \
	string.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

svset.$O :  \
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

svset.trans_opt_date svset.err svset.c_date svset.s_date svset.pic_s_date svset.il_date svset.java_date :  \
	svset.opt \
	builtin.opt \
	list.opt \
	private_builtin.opt \
	set.opt \
	term.opt

svset.err svset.c_date svset.s_date svset.pic_s_date svset.il_date svset.java_date :  \
	svset.trans_opt \
	builtin.trans_opt \
	list.trans_opt \
	private_builtin.trans_opt \
	set.trans_opt \
	term.trans_opt

ifeq ($(TARGET_ASM),yes)
svset.mh svset.mih : svset.s
else
svset.mh svset.mih : svset.c
endif

ifeq ($(TARGET_ASM),yes)
svset.module_dep : svset.s
else
 ifeq ($(findstring il,$(GRADE)),il)
svset.module_dep : svset.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
svset.module_dep : jmercury/svset.java
  else
svset.module_dep : svset.c
  endif
 endif
endif

svset.date svset.date0 : svset.m \
	builtin.int3 \
	list.int3 \
	private_builtin.int3 \
	set.int3 \
	term.int3 \
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
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

svset.date0 : svset.m \
	builtin.int3 \
	list.int3 \
	private_builtin.int3 \
	set.int3 \
	term.int3 \
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
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



svset.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



svset.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


svset.int0 : svset.date0
	@:
svset.int : svset.date
	@:
svset.int2 : svset.date
	@:
svset.int3 : svset.date3
	@:
svset.opt : svset.optdate
	@:
svset.trans_opt : svset.trans_opt_date
	@:
