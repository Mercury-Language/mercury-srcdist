

mdprof_report_feedback.optdate mdprof_report_feedback.trans_opt_date mdprof_report_feedback.err mdprof_report_feedback.c_date mdprof_report_feedback.s_date mdprof_report_feedback.pic_s_date mdprof_report_feedback.il_date mdprof_report_feedback.java_date : mdprof_report_feedback.m \
	bool.int \
	builtin.int \
	char.int \
	getopt.int \
	int.int \
	io.int \
	library.int \
	list.int \
	map.int \
	mdbcomp.int \
	mdprof_fb.int \
	private_builtin.int \
	string.int \
	mdbcomp.feedback.int \
	mdprof_fb.automatic_parallelism.int \
	mdbcomp.feedback.automatic_parallelism.int \
	mdprof_fb.automatic_parallelism.autopar_reports.int \
	array.int2 \
	assoc_list.int2 \
	bimap.int2 \
	bitmap.int2 \
	construct.int2 \
	cord.int2 \
	deconstruct.int2 \
	enum.int2 \
	maybe.int2 \
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
	mdbcomp.goal_path.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2

mdprof_report_feedback.mh mdprof_report_feedback.mih : mdprof_report_feedback.c


ifeq ($(findstring il,$(GRADE)),il)
mdprof_report_feedback.module_dep : mdprof_report_feedback.il
else
 ifeq ($(findstring java,$(GRADE)),java)
mdprof_report_feedback.module_dep : jmercury/mdprof_report_feedback.java
 else
mdprof_report_feedback.module_dep : mdprof_report_feedback.c
 endif
endif


mdprof_report_feedback.date mdprof_report_feedback.date0 : mdprof_report_feedback.m \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	getopt.int3 \
	int.int3 \
	io.int3 \
	library.int3 \
	list.int3 \
	map.int3 \
	mdbcomp.int3 \
	mdprof_fb.int3 \
	private_builtin.int3 \
	string.int3 \
	mdbcomp.feedback.int3 \
	mdprof_fb.automatic_parallelism.int3 \
	mdbcomp.feedback.automatic_parallelism.int3 \
	mdprof_fb.automatic_parallelism.autopar_reports.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	construct.int3 \
	cord.int3 \
	deconstruct.int3 \
	enum.int3 \
	maybe.int3 \
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
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3

mdprof_report_feedback.date0 : mdprof_report_feedback.m \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	getopt.int3 \
	int.int3 \
	io.int3 \
	library.int3 \
	list.int3 \
	map.int3 \
	mdbcomp.int3 \
	mdprof_fb.int3 \
	private_builtin.int3 \
	string.int3 \
	mdbcomp.feedback.int3 \
	mdprof_fb.automatic_parallelism.int3 \
	mdbcomp.feedback.automatic_parallelism.int3 \
	mdprof_fb.automatic_parallelism.autopar_reports.int3 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	construct.int3 \
	cord.int3 \
	deconstruct.int3 \
	enum.int3 \
	maybe.int3 \
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
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3



mdprof_report_feedback.$O :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh



mdprof_report_feedback.pic_o :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh


mdprof_report_feedback.int0 : mdprof_report_feedback.date0
	@:
mdprof_report_feedback.int : mdprof_report_feedback.date
	@:
mdprof_report_feedback.int2 : mdprof_report_feedback.date
	@:
mdprof_report_feedback.int3 : mdprof_report_feedback.date3
	@:
mdprof_report_feedback.opt : mdprof_report_feedback.optdate
	@:
mdprof_report_feedback.trans_opt : mdprof_report_feedback.trans_opt_date
	@:
