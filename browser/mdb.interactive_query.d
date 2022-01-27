

mdb.interactive_query.optdate mdb.interactive_query.trans_opt_date interactive_query.err mdb.interactive_query.c_date mdb.interactive_query.s_date mdb.interactive_query.pic_s_date mdb.interactive_query.il_date mdb.interactive_query.java_date : interactive_query.m \
	mdb.int0 \
	bool.int \
	builtin.int \
	io.int \
	list.int \
	maybe.int \
	mdbcomp.int \
	parser.int \
	private_builtin.int \
	string.int \
	term.int \
	term_io.int \
	varset.int \
	mdb.dl.int \
	mdb.name_mangle.int \
	mdb.util.int \
	string.format.int \
	string.parse_util.int \
	assoc_list.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	integer.int2 \
	lexer.int2 \
	map.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.sym_name.int2

mdb.interactive_query.pic_o mdb.interactive_query.$O : \
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
	lexer.mih \
	list.mih \
	map.mih \
	maybe.mih \
	mdb.mih \
	mdbcomp.mih \
	ops.mih \
	pair.mih \
	parser.mih \
	pretty_printer.mih \
	private_builtin.mih \
	rtti_implementation.mih \
	set.mih \
	set_ordlist.mih \
	stream.mih \
	string.mih \
	term.mih \
	term_io.mih \
	time.mih \
	tree234.mih \
	type_desc.mih \
	univ.mih \
	varset.mih \
	mdb.dl.mih \
	mdb.name_mangle.mih \
	mdb.util.mih \
	mdbcomp.prim_data.mih \
	mdbcomp.sym_name.mih \
	string.format.mih \
	string.parse_util.mih

mdb.interactive_query.mh mdb.interactive_query.mih : mdb.interactive_query.c


ifeq ($(findstring il,$(GRADE)),il)
mdb.interactive_query.module_dep : mdb.interactive_query.il
else
 ifeq ($(findstring java,$(GRADE)),java)
mdb.interactive_query.module_dep : jmercury/mdb__interactive_query.java
 else
mdb.interactive_query.module_dep : mdb.interactive_query.c
 endif
endif


mdb.interactive_query.date mdb.interactive_query.date0 \
	mdb.date : interactive_query.m \
	mdb.int0 \
	bool.int3 \
	builtin.int3 \
	io.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	parser.int3 \
	private_builtin.int3 \
	string.int3 \
	term.int3 \
	term_io.int3 \
	varset.int3 \
	mdb.dl.int3 \
	mdb.name_mangle.int3 \
	mdb.util.int3 \
	string.format.int3 \
	string.parse_util.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	integer.int3 \
	lexer.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.sym_name.int3

mdb.interactive_query.date0 \
	mdb.date0 : interactive_query.m \
	bool.int3 \
	builtin.int3 \
	io.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	parser.int3 \
	private_builtin.int3 \
	string.int3 \
	term.int3 \
	term_io.int3 \
	varset.int3 \
	mdb.dl.int3 \
	mdb.name_mangle.int3 \
	mdb.util.int3 \
	string.format.int3 \
	string.parse_util.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	integer.int3 \
	lexer.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.sym_name.int3



mdb.interactive_query.$O :  \
	mdb.interactive_query.mh \
	mdb.mh \
	io.mh \
	string.mh \
	time.mh



mdb.interactive_query.pic_o :  \
	mdb.interactive_query.mh \
	mdb.mh \
	io.mh \
	string.mh \
	time.mh


mdb.interactive_query.int0 : mdb.interactive_query.date0
	@:
mdb.interactive_query.int : mdb.interactive_query.date
	@:
mdb.interactive_query.int2 : mdb.interactive_query.date
	@:
mdb.interactive_query.int3 : mdb.interactive_query.date3
	@:
mdb.interactive_query.opt : mdb.interactive_query.optdate
	@:
mdb.interactive_query.trans_opt : mdb.interactive_query.trans_opt_date
	@:

mdb.interactive_query.date0 : interactive_query.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) mdb.interactive_query
mdb.interactive_query.date : interactive_query.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) mdb.interactive_query
mdb.interactive_query.date3 : interactive_query.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) mdb.interactive_query
mdb.interactive_query.optdate : interactive_query.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) mdb.interactive_query
mdb.interactive_query.trans_opt_date : interactive_query.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) mdb.interactive_query
mdb.interactive_query.c_date : interactive_query.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) mdb.interactive_query $(ERR_REDIRECT)
mdb.interactive_query.il_date : interactive_query.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only mdb.interactive_query $(ERR_REDIRECT)
mdb.interactive_query.java_date : interactive_query.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only mdb.interactive_query $(ERR_REDIRECT)
