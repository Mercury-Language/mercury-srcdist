

measurements.optdate measurements.trans_opt_date measurements.err measurements.c_date measurements.s_date measurements.pic_s_date measurements.il_date measurements.java_date : measurements.m \
	builtin.int \
	float.int \
	int.int \
	list.int \
	measurement_units.int \
	private_builtin.int \
	require.int \
	string.int \
	array.int2 \
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
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

ifeq ($(TARGET_ASM),yes)
measurements.mh measurements.mih : measurements.s
else
measurements.mh measurements.mih : measurements.c
endif

ifeq ($(TARGET_ASM),yes)
measurements.module_dep : measurements.s
else
 ifeq ($(findstring il,$(GRADE)),il)
measurements.module_dep : measurements.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
measurements.module_dep : jmercury/measurements.java
  else
measurements.module_dep : measurements.c
  endif
 endif
endif

measurements.date measurements.date0 : measurements.m \
	builtin.int3 \
	float.int3 \
	int.int3 \
	list.int3 \
	measurement_units.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	array.int3 \
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
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

measurements.date0 : measurements.m \
	builtin.int3 \
	float.int3 \
	int.int3 \
	list.int3 \
	measurement_units.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	array.int3 \
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
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



measurements.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



measurements.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


measurements.int0 : measurements.date0
	@:
measurements.int : measurements.date
	@:
measurements.int2 : measurements.date
	@:
measurements.int3 : measurements.date3
	@:
measurements.opt : measurements.optdate
	@:
measurements.trans_opt : measurements.trans_opt_date
	@:
