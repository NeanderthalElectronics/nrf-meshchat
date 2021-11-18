
/* auto-generated by gen_syscalls.py, don't edit */
#ifndef Z_INCLUDE_SYSCALLS_ESPI_SAF_H
#define Z_INCLUDE_SYSCALLS_ESPI_SAF_H


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

extern int z_impl_espi_saf_config(const struct device * dev, const struct espi_saf_cfg * cfg);
static inline int espi_saf_config(const struct device * dev, const struct espi_saf_cfg * cfg)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke2(*(uintptr_t *)&dev, *(uintptr_t *)&cfg, K_SYSCALL_ESPI_SAF_CONFIG);
	}
#endif
	compiler_barrier();
	return z_impl_espi_saf_config(dev, cfg);
}


extern int z_impl_espi_saf_set_protection_regions(const struct device * dev, const struct espi_saf_protection * pr);
static inline int espi_saf_set_protection_regions(const struct device * dev, const struct espi_saf_protection * pr)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke2(*(uintptr_t *)&dev, *(uintptr_t *)&pr, K_SYSCALL_ESPI_SAF_SET_PROTECTION_REGIONS);
	}
#endif
	compiler_barrier();
	return z_impl_espi_saf_set_protection_regions(dev, pr);
}


extern int z_impl_espi_saf_activate(const struct device * dev);
static inline int espi_saf_activate(const struct device * dev)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke1(*(uintptr_t *)&dev, K_SYSCALL_ESPI_SAF_ACTIVATE);
	}
#endif
	compiler_barrier();
	return z_impl_espi_saf_activate(dev);
}


extern bool z_impl_espi_saf_get_channel_status(const struct device * dev);
static inline bool espi_saf_get_channel_status(const struct device * dev)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (bool) arch_syscall_invoke1(*(uintptr_t *)&dev, K_SYSCALL_ESPI_SAF_GET_CHANNEL_STATUS);
	}
#endif
	compiler_barrier();
	return z_impl_espi_saf_get_channel_status(dev);
}


extern int z_impl_espi_saf_flash_read(const struct device * dev, struct espi_saf_packet * pckt);
static inline int espi_saf_flash_read(const struct device * dev, struct espi_saf_packet * pckt)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke2(*(uintptr_t *)&dev, *(uintptr_t *)&pckt, K_SYSCALL_ESPI_SAF_FLASH_READ);
	}
#endif
	compiler_barrier();
	return z_impl_espi_saf_flash_read(dev, pckt);
}


extern int z_impl_espi_saf_flash_write(const struct device * dev, struct espi_saf_packet * pckt);
static inline int espi_saf_flash_write(const struct device * dev, struct espi_saf_packet * pckt)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke2(*(uintptr_t *)&dev, *(uintptr_t *)&pckt, K_SYSCALL_ESPI_SAF_FLASH_WRITE);
	}
#endif
	compiler_barrier();
	return z_impl_espi_saf_flash_write(dev, pckt);
}


extern int z_impl_espi_saf_flash_erase(const struct device * dev, struct espi_saf_packet * pckt);
static inline int espi_saf_flash_erase(const struct device * dev, struct espi_saf_packet * pckt)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke2(*(uintptr_t *)&dev, *(uintptr_t *)&pckt, K_SYSCALL_ESPI_SAF_FLASH_ERASE);
	}
#endif
	compiler_barrier();
	return z_impl_espi_saf_flash_erase(dev, pckt);
}


#ifdef __cplusplus
}
#endif

#if __GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 6)
#pragma GCC diagnostic pop
#endif

#endif
#endif /* include guard */
