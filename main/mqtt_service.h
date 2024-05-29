/**
 * mqtt-service.h 
*/

#ifndef MQTT_SERVICE_H
#define MQTT_SERVICE_H

#ifdef __cplusplus
extern "C" {
#endif

void mqtt_service_init(const char *uri);
void mqtt_service_publish(const char *topic, const char *data, int len, int qos, int retain);
// take care, it can return true, but the connection could be not ready
bool mqtt_service_is_connected(void);

#ifdef __cplusplus
}
#endif


#endif
/*** End of file ***/
