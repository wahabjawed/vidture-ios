//
//  docShow.h
//  vidture
//
//  Created by Zainu Corporation on 07/08/2014.
//  Copyright (c) 2014 Zainu Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FirstPopUp.h"
@interface docShow : UIViewController<UIScrollViewDelegate , UITextFieldDelegate>

@property (weak, nonatomic) IBOutlet UIButton *start_vidturing;
- (IBAction)vidture_action:(id)sender;

@property (weak, nonatomic) IBOutlet UIScrollView *scroll;

@end
