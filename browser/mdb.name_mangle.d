

mdb.name_mangle.optdate mdb.name_mangle.trans_opt_date name_mangle.err mdb.name_mangle.c_date mdb.name_mangle.s_date mdb.name_mangle.pic_s_date mdb.name_mangle.il_date mdb.name_mangle.java_date : name_mangle.m \
	mdb.int0 \
	builtin.int \
	char.int \
	int.int \
	list.int \
	mdbcomp.int \
	private_builtin.int \
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
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

mdb.name_mangle.pic_o mdb.name_mangle.$O : \
	array.mih \
	assoc_list.mih \
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
	mdb.mih \
	mdbcomp.mih \
	ops.mih \
	pair.mih \
	pretty_printer.mih \
	private_builtin.mih \
	random.mih \
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

mdb.name_mangle.mh mdb.name_mangle.mih : mdb.name_mangle.c


ifeq ($(findstring il,$(GRADE)),il)
mdb.name_mangle.module_dep : mdb.name_mangle.il
else
 ifeq ($(findstring java,$(GRADE)),java)
mdb.name_mangle.module_dep : jmercury/mdb__name_mangle.java
 else
mdb.name_mangle.module_dep : mdb.name_mangle.c
 endif
endif


mdb.name_mangle.date mdb.name_mangle.date0 \
	mdb.date : name_mangle.m \
	mdb.int0 \
	builtin.int3 \
	char.int3 \
	int.int3 \
	list.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
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
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

mdb.name_mangle.date0 \
	mdb.date0 : name_mangle.m \
	builtin.int3 \
	char.int3 \
	int.int3 \
	list.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
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
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



mdb.name_mangle.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	mdb.mh \
	mdb.name_mangle.mh



mdb.name_mangle.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	mdb.mh \
	mdb.name_mangle.mh


mdb.name_mangle.int0 : mdb.name_mangle.date0
	@:
mdb.name_mangle.int : mdb.name_mangle.date
	@:
mdb.name_mangle.int2 : mdb.name_mangle.date
	@:
mdb.name_mangle.int3 : mdb.name_mangle.date3
	@:
mdb.name_mangle.opt : mdb.name_mangle.optdate
	@:
mdb.name_mangle.trans_opt : mdb.name_mangle.trans_opt_date
	@:

mdb.name_mangle.date0 : name_mangle.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) mdb.name_mangle
mdb.name_mangle.date : name_mangle.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) mdb.name_mangle
mdb.name_mangle.date3 : name_mangle.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) mdb.name_mangle
mdb.name_mangle.optdate : name_mangle.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) mdb.name_mangle
mdb.name_mangle.trans_opt_date : name_mangle.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) mdb.name_mangle
mdb.name_mangle.c_date : name_mangle.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) mdb.name_mangle $(ERR_REDIRECT)
mdb.name_mangle.il_date : name_mangle.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only mdb.name_mangle $(ERR_REDIRECT)
mdb.name_mangle.java_date : name_mangle.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only mdb.name_mangle $(ERR_REDIRECT)
