

mdb.optdate mdb.trans_opt_date mdb.err mdb.c_date mdb.java_date : mdb.m mdb.int0 \
	builtin.int \
	mdbcomp.int \
	private_builtin.int

mdb.pic_o mdb.$O : \
	builtin.mih \
	mdbcomp.mih \
	private_builtin.mih

mdb.mh mdb.mih : mdb.c


ifeq ($(findstring java,$(GRADE)),java)
mdb.module_dep : jmercury/mdb.java
else
mdb.module_dep : mdb.c
endif


mdb.date mdb.date0 : mdb.m \
	builtin.int3 \
	mdbcomp.int3 \
	private_builtin.int3

mdb.date0 : mdb.m \
	builtin.int3 \
	mdbcomp.int3 \
	private_builtin.int3



mdb.$O :  \
	mdb.mh



mdb.pic_o :  \
	mdb.mh


mdb.int0 : mdb.date0
	@:
mdb.int : mdb.date
	@:
mdb.int2 : mdb.date
	@:
mdb.int3 : mdb.date3
	@:
mdb.opt : mdb.optdate
	@:
mdb.trans_opt : mdb.trans_opt_date
	@:
