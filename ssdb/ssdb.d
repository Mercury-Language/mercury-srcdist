

ssdb.optdate ssdb.trans_opt_date ssdb.err ssdb.c_date ssdb.s_date ssdb.pic_s_date ssdb.il_date ssdb.java_date : ssdb.m \
	assoc_list.int \
	bitmap.int \
	bool.int \
	builtin.int \
	char.int \
	dir.int \
	int.int \
	io.int \
	list.int \
	map.int \
	maybe.int \
	mdb.int \
	pair.int \
	private_builtin.int \
	require.int \
	string.int \
	univ.int \
	mdb.browse.int \
	mdb.browser_info.int \
	mdb.browser_term.int \
	mdb.listing.int \
	array.int2 \
	bimap.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	getopt.int2 \
	mdbcomp.int2 \
	ops.int2 \
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
	unit.int2 \
	mdb.parse.int2 \
	mdb.term_rep.int2 \
	mdbcomp.goal_path.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2

ssdb.mh ssdb.mih : ssdb.c


ifeq ($(findstring il,$(GRADE)),il)
ssdb.module_dep : ssdb.il
else
 ifeq ($(findstring java,$(GRADE)),java)
ssdb.module_dep : jmercury/ssdb.java
 else
ssdb.module_dep : ssdb.c
 endif
endif


ssdb.date ssdb.date0 : ssdb.m \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	dir.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdb.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	univ.int3 \
	mdb.browse.int3 \
	mdb.browser_info.int3 \
	mdb.browser_term.int3 \
	mdb.listing.int3 \
	array.int3 \
	bimap.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt.int3 \
	mdbcomp.int3 \
	ops.int3 \
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
	unit.int3 \
	mdb.parse.int3 \
	mdb.term_rep.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3

ssdb.date0 : ssdb.m \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	dir.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdb.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	univ.int3 \
	mdb.browse.int3 \
	mdb.browser_info.int3 \
	mdb.browser_term.int3 \
	mdb.listing.int3 \
	array.int3 \
	bimap.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt.int3 \
	mdbcomp.int3 \
	ops.int3 \
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
	unit.int3 \
	mdb.parse.int3 \
	mdb.term_rep.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3



ssdb.$O :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	mdb.listing.mh \
	mdb.listing.mh \
	dir.mh \
	dir.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	ssdb.mh



ssdb.pic_o :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	mdb.listing.mh \
	mdb.listing.mh \
	dir.mh \
	dir.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	ssdb.mh


ssdb.int0 : ssdb.date0
	@:
ssdb.int : ssdb.date
	@:
ssdb.int2 : ssdb.date
	@:
ssdb.int3 : ssdb.date3
	@:
ssdb.opt : ssdb.optdate
	@:
ssdb.trans_opt : ssdb.trans_opt_date
	@:
