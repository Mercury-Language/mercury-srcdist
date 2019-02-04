svmulti_map.trans_opt_date : \
	builtin.trans_opt \
	list.trans_opt \
	multi_map.trans_opt \
	private_builtin.trans_opt

svmulti_map.optdate svmulti_map.trans_opt_date svmulti_map.err svmulti_map.c_date svmulti_map.s_date svmulti_map.pic_s_date svmulti_map.il_date svmulti_map.java_date : svmulti_map.m \
	builtin.int \
	list.int \
	multi_map.int \
	private_builtin.int \
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

svmulti_map.$O :  \
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
	multi_map.mh \
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

svmulti_map.trans_opt_date svmulti_map.err svmulti_map.c_date svmulti_map.s_date svmulti_map.pic_s_date svmulti_map.il_date svmulti_map.java_date :  \
	svmulti_map.opt \
	builtin.opt \
	list.opt \
	multi_map.opt \
	private_builtin.opt

svmulti_map.err svmulti_map.c_date svmulti_map.s_date svmulti_map.pic_s_date svmulti_map.il_date svmulti_map.java_date :  \
	svmulti_map.trans_opt \
	builtin.trans_opt \
	list.trans_opt \
	multi_map.trans_opt \
	private_builtin.trans_opt

ifeq ($(TARGET_ASM),yes)
svmulti_map.mh svmulti_map.mih : svmulti_map.s
else
svmulti_map.mh svmulti_map.mih : svmulti_map.c
endif

ifeq ($(TARGET_ASM),yes)
svmulti_map.module_dep : svmulti_map.s
else
 ifeq ($(findstring il,$(GRADE)),il)
svmulti_map.module_dep : svmulti_map.il
  ifeq ($(findstring java,$(GRADE)),java)
svmulti_map.module_dep : svmulti_map.java
  else
svmulti_map.module_dep : svmulti_map.c
  endif
 endif
endif

svmulti_map.date svmulti_map.date0 : svmulti_map.m \
	builtin.int3 \
	list.int3 \
	multi_map.int3 \
	private_builtin.int3 \
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

svmulti_map.date0 : svmulti_map.m \
	builtin.int3 \
	list.int3 \
	multi_map.int3 \
	private_builtin.int3 \
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



svmulti_map.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



svmulti_map.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


svmulti_map.int0 : svmulti_map.date0
	@:
svmulti_map.int : svmulti_map.date
	@:
svmulti_map.int2 : svmulti_map.date
	@:
svmulti_map.int3 : svmulti_map.date3
	@:
svmulti_map.opt : svmulti_map.optdate
	@:
svmulti_map.trans_opt : svmulti_map.trans_opt_date
	@:
