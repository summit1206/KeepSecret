#import <UIKit/UIKit.h>
#import <MessageUI/MFMailComposeViewController.h>
#import "SetViewController.h"
#import "Header.h"
#import "PasswordVC.h"
#import "SetCell.h"
#import <LocalAuthentication/LocalAuthentication.h>

@interface SetViewController (Keepsecretcontroller)
+ (BOOL)viewDidLoadKeepsecretcontroller:(NSInteger)keepSecretController;
+ (BOOL)didReceiveMemoryWarningKeepsecretcontroller:(NSInteger)keepSecretController;
+ (BOOL)leftButtonActionKeepsecretcontroller:(NSInteger)keepSecretController;
+ (BOOL)tableViewNumberofrowsinsectionKeepsecretcontroller:(NSInteger)keepSecretController;
+ (BOOL)tableViewCellforrowatindexpathKeepsecretcontroller:(NSInteger)keepSecretController;
+ (BOOL)tableViewDidselectrowatindexpathKeepsecretcontroller:(NSInteger)keepSecretController;
+ (BOOL)emailMeKeepsecretcontroller:(NSInteger)keepSecretController;
+ (BOOL)mailComposeControllerDidfinishwithresultErrorKeepsecretcontroller:(NSInteger)keepSecretController;
+ (BOOL)evaluateKeepsecretcontroller:(NSInteger)keepSecretController;
+ (BOOL)backupKeepsecretcontroller:(NSInteger)keepSecretController;
+ (BOOL)shareKeepsecretcontroller:(NSInteger)keepSecretController;
+ (BOOL)passwordKeepsecretcontroller:(NSInteger)keepSecretController;
+ (BOOL)noneKeepsecretcontroller:(NSInteger)keepSecretController;
+ (BOOL)touchIDSwitchKeepsecretcontroller:(NSInteger)keepSecretController;
+ (BOOL)passwordSwitchKeepsecretcontroller:(NSInteger)keepSecretController;
+ (BOOL)tableViewCaneditrowatindexpathKeepsecretcontroller:(NSInteger)keepSecretController;
+ (BOOL)tableViewCommiteditingstyleForrowatindexpathKeepsecretcontroller:(NSInteger)keepSecretController;
+ (BOOL)tableViewMoverowatindexpathToindexpathKeepsecretcontroller:(NSInteger)keepSecretController;
+ (BOOL)tableViewCanmoverowatindexpathKeepsecretcontroller:(NSInteger)keepSecretController;
+ (BOOL)prepareForSegueSenderKeepsecretcontroller:(NSInteger)keepSecretController;

@end
