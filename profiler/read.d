

read.optdate read.trans_opt_date read.err read.c_date read.s_date read.pic_s_date read.il_date read.java_date : read.m \
	bool.int \
	builtin.int \
	demangle.int \
	globals.int \
	io.int \
	maybe.int \
	options.int \
	private_builtin.int \
	require.int \
	string.int \
	assoc_list.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	getopt.int2 \
	list.int2 \
	map.int2 \
	ops.int2 \
	pair.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

ifeq ($(TARGET_ASM),yes)
read.mh read.mih : read.s
else
read.mh read.mih : read.c
endif

ifeq ($(TARGET_ASM),yes)
read.module_dep : read.s
else
 ifeq ($(findstring il,$(GRADE)),il)
read.module_dep : read.il
  ifeq ($(findstring java,$(GRADE)),java)
read.module_dep : read.java
  else
read.module_dep : read.c
  endif
 endif
endif

read.date read.date0 : read.m \
	bool.int3 \
	builtin.int3 \
	demangle.int3 \
	globals.int3 \
	io.int3 \
	maybe.int3 \
	options.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt.int3 \
	list.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

read.date0 : read.m \
	bool.int3 \
	builtin.int3 \
	demangle.int3 \
	globals.int3 \
	io.int3 \
	maybe.int3 \
	options.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt.int3 \
	list.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



read.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



read.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


read.int0 : read.date0
	@:
read.int : read.date
	@:
read.int2 : read.date
	@:
read.int3 : read.date3
	@:
read.opt : read.optdate
	@:
read.trans_opt : read.trans_opt_date
	@:
