/* CPU Family Names  */
#define NDS32_CPU n10
#define NDS32_LIST_CPU "D1088-FPU D1088-SPU N1068-FPU N1068-SPU N1068A-FPU N1068A-SPU N1337-FPU N1337-SPU D15F D15S N15F N15S"
#define NDS32_CORE "n10"
#define NDS32_ARCH v3s

/* Toolchain Target Names  */
#define NDS32_TARGET nds32le-elf
#define NDS32_ENDIAN little

/* Toolchain Target: nds32{be|le}-elf  */
#define NDS32_LIB_C_DEFAULT mculib_static
#define NDS32_LIB_CPP_DEFAULT mculib_static

/* Toolchain Option: -Os1, -Os2, -Os3  */
#define NDS32_SUPPORT_mOs 3

/* Toolchain Option: -Og  */
#define NDS32_SUPPORT_mOg 1

/* Toolchain Support CPU Type */
#define NDS32_SUPPORT_mcpu_TYPE 1

/* Toolchain Option: -mcmodel  */
#define NDS32_SUPPORT_CMODEL 1

/* Toolchain Support: LTO  */
#define NDS32_SUPPORT_LTO 1

/* LTO Option Support: Need to duplicate compiler options to Linker when LTO option was enabled. */
#define NDS32_SUPPORT_LTO_COMPILER_OPTIONS_TO_LINKER ["-g.*", "-f.*", "-m.*", "-O.*"]
