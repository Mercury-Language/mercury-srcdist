

read_profile.optdate read_profile.trans_opt_date read_profile.err read_profile.c_date read_profile.s_date read_profile.pic_s_date read_profile.il_date read_profile.java_date : read_profile.m \
	array.int \
	array_util.int \
	bool.int \
	builtin.int \
	char.int \
	int.int \
	io.int \
	io_combinator.int \
	list.int \
	maybe.int \
	measurements.int \
	private_builtin.int \
	profile.int \
	require.int \
	string.int \
	assoc_list.int2 \
	bitmap.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	map.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	random.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

ifeq ($(TARGET_ASM),yes)
read_profile.mh read_profile.mih : read_profile.s
else
read_profile.mh read_profile.mih : read_profile.c
endif

ifeq ($(TARGET_ASM),yes)
read_profile.module_dep : read_profile.s
else
 ifeq ($(findstring il,$(GRADE)),il)
read_profile.module_dep : read_profile.il
  ifeq ($(findstring java,$(GRADE)),java)
read_profile.module_dep : read_profile.java
  else
read_profile.module_dep : read_profile.c
  endif
 endif
endif

read_profile.date read_profile.date0 : read_profile.m \
	array.int3 \
	array_util.int3 \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	int.int3 \
	io.int3 \
	io_combinator.int3 \
	list.int3 \
	maybe.int3 \
	measurements.int3 \
	private_builtin.int3 \
	profile.int3 \
	require.int3 \
	string.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

read_profile.date0 : read_profile.m \
	array.int3 \
	array_util.int3 \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	int.int3 \
	io.int3 \
	io_combinator.int3 \
	list.int3 \
	maybe.int3 \
	measurements.int3 \
	private_builtin.int3 \
	profile.int3 \
	require.int3 \
	string.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



read_profile.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	array.mh \
	array.mh \
	string.mh \
	io.mh \
	io.mh \
	read_profile.mh



read_profile.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	array.mh \
	array.mh \
	string.mh \
	io.mh \
	io.mh \
	read_profile.mh


read_profile.int0 : read_profile.date0
	@:
read_profile.int : read_profile.date
	@:
read_profile.int2 : read_profile.date
	@:
read_profile.int3 : read_profile.date3
	@:
read_profile.opt : read_profile.optdate
	@:
read_profile.trans_opt : read_profile.trans_opt_date
	@:
