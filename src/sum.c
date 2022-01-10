#include <stdint.h>
#include "sum.h"

uint16_t sum(uint8_t *content, uint64_t len) {
	uint16_t checksum = 0;
	while(len-->0) {
		checksum = (checksum >> 1) + ((checksum & 1) << 15);
		checksum += *(content++);
	}
	return checksum;
}
