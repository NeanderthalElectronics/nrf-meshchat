
/* auto-generated by gen_syscalls.py, don't edit */
#ifndef Z_INCLUDE_SYSCALLS_PECI_H
#define Z_INCLUDE_SYSCALLS_PECI_H


#ifndef _ASMLANGUAGE

#include <syscall_list.h>
#include <syscall.h>

#if __GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 6)
#pragma GCC diagnostic push
#endif

#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#if !defined(__XCC__)
#pragma GCC diagnostic ignored "-Warray-bounds"
#endif
#endif

#ifdef __cplusplus
extern "C" {
#endif

extern int z_impl_peci_config(const struct device * dev, uint32_t bitrate);
static inline int peci_config(const struct device * dev, uint32_t bitrate)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke2(*(uintptr_t *)&dev, *(uintptr_t *)&bitrate, K_SYSCALL_PECI_CONFIG);
	}
#endif
	compiler_barrier();
	return z_impl_peci_config(dev, bitrate);
}


extern int z_impl_peci_enable(const struct device * dev);
static inline int peci_enable(const struct device * dev)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke1(*(uintptr_t *)&dev, K_SYSCALL_PECI_ENABLE);
	}
#endif
	compiler_barrier();
	return z_impl_peci_enable(dev);
}


extern int z_impl_peci_disable(const struct device * dev);
static inline int peci_disable(const struct device * dev)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke1(*(uintptr_t *)&dev, K_SYSCALL_PECI_DISABLE);
	}
#endif
	compiler_barrier();
	return z_impl_peci_disable(dev);
}


extern int z_impl_peci_transfer(const struct device * dev, struct peci_msg * msg);
static inline int peci_transfer(const struct device * dev, struct peci_msg * msg)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke2(*(uintptr_t *)&dev, *(uintptr_t *)&msg, K_SYSCALL_PECI_TRANSFER);
	}
#endif
	compiler_barrier();
	return z_impl_peci_transfer(dev, msg);
}


#ifdef __cplusplus
}
#endif

#if __GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 6)
#pragma GCC diagnostic pop
#endif

#endif
#endif /* include guard */
