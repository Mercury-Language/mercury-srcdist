

mdb.util.optdate mdb.util.trans_opt_date util.err mdb.util.c_date mdb.util.java_date : util.m \
	mdb.int0 \
	bool.int \
	builtin.int \
	io.int \
	list.int \
	mdbcomp.int \
	private_builtin.int \
	require.int \
	mdbcomp.prim_data.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
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
	univ.int2 \
	mdbcomp.sym_name.int2

mdb.util.pic_o mdb.util.$O : \
	array.mih \
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
	mdbcomp.prim_data.mih \
	mdbcomp.sym_name.mih

mdb.util.mh mdb.util.mih : mdb.util.c


ifeq ($(findstring java,$(GRADE)),java)
mdb.util.module_dep : jmercury/mdb__util.java
else
mdb.util.module_dep : mdb.util.c
endif


mdb.util.date mdb.util.date0 \
	mdb.date : util.m \
	mdb.int0 \
	bool.int3 \
	builtin.int3 \
	io.int3 \
	list.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	require.int3 \
	mdbcomp.prim_data.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
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
	univ.int3 \
	mdbcomp.sym_name.int3

mdb.util.date0 \
	mdb.date0 : util.m \
	bool.int3 \
	builtin.int3 \
	io.int3 \
	list.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	require.int3 \
	mdbcomp.prim_data.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
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
	univ.int3 \
	mdbcomp.sym_name.int3



mdb.util.$O :  \
	io.mh \
	mdb.mh \
	string.mh \
	time.mh \
	mdb.util.mh



mdb.util.pic_o :  \
	io.mh \
	mdb.mh \
	string.mh \
	time.mh \
	mdb.util.mh


mdb.util.int0 : mdb.util.date0
	@:
mdb.util.int : mdb.util.date
	@:
mdb.util.int2 : mdb.util.date
	@:
mdb.util.int3 : mdb.util.date3
	@:
mdb.util.opt : mdb.util.optdate
	@:
mdb.util.trans_opt : mdb.util.trans_opt_date
	@:

mdb.util.date0 : util.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) mdb.util
mdb.util.date : util.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) mdb.util
mdb.util.date3 : util.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) mdb.util
mdb.util.optdate : util.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) mdb.util
mdb.util.trans_opt_date : util.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) mdb.util
mdb.util.c_date : util.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) mdb.util $(ERR_REDIRECT)
mdb.util.java_date : util.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only mdb.util $(ERR_REDIRECT)
