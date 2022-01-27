

libs.dependency_graph.optdate libs.dependency_graph.trans_opt_date dependency_graph.err libs.dependency_graph.c_date libs.dependency_graph.java_date : dependency_graph.m \
	libs.int0 \
	builtin.int \
	digraph.int \
	list.int \
	private_builtin.int \
	set.int \
	array.int2 \
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
	random.int2 \
	rtti_implementation.int2 \
	set_ordlist.int2 \
	sparse_bitset.int2 \
	stream.int2 \
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

libs.dependency_graph.pic_o libs.dependency_graph.$O : \
	array.mih \
	assoc_list.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
	char.mih \
	construct.mih \
	deconstruct.mih \
	digraph.mih \
	enum.mih \
	integer.mih \
	io.mih \
	libs.mih \
	list.mih \
	map.mih \
	maybe.mih \
	ops.mih \
	pair.mih \
	pretty_printer.mih \
	private_builtin.mih \
	random.mih \
	rtti_implementation.mih \
	set.mih \
	set_ordlist.mih \
	sparse_bitset.mih \
	stream.mih \
	string.mih \
	term.mih \
	time.mih \
	tree234.mih \
	type_desc.mih \
	univ.mih

libs.dependency_graph.mh libs.dependency_graph.mih : libs.dependency_graph.c


ifeq ($(findstring java,$(GRADE)),java)
libs.dependency_graph.module_dep : jmercury/libs__dependency_graph.java
else
libs.dependency_graph.module_dep : libs.dependency_graph.c
endif


libs.dependency_graph.date libs.dependency_graph.date0 \
	libs.date : dependency_graph.m \
	libs.int0 \
	builtin.int3 \
	digraph.int3 \
	list.int3 \
	private_builtin.int3 \
	set.int3 \
	array.int3 \
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
	random.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

libs.dependency_graph.date0 \
	libs.date0 : dependency_graph.m \
	builtin.int3 \
	digraph.int3 \
	list.int3 \
	private_builtin.int3 \
	set.int3 \
	array.int3 \
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
	random.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



libs.dependency_graph.$O :  \
	io.mh \
	string.mh \
	time.mh



libs.dependency_graph.pic_o :  \
	io.mh \
	string.mh \
	time.mh


libs.dependency_graph.int0 : libs.dependency_graph.date0
	@:
libs.dependency_graph.int : libs.dependency_graph.date
	@:
libs.dependency_graph.int2 : libs.dependency_graph.date
	@:
libs.dependency_graph.int3 : libs.dependency_graph.date3
	@:
libs.dependency_graph.opt : libs.dependency_graph.optdate
	@:
libs.dependency_graph.trans_opt : libs.dependency_graph.trans_opt_date
	@:

libs.dependency_graph.date0 : dependency_graph.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) libs.dependency_graph
libs.dependency_graph.date : dependency_graph.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) libs.dependency_graph
libs.dependency_graph.date3 : dependency_graph.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) libs.dependency_graph
libs.dependency_graph.optdate : dependency_graph.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) libs.dependency_graph
libs.dependency_graph.trans_opt_date : dependency_graph.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) libs.dependency_graph
libs.dependency_graph.c_date : dependency_graph.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) libs.dependency_graph $(ERR_REDIRECT)
libs.dependency_graph.java_date : dependency_graph.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only libs.dependency_graph $(ERR_REDIRECT)
