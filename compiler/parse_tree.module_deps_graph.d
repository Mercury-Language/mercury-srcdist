

parse_tree.module_deps_graph.optdate parse_tree.module_deps_graph.trans_opt_date module_deps_graph.err parse_tree.module_deps_graph.c_date parse_tree.module_deps_graph.s_date parse_tree.module_deps_graph.pic_s_date parse_tree.module_deps_graph.il_date parse_tree.module_deps_graph.java_date : module_deps_graph.m \
	parse_tree.int0 \
	builtin.int \
	digraph.int \
	libs.int \
	mdbcomp.int \
	private_builtin.int \
	set.int \
	mdbcomp.sym_name.int \
	parse_tree.module_imports.int \
	array.int2 \
	assoc_list.int2 \
	bimap.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	check_hlds.int2 \
	construct.int2 \
	cord.int2 \
	deconstruct.int2 \
	enum.int2 \
	getopt_io.int2 \
	hlds.int2 \
	integer.int2 \
	io.int2 \
	list.int2 \
	map.int2 \
	maybe.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	random.int2 \
	recompilation.int2 \
	rtti_implementation.int2 \
	set_ordlist.int2 \
	sparse_bitset.int2 \
	stream.int2 \
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	unit.int2 \
	univ.int2 \
	varset.int2 \
	libs.file_util.int2 \
	libs.globals.int2 \
	libs.options.int2 \
	libs.rat.int2 \
	libs.timestamp.int2 \
	libs.trace_params.int2 \
	mdbcomp.feedback.int2 \
	mdbcomp.goal_path.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2 \
	parse_tree.error_util.int2 \
	parse_tree.file_kind.int2 \
	parse_tree.prog_data.int2 \
	parse_tree.prog_io_error.int2 \
	parse_tree.prog_item.int2 \
	parse_tree.set_of_var.int2 \
	parse_tree.status.int2 \
	mdbcomp.feedback.automatic_parallelism.int2

parse_tree.module_deps_graph.pic_o parse_tree.module_deps_graph.$O : \
	array.mih \
	assoc_list.mih \
	bimap.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
	char.mih \
	check_hlds.mih \
	construct.mih \
	cord.mih \
	deconstruct.mih \
	digraph.mih \
	enum.mih \
	getopt_io.mih \
	hlds.mih \
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
	random.mih \
	recompilation.mih \
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
	unit.mih \
	univ.mih \
	varset.mih \
	libs.file_util.mih \
	libs.globals.mih \
	libs.options.mih \
	libs.rat.mih \
	libs.timestamp.mih \
	libs.trace_params.mih \
	mdbcomp.feedback.mih \
	mdbcomp.goal_path.mih \
	mdbcomp.prim_data.mih \
	mdbcomp.program_representation.mih \
	mdbcomp.rtti_access.mih \
	mdbcomp.sym_name.mih \
	mdbcomp.trace_counts.mih \
	parse_tree.error_util.mih \
	parse_tree.file_kind.mih \
	parse_tree.module_imports.mih \
	parse_tree.prog_data.mih \
	parse_tree.prog_io_error.mih \
	parse_tree.prog_item.mih \
	parse_tree.set_of_var.mih \
	parse_tree.status.mih \
	mdbcomp.feedback.automatic_parallelism.mih

parse_tree.module_deps_graph.mh parse_tree.module_deps_graph.mih : parse_tree.module_deps_graph.c


ifeq ($(findstring il,$(GRADE)),il)
parse_tree.module_deps_graph.module_dep : parse_tree.module_deps_graph.il
else
 ifeq ($(findstring java,$(GRADE)),java)
parse_tree.module_deps_graph.module_dep : jmercury/parse_tree__module_deps_graph.java
 else
parse_tree.module_deps_graph.module_dep : parse_tree.module_deps_graph.c
 endif
endif


parse_tree.module_deps_graph.date parse_tree.module_deps_graph.date0 \
	parse_tree.date : module_deps_graph.m \
	parse_tree.int0 \
	builtin.int3 \
	digraph.int3 \
	libs.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	set.int3 \
	mdbcomp.sym_name.int3 \
	parse_tree.module_imports.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	check_hlds.int3 \
	construct.int3 \
	cord.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt_io.int3 \
	hlds.int3 \
	integer.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	recompilation.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	varset.int3 \
	libs.file_util.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	libs.rat.int3 \
	libs.timestamp.int3 \
	libs.trace_params.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	parse_tree.error_util.int3 \
	parse_tree.file_kind.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_io_error.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.set_of_var.int3 \
	parse_tree.status.int3 \
	mdbcomp.feedback.automatic_parallelism.int3

parse_tree.module_deps_graph.date0 \
	parse_tree.date0 : module_deps_graph.m \
	builtin.int3 \
	digraph.int3 \
	libs.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	set.int3 \
	mdbcomp.sym_name.int3 \
	parse_tree.module_imports.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	check_hlds.int3 \
	construct.int3 \
	cord.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt_io.int3 \
	hlds.int3 \
	integer.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	recompilation.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	varset.int3 \
	libs.file_util.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	libs.rat.int3 \
	libs.timestamp.int3 \
	libs.trace_params.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	parse_tree.error_util.int3 \
	parse_tree.file_kind.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_io_error.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.set_of_var.int3 \
	parse_tree.status.int3 \
	mdbcomp.feedback.automatic_parallelism.int3



parse_tree.module_deps_graph.$O :  \
	io.mh \
	string.mh \
	time.mh \
	mdbcomp.rtti_access.mh



parse_tree.module_deps_graph.pic_o :  \
	io.mh \
	string.mh \
	time.mh \
	mdbcomp.rtti_access.mh


parse_tree.module_deps_graph.int0 : parse_tree.module_deps_graph.date0
	@:
parse_tree.module_deps_graph.int : parse_tree.module_deps_graph.date
	@:
parse_tree.module_deps_graph.int2 : parse_tree.module_deps_graph.date
	@:
parse_tree.module_deps_graph.int3 : parse_tree.module_deps_graph.date3
	@:
parse_tree.module_deps_graph.opt : parse_tree.module_deps_graph.optdate
	@:
parse_tree.module_deps_graph.trans_opt : parse_tree.module_deps_graph.trans_opt_date
	@:

parse_tree.module_deps_graph.date0 : module_deps_graph.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) parse_tree.module_deps_graph
parse_tree.module_deps_graph.date : module_deps_graph.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) parse_tree.module_deps_graph
parse_tree.module_deps_graph.date3 : module_deps_graph.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) parse_tree.module_deps_graph
parse_tree.module_deps_graph.optdate : module_deps_graph.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) parse_tree.module_deps_graph
parse_tree.module_deps_graph.trans_opt_date : module_deps_graph.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) parse_tree.module_deps_graph
parse_tree.module_deps_graph.c_date : module_deps_graph.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) parse_tree.module_deps_graph $(ERR_REDIRECT)
parse_tree.module_deps_graph.il_date : module_deps_graph.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only parse_tree.module_deps_graph $(ERR_REDIRECT)
parse_tree.module_deps_graph.java_date : module_deps_graph.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only parse_tree.module_deps_graph $(ERR_REDIRECT)
