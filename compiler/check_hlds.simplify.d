

check_hlds.simplify.optdate check_hlds.simplify.trans_opt_date simplify.err check_hlds.simplify.c_date check_hlds.simplify.s_date check_hlds.simplify.pic_s_date check_hlds.simplify.il_date check_hlds.simplify.java_date : simplify.m check_hlds.simplify.int0 \
	check_hlds.int0 \
	builtin.int \
	private_builtin.int \
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

check_hlds.simplify.pic_o check_hlds.simplify.$O : \
	assoc_list.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
	char.mih \
	check_hlds.mih \
	construct.mih \
	deconstruct.mih \
	enum.mih \
	io.mih \
	list.mih \
	map.mih \
	maybe.mih \
	ops.mih \
	pair.mih \
	pretty_printer.mih \
	private_builtin.mih \
	rtti_implementation.mih \
	set.mih \
	set_ordlist.mih \
	stream.mih \
	string.mih \
	term.mih \
	time.mih \
	tree234.mih \
	type_desc.mih \
	univ.mih

check_hlds.simplify.mh check_hlds.simplify.mih : check_hlds.simplify.c


ifeq ($(findstring il,$(GRADE)),il)
check_hlds.simplify.module_dep : check_hlds.simplify.il
else
 ifeq ($(findstring java,$(GRADE)),java)
check_hlds.simplify.module_dep : jmercury/check_hlds__simplify.java
 else
check_hlds.simplify.module_dep : check_hlds.simplify.c
 endif
endif


check_hlds.simplify.date check_hlds.simplify.date0 \
	check_hlds.date : simplify.m \
	check_hlds.int0 \
	builtin.int3 \
	private_builtin.int3 \
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

check_hlds.simplify.date0 \
	check_hlds.date0 : simplify.m \
	builtin.int3 \
	private_builtin.int3 \
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



check_hlds.simplify.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh



check_hlds.simplify.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh


check_hlds.simplify.int0 : check_hlds.simplify.date0
	@:
check_hlds.simplify.int : check_hlds.simplify.date
	@:
check_hlds.simplify.int2 : check_hlds.simplify.date
	@:
check_hlds.simplify.int3 : check_hlds.simplify.date3
	@:
check_hlds.simplify.opt : check_hlds.simplify.optdate
	@:
check_hlds.simplify.trans_opt : check_hlds.simplify.trans_opt_date
	@:

check_hlds.simplify.date0 : simplify.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) check_hlds.simplify
check_hlds.simplify.date : simplify.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) check_hlds.simplify
check_hlds.simplify.date3 : simplify.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) check_hlds.simplify
check_hlds.simplify.optdate : simplify.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) check_hlds.simplify
check_hlds.simplify.trans_opt_date : simplify.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) check_hlds.simplify
check_hlds.simplify.c_date : simplify.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) check_hlds.simplify $(ERR_REDIRECT)
check_hlds.simplify.il_date : simplify.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only check_hlds.simplify $(ERR_REDIRECT)
check_hlds.simplify.java_date : simplify.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only check_hlds.simplify $(ERR_REDIRECT)
