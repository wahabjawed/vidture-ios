//
//  ViewController.h
//  NMPopUpView
//
//  Created by Nikos Maounis on 9/12/13.
//  Copyright (c) 2013 Nikos Maounis. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PopUpViewController.h"
#import "secondPopUp.h"
#import <QuartzCore/QuartzCore.h>

@interface ViewController : UIViewController

+ (BOOL)myBool;
+ (void)setMyBool:(BOOL)value;
+ (void)getMyBool:(BOOL)value;

@property (weak, nonatomic) IBOutlet UIButton *showPopupBtn;
@property (strong, nonatomic) PopUpViewController *popViewController;
@property (strong, nonatomic) secondPopUp *secondPopUp;

@end
