svarray.trans_opt_date : \
	array.trans_opt \
	builtin.trans_opt \
	private_builtin.trans_opt

svarray.optdate svarray.trans_opt_date svarray.err svarray.c_date svarray.s_date svarray.pic_s_date svarray.il_date svarray.java_date : svarray.m \
	array.int \
	builtin.int \
	private_builtin.int \
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
	random.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

svarray.$O :  \
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

svarray.trans_opt_date svarray.err svarray.c_date svarray.s_date svarray.pic_s_date svarray.il_date svarray.java_date :  \
	svarray.opt \
	array.opt \
	builtin.opt \
	private_builtin.opt

svarray.err svarray.c_date svarray.s_date svarray.pic_s_date svarray.il_date svarray.java_date :  \
	svarray.trans_opt \
	array.trans_opt \
	builtin.trans_opt \
	private_builtin.trans_opt

ifeq ($(TARGET_ASM),yes)
svarray.mh svarray.mih : svarray.s
else
svarray.mh svarray.mih : svarray.c
endif

ifeq ($(TARGET_ASM),yes)
svarray.module_dep : svarray.s
else
 ifeq ($(findstring il,$(GRADE)),il)
svarray.module_dep : svarray.il
  ifeq ($(findstring java,$(GRADE)),java)
svarray.module_dep : svarray.java
  else
svarray.module_dep : svarray.c
  endif
 endif
endif

svarray.date svarray.date0 : svarray.m \
	array.int3 \
	builtin.int3 \
	private_builtin.int3 \
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
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

svarray.date0 : svarray.m \
	array.int3 \
	builtin.int3 \
	private_builtin.int3 \
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
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



svarray.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	array.mh \
	array.mh



svarray.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	array.mh \
	array.mh


svarray.int0 : svarray.date0
	@:
svarray.int : svarray.date
	@:
svarray.int2 : svarray.date
	@:
svarray.int3 : svarray.date3
	@:
svarray.opt : svarray.optdate
	@:
svarray.trans_opt : svarray.trans_opt_date
	@:
