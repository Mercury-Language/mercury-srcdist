bimap.trans_opt_date : \
	assoc_list.trans_opt \
	builtin.trans_opt \
	list.trans_opt \
	map.trans_opt \
	maybe.trans_opt \
	pair.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt

bimap.optdate bimap.trans_opt_date bimap.err bimap.c_date bimap.s_date bimap.pic_s_date bimap.il_date bimap.java_date : bimap.m \
	assoc_list.int \
	builtin.int \
	list.int \
	map.int \
	maybe.int \
	pair.int \
	private_builtin.int \
	require.int \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	io.int2 \
	ops.int2 \
	pretty_printer.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

bimap.$O :  \
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

bimap.trans_opt_date bimap.err bimap.c_date bimap.s_date bimap.pic_s_date bimap.il_date bimap.java_date :  \
	bimap.opt \
	assoc_list.opt \
	builtin.opt \
	list.opt \
	map.opt \
	maybe.opt \
	pair.opt \
	private_builtin.opt \
	require.opt

bimap.err bimap.c_date bimap.s_date bimap.pic_s_date bimap.il_date bimap.java_date :  \
	bimap.trans_opt \
	assoc_list.trans_opt \
	builtin.trans_opt \
	list.trans_opt \
	map.trans_opt \
	maybe.trans_opt \
	pair.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt

bimap.mh bimap.mih : bimap.c


ifeq ($(findstring il,$(GRADE)),il)
bimap.module_dep : bimap.il
else
 ifeq ($(findstring java,$(GRADE)),java)
bimap.module_dep : jmercury/bimap.java
 else
bimap.module_dep : bimap.c
 endif
endif


bimap.date bimap.date0 : bimap.m \
	assoc_list.int3 \
	builtin.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	ops.int3 \
	pretty_printer.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

bimap.date0 : bimap.m \
	assoc_list.int3 \
	builtin.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	ops.int3 \
	pretty_printer.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



bimap.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh



bimap.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh


bimap.int0 : bimap.date0
	@:
bimap.int : bimap.date
	@:
bimap.int2 : bimap.date
	@:
bimap.int3 : bimap.date3
	@:
bimap.opt : bimap.optdate
	@:
bimap.trans_opt : bimap.trans_opt_date
	@:
