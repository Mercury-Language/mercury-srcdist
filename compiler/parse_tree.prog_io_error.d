

parse_tree.prog_io_error.optdate parse_tree.prog_io_error.trans_opt_date prog_io_error.err parse_tree.prog_io_error.c_date parse_tree.prog_io_error.java_date : prog_io_error.m \
	parse_tree.int0 \
	builtin.int \
	libs.int \
	list.int \
	mdbcomp.int \
	private_builtin.int \
	set.int \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	integer.int2 \
	io.int2 \
	map.int2 \
	maybe.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	rtti_implementation.int2 \
	set_ordlist.int2 \
	stream.int2 \
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

parse_tree.prog_io_error.pic_o parse_tree.prog_io_error.$O : \
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

parse_tree.prog_io_error.mh parse_tree.prog_io_error.mih : parse_tree.prog_io_error.c


ifeq ($(findstring java,$(GRADE)),java)
parse_tree.prog_io_error.module_dep : jmercury/parse_tree__prog_io_error.java
else
parse_tree.prog_io_error.module_dep : parse_tree.prog_io_error.c
endif


parse_tree.prog_io_error.date parse_tree.prog_io_error.date0 \
	parse_tree.date : prog_io_error.m \
	parse_tree.int0 \
	builtin.int3 \
	libs.int3 \
	list.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	set.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	integer.int3 \
	io.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

parse_tree.prog_io_error.date0 \
	parse_tree.date0 : prog_io_error.m \
	builtin.int3 \
	libs.int3 \
	list.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	set.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	integer.int3 \
	io.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



parse_tree.prog_io_error.$O :  \
	io.mh \
	string.mh \
	time.mh



parse_tree.prog_io_error.pic_o :  \
	io.mh \
	string.mh \
	time.mh


parse_tree.prog_io_error.int0 : parse_tree.prog_io_error.date0
	@:
parse_tree.prog_io_error.int : parse_tree.prog_io_error.date
	@:
parse_tree.prog_io_error.int2 : parse_tree.prog_io_error.date
	@:
parse_tree.prog_io_error.int3 : parse_tree.prog_io_error.date3
	@:
parse_tree.prog_io_error.opt : parse_tree.prog_io_error.optdate
	@:
parse_tree.prog_io_error.trans_opt : parse_tree.prog_io_error.trans_opt_date
	@:

parse_tree.prog_io_error.date0 : prog_io_error.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) parse_tree.prog_io_error
parse_tree.prog_io_error.date : prog_io_error.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) parse_tree.prog_io_error
parse_tree.prog_io_error.date3 : prog_io_error.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) parse_tree.prog_io_error
parse_tree.prog_io_error.optdate : prog_io_error.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) parse_tree.prog_io_error
parse_tree.prog_io_error.trans_opt_date : prog_io_error.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) parse_tree.prog_io_error
parse_tree.prog_io_error.c_date : prog_io_error.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) parse_tree.prog_io_error $(ERR_REDIRECT)
parse_tree.prog_io_error.java_date : prog_io_error.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only parse_tree.prog_io_error $(ERR_REDIRECT)
