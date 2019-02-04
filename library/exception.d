# vim: ts=8 sw=8 noexpandtab ft=make



exception.optdate exception.trans_opt_date exception.err exception.c_date exception.java_date : exception.m \
	builtin.int \
	io.int \
	list.int \
	maybe.int \
	private_builtin.int \
	solutions.int \
	stm_builtin.int \
	store.int \
	string.int \
	unit.int \
	univ.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	integer.int2 \
	map.int2 \
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
	type_desc.int2

ifeq (x,y)
# RULE date_file_deps
# source group names:
#   (unnamed)
#   long deps
#   short deps
exception.optdate exception.trans_opt_date exception.err exception.c_date exception.java_date : \
		exception.m \
	\
		builtin.int \
		io.int \
		list.int \
		maybe.int \
		private_builtin.int \
		solutions.int \
		stm_builtin.int \
		store.int \
		string.int \
		unit.int \
		univ.int \
	\
		array.int2 \
		assoc_list.int2 \
		bitmap.int2 \
		bool.int2 \
		char.int2 \
		construct.int2 \
		deconstruct.int2 \
		enum.int2 \
		integer.int2 \
		map.int2 \
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
		type_desc.int2
endif



exception.$O :  \
	array.mh \
	assoc_list.mh \
	benchmarking.mh \
	bitmap.mh \
	bool.mh \
	builtin.mh \
	calendar.mh \
	char.mh \
	construct.mh \
	cord.mh \
	deconstruct.mh \
	dir.mh \
	enum.mh \
	erlang_rtti_implementation.mh \
	exception.mh \
	float.mh \
	int.mh \
	integer.mh \
	io.mh \
	lexer.mh \
	list.mh \
	map.mh \
	math.mh \
	maybe.mh \
	mutvar.mh \
	ops.mh \
	pair.mh \
	parser.mh \
	pretty_printer.mh \
	private_builtin.mh \
	random.mh \
	require.mh \
	rtti_implementation.mh \
	set.mh \
	set_ordlist.mh \
	set_tree234.mh \
	solutions.mh \
	std_util.mh \
	stm_builtin.mh \
	store.mh \
	stream.mh \
	string.mh \
	table_builtin.mh \
	term.mh \
	term_conversion.mh \
	term_io.mh \
	time.mh \
	tree234.mh \
	type_desc.mh \
	uint.mh \
	unit.mh \
	univ.mh \
	varset.mh \
	version_array.mh \
	stream.string_writer.mh \
	string.format.mh \
	string.parse_runtime.mh \
	string.parse_util.mh \
	string.to_string.mh

ifeq (x,y)
# RULE machine_dependent_header_deps
exception.$O : \
		array.mh \
		assoc_list.mh \
		benchmarking.mh \
		bitmap.mh \
		bool.mh \
		builtin.mh \
		calendar.mh \
		char.mh \
		construct.mh \
		cord.mh \
		deconstruct.mh \
		dir.mh \
		enum.mh \
		erlang_rtti_implementation.mh \
		exception.mh \
		float.mh \
		int.mh \
		integer.mh \
		io.mh \
		lexer.mh \
		list.mh \
		map.mh \
		math.mh \
		maybe.mh \
		mutvar.mh \
		ops.mh \
		pair.mh \
		parser.mh \
		pretty_printer.mh \
		private_builtin.mh \
		random.mh \
		require.mh \
		rtti_implementation.mh \
		set.mh \
		set_ordlist.mh \
		set_tree234.mh \
		solutions.mh \
		std_util.mh \
		stm_builtin.mh \
		store.mh \
		stream.mh \
		string.mh \
		table_builtin.mh \
		term.mh \
		term_conversion.mh \
		term_io.mh \
		time.mh \
		tree234.mh \
		type_desc.mh \
		uint.mh \
		unit.mh \
		univ.mh \
		varset.mh \
		version_array.mh \
		stream.string_writer.mh \
		string.format.mh \
		string.parse_runtime.mh \
		string.parse_util.mh \
		string.to_string.mh
endif



exception.trans_opt_date exception.err exception.c_date exception.java_date :  \
	exception.opt \
	builtin.opt \
	io.opt \
	list.opt \
	maybe.opt \
	private_builtin.opt \
	solutions.opt \
	stm_builtin.opt \
	store.opt \
	string.opt \
	unit.opt \
	univ.opt

ifeq (x,y)
# RULE dates_on_opts_and_int0s
exception.trans_opt_date exception.err exception.c_date exception.java_date : \
		exception.opt \
		builtin.opt \
		io.opt \
		list.opt \
		maybe.opt \
		private_builtin.opt \
		solutions.opt \
		stm_builtin.opt \
		store.opt \
		string.opt \
		unit.opt \
		univ.opt
endif



exception.err exception.c_date exception.java_date :  \
	exception.trans_opt \
	builtin.trans_opt \
	io.trans_opt \
	list.trans_opt \
	maybe.trans_opt \
	private_builtin.trans_opt \
	solutions.trans_opt \
	stm_builtin.trans_opt \
	store.trans_opt \
	string.trans_opt \
	unit.trans_opt \
	univ.trans_opt

ifeq (x,y)
# RULE dates_on_trans_opts'_opts
exception.err exception.c_date exception.java_date : \
		exception.trans_opt \
		builtin.trans_opt \
		io.trans_opt \
		list.trans_opt \
		maybe.trans_opt \
		private_builtin.trans_opt \
		solutions.trans_opt \
		stm_builtin.trans_opt \
		store.trans_opt \
		string.trans_opt \
		unit.trans_opt \
		univ.trans_opt
endif



exception.pic_o exception.$O : \
	array.mih \
	assoc_list.mih \
	benchmarking.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
	calendar.mih \
	char.mih \
	construct.mih \
	cord.mih \
	deconstruct.mih \
	dir.mih \
	enum.mih \
	erlang_rtti_implementation.mih \
	exception.mih \
	float.mih \
	int.mih \
	integer.mih \
	io.mih \
	lexer.mih \
	list.mih \
	map.mih \
	math.mih \
	maybe.mih \
	mutvar.mih \
	ops.mih \
	pair.mih \
	parser.mih \
	pretty_printer.mih \
	private_builtin.mih \
	random.mih \
	require.mih \
	rtti_implementation.mih \
	set.mih \
	set_ordlist.mih \
	set_tree234.mih \
	solutions.mih \
	std_util.mih \
	stm_builtin.mih \
	store.mih \
	stream.mih \
	string.mih \
	table_builtin.mih \
	term.mih \
	term_conversion.mih \
	term_io.mih \
	time.mih \
	tree234.mih \
	type_desc.mih \
	uint.mih \
	unit.mih \
	univ.mih \
	varset.mih \
	version_array.mih \
	stream.string_writer.mih \
	string.format.mih \
	string.parse_runtime.mih \
	string.parse_util.mih \
	string.to_string.mih

ifeq (x,y)
# RULE objs_on_mihs
exception.pic_o exception.$O : \
		array.mih \
		assoc_list.mih \
		benchmarking.mih \
		bitmap.mih \
		bool.mih \
		builtin.mih \
		calendar.mih \
		char.mih \
		construct.mih \
		cord.mih \
		deconstruct.mih \
		dir.mih \
		enum.mih \
		erlang_rtti_implementation.mih \
		exception.mih \
		float.mih \
		int.mih \
		integer.mih \
		io.mih \
		lexer.mih \
		list.mih \
		map.mih \
		math.mih \
		maybe.mih \
		mutvar.mih \
		ops.mih \
		pair.mih \
		parser.mih \
		pretty_printer.mih \
		private_builtin.mih \
		random.mih \
		require.mih \
		rtti_implementation.mih \
		set.mih \
		set_ordlist.mih \
		set_tree234.mih \
		solutions.mih \
		std_util.mih \
		stm_builtin.mih \
		store.mih \
		stream.mih \
		string.mih \
		table_builtin.mih \
		term.mih \
		term_conversion.mih \
		term_io.mih \
		time.mih \
		tree234.mih \
		type_desc.mih \
		uint.mih \
		unit.mih \
		univ.mih \
		varset.mih \
		version_array.mih \
		stream.string_writer.mih \
		string.format.mih \
		string.parse_runtime.mih \
		string.parse_util.mih \
		string.to_string.mih
endif



exception.mh exception.mih : exception.c

ifeq (x,y)
# RULE mh_and_mih_on_c
exception.mh exception.mih : exception.c
endif



ifeq ($(findstring java,$(GRADE)),java)
exception.module_dep : jmercury/exception.java
else
exception.module_dep : exception.c
endif

ifeq ($(findstring java,$(GRADE)),java)

ifeq (x,y)
# RULE module_dep_on_java
exception.module_dep : jmercury/exception.java
endif

else

ifeq (x,y)
# RULE module_dep_on_c
exception.module_dep : exception.c
endif

endif # conditional fragment



exception.date exception.date0 : exception.m \
	builtin.int3 \
	io.int3 \
	list.int3 \
	maybe.int3 \
	private_builtin.int3 \
	solutions.int3 \
	stm_builtin.int3 \
	store.int3 \
	string.int3 \
	unit.int3 \
	univ.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	integer.int3 \
	map.int3 \
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
	type_desc.int3

ifeq (x,y)
# RULE self_and_parent_date_deps
# source group names:
#   (unnamed)
#   long dep int3s
#   short dep int3s
exception.date exception.date0 : \
		exception.m \
	\
		builtin.int3 \
		io.int3 \
		list.int3 \
		maybe.int3 \
		private_builtin.int3 \
		solutions.int3 \
		stm_builtin.int3 \
		store.int3 \
		string.int3 \
		unit.int3 \
		univ.int3 \
	\
		array.int3 \
		assoc_list.int3 \
		bitmap.int3 \
		bool.int3 \
		char.int3 \
		construct.int3 \
		deconstruct.int3 \
		enum.int3 \
		integer.int3 \
		map.int3 \
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
		type_desc.int3
endif



exception.date0 : exception.m \
	builtin.int3 \
	io.int3 \
	list.int3 \
	maybe.int3 \
	private_builtin.int3 \
	solutions.int3 \
	stm_builtin.int3 \
	store.int3 \
	string.int3 \
	unit.int3 \
	univ.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	integer.int3 \
	map.int3 \
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
	type_desc.int3

ifeq (x,y)
# RULE self_and_parent_date0_deps
# source group names:
#   (unnamed)
#   long dep int3s
#   short dep int3s
exception.date0 : \
		exception.m \
	\
		builtin.int3 \
		io.int3 \
		list.int3 \
		maybe.int3 \
		private_builtin.int3 \
		solutions.int3 \
		stm_builtin.int3 \
		store.int3 \
		string.int3 \
		unit.int3 \
		univ.int3 \
	\
		array.int3 \
		assoc_list.int3 \
		bitmap.int3 \
		bool.int3 \
		char.int3 \
		construct.int3 \
		deconstruct.int3 \
		enum.int3 \
		integer.int3 \
		map.int3 \
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
		type_desc.int3
endif



exception.$O :  \
	exception.mh \
	io.mh \
	stm_builtin.mh \
	store.mh \
	string.mh \
	time.mh



exception.pic_o :  \
	exception.mh \
	io.mh \
	stm_builtin.mh \
	store.mh \
	string.mh \
	time.mh

ifeq (x,y)
# RULE foreign_deps_for_.mh
exception.$O : \
		exception.mh \
		io.mh \
		stm_builtin.mh \
		store.mh \
		string.mh \
		time.mh
endif

ifeq (x,y)
# RULE foreign_deps_for_.mh
exception.pic_o : \
		exception.mh \
		io.mh \
		stm_builtin.mh \
		store.mh \
		string.mh \
		time.mh
endif


exception.int0 : exception.date0
	@:
exception.int : exception.date
	@:
exception.int2 : exception.date
	@:
exception.int3 : exception.date3
	@:
exception.opt : exception.optdate
	@:
exception.trans_opt : exception.trans_opt_date
	@:

ifeq (x,y)
exception.int0 : exception.date0
	@:
endif

ifeq (x,y)
exception.int : exception.date
	@:
endif

ifeq (x,y)
exception.int2 : exception.date
	@:
endif

ifeq (x,y)
exception.int3 : exception.date3
	@:
endif

ifeq (x,y)
exception.opt : exception.optdate
	@:
endif

ifeq (x,y)
exception.trans_opt : exception.trans_opt_date
	@:
endif

