#define HAS_INIT_SECTION

#undef TARGET_OS_CPP_BUILTINS
#define TARGET_OS_CPP_BUILTINS()		\
    do {					\
	builtin_define ("__bitthunder__");		\
	builtin_define_with_value ("__btdk_version__", "btdk-0.6.1-dirty", 1);	\
	builtin_define ("__USE_INIT_FINI__");	\
	builtin_assert ("system=bitthunder");	\
	TARGET_BPABI_CPP_BUILTINS();    	\
    } while (0)
