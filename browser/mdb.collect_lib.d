

mdb.collect_lib.optdate mdb.collect_lib.trans_opt_date collect_lib.err mdb.collect_lib.c_date mdb.collect_lib.s_date mdb.collect_lib.pic_s_date mdb.collect_lib.il_date mdb.collect_lib.java_date : collect_lib.m \
	mdb.int0 \
	builtin.int \
	char.int \
	io.int \
	mdbcomp.int \
	private_builtin.int \
	mdb.dl.int \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	integer.int2 \
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
	univ.int2 \
	mdb.name_mangle.int2

mdb.collect_lib.pic_o mdb.collect_lib.$O : \
	assoc_list.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
	char.mih \
	construct.mih \
	deconstruct.mih \
	enum.mih \
	integer.mih \
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
	mdb.dl.mih \
	mdb.name_mangle.mih

mdb.collect_lib.mh mdb.collect_lib.mih : mdb.collect_lib.c


ifeq ($(findstring il,$(GRADE)),il)
mdb.collect_lib.module_dep : mdb.collect_lib.il
else
 ifeq ($(findstring java,$(GRADE)),java)
mdb.collect_lib.module_dep : jmercury/mdb__collect_lib.java
 else
mdb.collect_lib.module_dep : mdb.collect_lib.c
 endif
endif


mdb.collect_lib.date mdb.collect_lib.date0 \
	mdb.date : collect_lib.m \
	mdb.int0 \
	builtin.int3 \
	char.int3 \
	io.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	mdb.dl.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	integer.int3 \
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
	univ.int3 \
	mdb.name_mangle.int3

mdb.collect_lib.date0 \
	mdb.date0 : collect_lib.m \
	builtin.int3 \
	char.int3 \
	io.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	mdb.dl.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	integer.int3 \
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
	univ.int3 \
	mdb.name_mangle.int3



mdb.collect_lib.$O :  \
	io.mh \
	mdb.mh \
	string.mh \
	time.mh \
	mdb.collect_lib.mh



mdb.collect_lib.pic_o :  \
	io.mh \
	mdb.mh \
	string.mh \
	time.mh \
	mdb.collect_lib.mh


mdb.collect_lib.int0 : mdb.collect_lib.date0
	@:
mdb.collect_lib.int : mdb.collect_lib.date
	@:
mdb.collect_lib.int2 : mdb.collect_lib.date
	@:
mdb.collect_lib.int3 : mdb.collect_lib.date3
	@:
mdb.collect_lib.opt : mdb.collect_lib.optdate
	@:
mdb.collect_lib.trans_opt : mdb.collect_lib.trans_opt_date
	@:

mdb.collect_lib.date0 : collect_lib.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) mdb.collect_lib
mdb.collect_lib.date : collect_lib.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) mdb.collect_lib
mdb.collect_lib.date3 : collect_lib.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) mdb.collect_lib
mdb.collect_lib.optdate : collect_lib.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) mdb.collect_lib
mdb.collect_lib.trans_opt_date : collect_lib.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) mdb.collect_lib
mdb.collect_lib.c_date : collect_lib.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) mdb.collect_lib $(ERR_REDIRECT)
mdb.collect_lib.il_date : collect_lib.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only mdb.collect_lib $(ERR_REDIRECT)
mdb.collect_lib.java_date : collect_lib.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only mdb.collect_lib $(ERR_REDIRECT)
