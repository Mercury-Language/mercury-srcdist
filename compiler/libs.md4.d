

libs.md4.optdate libs.md4.trans_opt_date md4.err libs.md4.c_date libs.md4.s_date libs.md4.pic_s_date libs.md4.il_date libs.md4.java_date : md4.m \
	libs.int0 \
	builtin.int \
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
	list.int2 \
	map.int2 \
	maybe.int2 \
	ops.int2 \
	pair.int2 \
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

libs.md4.mh libs.md4.mih : libs.md4.c


ifeq ($(findstring il,$(GRADE)),il)
libs.md4.module_dep : libs.md4.il
else
 ifeq ($(findstring java,$(GRADE)),java)
libs.md4.module_dep : jmercury/libs__md4.java
 else
libs.md4.module_dep : libs.md4.c
 endif
endif


libs.md4.date libs.md4.date0 \
	libs.date : md4.m \
	libs.int0 \
	builtin.int3 \
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
	list.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
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

libs.md4.date0 \
	libs.date0 : md4.m \
	builtin.int3 \
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
	list.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
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



libs.md4.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	libs.md4.mh



libs.md4.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	libs.md4.mh


libs.md4.int0 : libs.md4.date0
	@:
libs.md4.int : libs.md4.date
	@:
libs.md4.int2 : libs.md4.date
	@:
libs.md4.int3 : libs.md4.date3
	@:
libs.md4.opt : libs.md4.optdate
	@:
libs.md4.trans_opt : libs.md4.trans_opt_date
	@:

libs.md4.date0 : md4.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) libs.md4
libs.md4.date : md4.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) libs.md4
libs.md4.date3 : md4.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) libs.md4
libs.md4.optdate : md4.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) libs.md4
libs.md4.trans_opt_date : md4.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) libs.md4
libs.md4.c_date : md4.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) libs.md4 $(ERR_REDIRECT)
libs.md4.il_date : md4.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only libs.md4 $(ERR_REDIRECT)
libs.md4.java_date : md4.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only libs.md4 $(ERR_REDIRECT)
