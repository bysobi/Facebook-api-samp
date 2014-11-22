//
//  ViewController.h
//  Logo
//
//  Created by Admin on 17.11.14.
//  Copyright (c) 2014 Petrenko Pavel. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <FacebookSDK/FacebookSDK.h>

@interface ViewController : UIViewController <FBLoginViewDelegate>

@property (weak, nonatomic) IBOutlet FBLoginView *loginView;

@end

