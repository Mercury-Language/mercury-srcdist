

dense_bitset.optdate dense_bitset.trans_opt_date dense_bitset.err dense_bitset.c_date dense_bitset.s_date dense_bitset.pic_s_date dense_bitset.il_date dense_bitset.java_date : dense_bitset.m \
	array.int \
	builtin.int \
	int.int \
	list.int \
	private_builtin.int \
	require.int \
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
	random.int2 \
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

ifeq ($(TARGET_ASM),yes)
dense_bitset.mh dense_bitset.mih : dense_bitset.s
else
dense_bitset.mh dense_bitset.mih : dense_bitset.c
endif

ifeq ($(TARGET_ASM),yes)
dense_bitset.module_dep : dense_bitset.s
else
 ifeq ($(findstring il,$(GRADE)),il)
dense_bitset.module_dep : dense_bitset.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
dense_bitset.module_dep : jmercury/dense_bitset.java
  else
dense_bitset.module_dep : dense_bitset.c
  endif
 endif
endif

dense_bitset.date dense_bitset.date0 : dense_bitset.m \
	array.int3 \
	builtin.int3 \
	int.int3 \
	list.int3 \
	private_builtin.int3 \
	require.int3 \
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
	random.int3 \
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

dense_bitset.date0 : dense_bitset.m \
	array.int3 \
	builtin.int3 \
	int.int3 \
	list.int3 \
	private_builtin.int3 \
	require.int3 \
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
	random.int3 \
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



dense_bitset.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	array.mh \
	array.mh



dense_bitset.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	array.mh \
	array.mh


dense_bitset.int0 : dense_bitset.date0
	@:
dense_bitset.int : dense_bitset.date
	@:
dense_bitset.int2 : dense_bitset.date
	@:
dense_bitset.int3 : dense_bitset.date3
	@:
dense_bitset.opt : dense_bitset.optdate
	@:
dense_bitset.trans_opt : dense_bitset.trans_opt_date
	@:
