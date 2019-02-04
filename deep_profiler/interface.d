

interface.optdate interface.trans_opt_date interface.err interface.c_date interface.s_date interface.pic_s_date interface.il_date interface.java_date : interface.m \
	bool.int \
	builtin.int \
	char.int \
	conf.int \
	int.int \
	io.int \
	list.int \
	maybe.int \
	private_builtin.int \
	profile.int \
	require.int \
	string.int \
	util.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	map.int2 \
	measurements.int2 \
	ops.int2 \
	pair.int2 \
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
interface.mh interface.mih : interface.s
else
interface.mh interface.mih : interface.c
endif

ifeq ($(TARGET_ASM),yes)
interface.module_dep : interface.s
else
 ifeq ($(findstring il,$(GRADE)),il)
interface.module_dep : interface.il
  ifeq ($(findstring java,$(GRADE)),java)
interface.module_dep : interface.java
  else
interface.module_dep : interface.c
  endif
 endif
endif

interface.date interface.date0 : interface.m \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	conf.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	maybe.int3 \
	private_builtin.int3 \
	profile.int3 \
	require.int3 \
	string.int3 \
	util.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	map.int3 \
	measurements.int3 \
	ops.int3 \
	pair.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

interface.date0 : interface.m \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	conf.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	maybe.int3 \
	private_builtin.int3 \
	profile.int3 \
	require.int3 \
	string.int3 \
	util.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	map.int3 \
	measurements.int3 \
	ops.int3 \
	pair.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



interface.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	array.mh \
	array.mh \
	string.mh \
	io.mh \
	io.mh



interface.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	array.mh \
	array.mh \
	string.mh \
	io.mh \
	io.mh


interface.int0 : interface.date0
	@:
interface.int : interface.date
	@:
interface.int2 : interface.date
	@:
interface.int3 : interface.date3
	@:
interface.opt : interface.optdate
	@:
interface.trans_opt : interface.trans_opt_date
	@:
