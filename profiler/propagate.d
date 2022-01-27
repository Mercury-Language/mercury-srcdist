

propagate.optdate propagate.trans_opt_date propagate.err propagate.c_date propagate.s_date propagate.pic_s_date propagate.il_date propagate.java_date : propagate.m \
	assoc_list.int \
	builtin.int \
	digraph.int \
	float.int \
	int.int \
	io.int \
	list.int \
	map.int \
	multi_map.int \
	pair.int \
	private_builtin.int \
	prof_info.int \
	require.int \
	sparse_bitset.int \
	string.int \
	array.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	maybe.int2 \
	ops.int2 \
	pretty_printer.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

propagate.pic_o propagate.$O : \
	array.mih \
	assoc_list.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
	char.mih \
	construct.mih \
	deconstruct.mih \
	digraph.mih \
	enum.mih \
	float.mih \
	int.mih \
	io.mih \
	list.mih \
	map.mih \
	maybe.mih \
	multi_map.mih \
	ops.mih \
	pair.mih \
	pretty_printer.mih \
	private_builtin.mih \
	prof_info.mih \
	random.mih \
	require.mih \
	rtti_implementation.mih \
	set.mih \
	set_ordlist.mih \
	sparse_bitset.mih \
	stream.mih \
	string.mih \
	term.mih \
	time.mih \
	tree234.mih \
	type_desc.mih \
	univ.mih

propagate.mh propagate.mih : propagate.c


ifeq ($(findstring il,$(GRADE)),il)
propagate.module_dep : propagate.il
else
 ifeq ($(findstring java,$(GRADE)),java)
propagate.module_dep : jmercury/propagate.java
 else
propagate.module_dep : propagate.c
 endif
endif


propagate.date propagate.date0 : propagate.m \
	assoc_list.int3 \
	builtin.int3 \
	digraph.int3 \
	float.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	multi_map.int3 \
	pair.int3 \
	private_builtin.int3 \
	prof_info.int3 \
	require.int3 \
	sparse_bitset.int3 \
	string.int3 \
	array.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	maybe.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

propagate.date0 : propagate.m \
	assoc_list.int3 \
	builtin.int3 \
	digraph.int3 \
	float.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	multi_map.int3 \
	pair.int3 \
	private_builtin.int3 \
	prof_info.int3 \
	require.int3 \
	sparse_bitset.int3 \
	string.int3 \
	array.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	maybe.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



propagate.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh



propagate.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh


propagate.int0 : propagate.date0
	@:
propagate.int : propagate.date
	@:
propagate.int2 : propagate.date
	@:
propagate.int3 : propagate.date3
	@:
propagate.opt : propagate.optdate
	@:
propagate.trans_opt : propagate.trans_opt_date
	@:
