

mdb.browse.optdate mdb.browse.trans_opt_date browse.err mdb.browse.c_date mdb.browse.s_date mdb.browse.pic_s_date mdb.browse.il_date mdb.browse.java_date : browse.m \
	mdb.int0 \
	bool.int \
	builtin.int \
	char.int \
	deconstruct.int \
	getopt.int \
	int.int \
	io.int \
	list.int \
	map.int \
	maybe.int \
	mdbcomp.int \
	pair.int \
	pretty_printer.int \
	private_builtin.int \
	require.int \
	stream.int \
	string.int \
	term_io.int \
	term_to_xml.int \
	type_desc.int \
	univ.int \
	mdb.browser_info.int \
	mdb.browser_term.int \
	mdb.frame.int \
	mdb.parse.int \
	mdb.sized_pretty.int \
	stream.string_writer.int \
	array.int2 \
	assoc_list.int2 \
	bimap.int2 \
	bitmap.int2 \
	construct.int2 \
	enum.int2 \
	ops.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	unit.int2 \
	varset.int2 \
	mdb.term_rep.int2 \
	mdbcomp.goal_path.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.sym_name.int2 \
	mdbcomp.trace_counts.int2

mdb.browse.pic_o mdb.browse.$O : \
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
	getopt.mih \
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
	require.mih \
	rtti_implementation.mih \
	set.mih \
	set_ordlist.mih \
	stream.mih \
	string.mih \
	term.mih \
	term_io.mih \
	term_to_xml.mih \
	time.mih \
	tree234.mih \
	type_desc.mih \
	unit.mih \
	univ.mih \
	varset.mih \
	mdb.browser_info.mih \
	mdb.browser_term.mih \
	mdb.frame.mih \
	mdb.parse.mih \
	mdb.sized_pretty.mih \
	mdb.term_rep.mih \
	mdbcomp.goal_path.mih \
	mdbcomp.prim_data.mih \
	mdbcomp.program_representation.mih \
	mdbcomp.rtti_access.mih \
	mdbcomp.sym_name.mih \
	mdbcomp.trace_counts.mih \
	stream.string_writer.mih

mdb.browse.mh mdb.browse.mih : mdb.browse.c


ifeq ($(findstring il,$(GRADE)),il)
mdb.browse.module_dep : mdb.browse.il
else
 ifeq ($(findstring java,$(GRADE)),java)
mdb.browse.module_dep : jmercury/mdb__browse.java
 else
mdb.browse.module_dep : mdb.browse.c
 endif
endif


mdb.browse.date mdb.browse.date0 \
	mdb.date : browse.m \
	mdb.int0 \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	deconstruct.int3 \
	getopt.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	pair.int3 \
	pretty_printer.int3 \
	private_builtin.int3 \
	require.int3 \
	stream.int3 \
	string.int3 \
	term_io.int3 \
	term_to_xml.int3 \
	type_desc.int3 \
	univ.int3 \
	mdb.browser_info.int3 \
	mdb.browser_term.int3 \
	mdb.frame.int3 \
	mdb.parse.int3 \
	mdb.sized_pretty.int3 \
	stream.string_writer.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	construct.int3 \
	enum.int3 \
	ops.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	unit.int3 \
	varset.int3 \
	mdb.term_rep.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.sym_name.int3 \
	mdbcomp.trace_counts.int3

mdb.browse.date0 \
	mdb.date0 : browse.m \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	deconstruct.int3 \
	getopt.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	pair.int3 \
	pretty_printer.int3 \
	private_builtin.int3 \
	require.int3 \
	stream.int3 \
	string.int3 \
	term_io.int3 \
	term_to_xml.int3 \
	type_desc.int3 \
	univ.int3 \
	mdb.browser_info.int3 \
	mdb.browser_term.int3 \
	mdb.frame.int3 \
	mdb.parse.int3 \
	mdb.sized_pretty.int3 \
	stream.string_writer.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	construct.int3 \
	enum.int3 \
	ops.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	unit.int3 \
	varset.int3 \
	mdb.term_rep.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.sym_name.int3 \
	mdbcomp.trace_counts.int3



mdb.browse.$O :  \
	array.mh \
	array.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	mdb.mh \
	mdb.browse.mh



mdb.browse.pic_o :  \
	array.mh \
	array.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	mdb.mh \
	mdb.browse.mh


mdb.browse.int0 : mdb.browse.date0
	@:
mdb.browse.int : mdb.browse.date
	@:
mdb.browse.int2 : mdb.browse.date
	@:
mdb.browse.int3 : mdb.browse.date3
	@:
mdb.browse.opt : mdb.browse.optdate
	@:
mdb.browse.trans_opt : mdb.browse.trans_opt_date
	@:

mdb.browse.date0 : browse.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) mdb.browse
mdb.browse.date : browse.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) mdb.browse
mdb.browse.date3 : browse.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) mdb.browse
mdb.browse.optdate : browse.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) mdb.browse
mdb.browse.trans_opt_date : browse.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) mdb.browse
mdb.browse.c_date : browse.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) mdb.browse $(ERR_REDIRECT)
mdb.browse.il_date : browse.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only mdb.browse $(ERR_REDIRECT)
mdb.browse.java_date : browse.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only mdb.browse $(ERR_REDIRECT)
