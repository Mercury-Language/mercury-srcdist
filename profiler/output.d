

output.optdate output.trans_opt_date output.err output.c_date output.s_date output.pic_s_date output.il_date output.java_date : output.m \
	assoc_list.int \
	bool.int \
	builtin.int \
	float.int \
	generate_output.int \
	globals.int \
	int.int \
	io.int \
	list.int \
	map.int \
	options.int \
	output_prof_info.int \
	pair.int \
	private_builtin.int \
	require.int \
	stream.int \
	string.int \
	string.format.int \
	string.parse_util.int \
	array.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	getopt.int2 \
	integer.int2 \
	maybe.int2 \
	ops.int2 \
	pretty_printer.int2 \
	prof_info.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

output.pic_o output.$O : \
	array.mih \
	assoc_list.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
	char.mih \
	construct.mih \
	deconstruct.mih \
	enum.mih \
	float.mih \
	generate_output.mih \
	getopt.mih \
	globals.mih \
	int.mih \
	integer.mih \
	io.mih \
	list.mih \
	map.mih \
	maybe.mih \
	ops.mih \
	options.mih \
	output_prof_info.mih \
	pair.mih \
	pretty_printer.mih \
	private_builtin.mih \
	prof_info.mih \
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

output.mh output.mih : output.c


ifeq ($(findstring il,$(GRADE)),il)
output.module_dep : output.il
else
 ifeq ($(findstring java,$(GRADE)),java)
output.module_dep : jmercury/output.java
 else
output.module_dep : output.c
 endif
endif


output.date output.date0 : output.m \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	float.int3 \
	generate_output.int3 \
	globals.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	options.int3 \
	output_prof_info.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	stream.int3 \
	string.int3 \
	string.format.int3 \
	string.parse_util.int3 \
	array.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt.int3 \
	integer.int3 \
	maybe.int3 \
	ops.int3 \
	pretty_printer.int3 \
	prof_info.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

output.date0 : output.m \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	float.int3 \
	generate_output.int3 \
	globals.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	options.int3 \
	output_prof_info.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	stream.int3 \
	string.int3 \
	string.format.int3 \
	string.parse_util.int3 \
	array.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt.int3 \
	integer.int3 \
	maybe.int3 \
	ops.int3 \
	pretty_printer.int3 \
	prof_info.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



output.$O :  \
	io.mh \
	io.mh \
	time.mh \
	string.mh



output.pic_o :  \
	io.mh \
	io.mh \
	time.mh \
	string.mh


output.int0 : output.date0
	@:
output.int : output.date
	@:
output.int2 : output.date
	@:
output.int3 : output.date3
	@:
output.opt : output.optdate
	@:
output.trans_opt : output.trans_opt_date
	@:
