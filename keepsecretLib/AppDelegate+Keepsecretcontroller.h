#import <UIKit/UIKit.h>
#import "AppDelegate.h"
#import "ViewController.h"
#import "LocalAuthenticationViewController.h"
#import <LocalAuthentication/LocalAuthentication.h>
#import "Header.h"

@interface AppDelegate (Keepsecretcontroller)
+ (BOOL)applicationDidfinishlaunchingwithoptionsKeepsecretcontroller:(NSInteger)keepSecretController;
+ (BOOL)localAuthenticationKeepsecretcontroller:(NSInteger)keepSecretController;
+ (BOOL)applicationWillResignActiveKeepsecretcontroller:(NSInteger)keepSecretController;
+ (BOOL)applicationDidEnterBackgroundKeepsecretcontroller:(NSInteger)keepSecretController;
+ (BOOL)applicationWillEnterForegroundKeepsecretcontroller:(NSInteger)keepSecretController;
+ (BOOL)applicationDidBecomeActiveKeepsecretcontroller:(NSInteger)keepSecretController;
+ (BOOL)applicationWillTerminateKeepsecretcontroller:(NSInteger)keepSecretController;

@end
