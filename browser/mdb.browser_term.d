

mdb.browser_term.optdate mdb.browser_term.trans_opt_date browser_term.err mdb.browser_term.c_date mdb.browser_term.s_date mdb.browser_term.pic_s_date mdb.browser_term.il_date mdb.browser_term.java_date : browser_term.m \
	mdb.int0 \
	bool.int \
	builtin.int \
	list.int \
	maybe.int \
	mdbcomp.int \
	private_builtin.int \
	univ.int \
	assoc_list.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	integer.int2 \
	io.int2 \
	map.int2 \
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

mdb.browser_term.pic_o mdb.browser_term.$O : \
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

mdb.browser_term.mh mdb.browser_term.mih : mdb.browser_term.c


ifeq ($(findstring il,$(GRADE)),il)
mdb.browser_term.module_dep : mdb.browser_term.il
else
 ifeq ($(findstring java,$(GRADE)),java)
mdb.browser_term.module_dep : jmercury/mdb__browser_term.java
 else
mdb.browser_term.module_dep : mdb.browser_term.c
 endif
endif


mdb.browser_term.date mdb.browser_term.date0 \
	mdb.date : browser_term.m \
	mdb.int0 \
	bool.int3 \
	builtin.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	univ.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	integer.int3 \
	io.int3 \
	map.int3 \
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

mdb.browser_term.date0 \
	mdb.date0 : browser_term.m \
	bool.int3 \
	builtin.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	univ.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	integer.int3 \
	io.int3 \
	map.int3 \
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



mdb.browser_term.$O :  \
	mdb.browser_term.mh \
	mdb.mh \
	io.mh \
	string.mh \
	time.mh



mdb.browser_term.pic_o :  \
	mdb.browser_term.mh \
	mdb.mh \
	io.mh \
	string.mh \
	time.mh


mdb.browser_term.int0 : mdb.browser_term.date0
	@:
mdb.browser_term.int : mdb.browser_term.date
	@:
mdb.browser_term.int2 : mdb.browser_term.date
	@:
mdb.browser_term.int3 : mdb.browser_term.date3
	@:
mdb.browser_term.opt : mdb.browser_term.optdate
	@:
mdb.browser_term.trans_opt : mdb.browser_term.trans_opt_date
	@:

mdb.browser_term.date0 : browser_term.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) mdb.browser_term
mdb.browser_term.date : browser_term.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) mdb.browser_term
mdb.browser_term.date3 : browser_term.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) mdb.browser_term
mdb.browser_term.optdate : browser_term.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) mdb.browser_term
mdb.browser_term.trans_opt_date : browser_term.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) mdb.browser_term
mdb.browser_term.c_date : browser_term.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) mdb.browser_term $(ERR_REDIRECT)
mdb.browser_term.il_date : browser_term.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only mdb.browser_term $(ERR_REDIRECT)
mdb.browser_term.java_date : browser_term.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only mdb.browser_term $(ERR_REDIRECT)
