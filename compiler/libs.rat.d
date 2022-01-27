

libs.rat.optdate libs.rat.trans_opt_date rat.err libs.rat.c_date libs.rat.s_date libs.rat.pic_s_date libs.rat.il_date libs.rat.java_date : rat.m \
	libs.int0 \
	builtin.int \
	int.int \
	io.int \
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
	list.int2 \
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

libs.rat.mh libs.rat.mih : libs.rat.c


ifeq ($(findstring il,$(GRADE)),il)
libs.rat.module_dep : libs.rat.il
else
 ifeq ($(findstring java,$(GRADE)),java)
libs.rat.module_dep : jmercury/libs__rat.java
 else
libs.rat.module_dep : libs.rat.c
 endif
endif


libs.rat.date libs.rat.date0 \
	libs.date : rat.m \
	libs.int0 \
	builtin.int3 \
	int.int3 \
	io.int3 \
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
	list.int3 \
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

libs.rat.date0 \
	libs.date0 : rat.m \
	builtin.int3 \
	int.int3 \
	io.int3 \
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
	list.int3 \
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



libs.rat.$O :  \
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



libs.rat.pic_o :  \
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


libs.rat.int0 : libs.rat.date0
	@:
libs.rat.int : libs.rat.date
	@:
libs.rat.int2 : libs.rat.date
	@:
libs.rat.int3 : libs.rat.date3
	@:
libs.rat.opt : libs.rat.optdate
	@:
libs.rat.trans_opt : libs.rat.trans_opt_date
	@:

libs.rat.date0 : rat.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) libs.rat
libs.rat.date : rat.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) libs.rat
libs.rat.date3 : rat.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) libs.rat
libs.rat.optdate : rat.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) libs.rat
libs.rat.trans_opt_date : rat.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) libs.rat
libs.rat.c_date : rat.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) libs.rat $(ERR_REDIRECT)
libs.rat.il_date : rat.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only libs.rat $(ERR_REDIRECT)
libs.rat.java_date : rat.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only libs.rat $(ERR_REDIRECT)
