

backend_libs.bytecode_data.optdate backend_libs.bytecode_data.trans_opt_date bytecode_data.err backend_libs.bytecode_data.c_date backend_libs.bytecode_data.s_date backend_libs.bytecode_data.pic_s_date backend_libs.bytecode_data.il_date backend_libs.bytecode_data.java_date : bytecode_data.m \
	backend_libs.int0 \
	builtin.int \
	char.int \
	int.int \
	io.int \
	list.int \
	private_builtin.int \
	require.int \
	string.int \
	string.format.int \
	string.parse_util.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
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

backend_libs.bytecode_data.pic_o backend_libs.bytecode_data.$O : \
	array.mih \
	assoc_list.mih \
	backend_libs.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
	char.mih \
	construct.mih \
	deconstruct.mih \
	enum.mih \
	int.mih \
	io.mih \
	list.mih \
	map.mih \
	maybe.mih \
	ops.mih \
	pair.mih \
	pretty_printer.mih \
	private_builtin.mih \
	random.mih \
	require.mih \
	rtti_implementation.mih \
	set.mih \
	set_ordlist.mih \
	stream.mih \
	string.mih \
	term.mih \
	time.mih \
	tree234.mih \
	type_desc.mih \
	univ.mih \
	string.format.mih \
	string.parse_util.mih

backend_libs.bytecode_data.mh backend_libs.bytecode_data.mih : backend_libs.bytecode_data.c


ifeq ($(findstring il,$(GRADE)),il)
backend_libs.bytecode_data.module_dep : backend_libs.bytecode_data.il
else
 ifeq ($(findstring java,$(GRADE)),java)
backend_libs.bytecode_data.module_dep : jmercury/backend_libs__bytecode_data.java
 else
backend_libs.bytecode_data.module_dep : backend_libs.bytecode_data.c
 endif
endif


backend_libs.bytecode_data.date backend_libs.bytecode_data.date0 \
	backend_libs.date : bytecode_data.m \
	backend_libs.int0 \
	builtin.int3 \
	char.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	string.format.int3 \
	string.parse_util.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
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

backend_libs.bytecode_data.date0 \
	backend_libs.date0 : bytecode_data.m \
	builtin.int3 \
	char.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	string.format.int3 \
	string.parse_util.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
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



backend_libs.bytecode_data.$O :  \
	backend_libs.bytecode_data.mh \
	io.mh \
	io.mh \
	time.mh \
	string.mh \
	bitmap.mh \
	bitmap.mh \
	time.mh \
	time.mh \
	array.mh \
	array.mh



backend_libs.bytecode_data.pic_o :  \
	backend_libs.bytecode_data.mh \
	io.mh \
	io.mh \
	time.mh \
	string.mh \
	bitmap.mh \
	bitmap.mh \
	time.mh \
	time.mh \
	array.mh \
	array.mh


backend_libs.bytecode_data.int0 : backend_libs.bytecode_data.date0
	@:
backend_libs.bytecode_data.int : backend_libs.bytecode_data.date
	@:
backend_libs.bytecode_data.int2 : backend_libs.bytecode_data.date
	@:
backend_libs.bytecode_data.int3 : backend_libs.bytecode_data.date3
	@:
backend_libs.bytecode_data.opt : backend_libs.bytecode_data.optdate
	@:
backend_libs.bytecode_data.trans_opt : backend_libs.bytecode_data.trans_opt_date
	@:

backend_libs.bytecode_data.date0 : bytecode_data.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) backend_libs.bytecode_data
backend_libs.bytecode_data.date : bytecode_data.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) backend_libs.bytecode_data
backend_libs.bytecode_data.date3 : bytecode_data.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) backend_libs.bytecode_data
backend_libs.bytecode_data.optdate : bytecode_data.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) backend_libs.bytecode_data
backend_libs.bytecode_data.trans_opt_date : bytecode_data.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) backend_libs.bytecode_data
backend_libs.bytecode_data.c_date : bytecode_data.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) backend_libs.bytecode_data $(ERR_REDIRECT)
backend_libs.bytecode_data.il_date : bytecode_data.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only backend_libs.bytecode_data $(ERR_REDIRECT)
backend_libs.bytecode_data.java_date : bytecode_data.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only backend_libs.bytecode_data $(ERR_REDIRECT)
