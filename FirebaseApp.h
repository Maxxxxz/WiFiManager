/**
 * FireBaseApp.h
 * 
 * 
 * @author Creator Maxxxxz (Michael Cooper)
 * @license MIT
 */

#include <Arduino.h>    //Include for serial output; later in development this can be removed
#ifndef FIREBASE_H
#define FIREBASE_H

/************************************
 * Device Authentication and Registration Process
 * 1. Device calls FirebaseAuthAttempt on successful WiFi connection; stores email and password and device name.
 *  a. If FirebaseAuthAttempt fails, returns false; should cause device to return to station mode.
 *  b. If FirebaseAuthAttempt succeeds, returns true; device continues into client mode;
 *     stores authToken.
 * 2. Device (or FirebaseAuthAttempt?) will call FirebaseRegisterDeviceAttempt
 *  a. If FirebaseRegisterDeviceAttempt fails, returns false; something bad went wrong,
 *     return to station mode with error stating something went wrong on firebase's end.
 *  b. If FirebaseRegisterDeviceAttempt succeeds, returns true; device successfully connected.



************************************/
// This class will store important connection details to the Firebase Database.
class FireBaseApp{
    public:
        FireBaseApp();
        bool FirebaseAuthAttempt(const char *email, const char* password);
        bool FirebaseRegisterDeviceAttempt(const char *name);
        void getname();
    private:
        char *authToken = "";
        char *email = "";
        char *password = "";
        char *name = "";
};

#endif