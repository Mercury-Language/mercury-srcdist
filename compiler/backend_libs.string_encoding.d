

backend_libs.string_encoding.optdate backend_libs.string_encoding.trans_opt_date string_encoding.err backend_libs.string_encoding.c_date backend_libs.string_encoding.s_date backend_libs.string_encoding.pic_s_date backend_libs.string_encoding.java_date : string_encoding.m \
	backend_libs.int0 \
	builtin.int \
	libs.int \
	list.int \
	private_builtin.int \
	string.int \
	libs.globals.int \
	array.int2 \
	assoc_list.int2 \
	bimap.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	getopt_io.int2 \
	integer.int2 \
	io.int2 \
	map.int2 \
	maybe.int2 \
	mdbcomp.int2 \
	ops.int2 \
	pair.int2 \
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
	univ.int2 \
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

backend_libs.string_encoding.pic_o backend_libs.string_encoding.$O : \
	array.mih \
	assoc_list.mih \
	backend_libs.mih \
	bimap.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
	char.mih \
	construct.mih \
	deconstruct.mih \
	enum.mih \
	getopt_io.mih \
	integer.mih \
	io.mih \
	libs.mih \
	list.mih \
	map.mih \
	maybe.mih \
	mdbcomp.mih \
	ops.mih \
	pair.mih \
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
	mdbcomp.feedback.automatic_parallelism.mih

backend_libs.string_encoding.mh backend_libs.string_encoding.mih : backend_libs.string_encoding.c


ifeq ($(findstring java,$(GRADE)),java)
backend_libs.string_encoding.module_dep : jmercury/backend_libs__string_encoding.java
else
backend_libs.string_encoding.module_dep : backend_libs.string_encoding.c
endif


backend_libs.string_encoding.date backend_libs.string_encoding.date0 \
	backend_libs.date : string_encoding.m \
	backend_libs.int0 \
	builtin.int3 \
	libs.int3 \
	list.int3 \
	private_builtin.int3 \
	string.int3 \
	libs.globals.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt_io.int3 \
	integer.int3 \
	io.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	ops.int3 \
	pair.int3 \
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
	univ.int3 \
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

backend_libs.string_encoding.date0 \
	backend_libs.date0 : string_encoding.m \
	builtin.int3 \
	libs.int3 \
	list.int3 \
	private_builtin.int3 \
	string.int3 \
	libs.globals.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt_io.int3 \
	integer.int3 \
	io.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	ops.int3 \
	pair.int3 \
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
	univ.int3 \
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



backend_libs.string_encoding.$O :  \
	io.mh \
	string.mh \
	time.mh \
	mdbcomp.rtti_access.mh



backend_libs.string_encoding.pic_o :  \
	io.mh \
	string.mh \
	time.mh \
	mdbcomp.rtti_access.mh


backend_libs.string_encoding.int0 : backend_libs.string_encoding.date0
	@:
backend_libs.string_encoding.int : backend_libs.string_encoding.date
	@:
backend_libs.string_encoding.int2 : backend_libs.string_encoding.date
	@:
backend_libs.string_encoding.int3 : backend_libs.string_encoding.date3
	@:
backend_libs.string_encoding.opt : backend_libs.string_encoding.optdate
	@:
backend_libs.string_encoding.trans_opt : backend_libs.string_encoding.trans_opt_date
	@:

backend_libs.string_encoding.date0 : string_encoding.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) backend_libs.string_encoding
backend_libs.string_encoding.date : string_encoding.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) backend_libs.string_encoding
backend_libs.string_encoding.date3 : string_encoding.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) backend_libs.string_encoding
backend_libs.string_encoding.optdate : string_encoding.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) backend_libs.string_encoding
backend_libs.string_encoding.trans_opt_date : string_encoding.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) backend_libs.string_encoding
backend_libs.string_encoding.c_date : string_encoding.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) backend_libs.string_encoding $(ERR_REDIRECT)
backend_libs.string_encoding.java_date : string_encoding.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only backend_libs.string_encoding $(ERR_REDIRECT)
