

mdb.cterm.optdate mdb.cterm.trans_opt_date cterm.err mdb.cterm.c_date mdb.cterm.s_date mdb.cterm.pic_s_date mdb.cterm.il_date mdb.cterm.java_date : cterm.m \
	mdb.int0 \
	bool.int \
	builtin.int \
	deconstruct.int \
	list.int \
	mdbcomp.int \
	private_builtin.int \
	univ.int \
	assoc_list.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	enum.int2 \
	integer.int2 \
	io.int2 \
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
	type_desc.int2

mdb.cterm.pic_o mdb.cterm.$O : \
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
	univ.mih

mdb.cterm.mh mdb.cterm.mih : mdb.cterm.c


ifeq ($(findstring il,$(GRADE)),il)
mdb.cterm.module_dep : mdb.cterm.il
else
 ifeq ($(findstring java,$(GRADE)),java)
mdb.cterm.module_dep : jmercury/mdb__cterm.java
 else
mdb.cterm.module_dep : mdb.cterm.c
 endif
endif


mdb.cterm.date mdb.cterm.date0 \
	mdb.date : cterm.m \
	mdb.int0 \
	bool.int3 \
	builtin.int3 \
	deconstruct.int3 \
	list.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	univ.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	enum.int3 \
	integer.int3 \
	io.int3 \
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
	type_desc.int3

mdb.cterm.date0 \
	mdb.date0 : cterm.m \
	bool.int3 \
	builtin.int3 \
	deconstruct.int3 \
	list.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	univ.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	enum.int3 \
	integer.int3 \
	io.int3 \
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
	type_desc.int3



mdb.cterm.$O :  \
	mdb.cterm.mh \
	mdb.mh \
	io.mh \
	io.mh \
	time.mh \
	string.mh \
	bitmap.mh \
	bitmap.mh \
	time.mh \
	time.mh



mdb.cterm.pic_o :  \
	mdb.cterm.mh \
	mdb.mh \
	io.mh \
	io.mh \
	time.mh \
	string.mh \
	bitmap.mh \
	bitmap.mh \
	time.mh \
	time.mh


mdb.cterm.int0 : mdb.cterm.date0
	@:
mdb.cterm.int : mdb.cterm.date
	@:
mdb.cterm.int2 : mdb.cterm.date
	@:
mdb.cterm.int3 : mdb.cterm.date3
	@:
mdb.cterm.opt : mdb.cterm.optdate
	@:
mdb.cterm.trans_opt : mdb.cterm.trans_opt_date
	@:

mdb.cterm.date0 : cterm.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) mdb.cterm
mdb.cterm.date : cterm.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) mdb.cterm
mdb.cterm.date3 : cterm.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) mdb.cterm
mdb.cterm.optdate : cterm.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) mdb.cterm
mdb.cterm.trans_opt_date : cterm.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) mdb.cterm
mdb.cterm.c_date : cterm.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) mdb.cterm $(ERR_REDIRECT)
mdb.cterm.il_date : cterm.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only mdb.cterm $(ERR_REDIRECT)
mdb.cterm.java_date : cterm.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only mdb.cterm $(ERR_REDIRECT)
