/**
 * Copyright (c) 2015-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import "ABI11_0_0RCTEventEmitter.h"

@interface ABI11_0_0RCTPushNotificationManager : ABI11_0_0RCTEventEmitter

+ (void)didRegisterUserNotificationSettings:(UIUserNotificationSettings *)notificationSettings;
+ (void)didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken;
+ (void)didReceiveRemoteNotification:(NSDictionary *)notification;
+ (void)didReceiveLocalNotification:(UILocalNotification *)notification;
+ (void)didFailToRegisterForRemoteNotificationsWithError:(NSError *)error;

@end