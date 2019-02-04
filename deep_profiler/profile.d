# vim: ts=8 sw=8 noexpandtab ft=make



profile.optdate profile.trans_opt_date profile.err profile.c_date profile.java_date : profile.m \
	array.int \
	array_util.int \
	bool.int \
	builtin.int \
	exclude.int \
	int.int \
	list.int \
	map.int \
	maybe.int \
	mdbcomp.int \
	measurements.int \
	private_builtin.int \
	require.int \
	string.int \
	mdbcomp.goal_path.int \
	mdbcomp.prim_data.int \
	mdbcomp.program_representation.int \
	assoc_list.int2 \
	bimap.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	integer.int2 \
	io.int2 \
	measurement_units.int2 \
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
	mdbcomp.feedback.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.sym_name.int2 \
	mdbcomp.trace_counts.int2 \
	mdbcomp.feedback.automatic_parallelism.int2

ifeq (x,y)
# RULE date_file_deps
# source group names:
#   (unnamed)
#   long deps
#   short deps
profile.optdate profile.trans_opt_date profile.err profile.c_date profile.java_date : \
		profile.m \
	\
		array.int \
		array_util.int \
		bool.int \
		builtin.int \
		exclude.int \
		int.int \
		list.int \
		map.int \
		maybe.int \
		mdbcomp.int \
		measurements.int \
		private_builtin.int \
		require.int \
		string.int \
		mdbcomp.goal_path.int \
		mdbcomp.prim_data.int \
		mdbcomp.program_representation.int \
	\
		assoc_list.int2 \
		bimap.int2 \
		bitmap.int2 \
		char.int2 \
		construct.int2 \
		deconstruct.int2 \
		enum.int2 \
		integer.int2 \
		io.int2 \
		measurement_units.int2 \
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
		mdbcomp.feedback.int2 \
		mdbcomp.rtti_access.int2 \
		mdbcomp.sym_name.int2 \
		mdbcomp.trace_counts.int2 \
		mdbcomp.feedback.automatic_parallelism.int2
endif



profile.pic_o profile.$O : \
	array.mih \
	array_util.mih \
	assoc_list.mih \
	bimap.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
	char.mih \
	construct.mih \
	deconstruct.mih \
	enum.mih \
	exclude.mih \
	int.mih \
	integer.mih \
	io.mih \
	list.mih \
	map.mih \
	maybe.mih \
	mdbcomp.mih \
	measurement_units.mih \
	measurements.mih \
	ops.mih \
	pair.mih \
	pretty_printer.mih \
	private_builtin.mih \
	profile.mih \
	random.mih \
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
	unit.mih \
	univ.mih \
	mdbcomp.feedback.mih \
	mdbcomp.goal_path.mih \
	mdbcomp.prim_data.mih \
	mdbcomp.program_representation.mih \
	mdbcomp.rtti_access.mih \
	mdbcomp.sym_name.mih \
	mdbcomp.trace_counts.mih \
	mdbcomp.feedback.automatic_parallelism.mih

ifeq (x,y)
# RULE objs_on_mihs
profile.pic_o profile.$O : \
		array.mih \
		array_util.mih \
		assoc_list.mih \
		bimap.mih \
		bitmap.mih \
		bool.mih \
		builtin.mih \
		char.mih \
		construct.mih \
		deconstruct.mih \
		enum.mih \
		exclude.mih \
		int.mih \
		integer.mih \
		io.mih \
		list.mih \
		map.mih \
		maybe.mih \
		mdbcomp.mih \
		measurement_units.mih \
		measurements.mih \
		ops.mih \
		pair.mih \
		pretty_printer.mih \
		private_builtin.mih \
		profile.mih \
		random.mih \
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
		unit.mih \
		univ.mih \
		mdbcomp.feedback.mih \
		mdbcomp.goal_path.mih \
		mdbcomp.prim_data.mih \
		mdbcomp.program_representation.mih \
		mdbcomp.rtti_access.mih \
		mdbcomp.sym_name.mih \
		mdbcomp.trace_counts.mih \
		mdbcomp.feedback.automatic_parallelism.mih
endif



profile.mh profile.mih : profile.c

ifeq (x,y)
# RULE mh_and_mih_on_c
profile.mh profile.mih : profile.c
endif



ifeq ($(findstring java,$(GRADE)),java)
profile.module_dep : jmercury/profile.java
else
profile.module_dep : profile.c
endif

ifeq ($(findstring java,$(GRADE)),java)

ifeq (x,y)
# RULE module_dep_on_java
profile.module_dep : jmercury/profile.java
endif

else

ifeq (x,y)
# RULE module_dep_on_c
profile.module_dep : profile.c
endif

endif # conditional fragment



profile.date profile.date0 : profile.m \
	array.int3 \
	array_util.int3 \
	bool.int3 \
	builtin.int3 \
	exclude.int3 \
	int.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	measurements.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	integer.int3 \
	io.int3 \
	measurement_units.int3 \
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
	mdbcomp.feedback.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.sym_name.int3 \
	mdbcomp.trace_counts.int3 \
	mdbcomp.feedback.automatic_parallelism.int3

ifeq (x,y)
# RULE self_and_parent_date_deps
# source group names:
#   (unnamed)
#   long dep int3s
#   short dep int3s
profile.date profile.date0 : \
		profile.m \
	\
		array.int3 \
		array_util.int3 \
		bool.int3 \
		builtin.int3 \
		exclude.int3 \
		int.int3 \
		list.int3 \
		map.int3 \
		maybe.int3 \
		mdbcomp.int3 \
		measurements.int3 \
		private_builtin.int3 \
		require.int3 \
		string.int3 \
		mdbcomp.goal_path.int3 \
		mdbcomp.prim_data.int3 \
		mdbcomp.program_representation.int3 \
	\
		assoc_list.int3 \
		bimap.int3 \
		bitmap.int3 \
		char.int3 \
		construct.int3 \
		deconstruct.int3 \
		enum.int3 \
		integer.int3 \
		io.int3 \
		measurement_units.int3 \
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
		mdbcomp.feedback.int3 \
		mdbcomp.rtti_access.int3 \
		mdbcomp.sym_name.int3 \
		mdbcomp.trace_counts.int3 \
		mdbcomp.feedback.automatic_parallelism.int3
endif



profile.date0 : profile.m \
	array.int3 \
	array_util.int3 \
	bool.int3 \
	builtin.int3 \
	exclude.int3 \
	int.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	measurements.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	mdbcomp.goal_path.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	assoc_list.int3 \
	bimap.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	integer.int3 \
	io.int3 \
	measurement_units.int3 \
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
	mdbcomp.feedback.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.sym_name.int3 \
	mdbcomp.trace_counts.int3 \
	mdbcomp.feedback.automatic_parallelism.int3

ifeq (x,y)
# RULE self_and_parent_date0_deps
# source group names:
#   (unnamed)
#   long dep int3s
#   short dep int3s
profile.date0 : \
		profile.m \
	\
		array.int3 \
		array_util.int3 \
		bool.int3 \
		builtin.int3 \
		exclude.int3 \
		int.int3 \
		list.int3 \
		map.int3 \
		maybe.int3 \
		mdbcomp.int3 \
		measurements.int3 \
		private_builtin.int3 \
		require.int3 \
		string.int3 \
		mdbcomp.goal_path.int3 \
		mdbcomp.prim_data.int3 \
		mdbcomp.program_representation.int3 \
	\
		assoc_list.int3 \
		bimap.int3 \
		bitmap.int3 \
		char.int3 \
		construct.int3 \
		deconstruct.int3 \
		enum.int3 \
		integer.int3 \
		io.int3 \
		measurement_units.int3 \
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
		mdbcomp.feedback.int3 \
		mdbcomp.rtti_access.int3 \
		mdbcomp.sym_name.int3 \
		mdbcomp.trace_counts.int3 \
		mdbcomp.feedback.automatic_parallelism.int3
endif



profile.$O :  \
	array.mh \
	io.mh \
	profile.mh \
	string.mh \
	time.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.rtti_access.mh



profile.pic_o :  \
	array.mh \
	io.mh \
	profile.mh \
	string.mh \
	time.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.rtti_access.mh

ifeq (x,y)
# RULE foreign_deps_for_.mh
profile.$O : \
		array.mh \
		io.mh \
		profile.mh \
		string.mh \
		time.mh \
		mdbcomp.program_representation.mh \
		mdbcomp.rtti_access.mh
endif

ifeq (x,y)
# RULE foreign_deps_for_.mh
profile.pic_o : \
		array.mh \
		io.mh \
		profile.mh \
		string.mh \
		time.mh \
		mdbcomp.program_representation.mh \
		mdbcomp.rtti_access.mh
endif


profile.int0 : profile.date0
	@:
profile.int : profile.date
	@:
profile.int2 : profile.date
	@:
profile.int3 : profile.date3
	@:
profile.opt : profile.optdate
	@:
profile.trans_opt : profile.trans_opt_date
	@:

ifeq (x,y)
profile.int0 : profile.date0
	@:
endif

ifeq (x,y)
profile.int : profile.date
	@:
endif

ifeq (x,y)
profile.int2 : profile.date
	@:
endif

ifeq (x,y)
profile.int3 : profile.date3
	@:
endif

ifeq (x,y)
profile.opt : profile.optdate
	@:
endif

ifeq (x,y)
profile.trans_opt : profile.trans_opt_date
	@:
endif

