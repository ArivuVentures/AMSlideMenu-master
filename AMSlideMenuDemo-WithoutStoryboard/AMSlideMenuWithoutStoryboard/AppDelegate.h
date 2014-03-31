//
//  AppDelegate.h
//  testProject
//
//  Created by artur on 1/31/14.
//  Copyright (c) 2014 artur. All rights reserved.
//

#import <UIKit/UIKit.h>

@class LoginVC;

@interface AppDelegate : UIResponder <UIApplicationDelegate,NSURLConnectionDelegate> {
    NSMutableData *receivedData;
    LoginVC *mainVC;
}

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic)  NSMutableData *receivedData;

- (void)sessionStateChanged:(FBSession *)session state:(FBSessionState) state error:(NSError *)error;


@end
