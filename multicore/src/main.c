/*
 * Copyright (c) 2022 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: LicenseRef-Nordic-5-Clause
 */

#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>

int main(void)
{
	printk("Hello world from %s\n", CONFIG_BOARD);
	printk("Hello world from %s\n", CONFIG_BOARD);
	printk("Hello world from %s\n", CONFIG_BOARD);
	int a = 1;

	return 0;
}
