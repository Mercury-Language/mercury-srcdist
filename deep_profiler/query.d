

query.optdate query.trans_opt_date query.err query.c_date query.s_date query.pic_s_date query.il_date query.java_date : query.m \
	bool.int \
	builtin.int \
	char.int \
	create_report.int \
	display_report.int \
	exception.int \
	html_format.int \
	int.int \
	io.int \
	list.int \
	math.int \
	maybe.int \
	measurement_units.int \
	private_builtin.int \
	profile.int \
	report.int \
	stream.int \
	string.int \
	table_builtin.int \
	univ.int \
	util.int \
	string.format.int \
	string.parse_util.int \
	analysis_utils.int2 \
	array.int2 \
	assoc_list.int2 \
	bimap.int2 \
	bitmap.int2 \
	construct.int2 \
	cord.int2 \
	coverage.int2 \
	deconstruct.int2 \
	display.int2 \
	enum.int2 \
	exclude.int2 \
	integer.int2 \
	map.int2 \
	mdbcomp.int2 \
	measurements.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	stm_builtin.int2 \
	store.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	unit.int2 \
	var_use_analysis.int2 \
	mdbcomp.feedback.int2 \
	mdbcomp.goal_path.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.sym_name.int2 \
	mdbcomp.trace_counts.int2 \
	mdbcomp.feedback.automatic_parallelism.int2

query.pic_o query.$O : \
	analysis_utils.mih \
	array.mih \
	assoc_list.mih \
	bimap.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
	char.mih \
	construct.mih \
	cord.mih \
	coverage.mih \
	create_report.mih \
	deconstruct.mih \
	display.mih \
	display_report.mih \
	enum.mih \
	exception.mih \
	exclude.mih \
	html_format.mih \
	int.mih \
	integer.mih \
	io.mih \
	list.mih \
	map.mih \
	math.mih \
	maybe.mih \
	mdbcomp.mih \
	measurement_units.mih \
	measurements.mih \
	ops.mih \
	pair.mih \
	pretty_printer.mih \
	private_builtin.mih \
	profile.mih \
	query.mih \
	random.mih \
	report.mih \
	rtti_implementation.mih \
	set.mih \
	set_ordlist.mih \
	stm_builtin.mih \
	store.mih \
	stream.mih \
	string.mih \
	table_builtin.mih \
	term.mih \
	time.mih \
	tree234.mih \
	type_desc.mih \
	unit.mih \
	univ.mih \
	util.mih \
	var_use_analysis.mih \
	mdbcomp.feedback.mih \
	mdbcomp.goal_path.mih \
	mdbcomp.prim_data.mih \
	mdbcomp.program_representation.mih \
	mdbcomp.rtti_access.mih \
	mdbcomp.sym_name.mih \
	mdbcomp.trace_counts.mih \
	string.format.mih \
	string.parse_util.mih \
	mdbcomp.feedback.automatic_parallelism.mih

query.mh query.mih : query.c


ifeq ($(findstring il,$(GRADE)),il)
query.module_dep : query.il
else
 ifeq ($(findstring java,$(GRADE)),java)
query.module_dep : jmercury/query.java
 else
query.module_dep : query.c
 endif
endif


query.date query.date0 : query.m \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	create_report.int3 \
	display_report.int3 \
	exception.int3 \
	html_format.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	math.int3 \
	maybe.int3 \
	measurement_units.int3 \
	private_builtin.int3 \
	profile.int3 \
	report.int3 \
	stream.int3 \
	string.int3 \
	table_builtin.int3 \
	univ.int3 \
	util.int3 \
	string.format.int3 \
	string.parse_util.int3 \
	analysis_utils.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	construct.int3 \
	cord.int3 \
	coverage.int3 \
	deconstruct.int3 \
	display.int3 \
	enum.int3 \
	exclude.int3 \
	integer.int3 \
	map.int3 \
	mdbcomp.int3 \
	measurements.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stm_builtin.int3 \
	store.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	var_use_analysis.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.sym_name.int3 \
	mdbcomp.trace_counts.int3 \
	mdbcomp.feedback.automatic_parallelism.int3

query.date0 : query.m \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	create_report.int3 \
	display_report.int3 \
	exception.int3 \
	html_format.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	math.int3 \
	maybe.int3 \
	measurement_units.int3 \
	private_builtin.int3 \
	profile.int3 \
	report.int3 \
	stream.int3 \
	string.int3 \
	table_builtin.int3 \
	univ.int3 \
	util.int3 \
	string.format.int3 \
	string.parse_util.int3 \
	analysis_utils.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	construct.int3 \
	cord.int3 \
	coverage.int3 \
	deconstruct.int3 \
	display.int3 \
	enum.int3 \
	exclude.int3 \
	integer.int3 \
	map.int3 \
	mdbcomp.int3 \
	measurements.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stm_builtin.int3 \
	store.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	var_use_analysis.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.sym_name.int3 \
	mdbcomp.trace_counts.int3 \
	mdbcomp.feedback.automatic_parallelism.int3



query.$O :  \
	profile.mh \
	profile.mh \
	io.mh \
	io.mh \
	time.mh \
	string.mh \
	table_builtin.mh \
	table_builtin.mh \
	array.mh \
	array.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	stm_builtin.mh \
	stm_builtin.mh \
	store.mh \
	store.mh \
	bitmap.mh \
	bitmap.mh \
	time.mh \
	time.mh



query.pic_o :  \
	profile.mh \
	profile.mh \
	io.mh \
	io.mh \
	time.mh \
	string.mh \
	table_builtin.mh \
	table_builtin.mh \
	array.mh \
	array.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	stm_builtin.mh \
	stm_builtin.mh \
	store.mh \
	store.mh \
	bitmap.mh \
	bitmap.mh \
	time.mh \
	time.mh


query.int0 : query.date0
	@:
query.int : query.date
	@:
query.int2 : query.date
	@:
query.int3 : query.date3
	@:
query.opt : query.optdate
	@:
query.trans_opt : query.trans_opt_date
	@:
