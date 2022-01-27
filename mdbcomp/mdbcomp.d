

mdbcomp.optdate mdbcomp.trans_opt_date mdbcomp.err mdbcomp.c_date mdbcomp.s_date mdbcomp.pic_s_date mdbcomp.il_date mdbcomp.java_date : mdbcomp.m mdbcomp.int0 \
	builtin.int \
	private_builtin.int

mdbcomp.pic_o mdbcomp.$O : \
	builtin.mih \
	private_builtin.mih

mdbcomp.mh mdbcomp.mih : mdbcomp.c


ifeq ($(findstring il,$(GRADE)),il)
mdbcomp.module_dep : mdbcomp.il
else
 ifeq ($(findstring java,$(GRADE)),java)
mdbcomp.module_dep : jmercury/mdbcomp.java
 else
mdbcomp.module_dep : mdbcomp.c
 endif
endif


mdbcomp.date mdbcomp.date0 : mdbcomp.m \
	builtin.int3 \
	private_builtin.int3

mdbcomp.date0 : mdbcomp.m \
	builtin.int3 \
	private_builtin.int3



mdbcomp.$O :  \
	mdbcomp.mh



mdbcomp.pic_o :  \
	mdbcomp.mh


mdbcomp.int0 : mdbcomp.date0
	@:
mdbcomp.int : mdbcomp.date
	@:
mdbcomp.int2 : mdbcomp.date
	@:
mdbcomp.int3 : mdbcomp.date3
	@:
mdbcomp.opt : mdbcomp.optdate
	@:
mdbcomp.trans_opt : mdbcomp.trans_opt_date
	@:
