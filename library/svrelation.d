svrelation.trans_opt_date : \
	assoc_list.trans_opt \
	builtin.trans_opt \
	private_builtin.trans_opt \
	relation.trans_opt

svrelation.optdate svrelation.trans_opt_date svrelation.err svrelation.c_date svrelation.s_date svrelation.pic_s_date svrelation.il_date svrelation.java_date : svrelation.m \
	assoc_list.int \
	builtin.int \
	private_builtin.int \
	relation.int \
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
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	sparse_bitset.int2 \
	stream.int2 \
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

svrelation.$O :  \
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
	pretty_printer.mh \
	private_builtin.mh \
	queue.mh \
	random.mh \
	relation.mh \
	require.mh \
	rtti_implementation.mh \
	set.mh \
	set_ordlist.mh \
	set_tree234.mh \
	solutions.mh \
	sparse_bitset.mh \
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

svrelation.trans_opt_date svrelation.err svrelation.c_date svrelation.s_date svrelation.pic_s_date svrelation.il_date svrelation.java_date :  \
	svrelation.opt \
	assoc_list.opt \
	builtin.opt \
	private_builtin.opt \
	relation.opt

svrelation.err svrelation.c_date svrelation.s_date svrelation.pic_s_date svrelation.il_date svrelation.java_date :  \
	svrelation.trans_opt \
	assoc_list.trans_opt \
	builtin.trans_opt \
	private_builtin.trans_opt \
	relation.trans_opt

ifeq ($(TARGET_ASM),yes)
svrelation.mh svrelation.mih : svrelation.s
else
svrelation.mh svrelation.mih : svrelation.c
endif

ifeq ($(TARGET_ASM),yes)
svrelation.module_dep : svrelation.s
else
 ifeq ($(findstring il,$(GRADE)),il)
svrelation.module_dep : svrelation.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
svrelation.module_dep : jmercury/svrelation.java
  else
svrelation.module_dep : svrelation.c
  endif
 endif
endif

svrelation.date svrelation.date0 : svrelation.m \
	assoc_list.int3 \
	builtin.int3 \
	private_builtin.int3 \
	relation.int3 \
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
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

svrelation.date0 : svrelation.m \
	assoc_list.int3 \
	builtin.int3 \
	private_builtin.int3 \
	relation.int3 \
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
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



svrelation.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



svrelation.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


svrelation.int0 : svrelation.date0
	@:
svrelation.int : svrelation.date
	@:
svrelation.int2 : svrelation.date
	@:
svrelation.int3 : svrelation.date3
	@:
svrelation.opt : svrelation.optdate
	@:
svrelation.trans_opt : svrelation.trans_opt_date
	@:
