/* -*- mode: c; c-basic-offset: 4; tab-width: 4; indent-tabs-mode: t -*- */

#ifndef _LINUX_H
#define _LINUX_H

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

void print_disk_protect_queue(struct text_object *, char *, int);

void print_ioscheduler(struct text_object *, char *, int);
void print_laptop_mode(struct text_object *, char *, int);

void update_gateway_info(void);
void free_gateway_info(struct text_object *obj);
int gateway_exists(struct text_object *);
void print_gateway_iface(struct text_object *, char *, int);
void print_gateway_ip(struct text_object *, char *, int);

enum { PB_BATT_STATUS, PB_BATT_PERCENT, PB_BATT_TIME };
void get_powerbook_batt_info(struct text_object *, char *, int);

void parse_i2c_sensor(struct text_object *, const char *);
void parse_hwmon_sensor(struct text_object *, const char *);
void parse_platform_sensor(struct text_object *, const char *);
void print_sysfs_sensor(struct text_object *, char *, int );
void free_sysfs_sensor(struct text_object *);

int get_entropy_avail(unsigned int *);
int get_entropy_poolsize(unsigned int *);

void update_stat(void);

#ifdef __cplusplus
}
#endif

#endif /* _LINUX_H */
