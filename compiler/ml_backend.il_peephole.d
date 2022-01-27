

ml_backend.il_peephole.optdate ml_backend.il_peephole.trans_opt_date il_peephole.err ml_backend.il_peephole.c_date ml_backend.il_peephole.s_date ml_backend.il_peephole.pic_s_date ml_backend.il_peephole.il_date ml_backend.il_peephole.java_date : il_peephole.m \
	ml_backend.int0 \
	assoc_list.int \
	backend_libs.int \
	bool.int \
	builtin.int \
	check_hlds.int \
	hlds.int \
	int.int \
	libs.int \
	list.int \
	mdbcomp.int \
	pair.int \
	parse_tree.int \
	private_builtin.int \
	stream.int \
	string.int \
	ml_backend.ilasm.int \
	ml_backend.ilds.int \
	string.format.int \
	string.parse_util.int \
	array.int2 \
	bimap.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	getopt_io.int2 \
	integer.int2 \
	io.int2 \
	map.int2 \
	maybe.int2 \
	ops.int2 \
	pretty_printer.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	unit.int2 \
	univ.int2 \
	libs.globals.int2 \
	libs.options.int2 \
	libs.trace_params.int2 \
	mdbcomp.feedback.int2 \
	mdbcomp.goal_path.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.sym_name.int2 \
	mdbcomp.trace_counts.int2 \
	mdbcomp.feedback.automatic_parallelism.int2

ml_backend.il_peephole.pic_o ml_backend.il_peephole.$O : \
	array.mih \
	assoc_list.mih \
	backend_libs.mih \
	bimap.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
	char.mih \
	check_hlds.mih \
	construct.mih \
	deconstruct.mih \
	enum.mih \
	getopt_io.mih \
	hlds.mih \
	int.mih \
	integer.mih \
	io.mih \
	libs.mih \
	list.mih \
	map.mih \
	maybe.mih \
	mdbcomp.mih \
	ml_backend.mih \
	ops.mih \
	pair.mih \
	parse_tree.mih \
	pretty_printer.mih \
	private_builtin.mih \
	random.mih \
	rtti_implementation.mih \
	set.mih \
	set_ordlist.mih \
	stream.mih \
	string.mih \
	term.mih \
	time.mih \
	tree234.mih \
	type_desc.mih \
	unit.mih \
	univ.mih \
	libs.globals.mih \
	libs.options.mih \
	libs.trace_params.mih \
	mdbcomp.feedback.mih \
	mdbcomp.goal_path.mih \
	mdbcomp.prim_data.mih \
	mdbcomp.program_representation.mih \
	mdbcomp.rtti_access.mih \
	mdbcomp.sym_name.mih \
	mdbcomp.trace_counts.mih \
	ml_backend.ilasm.mih \
	ml_backend.ilds.mih \
	string.format.mih \
	string.parse_util.mih \
	mdbcomp.feedback.automatic_parallelism.mih

ml_backend.il_peephole.mh ml_backend.il_peephole.mih : ml_backend.il_peephole.c


ifeq ($(findstring il,$(GRADE)),il)
ml_backend.il_peephole.module_dep : ml_backend.il_peephole.il
else
 ifeq ($(findstring java,$(GRADE)),java)
ml_backend.il_peephole.module_dep : jmercury/ml_backend__il_peephole.java
 else
ml_backend.il_peephole.module_dep : ml_backend.il_peephole.c
 endif
endif


ml_backend.il_peephole.date ml_backend.il_peephole.date0 \
	ml_backend.date : il_peephole.m \
	ml_backend.int0 \
	assoc_list.int3 \
	backend_libs.int3 \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
	hlds.int3 \
	int.int3 \
	libs.int3 \
	list.int3 \
	mdbcomp.int3 \
	pair.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	stream.int3 \
	string.int3 \
	ml_backend.ilasm.int3 \
	ml_backend.ilds.int3 \
	string.format.int3 \
	string.parse_util.int3 \
	array.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt_io.int3 \
	integer.int3 \
	io.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	libs.trace_params.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.sym_name.int3 \
	mdbcomp.trace_counts.int3 \
	mdbcomp.feedback.automatic_parallelism.int3

ml_backend.il_peephole.date0 \
	ml_backend.date0 : il_peephole.m \
	assoc_list.int3 \
	backend_libs.int3 \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
	hlds.int3 \
	int.int3 \
	libs.int3 \
	list.int3 \
	mdbcomp.int3 \
	pair.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	stream.int3 \
	string.int3 \
	ml_backend.ilasm.int3 \
	ml_backend.ilds.int3 \
	string.format.int3 \
	string.parse_util.int3 \
	array.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt_io.int3 \
	integer.int3 \
	io.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	libs.globals.int3 \
	libs.options.int3 \
	libs.trace_params.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.sym_name.int3 \
	mdbcomp.trace_counts.int3 \
	mdbcomp.feedback.automatic_parallelism.int3



ml_backend.il_peephole.$O :  \
	io.mh \
	string.mh \
	time.mh \
	mdbcomp.rtti_access.mh



ml_backend.il_peephole.pic_o :  \
	io.mh \
	string.mh \
	time.mh \
	mdbcomp.rtti_access.mh


ml_backend.il_peephole.int0 : ml_backend.il_peephole.date0
	@:
ml_backend.il_peephole.int : ml_backend.il_peephole.date
	@:
ml_backend.il_peephole.int2 : ml_backend.il_peephole.date
	@:
ml_backend.il_peephole.int3 : ml_backend.il_peephole.date3
	@:
ml_backend.il_peephole.opt : ml_backend.il_peephole.optdate
	@:
ml_backend.il_peephole.trans_opt : ml_backend.il_peephole.trans_opt_date
	@:

ml_backend.il_peephole.date0 : il_peephole.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) ml_backend.il_peephole
ml_backend.il_peephole.date : il_peephole.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) ml_backend.il_peephole
ml_backend.il_peephole.date3 : il_peephole.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) ml_backend.il_peephole
ml_backend.il_peephole.optdate : il_peephole.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) ml_backend.il_peephole
ml_backend.il_peephole.trans_opt_date : il_peephole.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) ml_backend.il_peephole
ml_backend.il_peephole.c_date : il_peephole.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) ml_backend.il_peephole $(ERR_REDIRECT)
ml_backend.il_peephole.il_date : il_peephole.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only ml_backend.il_peephole $(ERR_REDIRECT)
ml_backend.il_peephole.java_date : il_peephole.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only ml_backend.il_peephole $(ERR_REDIRECT)
