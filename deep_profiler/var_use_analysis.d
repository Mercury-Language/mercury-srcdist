

var_use_analysis.optdate var_use_analysis.trans_opt_date var_use_analysis.err var_use_analysis.c_date var_use_analysis.s_date var_use_analysis.pic_s_date var_use_analysis.il_date var_use_analysis.java_date : var_use_analysis.m \
	analysis_utils.int \
	assoc_list.int \
	builtin.int \
	coverage.int \
	float.int \
	int.int \
	io.int \
	list.int \
	map.int \
	maybe.int \
	mdbcomp.int \
	measurement_units.int \
	measurements.int \
	pair.int \
	private_builtin.int \
	profile.int \
	program_representation_utils.int \
	recursion_patterns.int \
	report.int \
	require.int \
	set.int \
	solutions.int \
	string.int \
	mdbcomp.goal_path.int \
	mdbcomp.program_representation.int \
	array.int2 \
	bimap.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	cord.int2 \
	deconstruct.int2 \
	enum.int2 \
	exclude.int2 \
	ops.int2 \
	pretty_printer.int2 \
	query.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	unit.int2 \
	univ.int2 \
	mdbcomp.feedback.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2 \
	mdbcomp.feedback.automatic_parallelism.int2

ifeq ($(TARGET_ASM),yes)
var_use_analysis.mh var_use_analysis.mih : var_use_analysis.s
else
var_use_analysis.mh var_use_analysis.mih : var_use_analysis.c
endif

ifeq ($(TARGET_ASM),yes)
var_use_analysis.module_dep : var_use_analysis.s
else
 ifeq ($(findstring il,$(GRADE)),il)
var_use_analysis.module_dep : var_use_analysis.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
var_use_analysis.module_dep : jmercury/var_use_analysis.java
  else
var_use_analysis.module_dep : var_use_analysis.c
  endif
 endif
endif

var_use_analysis.date var_use_analysis.date0 : var_use_analysis.m \
	analysis_utils.int3 \
	assoc_list.int3 \
	builtin.int3 \
	coverage.int3 \
	float.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	measurement_units.int3 \
	measurements.int3 \
	pair.int3 \
	private_builtin.int3 \
	profile.int3 \
	program_representation_utils.int3 \
	recursion_patterns.int3 \
	report.int3 \
	require.int3 \
	set.int3 \
	solutions.int3 \
	string.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.program_representation.int3 \
	array.int3 \
	bimap.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	cord.int3 \
	deconstruct.int3 \
	enum.int3 \
	exclude.int3 \
	ops.int3 \
	pretty_printer.int3 \
	query.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mdbcomp.feedback.automatic_parallelism.int3

var_use_analysis.date0 : var_use_analysis.m \
	analysis_utils.int3 \
	assoc_list.int3 \
	builtin.int3 \
	coverage.int3 \
	float.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	measurement_units.int3 \
	measurements.int3 \
	pair.int3 \
	private_builtin.int3 \
	profile.int3 \
	program_representation_utils.int3 \
	recursion_patterns.int3 \
	report.int3 \
	require.int3 \
	set.int3 \
	solutions.int3 \
	string.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.program_representation.int3 \
	array.int3 \
	bimap.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	cord.int3 \
	deconstruct.int3 \
	enum.int3 \
	exclude.int3 \
	ops.int3 \
	pretty_printer.int3 \
	query.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	mdbcomp.feedback.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3 \
	mdbcomp.feedback.automatic_parallelism.int3



var_use_analysis.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	string.mh \
	io.mh \
	io.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh \
	profile.mh \
	profile.mh



var_use_analysis.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	string.mh \
	io.mh \
	io.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh \
	profile.mh \
	profile.mh


var_use_analysis.int0 : var_use_analysis.date0
	@:
var_use_analysis.int : var_use_analysis.date
	@:
var_use_analysis.int2 : var_use_analysis.date
	@:
var_use_analysis.int3 : var_use_analysis.date3
	@:
var_use_analysis.opt : var_use_analysis.optdate
	@:
var_use_analysis.trans_opt : var_use_analysis.trans_opt_date
	@:
