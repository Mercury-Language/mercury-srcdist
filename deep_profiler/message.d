

message.optdate message.trans_opt_date message.err message.c_date message.s_date message.pic_s_date message.il_date message.java_date : message.m \
	builtin.int \
	cord.int \
	int.int \
	list.int \
	mdbcomp.int \
	private_builtin.int \
	profile.int \
	string.int \
	mdbcomp.program_representation.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	exclude.int2 \
	io.int2 \
	map.int2 \
	maybe.int2 \
	measurements.int2 \
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
	mdbcomp.prim_data.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2

ifeq ($(TARGET_ASM),yes)
message.mh message.mih : message.s
else
message.mh message.mih : message.c
endif

ifeq ($(TARGET_ASM),yes)
message.module_dep : message.s
else
 ifeq ($(findstring il,$(GRADE)),il)
message.module_dep : message.il
  ifeq ($(findstring java,$(GRADE)),java)
message.module_dep : jmercury/message.java
  else
message.module_dep : message.c
  endif
 endif
endif

message.date message.date0 : message.m \
	builtin.int3 \
	cord.int3 \
	int.int3 \
	list.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	profile.int3 \
	string.int3 \
	mdbcomp.program_representation.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	exclude.int3 \
	io.int3 \
	map.int3 \
	maybe.int3 \
	measurements.int3 \
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
	mdbcomp.prim_data.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3

message.date0 : message.m \
	builtin.int3 \
	cord.int3 \
	int.int3 \
	list.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	profile.int3 \
	string.int3 \
	mdbcomp.program_representation.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	exclude.int3 \
	io.int3 \
	map.int3 \
	maybe.int3 \
	measurements.int3 \
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
	mdbcomp.prim_data.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3



message.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	string.mh \
	io.mh \
	io.mh \
	array.mh \
	array.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh \
	profile.mh \
	profile.mh



message.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	string.mh \
	io.mh \
	io.mh \
	array.mh \
	array.mh \
	mdbcomp.program_representation.mh \
	mdbcomp.program_representation.mh \
	profile.mh \
	profile.mh


message.int0 : message.date0
	@:
message.int : message.date
	@:
message.int2 : message.date
	@:
message.int3 : message.date3
	@:
message.opt : message.optdate
	@:
message.trans_opt : message.trans_opt_date
	@:
