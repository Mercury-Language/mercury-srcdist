

process_file.optdate process_file.trans_opt_date process_file.err process_file.c_date process_file.s_date process_file.pic_s_date process_file.il_date process_file.java_date : process_file.m \
	bool.int \
	builtin.int \
	globals.int \
	int.int \
	io.int \
	list.int \
	map.int \
	maybe.int \
	options.int \
	private_builtin.int \
	prof_info.int \
	read.int \
	relation.int \
	require.int \
	string.int \
	svmap.int \
	svrelation.int \
	unit.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	getopt.int2 \
	ops.int2 \
	pair.int2 \
	random.int2 \
	set.int2 \
	set_ordlist.int2 \
	sparse_bitset.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

ifeq ($(TARGET_ASM),yes)
process_file.mh process_file.mih : process_file.s
else
process_file.mh process_file.mih : process_file.c
endif

ifeq ($(TARGET_ASM),yes)
process_file.module_dep : process_file.s
else
 ifeq ($(findstring il,$(GRADE)),il)
process_file.module_dep : process_file.il
  ifeq ($(findstring java,$(GRADE)),java)
process_file.module_dep : process_file.java
  else
process_file.module_dep : process_file.c
  endif
 endif
endif

process_file.date process_file.date0 : process_file.m \
	bool.int3 \
	builtin.int3 \
	globals.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	options.int3 \
	private_builtin.int3 \
	prof_info.int3 \
	read.int3 \
	relation.int3 \
	require.int3 \
	string.int3 \
	svmap.int3 \
	svrelation.int3 \
	unit.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt.int3 \
	ops.int3 \
	pair.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

process_file.date0 : process_file.m \
	bool.int3 \
	builtin.int3 \
	globals.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	options.int3 \
	private_builtin.int3 \
	prof_info.int3 \
	read.int3 \
	relation.int3 \
	require.int3 \
	string.int3 \
	svmap.int3 \
	svrelation.int3 \
	unit.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt.int3 \
	ops.int3 \
	pair.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



process_file.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



process_file.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


process_file.int0 : process_file.date0
	@:
process_file.int : process_file.date
	@:
process_file.int2 : process_file.date
	@:
process_file.int3 : process_file.date3
	@:
process_file.opt : process_file.optdate
	@:
process_file.trans_opt : process_file.trans_opt_date
	@:
