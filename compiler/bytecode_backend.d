# vim: ts=8 sw=8 noexpandtab ft=make



bytecode_backend.optdate bytecode_backend.trans_opt_date bytecode_backend.err bytecode_backend.c_date bytecode_backend.java_date : bytecode_backend.m bytecode_backend.int0 \
	builtin.int \
	private_builtin.int

ifeq (x,y)
# RULE date_file_deps
# source group names:
#   (unnamed)
#   (unnamed)
#   long deps
bytecode_backend.optdate bytecode_backend.trans_opt_date bytecode_backend.err bytecode_backend.c_date bytecode_backend.java_date : \
		bytecode_backend.m \
	\
		bytecode_backend.int0 \
	\
		builtin.int \
		private_builtin.int
endif



bytecode_backend.pic_o bytecode_backend.$O : \
	builtin.mih \
	private_builtin.mih

ifeq (x,y)
# RULE objs_on_mihs
bytecode_backend.pic_o bytecode_backend.$O : \
		builtin.mih \
		private_builtin.mih
endif



bytecode_backend.mh bytecode_backend.mih : bytecode_backend.c

ifeq (x,y)
# RULE mh_and_mih_on_c
bytecode_backend.mh bytecode_backend.mih : bytecode_backend.c
endif



ifeq ($(findstring java,$(GRADE)),java)
bytecode_backend.module_dep : jmercury/bytecode_backend.java
else
bytecode_backend.module_dep : bytecode_backend.c
endif

ifeq ($(findstring java,$(GRADE)),java)

ifeq (x,y)
# RULE module_dep_on_java
bytecode_backend.module_dep : jmercury/bytecode_backend.java
endif

else

ifeq (x,y)
# RULE module_dep_on_c
bytecode_backend.module_dep : bytecode_backend.c
endif

endif # conditional fragment



bytecode_backend.date bytecode_backend.date0 : bytecode_backend.m \
	builtin.int3 \
	private_builtin.int3

ifeq (x,y)
# RULE self_and_parent_date_deps
# source group names:
#   (unnamed)
#   long dep int3s
bytecode_backend.date bytecode_backend.date0 : \
		bytecode_backend.m \
	\
		builtin.int3 \
		private_builtin.int3
endif



bytecode_backend.date0 : bytecode_backend.m \
	builtin.int3 \
	private_builtin.int3

ifeq (x,y)
# RULE self_and_parent_date0_deps
# source group names:
#   (unnamed)
#   long dep int3s
bytecode_backend.date0 : \
		bytecode_backend.m \
	\
		builtin.int3 \
		private_builtin.int3
endif


bytecode_backend.int0 : bytecode_backend.date0
	@:
bytecode_backend.int : bytecode_backend.date
	@:
bytecode_backend.int2 : bytecode_backend.date
	@:
bytecode_backend.int3 : bytecode_backend.date3
	@:
bytecode_backend.opt : bytecode_backend.optdate
	@:
bytecode_backend.trans_opt : bytecode_backend.trans_opt_date
	@:

ifeq (x,y)
bytecode_backend.int0 : bytecode_backend.date0
	@:
endif

ifeq (x,y)
bytecode_backend.int : bytecode_backend.date
	@:
endif

ifeq (x,y)
bytecode_backend.int2 : bytecode_backend.date
	@:
endif

ifeq (x,y)
bytecode_backend.int3 : bytecode_backend.date3
	@:
endif

ifeq (x,y)
bytecode_backend.opt : bytecode_backend.optdate
	@:
endif

ifeq (x,y)
bytecode_backend.trans_opt : bytecode_backend.trans_opt_date
	@:
endif

