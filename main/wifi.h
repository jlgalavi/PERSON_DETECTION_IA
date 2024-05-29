/**
 * @file wifi.h
 *
**/

#ifndef WIFI_H
#define WIFI_H

#ifdef __cplusplus
extern "C" {
#endif
#include <stdbool.h>

/* Prepares the wifi subsystem and connects to the AP */
void wifi_init(void);
/* Returns true if the we are connected to the AP */
bool wifi_is_connected(void);

#ifdef __cplusplus
}
#endif

#endif
/*** End of file ***/
