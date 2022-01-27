

mdb.io_action.optdate mdb.io_action.trans_opt_date io_action.err mdb.io_action.c_date mdb.io_action.s_date mdb.io_action.pic_s_date mdb.io_action.il_date mdb.io_action.java_date : io_action.m \
	mdb.int0 \
	bool.int \
	builtin.int \
	io.int \
	list.int \
	maybe.int \
	mdbcomp.int \
	private_builtin.int \
	univ.int \
	mdb.browser_term.int \
	mdbcomp.prim_data.int \
	assoc_list.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	integer.int2 \
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
	type_desc.int2 \
	mdbcomp.sym_name.int2

mdb.io_action.pic_o mdb.io_action.$O : \
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
	mdb.browser_term.mih \
	mdbcomp.prim_data.mih \
	mdbcomp.sym_name.mih

mdb.io_action.mh mdb.io_action.mih : mdb.io_action.c


ifeq ($(findstring il,$(GRADE)),il)
mdb.io_action.module_dep : mdb.io_action.il
else
 ifeq ($(findstring java,$(GRADE)),java)
mdb.io_action.module_dep : jmercury/mdb__io_action.java
 else
mdb.io_action.module_dep : mdb.io_action.c
 endif
endif


mdb.io_action.date mdb.io_action.date0 \
	mdb.date : io_action.m \
	mdb.int0 \
	bool.int3 \
	builtin.int3 \
	io.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	univ.int3 \
	mdb.browser_term.int3 \
	mdbcomp.prim_data.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	integer.int3 \
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
	type_desc.int3 \
	mdbcomp.sym_name.int3

mdb.io_action.date0 \
	mdb.date0 : io_action.m \
	bool.int3 \
	builtin.int3 \
	io.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	univ.int3 \
	mdb.browser_term.int3 \
	mdbcomp.prim_data.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	integer.int3 \
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
	type_desc.int3 \
	mdbcomp.sym_name.int3



mdb.io_action.$O :  \
	mdb.io_action.mh \
	mdb.mh \
	io.mh \
	string.mh \
	time.mh



mdb.io_action.pic_o :  \
	mdb.io_action.mh \
	mdb.mh \
	io.mh \
	string.mh \
	time.mh


mdb.io_action.int0 : mdb.io_action.date0
	@:
mdb.io_action.int : mdb.io_action.date
	@:
mdb.io_action.int2 : mdb.io_action.date
	@:
mdb.io_action.int3 : mdb.io_action.date3
	@:
mdb.io_action.opt : mdb.io_action.optdate
	@:
mdb.io_action.trans_opt : mdb.io_action.trans_opt_date
	@:

mdb.io_action.date0 : io_action.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) mdb.io_action
mdb.io_action.date : io_action.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) mdb.io_action
mdb.io_action.date3 : io_action.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) mdb.io_action
mdb.io_action.optdate : io_action.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) mdb.io_action
mdb.io_action.trans_opt_date : io_action.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) mdb.io_action
mdb.io_action.c_date : io_action.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) mdb.io_action $(ERR_REDIRECT)
mdb.io_action.il_date : io_action.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only mdb.io_action $(ERR_REDIRECT)
mdb.io_action.java_date : io_action.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only mdb.io_action $(ERR_REDIRECT)
