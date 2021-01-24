#include "FireBaseApp.h"

#include <string.h> // for strdup

// Should look into MQTT for sending/recieving info from firebase

FireBaseApp::FireBaseApp()
{
    
}

void FireBaseApp::getname()
{
    Serial.println("Get Name Called.");
}

bool FireBaseApp::FirebaseAuthAttempt(const char *email, const char *password)
{
    this->email = strdup(email);
    this->password = strdup(password);
    return true;
}

bool FireBaseApp::FirebaseRegisterDeviceAttempt(const char *name)
{
    this->name = strdup(name);
    return true;
}
