

measurement_units.optdate measurement_units.trans_opt_date measurement_units.err measurement_units.c_date measurement_units.s_date measurement_units.pic_s_date measurement_units.il_date measurement_units.java_date : measurement_units.m \
	builtin.int \
	char.int \
	exception.int \
	float.int \
	int.int \
	list.int \
	math.int \
	private_builtin.int \
	require.int \
	string.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
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
	stm_builtin.int2 \
	store.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

ifeq ($(TARGET_ASM),yes)
measurement_units.mh measurement_units.mih : measurement_units.s
else
measurement_units.mh measurement_units.mih : measurement_units.c
endif

ifeq ($(TARGET_ASM),yes)
measurement_units.module_dep : measurement_units.s
else
 ifeq ($(findstring il,$(GRADE)),il)
measurement_units.module_dep : measurement_units.il
  ifeq ($(findstring java,$(GRADE)),java)
measurement_units.module_dep : jmercury/measurement_units.java
  else
measurement_units.module_dep : measurement_units.c
  endif
 endif
endif

measurement_units.date measurement_units.date0 : measurement_units.m \
	builtin.int3 \
	char.int3 \
	exception.int3 \
	float.int3 \
	int.int3 \
	list.int3 \
	math.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
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
	stm_builtin.int3 \
	store.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

measurement_units.date0 : measurement_units.m \
	builtin.int3 \
	char.int3 \
	exception.int3 \
	float.int3 \
	int.int3 \
	list.int3 \
	math.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
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
	stm_builtin.int3 \
	store.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



measurement_units.$O :  \
	stm_builtin.mh \
	stm_builtin.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	array.mh \
	array.mh



measurement_units.pic_o :  \
	stm_builtin.mh \
	stm_builtin.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	array.mh \
	array.mh


measurement_units.int0 : measurement_units.date0
	@:
measurement_units.int : measurement_units.date
	@:
measurement_units.int2 : measurement_units.date
	@:
measurement_units.int3 : measurement_units.date3
	@:
measurement_units.opt : measurement_units.optdate
	@:
measurement_units.trans_opt : measurement_units.trans_opt_date
	@:
