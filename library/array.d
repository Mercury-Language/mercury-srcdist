array.trans_opt_date : \
	builtin.trans_opt \
	exception.trans_opt \
	int.trans_opt \
	list.trans_opt \
	maybe.trans_opt \
	pretty_printer.trans_opt \
	private_builtin.trans_opt \
	random.trans_opt \
	require.trans_opt \
	string.trans_opt \
	type_desc.trans_opt

array.optdate array.trans_opt_date array.err array.c_date array.s_date array.pic_s_date array.il_date array.java_date : array.m \
	builtin.int \
	exception.int \
	int.int \
	list.int \
	maybe.int \
	pretty_printer.int \
	private_builtin.int \
	random.int \
	require.int \
	string.int \
	type_desc.int \
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
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	stm_builtin.int2 \
	store.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	univ.int2

array.$O :  \
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

array.trans_opt_date array.err array.c_date array.s_date array.pic_s_date array.il_date array.java_date :  \
	array.opt \
	builtin.opt \
	exception.opt \
	int.opt \
	list.opt \
	maybe.opt \
	pretty_printer.opt \
	private_builtin.opt \
	random.opt \
	require.opt \
	string.opt \
	type_desc.opt

array.err array.c_date array.s_date array.pic_s_date array.il_date array.java_date :  \
	array.trans_opt \
	builtin.trans_opt \
	exception.trans_opt \
	int.trans_opt \
	list.trans_opt \
	maybe.trans_opt \
	pretty_printer.trans_opt \
	private_builtin.trans_opt \
	random.trans_opt \
	require.trans_opt \
	string.trans_opt \
	type_desc.trans_opt

array.mh array.mih : array.c


ifeq ($(findstring il,$(GRADE)),il)
array.module_dep : array.il
else
 ifeq ($(findstring java,$(GRADE)),java)
array.module_dep : jmercury/array.java
 else
array.module_dep : array.c
 endif
endif


array.date array.date0 : array.m \
	builtin.int3 \
	exception.int3 \
	int.int3 \
	list.int3 \
	maybe.int3 \
	pretty_printer.int3 \
	private_builtin.int3 \
	random.int3 \
	require.int3 \
	string.int3 \
	type_desc.int3 \
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
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stm_builtin.int3 \
	store.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	univ.int3

array.date0 : array.m \
	builtin.int3 \
	exception.int3 \
	int.int3 \
	list.int3 \
	maybe.int3 \
	pretty_printer.int3 \
	private_builtin.int3 \
	random.int3 \
	require.int3 \
	string.int3 \
	type_desc.int3 \
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
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stm_builtin.int3 \
	store.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	univ.int3



array.$O :  \
	store.mh \
	store.mh \
	stm_builtin.mh \
	stm_builtin.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	array.mh



array.pic_o :  \
	store.mh \
	store.mh \
	stm_builtin.mh \
	stm_builtin.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	array.mh


array.int0 : array.date0
	@:
array.int : array.date
	@:
array.int2 : array.date
	@:
array.int3 : array.date3
	@:
array.opt : array.optdate
	@:
array.trans_opt : array.trans_opt_date
	@:
