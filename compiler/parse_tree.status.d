

parse_tree.status.optdate parse_tree.status.trans_opt_date status.err parse_tree.status.c_date parse_tree.status.s_date parse_tree.status.pic_s_date parse_tree.status.il_date parse_tree.status.java_date : status.m \
	parse_tree.int0 \
	bool.int \
	builtin.int \
	libs.int \
	maybe.int \
	mdbcomp.int \
	private_builtin.int \
	require.int \
	mdbcomp.sym_name.int \
	assoc_list.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	integer.int2 \
	io.int2 \
	list.int2 \
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
	univ.int2

parse_tree.status.pic_o parse_tree.status.$O : \
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
	libs.mih \
	list.mih \
	map.mih \
	maybe.mih \
	mdbcomp.mih \
	ops.mih \
	pair.mih \
	parse_tree.mih \
	pretty_printer.mih \
	private_builtin.mih \
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
	mdbcomp.sym_name.mih

parse_tree.status.mh parse_tree.status.mih : parse_tree.status.c


ifeq ($(findstring il,$(GRADE)),il)
parse_tree.status.module_dep : parse_tree.status.il
else
 ifeq ($(findstring java,$(GRADE)),java)
parse_tree.status.module_dep : jmercury/parse_tree__status.java
 else
parse_tree.status.module_dep : parse_tree.status.c
 endif
endif


parse_tree.status.date parse_tree.status.date0 \
	parse_tree.date : status.m \
	parse_tree.int0 \
	bool.int3 \
	builtin.int3 \
	libs.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	require.int3 \
	mdbcomp.sym_name.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	integer.int3 \
	io.int3 \
	list.int3 \
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
	univ.int3

parse_tree.status.date0 \
	parse_tree.date0 : status.m \
	bool.int3 \
	builtin.int3 \
	libs.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	require.int3 \
	mdbcomp.sym_name.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	integer.int3 \
	io.int3 \
	list.int3 \
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
	univ.int3



parse_tree.status.$O :  \
	io.mh \
	io.mh \
	time.mh \
	string.mh



parse_tree.status.pic_o :  \
	io.mh \
	io.mh \
	time.mh \
	string.mh


parse_tree.status.int0 : parse_tree.status.date0
	@:
parse_tree.status.int : parse_tree.status.date
	@:
parse_tree.status.int2 : parse_tree.status.date
	@:
parse_tree.status.int3 : parse_tree.status.date3
	@:
parse_tree.status.opt : parse_tree.status.optdate
	@:
parse_tree.status.trans_opt : parse_tree.status.trans_opt_date
	@:

parse_tree.status.date0 : status.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) parse_tree.status
parse_tree.status.date : status.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) parse_tree.status
parse_tree.status.date3 : status.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) parse_tree.status
parse_tree.status.optdate : status.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) parse_tree.status
parse_tree.status.trans_opt_date : status.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) parse_tree.status
parse_tree.status.c_date : status.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) parse_tree.status $(ERR_REDIRECT)
parse_tree.status.il_date : status.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only parse_tree.status $(ERR_REDIRECT)
parse_tree.status.java_date : status.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only parse_tree.status $(ERR_REDIRECT)
