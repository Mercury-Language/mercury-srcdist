

parse_tree.prog_io_type_defn.optdate parse_tree.prog_io_type_defn.trans_opt_date prog_io_type_defn.err parse_tree.prog_io_type_defn.c_date parse_tree.prog_io_type_defn.s_date parse_tree.prog_io_type_defn.pic_s_date parse_tree.prog_io_type_defn.il_date parse_tree.prog_io_type_defn.java_date : prog_io_type_defn.m \
	parse_tree.int0 \
	bool.int \
	builtin.int \
	libs.int \
	list.int \
	maybe.int \
	mdbcomp.int \
	pair.int \
	private_builtin.int \
	require.int \
	set.int \
	string.int \
	term.int \
	unit.int \
	varset.int \
	libs.globals.int \
	mdbcomp.sym_name.int \
	parse_tree.error_util.int \
	parse_tree.mercury_to_mercury.int \
	parse_tree.prog_data.int \
	parse_tree.prog_io_mutable.int \
	parse_tree.prog_io_sym_name.int \
	parse_tree.prog_io_typeclass.int \
	parse_tree.prog_io_util.int \
	parse_tree.prog_item.int \
	parse_tree.prog_mode.int \
	parse_tree.prog_type.int \
	array.int2 \
	assoc_list.int2 \
	bimap.int2 \
	bitmap.int2 \
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
	map.int2 \
	ops.int2 \
	pretty_printer.int2 \
	random.int2 \
	recompilation.int2 \
	rtti_implementation.int2 \
	set_ordlist.int2 \
	sparse_bitset.int2 \
	stream.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2 \
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
	parse_tree.file_kind.int2 \
	parse_tree.set_of_var.int2 \
	parse_tree.status.int2 \
	mdbcomp.feedback.automatic_parallelism.int2

parse_tree.prog_io_type_defn.pic_o parse_tree.prog_io_type_defn.$O : \
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
	require.mih \
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
	parse_tree.mercury_to_mercury.mih \
	parse_tree.prog_data.mih \
	parse_tree.prog_io_mutable.mih \
	parse_tree.prog_io_sym_name.mih \
	parse_tree.prog_io_typeclass.mih \
	parse_tree.prog_io_util.mih \
	parse_tree.prog_item.mih \
	parse_tree.prog_mode.mih \
	parse_tree.prog_type.mih \
	parse_tree.set_of_var.mih \
	parse_tree.status.mih \
	mdbcomp.feedback.automatic_parallelism.mih

parse_tree.prog_io_type_defn.mh parse_tree.prog_io_type_defn.mih : parse_tree.prog_io_type_defn.c


ifeq ($(findstring il,$(GRADE)),il)
parse_tree.prog_io_type_defn.module_dep : parse_tree.prog_io_type_defn.il
else
 ifeq ($(findstring java,$(GRADE)),java)
parse_tree.prog_io_type_defn.module_dep : jmercury/parse_tree__prog_io_type_defn.java
 else
parse_tree.prog_io_type_defn.module_dep : parse_tree.prog_io_type_defn.c
 endif
endif


parse_tree.prog_io_type_defn.date parse_tree.prog_io_type_defn.date0 \
	parse_tree.date : prog_io_type_defn.m \
	parse_tree.int0 \
	bool.int3 \
	builtin.int3 \
	libs.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	term.int3 \
	unit.int3 \
	varset.int3 \
	libs.globals.int3 \
	mdbcomp.sym_name.int3 \
	parse_tree.error_util.int3 \
	parse_tree.mercury_to_mercury.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_io_mutable.int3 \
	parse_tree.prog_io_sym_name.int3 \
	parse_tree.prog_io_typeclass.int3 \
	parse_tree.prog_io_util.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.prog_mode.int3 \
	parse_tree.prog_type.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
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
	map.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	recompilation.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stream.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3 \
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
	parse_tree.file_kind.int3 \
	parse_tree.set_of_var.int3 \
	parse_tree.status.int3 \
	mdbcomp.feedback.automatic_parallelism.int3

parse_tree.prog_io_type_defn.date0 \
	parse_tree.date0 : prog_io_type_defn.m \
	bool.int3 \
	builtin.int3 \
	libs.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	term.int3 \
	unit.int3 \
	varset.int3 \
	libs.globals.int3 \
	mdbcomp.sym_name.int3 \
	parse_tree.error_util.int3 \
	parse_tree.mercury_to_mercury.int3 \
	parse_tree.prog_data.int3 \
	parse_tree.prog_io_mutable.int3 \
	parse_tree.prog_io_sym_name.int3 \
	parse_tree.prog_io_typeclass.int3 \
	parse_tree.prog_io_util.int3 \
	parse_tree.prog_item.int3 \
	parse_tree.prog_mode.int3 \
	parse_tree.prog_type.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
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
	map.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	recompilation.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stream.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3 \
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
	parse_tree.file_kind.int3 \
	parse_tree.set_of_var.int3 \
	parse_tree.status.int3 \
	mdbcomp.feedback.automatic_parallelism.int3



parse_tree.prog_io_type_defn.$O :  \
	io.mh \
	io.mh \
	time.mh \
	string.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh



parse_tree.prog_io_type_defn.pic_o :  \
	io.mh \
	io.mh \
	time.mh \
	string.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh


parse_tree.prog_io_type_defn.int0 : parse_tree.prog_io_type_defn.date0
	@:
parse_tree.prog_io_type_defn.int : parse_tree.prog_io_type_defn.date
	@:
parse_tree.prog_io_type_defn.int2 : parse_tree.prog_io_type_defn.date
	@:
parse_tree.prog_io_type_defn.int3 : parse_tree.prog_io_type_defn.date3
	@:
parse_tree.prog_io_type_defn.opt : parse_tree.prog_io_type_defn.optdate
	@:
parse_tree.prog_io_type_defn.trans_opt : parse_tree.prog_io_type_defn.trans_opt_date
	@:

parse_tree.prog_io_type_defn.date0 : prog_io_type_defn.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) parse_tree.prog_io_type_defn
parse_tree.prog_io_type_defn.date : prog_io_type_defn.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) parse_tree.prog_io_type_defn
parse_tree.prog_io_type_defn.date3 : prog_io_type_defn.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) parse_tree.prog_io_type_defn
parse_tree.prog_io_type_defn.optdate : prog_io_type_defn.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) parse_tree.prog_io_type_defn
parse_tree.prog_io_type_defn.trans_opt_date : prog_io_type_defn.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) parse_tree.prog_io_type_defn
parse_tree.prog_io_type_defn.c_date : prog_io_type_defn.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) parse_tree.prog_io_type_defn $(ERR_REDIRECT)
parse_tree.prog_io_type_defn.il_date : prog_io_type_defn.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only parse_tree.prog_io_type_defn $(ERR_REDIRECT)
parse_tree.prog_io_type_defn.java_date : prog_io_type_defn.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only parse_tree.prog_io_type_defn $(ERR_REDIRECT)
