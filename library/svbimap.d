svbimap.trans_opt_date : \
	bimap.trans_opt \
	builtin.trans_opt \
	private_builtin.trans_opt

svbimap.optdate svbimap.trans_opt_date svbimap.err svbimap.c_date svbimap.s_date svbimap.pic_s_date svbimap.il_date svbimap.java_date : svbimap.m \
	bimap.int \
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
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

svbimap.$O :  \
	array.mh \
	assoc_list.mh \
	benchmarking.mh \
	bimap.mh \
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

svbimap.trans_opt_date svbimap.err svbimap.c_date svbimap.s_date svbimap.pic_s_date svbimap.il_date svbimap.java_date :  \
	svbimap.opt \
	bimap.opt \
	builtin.opt \
	private_builtin.opt

svbimap.err svbimap.c_date svbimap.s_date svbimap.pic_s_date svbimap.il_date svbimap.java_date :  \
	svbimap.trans_opt \
	bimap.trans_opt \
	builtin.trans_opt \
	private_builtin.trans_opt

ifeq ($(TARGET_ASM),yes)
svbimap.mh svbimap.mih : svbimap.s
else
svbimap.mh svbimap.mih : svbimap.c
endif

ifeq ($(TARGET_ASM),yes)
svbimap.module_dep : svbimap.s
else
 ifeq ($(findstring il,$(GRADE)),il)
svbimap.module_dep : svbimap.il
  ifeq ($(findstring java,$(GRADE)),java)
svbimap.module_dep : svbimap.java
  else
svbimap.module_dep : svbimap.c
  endif
 endif
endif

svbimap.date svbimap.date0 : svbimap.m \
	bimap.int3 \
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
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

svbimap.date0 : svbimap.m \
	bimap.int3 \
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
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



svbimap.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



svbimap.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


svbimap.int0 : svbimap.date0
	@:
svbimap.int : svbimap.date
	@:
svbimap.int2 : svbimap.date
	@:
svbimap.int3 : svbimap.date3
	@:
svbimap.opt : svbimap.optdate
	@:
svbimap.trans_opt : svbimap.trans_opt_date
	@:
