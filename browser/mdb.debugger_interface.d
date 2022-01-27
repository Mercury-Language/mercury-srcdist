

mdb.debugger_interface.optdate mdb.debugger_interface.trans_opt_date debugger_interface.err mdb.debugger_interface.c_date mdb.debugger_interface.s_date mdb.debugger_interface.pic_s_date mdb.debugger_interface.il_date mdb.debugger_interface.java_date : debugger_interface.m \
	mdb.int0 \
	builtin.int \
	io.int \
	list.int \
	mdbcomp.int \
	private_builtin.int \
	require.int \
	univ.int \
	mdb.interactive_query.int \
	mdb.util.int \
	mdbcomp.goal_path.int \
	mdbcomp.prim_data.int \
	array.int2 \
	assoc_list.int2 \
	bimap.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	integer.int2 \
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
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	mdbcomp.sym_name.int2

mdb.debugger_interface.pic_o mdb.debugger_interface.$O : \
	array.mih \
	assoc_list.mih \
	bimap.mih \
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
	mdb.interactive_query.mih \
	mdb.util.mih \
	mdbcomp.goal_path.mih \
	mdbcomp.prim_data.mih \
	mdbcomp.sym_name.mih

mdb.debugger_interface.mh mdb.debugger_interface.mih : mdb.debugger_interface.c


ifeq ($(findstring il,$(GRADE)),il)
mdb.debugger_interface.module_dep : mdb.debugger_interface.il
else
 ifeq ($(findstring java,$(GRADE)),java)
mdb.debugger_interface.module_dep : jmercury/mdb__debugger_interface.java
 else
mdb.debugger_interface.module_dep : mdb.debugger_interface.c
 endif
endif


mdb.debugger_interface.date mdb.debugger_interface.date0 \
	mdb.date : debugger_interface.m \
	mdb.int0 \
	builtin.int3 \
	io.int3 \
	list.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	require.int3 \
	univ.int3 \
	mdb.interactive_query.int3 \
	mdb.util.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	integer.int3 \
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
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	mdbcomp.sym_name.int3

mdb.debugger_interface.date0 \
	mdb.date0 : debugger_interface.m \
	builtin.int3 \
	io.int3 \
	list.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	require.int3 \
	univ.int3 \
	mdb.interactive_query.int3 \
	mdb.util.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	integer.int3 \
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
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	mdbcomp.sym_name.int3



mdb.debugger_interface.$O :  \
	mdb.debugger_interface.mh \
	mdb.mh \
	io.mh \
	io.mh \
	time.mh \
	string.mh



mdb.debugger_interface.pic_o :  \
	mdb.debugger_interface.mh \
	mdb.mh \
	io.mh \
	io.mh \
	time.mh \
	string.mh


mdb.debugger_interface.int0 : mdb.debugger_interface.date0
	@:
mdb.debugger_interface.int : mdb.debugger_interface.date
	@:
mdb.debugger_interface.int2 : mdb.debugger_interface.date
	@:
mdb.debugger_interface.int3 : mdb.debugger_interface.date3
	@:
mdb.debugger_interface.opt : mdb.debugger_interface.optdate
	@:
mdb.debugger_interface.trans_opt : mdb.debugger_interface.trans_opt_date
	@:

mdb.debugger_interface.date0 : debugger_interface.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) mdb.debugger_interface
mdb.debugger_interface.date : debugger_interface.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) mdb.debugger_interface
mdb.debugger_interface.date3 : debugger_interface.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) mdb.debugger_interface
mdb.debugger_interface.optdate : debugger_interface.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) mdb.debugger_interface
mdb.debugger_interface.trans_opt_date : debugger_interface.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) mdb.debugger_interface
mdb.debugger_interface.c_date : debugger_interface.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) mdb.debugger_interface $(ERR_REDIRECT)
mdb.debugger_interface.il_date : debugger_interface.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only mdb.debugger_interface $(ERR_REDIRECT)
mdb.debugger_interface.java_date : debugger_interface.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only mdb.debugger_interface $(ERR_REDIRECT)
