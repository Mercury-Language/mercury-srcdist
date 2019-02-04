# vim: ts=8 sw=8 noexpandtab ft=make



conf.optdate conf.trans_opt_date conf.err conf.c_date conf.java_date : conf.m \
	builtin.int \
	io.int \
	list.int \
	maybe.int \
	private_builtin.int \
	require.int \
	stream.int \
	string.int \
	string.format.int \
	string.parse_util.int \
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
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

ifeq (x,y)
# RULE date_file_deps
# source group names:
#   (unnamed)
#   long deps
#   short deps
conf.optdate conf.trans_opt_date conf.err conf.c_date conf.java_date : \
		conf.m \
	\
		builtin.int \
		io.int \
		list.int \
		maybe.int \
		private_builtin.int \
		require.int \
		stream.int \
		string.int \
		string.format.int \
		string.parse_util.int \
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
		term.int2 \
		time.int2 \
		tree234.int2 \
		type_desc.int2 \
		univ.int2
endif



conf.pic_o conf.$O : \
	array.mih \
	assoc_list.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
	char.mih \
	construct.mih \
	deconstruct.mih \
	enum.mih \
	integer.mih \
	io.mih \
	list.mih \
	map.mih \
	maybe.mih \
	ops.mih \
	pair.mih \
	pretty_printer.mih \
	private_builtin.mih \
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
	univ.mih \
	string.format.mih \
	string.parse_util.mih

ifeq (x,y)
# RULE objs_on_mihs
conf.pic_o conf.$O : \
		array.mih \
		assoc_list.mih \
		bitmap.mih \
		bool.mih \
		builtin.mih \
		char.mih \
		construct.mih \
		deconstruct.mih \
		enum.mih \
		integer.mih \
		io.mih \
		list.mih \
		map.mih \
		maybe.mih \
		ops.mih \
		pair.mih \
		pretty_printer.mih \
		private_builtin.mih \
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
		univ.mih \
		string.format.mih \
		string.parse_util.mih
endif



conf.mh conf.mih : conf.c

ifeq (x,y)
# RULE mh_and_mih_on_c
conf.mh conf.mih : conf.c
endif



ifeq ($(findstring java,$(GRADE)),java)
conf.module_dep : jmercury/conf.java
else
conf.module_dep : conf.c
endif

ifeq ($(findstring java,$(GRADE)),java)

ifeq (x,y)
# RULE module_dep_on_java
conf.module_dep : jmercury/conf.java
endif

else

ifeq (x,y)
# RULE module_dep_on_c
conf.module_dep : conf.c
endif

endif # conditional fragment



conf.date conf.date0 : conf.m \
	builtin.int3 \
	io.int3 \
	list.int3 \
	maybe.int3 \
	private_builtin.int3 \
	require.int3 \
	stream.int3 \
	string.int3 \
	string.format.int3 \
	string.parse_util.int3 \
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
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

ifeq (x,y)
# RULE self_and_parent_date_deps
# source group names:
#   (unnamed)
#   long dep int3s
#   short dep int3s
conf.date conf.date0 : \
		conf.m \
	\
		builtin.int3 \
		io.int3 \
		list.int3 \
		maybe.int3 \
		private_builtin.int3 \
		require.int3 \
		stream.int3 \
		string.int3 \
		string.format.int3 \
		string.parse_util.int3 \
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
		term.int3 \
		time.int3 \
		tree234.int3 \
		type_desc.int3 \
		univ.int3
endif



conf.date0 : conf.m \
	builtin.int3 \
	io.int3 \
	list.int3 \
	maybe.int3 \
	private_builtin.int3 \
	require.int3 \
	stream.int3 \
	string.int3 \
	string.format.int3 \
	string.parse_util.int3 \
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
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

ifeq (x,y)
# RULE self_and_parent_date0_deps
# source group names:
#   (unnamed)
#   long dep int3s
#   short dep int3s
conf.date0 : \
		conf.m \
	\
		builtin.int3 \
		io.int3 \
		list.int3 \
		maybe.int3 \
		private_builtin.int3 \
		require.int3 \
		stream.int3 \
		string.int3 \
		string.format.int3 \
		string.parse_util.int3 \
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
		term.int3 \
		time.int3 \
		tree234.int3 \
		type_desc.int3 \
		univ.int3
endif



conf.$O :  \
	conf.mh \
	io.mh \
	string.mh \
	time.mh



conf.pic_o :  \
	conf.mh \
	io.mh \
	string.mh \
	time.mh

ifeq (x,y)
# RULE foreign_deps_for_.mh
conf.$O : \
		conf.mh \
		io.mh \
		string.mh \
		time.mh
endif

ifeq (x,y)
# RULE foreign_deps_for_.mh
conf.pic_o : \
		conf.mh \
		io.mh \
		string.mh \
		time.mh
endif


conf.int0 : conf.date0
	@:
conf.int : conf.date
	@:
conf.int2 : conf.date
	@:
conf.int3 : conf.date3
	@:
conf.opt : conf.optdate
	@:
conf.trans_opt : conf.trans_opt_date
	@:

ifeq (x,y)
conf.int0 : conf.date0
	@:
endif

ifeq (x,y)
conf.int : conf.date
	@:
endif

ifeq (x,y)
conf.int2 : conf.date
	@:
endif

ifeq (x,y)
conf.int3 : conf.date3
	@:
endif

ifeq (x,y)
conf.opt : conf.optdate
	@:
endif

ifeq (x,y)
conf.trans_opt : conf.trans_opt_date
	@:
endif

