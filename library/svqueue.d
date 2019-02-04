svqueue.trans_opt_date : \
	builtin.trans_opt \
	list.trans_opt \
	private_builtin.trans_opt \
	queue.trans_opt

svqueue.optdate svqueue.trans_opt_date svqueue.err svqueue.c_date svqueue.s_date svqueue.pic_s_date svqueue.il_date svqueue.java_date : svqueue.m \
	builtin.int \
	list.int \
	private_builtin.int \
	queue.int \
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
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

svqueue.$O :  \
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
	queue.mh \
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

svqueue.trans_opt_date svqueue.err svqueue.c_date svqueue.s_date svqueue.pic_s_date svqueue.il_date svqueue.java_date :  \
	svqueue.opt \
	builtin.opt \
	list.opt \
	private_builtin.opt \
	queue.opt

svqueue.err svqueue.c_date svqueue.s_date svqueue.pic_s_date svqueue.il_date svqueue.java_date :  \
	svqueue.trans_opt \
	builtin.trans_opt \
	list.trans_opt \
	private_builtin.trans_opt \
	queue.trans_opt

ifeq ($(TARGET_ASM),yes)
svqueue.mh svqueue.mih : svqueue.s
else
svqueue.mh svqueue.mih : svqueue.c
endif

ifeq ($(TARGET_ASM),yes)
svqueue.module_dep : svqueue.s
else
 ifeq ($(findstring il,$(GRADE)),il)
svqueue.module_dep : svqueue.il
  ifeq ($(findstring java,$(GRADE)),java)
svqueue.module_dep : svqueue.java
  else
svqueue.module_dep : svqueue.c
  endif
 endif
endif

svqueue.date svqueue.date0 : svqueue.m \
	builtin.int3 \
	list.int3 \
	private_builtin.int3 \
	queue.int3 \
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
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

svqueue.date0 : svqueue.m \
	builtin.int3 \
	list.int3 \
	private_builtin.int3 \
	queue.int3 \
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
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



svqueue.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



svqueue.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


svqueue.int0 : svqueue.date0
	@:
svqueue.int : svqueue.date
	@:
svqueue.int2 : svqueue.date
	@:
svqueue.int3 : svqueue.date3
	@:
svqueue.opt : svqueue.optdate
	@:
svqueue.trans_opt : svqueue.trans_opt_date
	@:
