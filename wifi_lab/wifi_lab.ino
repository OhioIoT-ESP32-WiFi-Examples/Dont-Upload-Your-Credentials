
#include "wifi_tools.h"
#include "creds.h"


void setup() {
	Serial.begin(115200);
	Serial.println("\n\tawake...\n");

	wifi_tools.log_events();
	wifi_tools.begin(WIFI_SSID, WIFI_PASS);
}

void loop() {
	if (wifi_tools.is_connected) {
		// run the code that depends on the network
	} 
	wifi_tools.log_status();
}